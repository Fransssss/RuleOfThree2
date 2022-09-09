// Fransiskus Agapa

#ifndef RULEOFTHREE2_DOUBLEDATA_H
#define RULEOFTHREE2_DOUBLEDATA_H

#include "string"
using std::string;

class doubleData
{
private:
    double* _data;
public:
    doubleData();                                          // default
    void SetData(const double theData);                    // value setter
    string GetData() const;                                // value getter
    doubleData(const doubleData& theData);                 // copy constructor
    doubleData& operator=(const doubleData& theData);      // copy assignment
    ~doubleData();                                         // destructor
};

#endif //RULEOFTHREE2_DOUBLEDATA_H
