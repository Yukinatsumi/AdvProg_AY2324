#include <iostream>
#include <cstdlib>
#include <ctime>
#include "guessit.h"

using namespace std;
int generateRandomNumber() {
    return rand() % 100 + 1;
}
int getPlayerGuess() {
    int guess;
cout << endl << "Enter your guess (1..100): ";
cin >> guess;
return guess;
}
string getAnswer(int number, int randomNumber) {
   string answer;
   if(number > randomNumber) {
   answer  = "Your number is higher.";
   } else if(number < randomNumber){
   answer  = "Your number is lower.";
   } else {
   answer  = "Congratulation! You win.";
   }
return answer;

}


/***
    Args:
        answer (string): answer from computer after compare numbers
    Returns:
        result (bool) : player win or not
***/
bool checkSuccess(string answer) {
    if(answer = "Congratulation! You win.")
    return true;
}


/***
    Args:
        isContinued (char): player's choice
    Returns:
        result (bool) : continue playing or not
***/
bool checkContinuePlaying(char isContinued) {
    // TODO: return result after checking player continue playing or not
    bool result = false;

    return result;
}


/***
    Args:

    Returns:
        isContinues (char) : player's choice (continue playing or not)
***/
char getPlayerOpinion() {
    // TODO: Ask the player about continue playing and return the player's choice
    char isContinued;

    return isContinued;
}


void playGuessIt() {
    int randomNumber = generateRandomNumber();
    int number;
    string answer;

    do {
        number = getPlayerGuess();
        answer = getAnswer(number, randomNumber);
        cout << answer << endl;
    } while (!checkSuccess(answer));
}

int run() {
    srand(time(0));
    char isContinued;
    do {
        playGuessIt();
        isContinued = getPlayerOpinion();
    } while (checkContinuePlaying(isContinued));
    return 0;
}
