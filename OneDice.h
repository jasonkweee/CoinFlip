#ifndef OneDice_H_
#define OneDice_H_

#include<cstdlib>
#include<iostream>
#include<cassert>
#include "Thrown.h"
using namespace std;

#include <stdio.h>
class OneDice: public Thrown{
private:
    int OneDiceThrown;
public:
	OneDice();
    void throwOneDice();
    virtual int giveOneThrownResult();
	virtual ~OneDice();

};

#endif
