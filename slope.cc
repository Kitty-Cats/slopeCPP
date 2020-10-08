#include <iostream>
#include <string>

const std::string defaultUnit = "*";
void slope(int size, std::string unit){
    int row;
    int width;
    for(row=0;row<size;row++){
        for(width=-1;width<row;width++){        
            std::cout << unit;
        }
        std::cout << std::endl;
    }
}
int main(){
    std::string unit,size;
    std::cout << "Enter a character to use:" << std::endl;
    std::cin >> unit;
    std::cout << "Choose the size of the slope:" << std::endl;
    std::cin >> size;
    std::cout << std::endl;
    int sizeInt = std::stoi(size);
    slope(sizeInt,unit);
}