#define _CRT_SECURE_NO_WARNINGS
#include "Number.h"
#include <iostream>
using namespace std;
#include <stdlib.h>

Number::Number(const char* value, int base)
{
    nr = atoi(value);
    s = value;
}

Number::~Number()
{
}

bool Number::operator<(Number n)
{
    return this->nr < n.nr;
}

int Number::operator[](int index)
{
    return s[index] - '0';
}

void Number::Print()
{
    cout << "Nr = " << nr << endl;
}

Number operator+(Number n1, Number n2)
{
    Number res("0", 10);
    res.nr = n1.nr + n2.nr;
    res.s = new char[100];
    sprintf((char*)res.s, "%d", res.nr);
    return res;
}
