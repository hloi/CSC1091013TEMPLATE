//
// Created by hloi on 12/9/2021.
//

#ifndef CSC1091013TEMPLATE_PET_H
#define CSC1091013TEMPLATE_PET_H


#ifndef PETH
#define PETH

#include <string>
using namespace std;

class Pet {
protected:
    string petName;
    int petAge;

public:
    void SetName(string userName);

    string GetName();

    void SetAge(int userAge);

    int GetAge();

    void PrintInfo();
};

#endif


#endif //CSC1091013TEMPLATE_PET_H
