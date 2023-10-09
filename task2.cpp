#include<iostream>
#include<math.h>
int main(){
    int j;
    const float pi = 3.14;
    std::cout << "enter the radius of the circle: " << '\n';
    std::cin >> j;
    float area = pi*(pow(j,2));
    std::cout << "the area of the circle is: " << area << '\n';
}