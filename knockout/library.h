//
// Created by cheseremtitus on 10/22/21.
//

#ifndef KNOCKOUT_LIBRARY_H
#define KNOCKOUT_LIBRARY_H

struct Dice{
    unsigned first, second;
};
//
void roll(Dice* one);
void roll(Dice *arr, int* n); // This function is passed
void display(Dice* arr, int n);
#endif //KNOCKOUT_LIBRARY_H
