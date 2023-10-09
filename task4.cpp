#include<iostream>
int main(){
    int i;
    std::cout << "Enter your age: "  << '\n';
    std::cin >> i;
    if(i<=12){std::cout << "HAHA youre a baby, here lemme kick you";}
    else if(i>12 && i<20){std::cout << "youre just a snobby lil teenager";}
    else{
        std::cout << "youre an adult, adopt responisibilty, start by making your bed ~~Jordan Peterson (prolly)";
    }
return 0;
}