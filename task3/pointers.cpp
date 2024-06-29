#include <iostream>
#include <memory>
/**
 * 29.06.2024
 * Nisa Çontay
 * ITU Solar Car Team
 */
// g++ pointers.cpp -o pointers -std=c++2b
/**
 * @brief A simple smart pointer class template.
 * 
 * @tparam T The type of the managed object.
 */
template <typename T>
class SmartPointer {
    T* ptr; ///< Raw pointer to the managed object.
    public:
    /**
     * @brief Construct a new SmartPointer object.
     * 
     * @param ptr Raw pointer to the object to manage. Defaults to nullptr.
     */
    explicit SmartPointer(T* ptr = nullptr) : ptr(ptr) {}

    /**
     * @brief Destroy the SmartPointer object.
     */
    ~SmartPointer() { delete ptr; }

    /**
     * @brief Dereference operator.
     * 
     * @return T& Reference to the managed object.
     */
    T& operator*() { return *ptr; }

    /**
     * @brief Arrow operator.
     * 
     * @return T* Raw pointer to the managed object.
     */
    T* operator->() { return ptr; } 
};

/**
 * @brief The main function demonstrates the usage of unique_ptr, shared_ptr, and weak_ptr.
 * 
 * @return int Exit status.
 */
int main() {
    // unique_ptr
    /**
     * @brief Create a unique_ptr to manage an int with initial value 45.
     */
    std::unique_ptr<int> uniquePtr = std::make_unique<int>(45); 
    std::cout << "Stored Address of initial uniquePtr: " << uniquePtr<< std::endl;
    std::cout << "Value of initial uniquePtr: " << *uniquePtr << std::endl;

    /**
     * @brief Get the raw pointer from uniquePtr.
     */
    int *ptr1 = uniquePtr.get(); 
    std::cout << "Value of initial ptr1: " << *ptr1<< " " << ptr1 << std::endl;

    /**
     * @brief Create another unique_ptr to manage an int with initial value 27.
     */
    std::unique_ptr<int> uniquePtr2 = std::make_unique<int>(27);
    std::cout << "Stored Address of initial uniquePtr2: " << uniquePtr2 << std::endl;
    std::cout << "Value of initial uniquePtr2: " << *uniquePtr2 << std::endl;
    
    /**
     * @brief Get the raw pointer from uniquePtr2.
     */
    int *ptr2 = uniquePtr2.get(); 
    std::cout << "Value of initial ptr2: " << *ptr2<< " " << ptr2 << std::endl;

    /**
     * @brief Transfer ownership from uniquePtr to uniquePtr2.
     */
    uniquePtr2 = std::move(uniquePtr);

    /**
     * @brief Check if uniquePtr is null after the move operation.
     */
    std::cout << "Stored Address of uniquePtr: " << uniquePtr << std::endl; // Should be null
    std::cout << "Stored Address of uniquePtr2: " << uniquePtr2 << std::endl;
    if (uniquePtr) {
        std::cout << "Value of uniquePtr: " << *uniquePtr << std::endl;
    } else {
        std::cout << "uniquePtr is null" << std::endl;
    }
    std::cout << "Value of uniquePtr2: " << *uniquePtr2 << std::endl;

    std::cout << "************************" << std::endl;

    // shared_ptr
    /**
     * @brief Create a shared_ptr to manage an int with initial value 19.
     */
    std::shared_ptr<int> sharedPtr1 = std::make_shared<int>(19);
    std::cout << "Initial use count: " << sharedPtr1.use_count() << std::endl; 
    std::cout << "Value of sharedPtr1: " << *sharedPtr1 << std::endl;

    /**
     * @brief Create another shared_ptr sharing ownership with sharedPtr1.
     */
    std::shared_ptr<int> sharedPtr2 = sharedPtr1;
    std::cout << "Use count after creating sharedPtr2: " << sharedPtr1.use_count() << std::endl; 
    std::cout << "Value of sharedPtr2: " << *sharedPtr1 << std::endl;

    /**
     * @brief Create a third shared_ptr sharing ownership with sharedPtr1.
     */
    std::shared_ptr<int> sharedPtr3 = sharedPtr2;
    std::cout << "Use count after creating sharedPtr3: " << sharedPtr1.use_count() << std::endl; 
    std::cout << "Value of sharedPtr3: " << *sharedPtr1 << std::endl;

    /**
     * @brief Reset sharedPtr2, reducing the use count.
     */
    sharedPtr2.reset();
    std::cout << "Use count after resetting sharedPtr2: " << sharedPtr1.use_count() << std::endl;

    /**
     * @brief Reset sharedPtr3, further reducing the use count.
     */
    sharedPtr3.reset();
    std::cout << "Use count after resetting sharedPtr3: " << sharedPtr1.use_count() << std::endl; 

    /**
     * @brief Create a new shared_ptr and then move the ownership from sharedPtr1.
     */
    std::shared_ptr<int> movedPtr = std::make_shared<int>(22);
    std::cout << "initial value of movedPtr: " << *movedPtr << std::endl;

    movedPtr = std::move(sharedPtr1);
    std::cout << "final value of movedPtr: " << *movedPtr << std::endl;

    /**
     * @brief Get the raw pointer from movedPtr.
     */
    int *ptr3 = movedPtr.get();
    std::cout << "Value of ptr3: " << *ptr3 << " " << ptr3 << std::endl;

    std::cout << "************************" << std::endl;

    //weakPtr
    /**
     * @brief Create a shared_ptr to manage an int with initial value 88.
     */
    std::shared_ptr<int> newSharedPtr = std::make_shared<int>(88);
    std::shared_ptr<int> newSharedPtr2 = newSharedPtr;
    std::cout << "Use count before creating weakPtr: " << newSharedPtr.use_count() << std::endl; 

    /**
     * @brief Create a weak_ptr from the shared_ptr.
     */
    std::weak_ptr<int> weakPtr = newSharedPtr;
    std::cout << "Use count after creating weakPtr: " << newSharedPtr.use_count() << std::endl; 

    /**
     * @brief Lock the weak_ptr to obtain a shared_ptr and print the managed value if it exists.
     */
    if (std::shared_ptr<int> lockedPtr = weakPtr.lock()) {
    std::cout << "Value of the managed object: " << *lockedPtr << std::endl;
    } else {
    std::cout << "The managed object has been destroyed." << std::endl;
    }

    /**
     * @brief Reset the shared_ptrs, which should destroy the managed object.
     */
    newSharedPtr.reset();
    newSharedPtr2.reset();

    /**
     * @brief Attempt to lock the weak_ptr again after the shared_ptrs have been reset.
     */
    if (std::shared_ptr<int> lockedPtr2 = weakPtr.lock()) {
    std::cout << "Value of the managed object: " << *lockedPtr2 << std::endl;
    } else {
    std::cout << "The managed object has been destroyed." << std::endl;
    }

}