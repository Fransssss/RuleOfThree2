// Fransiskus Agapa

#include "doubleData.h"
#include <iostream>
#include "sstream"
#include "string"

using std::string;
using std::cout;
using std::endl;
using std::stringstream;

// default constr
doubleData::doubleData()
{
    cout << "= Default Constructor Called =" << endl;
    _data  = new double;           // allocate new memory
    *_data = 0;                    // assign default value
}

// set
void doubleData::SetData(const double theData)
{
    cout << "= Set Value Called =" << endl;
    _data = new double;           // allocate new memory
    *_data = theData;             // assign to a given data
}

// get
string doubleData::GetData() const
{
    cout << "= Get Value Called =" << endl << endl;
    stringstream userData;
    userData << "[ " << *_data << " ]";
    return userData.str();               // get value that's given to data member
}

// copy constructor
doubleData::doubleData(const doubleData &theData)
{
    cout << "= Copy Constructor Called =" << endl;
    _data = new double;           // allocate new memory
    *_data = *theData._data;      // assign value that's given to data member
}

// copy assignment
doubleData &doubleData::operator=(const doubleData &theData)
{
    cout << "= Copy Assignment Called =" << endl;
    if(this != &theData)          // no self assign
    {
        delete _data;             // delete previous value
        _data = new double;       // allocate new memory
        *_data = *theData._data;  // assign to a given value
    }
    return *this;                 // return pointer to new value
}

// destructor
doubleData::~doubleData()
{
    cout << "= Destructor Called =" << endl;
    delete _data;               // delete allocated data
}
