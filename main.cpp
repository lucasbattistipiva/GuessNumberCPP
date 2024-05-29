#include <iostream>
#include <random>
#include <cmath> // to use the abs function
#include <ctime>

int genRandomNumber(){
        // inicialize the generator number
        std::srand(std::time(0));
        return std::rand() % 100 + 1;
    };

int main(int argc, char *argv[]){

    int random = genRandomNumber();
    int resp;
    int tolerate = 5;

    
    do
    {
    
    std::cout << "----------Guess Number----------" << std::endl;
    std::cout << "Enter number: " << std::endl;
    std::cin>> resp;
    if(resp == random){
    std::cout << "You win!" << std::endl;
    }
    // to decide if the resp is close
    else if (std::abs(resp - random) <= tolerate) 
    {
    std::cout << "It's warming up " << std::endl;
    }
    else
    {
    std::cout << "It's cold" << std::endl;
    }
    } while (resp != random);

    return EXIT_SUCCESS;
}