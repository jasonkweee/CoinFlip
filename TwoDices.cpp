#include "Thrown.h"
#include "OneDice.h"
#include "TwoDices.h"
#include <iostream>

using namespace std;

TwoDices::TwoDices():OneDice() {

}//constructor

void TwoDices::throwOneDice() {
    firstThrown = giveOneThrownResult();
}//takes function in class OneDice

void TwoDices::throwTwoDices() {
    secondThrown = giveAnumber();
}//takes function in class throw


int TwoDices::giveFirstThrownResult(){
    throwOneDice();
    return firstThrown;
}// calls function to throwonedice

int TwoDices::giveSecondThrownResult()
{
    throwTwoDices();
    return secondThrown;
}//calls function throwtwodices

TwoDices::~TwoDices() {

}//deconstructor

