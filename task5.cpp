#include<iostream>
#include<string>
int main(){
std::string guess;
std::string password = "codex1234";
std::cout << "guess the password: " << std::endl;
while (guess!=password)
{
   getline(std::cin,guess);
   if(guess!=password){
   std::cout << "oops wrong one, try again" << std::endl;
   }
}
std::cout << "nice this was correct one!!!";
return 0;
}