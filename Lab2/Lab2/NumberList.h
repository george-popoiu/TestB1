#pragma once

class NumberList
{
    int numbers[100];
    int count;
public:
    void Init();          // count will be 0
    bool Add(int x);      // adds X to the numbers list and increase the data member count.
                          // if count is bigger or equal to 10, the function will return false

    void Remove(int index); // elimina elementul de la pozitia index
    void Insert(int index, int x); //adauge pe x in interiorul listei la pozitia index
    void InsertList(int index, int x[], int n); //adauga cele n elemente din vectorul x la pozitia index

    void Sort();          // will sort the numbers vector

    void Print();         // will print the current vector
};