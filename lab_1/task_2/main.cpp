#include "ReadPersonAge.h"
#include "ReadPersonName.h"
#include "ReadPersonHeight.h"
#include "ReadPersonWeight.h"
#include "ReadPersonSalary.h"
#include "ReadPersonData1.h"
#include "ReadPersonData2.h"
#include "WritePersonData.h"
#include <iostream>

using namespace std;

extern unsigned short age;
extern string name;
extern unsigned short height, weight;
extern double salary;

#ifndef DO_NOT_DEFINE_MAIN
int main() {
    /*unsigned short age;*/
   /* age = ReadPersonAge();
    name = ReadPersonName();
    height = ReadPersonHeight(height);
    weight = ReadPersonWeight(weight);
    salary = ReadPersonSalary();*/

    ReadPersonData(name, age, height, weight, salary);

    WritePersonData(name, age, height, weight, salary);

    return 0;
}
#endif