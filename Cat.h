//
// Created by hloi on 12/9/2021.
//

#ifndef CSC1091013TEMPLATE_CAT_H
#define CSC1091013TEMPLATE_CAT_H


#include <string>
#include "Pet.h"

class Cat : public Pet {
private:
    string catBreed;

public:
    void SetBreed(string userBreed);

    string GetBreed();
};

#endif //CSC1091013TEMPLATE_CAT_H
