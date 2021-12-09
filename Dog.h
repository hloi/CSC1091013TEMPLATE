//
// Created by hloi on 12/9/2021.
//

#ifndef CSC1091013TEMPLATE_DOG_H
#define CSC1091013TEMPLATE_DOG_H


#ifndef DOGH
#define DOGH

#include <string>
#include "Pet.h"

class Dog : public Pet {
private:
    string dogBreed;

public:
    void SetBreed(string userBreed);

    string GetBreed();
};

#endif


#endif //CSC1091013TEMPLATE_DOG_H
