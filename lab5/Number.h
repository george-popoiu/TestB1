#pragma once

class Number
{
    // add data members
    int nr;
    const char* s;

public:
    Number(const char* value, int base); // where base is between 2 and 16
    ~Number();

    // add operators and copy/move constructor
    
    bool operator< (Number n);
    int operator[] (int index);

    //void SwitchBase(int newBase);
    void Print();
    //int  GetDigitsCount(); // returns the number of digits for the current number
    //int  GetBase(); // returns the current base

    friend Number operator+(Number n1, Number n2);
};

Number operator+(Number n1, Number n2);