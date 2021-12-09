//
// Created by hloi on 12/9/2021.
//

#ifndef CSC1091013TEMPLATE_PETTEMPLATE_H
#define CSC1091013TEMPLATE_PETTEMPLATE_H

#include <iostream>

using namespace std;
template<typename T1>
class PetTemplate {
private:
    string name, breed;
    int age;
public:
    void getInfo() {
        getline(cin, name);
        cin >> age;
        cin.ignore();
        getline(cin, breed);
        T1 myPet;
        myPet.SetName(name);
        myPet.SetAge(age);
        myPet.SetBreed(breed);
        myPet.PrintInfo();

    }
};


#endif //CSC1091013TEMPLATE_PETTEMPLATE_H


