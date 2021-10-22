//
// Created by cheseremtitus on 10/22/21.
//
#include "library.h"
#include <cstdlib>
#include <iostream>
int generate_random_number()
{
    return rand()% 6 + 1;
}

void roll(Dice* one)
{
    // update the values of the two rolled dice by generating random numbers between 1 & 6

    // Currently updating Dice objects with two random numbers


    one->first = generate_random_number();
    one->second = generate_random_number();



}
void roll(Dice *arr, int* n) // First parameter takes in the Dice objects and the second takes in the scores array of players
{
//    std::cout<<*n<<std::endl;
// We'll need to save the updated scores of each of the select players to an array
    const unsigned NUMBER_OF_PLAYERS = *n;
    unsigned game_scores_per_player[NUMBER_OF_PLAYERS]={0}; // initialize an array that'll store respective player scores with zeroes
    //int *p;
    // initializing our pointer to point to our game_player_scores_tracker where index 0 stores cumulative score of respective players
    //p = game_scores_per_player;



    //generate random scores for our x players
    // Implement a nested for loop so that
    for(int i = 0; i < *n; i++)
    {
        if (*n == 1) // if we have a single player there's no need to identify players in our output
        {

            roll(arr);
            display(arr,*n);



        }
        else
        {
            std::cout<<"\nPlayer "<<i+1<<std::endl;
            roll(arr);
            display(arr,*n);

        }

//        std::cout<<" Final Score: "<<
    }


}

void display(Dice* arr, int n)
{
    std::cout<<"dice rolled ";
    std::cout<<arr->first;
    std::cout<<",";
    std::cout<<arr->second;
    std::cout<<"\n";

    unsigned first_roll = arr->first;
    unsigned second_roll =  arr->second;
    unsigned sum = first_roll + second_roll;
    if (sum == 7)
    {
        sum = 0;
        std::cout<<"Current score: "<<sum<<std::endl;
    }
    else
    {
        std::cout<<"Current score: "<<sum<<std::endl;
    }

}