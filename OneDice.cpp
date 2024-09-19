#include "OneDice.h"
#include "Thrown.h"
#include <iostream>

using namespace std;

OneDice::OneDice():Thrown(6) {

}// constructor


void OneDice::throwOneDice() {
    OneDiceThrown = giveAnumber(); // calls function in throw
}

int OneDice::giveOneThrownResult()
{
    throwOneDice(); // calls throwOneDice Function
    return OneDiceThrown; // return OneDiceThrown Value into the main
}

OneDice::~OneDice() {

}

