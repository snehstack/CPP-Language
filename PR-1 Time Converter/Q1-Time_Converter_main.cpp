#include <iostream>
#include "Q1-Time_Converter.cpp"

int main()
{
    TimeConverter t1;

    t1.inputSeconds();
    t1.displayTime();

    t1.inputTime();
    t1.displayTotalSeconds();

    return 0;
}