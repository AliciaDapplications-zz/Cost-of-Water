//
//  main.cpp
//  Cost of Water
//
//  Created by Alicia Dale on 2/25/16.
//  Copyright © 2016 Alicia Dale. All rights reserved.
//  THIS PROGRAM WILL CALCULATE COST OF WATER BY GALLON PRICE FOR CONSUMERS OF ALLENTOwN WATER DEPARTMENT.
//  CHAPTER 5, QUESTION # 13 B.


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    
    
    cout << "***THIS PROGRAM WILL TELL YOU HOW MUCH YOUR WATER BILL IS! HOW EXCITING!***" << endl;
    //DECLARE VARIABLES TO BE USED
    int curRead = 0;
    int prevRead = 0;
    int galUsed = 0;
    double amountOwed = 0.0;
    double minimumOwed = 0.0;
    
    //Prompt user to enter both readings
    cout << "Please enter current reading: " ;
    cin >> curRead;
    cout << "Please enter previous reading: ";
    cin >> prevRead;
    
    //Calculate # of gallons used
    galUsed = curRead - prevRead;
    amountOwed = galUsed * 7.0/1000;
    
    if (amountOwed >= 16.67)
    {
        cout<< "Total amount owed: "<< fixed << amountOwed << setprecision(2) << endl;
        
    }
    else
    {
        minimumOwed = 16.67;
        cout<< "Minimum amount owed for using services: "<< fixed << minimumOwed << setprecision(2)<< endl;
    }
    cout <<"Gallons used: " << galUsed << endl;
    //end if
    
    return 0;
}
