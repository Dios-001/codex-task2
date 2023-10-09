#include<iostream>
int main(){
    
    float j;
    std::cout << "enter a floating point number: " << '\n';
    std::cin >> j;
    int i = static_cast<int>(j);
    std::cout << "the floating point number is: " << j << '\n';
     std::cout << "the integer value of floating point number is: " << i << '\n';


return 0;
}