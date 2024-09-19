#include "Thrown.h"
#include "CoinToss.h"
#include<iostream>

using namespace std;


CoinToss::CoinToss():Thrown(2) {
// constructor
}


void CoinToss::throwOneCoin() {
    coinThrown = giveAnumber();// calls the function in thrown
}


int CoinToss::giveOneCoinThrownResult()
{
    throwOneCoin();// calls throwonecoin
    return coinThrown; //returns coin Thrown into main
}

CoinToss::~CoinToss() {

}

