// Fransiskus Agapa
// 9/8/22
// Practice make improvement - Have Fun !!!
// :)
//

// ===============
// user learn how rule of three works
// ===============

#include <iostream>
#include "doubleData.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << endl;

    // default constr
    cout << "1st class member" << endl;
    doubleData oneData;
    cout << oneData.GetData() << endl;

    // copy constructor
    cout << endl << "2nd class member" << endl;
    doubleData twoData = oneData;                     // copy constructor called
    cout << endl << twoData.GetData() << endl;
    double userInput;                                 // user-input double number
    cout << endl << "Input a number: ";
    cin >> userInput;
    cout << endl;

    // set and get value
    twoData.SetData(userInput);
    cout << twoData.GetData() << endl << endl;

    // copy assignment
    doubleData threeData;
    threeData = twoData;                             // copy assignment called
    cout << endl << threeData.GetData() << endl;
    cout << endl << "Input another number: ";
    cin >> userInput;
    cout << endl;

    // set and get
    threeData.SetData(userInput);
    cout << threeData.GetData() << endl << endl;

    return 0;
}
