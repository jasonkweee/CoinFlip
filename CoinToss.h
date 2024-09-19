#ifndef CoinToss_H_
#define CoinToss_H_

#include<cstdlib>
#include<iostream>
#include "Thrown.h"
#include<cassert>
#include<stdio.h>
using namespace std;


class CoinToss:public Thrown{
private:
    int coinThrown;
public:
	CoinToss();
    void throwOneCoin();
    int giveOneCoinThrownResult();
	virtual ~CoinToss();
};

#endif

