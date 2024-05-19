#include <iostream>
#include <vector>
int main() {
    std::vector<std::vector<int> > x = {{3,4,5},{7,8}};
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            std::cout << x[i][j] << " ";
        } std::cout << std::endl;
    }
    std::cout << x[1].size() << std::endl;
    std::vector<std::vector<int> > y;
    y.resize(3,std::vector<int>(3,1));
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            std::cout << y[i][j] << " ";
        } std::cout << std::endl;
    }
    return 0;
}