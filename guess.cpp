#include <iostream>
#include <cstdlib>
#include <ctime>

int main ()
{

/*
  initialize random seed. Do this only once at the beginning of the main-function
*/ 
srand ( time(NULL) ); 
int randomNumber; // this variable will hold the random number
/* 
 generate secret number: between 1 and 10. Change the 10 to a different value to
 generate random numbers up to that maximum value 
*/ 
randomNumber = rand() % 10 + 1;


int guess;
int diff;

std::cout<<"Guess the computer's number between 1-10:"<<std::endl;
std::cin>>guess;

diff=abs(randomNumber-guess);

if (guess==randomNumber) {
    std::cout<<"You, guessed correctly! You win!"<<std::endl;
}

else {
    std::cout<<"You were off by "<<diff<<". Sorry, you lose."<<std::endl;
}


    return 0;
}
