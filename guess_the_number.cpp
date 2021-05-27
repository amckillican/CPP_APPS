// include libraries
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void play_game()
{
    // variables
    int guess_count = 0;

    // generate random number
    int random = rand() % 10;

    // making user guess random number
    cout << "Guess a number: ";

    // check if the user gets the number
    while(true)
    {
        int guess;
        cin >> guess;

        if(guess == random)
        {
            guess_count++;
            cout << "You got it! Number of guesses: " << guess_count << endl;
            break;
        }
        else if (guess < random)
        {
            cout << "Too low, try again: ";
            guess_count++;
        }
        else
        {
            cout << "Too high, try again: ";
            guess_count++;
        }
    }
}

int main()
{
    // seed new random numbers based off computer time
    srand(time(NULL));
    
    // variables
    int choice;
    
    // main game menu
    do
    {
        // user decides what to do
        cout << endl << "0. Quit" << endl << "1. Play Game" << endl;
        cin >> choice;
        
        // start game or quit
        switch(choice)
        {
            case 0:
                cout << endl << "Have a nice day!" << endl << endl;
                return 0;
            case 1:
                play_game();
                break;
        }
    } 
    while (choice != 0);
    

    

}