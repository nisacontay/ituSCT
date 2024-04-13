from random import randint

class Person:
    def __init__(self, name=None, surname=None):
        self.name = name
        self.surname = surname

class Passenger(Person):
    def __init__(self, name=None, surname=None, cash=0, ticket=False):
        super().__init__(name, surname)
        if cash < 0:
            cash = 0
            print("Passenger cash can’t be negative. It is set to 0.")
        self.cash = cash
        self.ticket = ticket

    def buyTicket(self, price=0):
        if price > self.cash:
            return False
        else:
            self.cash = self.cash - price
            self.ticket = True
            return True

class Astronaut(Person):
    def __init__(self, name=None, surname=None, numMission=0):
        super().__init__(name, surname)
        self.numMission = numMission

    def completeMission(self):
        self.numMission += 1

class Mission:
    numMissions = 0
    def __init__(self, name="AA-00", missionNumber=0, cost=0, faultProbability=0, completed=False, passengers=[], crew=[]):
        if name[0].isupper() and name[1].isupper and name[2] == "-" and name[3].isdigit() and name[4].isdigit:
            self.name = name
        else:
            self.name = "AA-00"
        self.missionNumber = missionNumber
        self.cost = cost
        if faultProbability <=100 and faultProbability >=0:
            self.faultProbability = faultProbability
        else:
            self.faultProbability = 0
        self.completed = completed
        self.passengers = passengers
        self.crew = crew
        Mission.addOne()
    @classmethod
    def addOne(cls):
        cls.numMissions += 1

    def addSpaceShipStaff(self, staff):
        typeStaff = type(staff)
        if typeStaff == Astronaut:
            self.crew.append(staff)
        elif typeStaff == Passenger:
            if staff.ticket:
                self.passengers.append(staff)
            else:
                print("Passengers need ticket!")

    def executeMission(self):
        num = randint(1,100)
        if self.faultProbability > num:
            self.completed = True
            for i in range(len(self.crew)):
                self.crew[i].completeMission()
                print(str(self.crew[i].name) + ", " + str(self.crew[i].numMission))
            return True
        else:
            return False

    def calculateProfit(self, ticketPrice):
        if self.completed:
            money = ticketPrice * len(self.passengers)
            profit = money - self.cost
            return profit
        else:
            return self.cost * (-1)

class Agency:
    def __init__(self, name=None, cash= 0, ticketPrice= 0, completedMissions=[], nextMissions=[]):
        self.name = name
        self.cash = cash
        self.ticketPrice = ticketPrice
        self.completedMissions = completedMissions
        self.nextMissions = nextMissions

    def addMission(self, mission):
        self.nextMissions.append(mission)

    def executeNextMission(self):
        nextMission = self.nextMissions[0]
        print(nextMission)
        if nextMission.executeMission():
            self.completedMissions.append(nextMission)
            self.nextMissions.pop(0)
            self.cash += nextMission.calculateProfit(self.ticketPrice)
        else:
            self.nextMissions.pop(0)
            self.nextMissions.append(nextMission)

    def agencyInfo(self):
        print("Agency Name: " + self.name)
        print("Agency Current Cash: " + str(self.cash))
        print("Agency Ticket Price: " + str(self.ticketPrice))
        print("Completed Missions")
        for i in range(len(self.completedMissions)):
            print(str(self.completedMissions[i].missionNumber) + " " +
                  str(self.completedMissions[i].name) + " " +
                  str(self.completedMissions[i].cost))
        print("Next Missions")
        for i in range(len(self.nextMissions)):
            print(str(self.nextMissions[i].missionNumber) + " " +
                  str(self.nextMissions[i].name) + " " +
                  str(self.nextMissions[i].cost))
