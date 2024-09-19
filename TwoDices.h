#ifndef TwoDices_H_
#define TwoDices_H_

#include<cstdlib>
#include<iostream>
#include "OneDice.h"
#include<cassert>
using namespace std;


class TwoDices:public OneDice{
private:
    int secondThrown;
    int firstThrown;

public:
	TwoDices();
	void throwOneDice();
    void throwTwoDices();
    int giveFirstThrownResult();
    int giveSecondThrownResult();
	virtual ~TwoDices();

};

#endif
