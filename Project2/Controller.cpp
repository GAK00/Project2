//
//  Controller.cpp
//  Project2
//
//  Created by Kunz, Geran on 1/27/17.
//  Copyright © 2017 Kunz, Geran. All rights reserved.
//

#include "Controller.hpp"
#include <iostream>

using namespace std;

void Controller :: start()
{
    cout << "you are cool due"<<endl;
    tryNumbers(10);
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
