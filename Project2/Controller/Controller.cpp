//
//  Controller.cpp
//  Project2
//
//  Created by Kunz, Geran on 1/27/17.
//  Copyright © 2017 Kunz, Geran. All rights reserved.
//

#include "Controller.hpp"
#include <iostream>
#include "../Model/Timer.hpp"

using namespace std;

void Controller :: start()
{
    Timer sillyTime;
    sillyTime.startTimer();
    cout << "you are cool due"<<endl;
    int myNumber = 23445;
    int * numberPointer = &myNumber;
    cout << myNumber<<endl;
    tryNumbers(myNumber);
    cout << "Here is my number again " << myNumber << endl;
    myNumber = changeNumber();
    cout <<"changed? "<< myNumber << endl;
    changeNumberWithPointer(numberPointer);
    cout <<"changed? "<< myNumber << endl;
    sillyTime.stopTimer();
    sillyTime.displayTimerInformation();
}
void Controller :: tryNumbers(int sent)
{
    sent = sent +20;
    cout << sent;
}
int Controller::changeNumber()
{
    return 25;
}
void Controller::changeNumberWithPointer(int * pointer)
{
    *pointer += 5000;
}
