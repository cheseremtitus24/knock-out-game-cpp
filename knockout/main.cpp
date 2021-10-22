#include <iostream>
#include "library.h"
int main() {
    srand(time(NULL));
    const unsigned CAPACITY = 50; // We can have up to 50 players playing our game
    Dice game[CAPACITY];
    int rounds;
    int players;
    std::cout << "Welcome to the Knock-out game." << std::endl;
    std::cout << "How many rounds of rolling would you like to have? \t" ;
    std::cin>>rounds;

    std::cout << "How many players would you like to include ? \t" ;
    std::cin>>players;

    //TODO: call the roll function with 2 parameters to populate the game array
    // passing the address of the first game to our roll function

    // Disclaimer - You are not allowed to use subscriptor operator [] in function implementation
    // such as roll(&game[0]);
    /*
    void roll(Dice* one);
    void roll(Dice *arr, int* n);
    void display(Dice* arr, int n);
    */


    // Therefore, we make use of pointers just as follows

    // Let's declare a pointer that will point to the first element of our array (game)
    Dice *p;
    // initializing our pointer
    p = game;


    int *num_players = &players;


    // Performing x round rolls for each player
    for (int i =0; i<rounds; i++)
    {
        std::cout<<"\nRound "<<i+1<<std::endl;
        roll(p,num_players); // no need to dereference our pointer since we are passing its address to our roll function.
        // Note Since a single player is
        // in roll(p) we are only dealing with a single player if we were to deal with all 50 players we'd create a for loop and increment p by 1
        // each time we performed a roll.
    }



//    std::cout<<game[0].first<<std::endl;
//    std::cout<<game[0].second<<std::endl;
    //TODO: call the display function to show progress of the game
    return 0;
}
