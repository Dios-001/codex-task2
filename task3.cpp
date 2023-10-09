#include <iostream>
#include <iomanip>
#include <ctime>

int main() {
    
    std::time_t currentTime = std::time(nullptr);
    std::tm * timeInfo = std::localtime(&currentTime);

    
    std::cout << "Current Date and Time: ";
    std::cout << std::put_time(timeInfo, "%Y-%m-%d %H:%M:%S") << std::endl;
    std::cout << currentTime;


    return 0;
}

// sorry had to use gpt for this one
// though i do understand manipulators fetching current date and time was a challenging task
//ill try to understand this one