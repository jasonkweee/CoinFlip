// Student Name: Jason Nicholas Kusuma
// Student Number: 40431307
// Class: Object Oriented Programming (OOP)



#include<iostream>
#include <cstdio>
#include "Thrown.h"
#include "CoinToss.h"
#include "Thrown.cpp"
#include "CoinToss.cpp"
#include "OneDice.cpp"
#include "TwoDices.cpp"

using namespace std;

int main(){
    int StudNum, i=0, ListOfNums[8], FirstNum[8], LastNum[8], sum, TossNum; // Initializing variables


    cout << "Enter your Student Number (2 - 8 digits) "<< endl;
    cin >> StudNum;

    if (to_string(StudNum).length()< 2 || to_string(StudNum).length() > 8 ){
        exit(0);
    }//aborts the code if a number between 2-8 digits is not placed


    int tempMod = StudNum;
    for (i = 0; i <= (to_string(StudNum).length()-1); i++){
        ListOfNums[i] = tempMod % 10;
        tempMod = tempMod / 10;
    }// Placing all digits of the student number in the array

    int HalfStudNum = (to_string(StudNum).length()/2)-1;
    for (i = 0; i <= (HalfStudNum); i++){
        FirstNum[i]= ListOfNums[i];
        LastNum[i]= ListOfNums[(to_string(StudNum).length()-1)-i];
    }// split the student number into two

    for (i = 0; i <= (HalfStudNum); i++){
        int PbP[3];
        PbP[i] = FirstNum[i] * LastNum[HalfStudNum-i];
        sum = sum + PbP[i];
    }// calculating the sum of the point by point multiplications

    TossNum = (sum % 50) +20;
    // value of the number of times the dice/coin is tossedd

    int rows= TossNum;

    int* results= new int [rows];
    //creates a heap array

    int remainder = (StudNum % 3);
    //determining which game

    if (remainder == 0){
        //coin toss
        CoinToss coin;
        cout << "Coin Toss "<< endl;
        for ( i=0 ; i< rows; i++){
            coin.throwOneCoin();
            results[i] = coin.giveOneCoinThrownResult();
        }//Calls class Coin Toss and stores each value in an array

        i = 0;
        while ( i < rows){
            cout << results[i]<<endl;
            i++;
        } // Prints the array
    }


    else if (remainder == 1){
        OneDice onedice;
        cout << "1 dice "<< endl;

        for ( i=0 ; i< rows; i++){
            onedice.throwOneDice();
            results[i] = onedice.giveOneThrownResult();

        }//Calls class Oned Dice and stores each value in an array

        i = 0;
        while ( i < rows){
            cout<<results[i] << endl;
            i++;
        }// Prints the array
    }


    else{
        int **resultsTwoDices;
        resultsTwoDices = new int*[StudNum]; // creating a two dimensional heap array

        for (int i = 0; i < StudNum; ++i) {
          resultsTwoDices[i] = new int[2];
          // each i-th pointer is now pointing to dynamic array
        }
        TwoDices *twodice = new TwoDices;
        cout << "2 dice\nDice1\tDice2"<< endl;
        for ( i=0 ; i< TossNum; i++){
            resultsTwoDices[i][0]= twodice->giveFirstThrownResult();
            resultsTwoDices[i][1]= twodice->giveSecondThrownResult();
        }// calling Two Dice class for results and stores it in array

        i = 0;
        while ( i < TossNum){
            cout<< resultsTwoDices[i][0] << "\t"<<resultsTwoDices[i][1]<< endl;
            i++;

        }delete twodice; // prints array and deletes heap memory to prevent overflow


        for (i = 0; i < TossNum; i++) {
            delete[] resultsTwoDices[i]; // delete stored pointer in each row
        }
        delete[] resultsTwoDices; // delete outer array
    }

    delete [] results;

    return 0;
}
