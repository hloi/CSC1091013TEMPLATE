
#include <iostream>
#include<string>
#include "PetTemplate.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

int main() {

    PetTemplate<Cat> cat;
    cat.getInfo();
    return 0;
}