#include <iostream>
using namespace std;

class Car {
    int speed;
    int consumption;
public:
    void SetSpeed(int _speed) {
        speed = _speed;
    }
    int GetSpeed() {
        return speed;
    }
    void SetConsumption(int _consumption) {
        consumption = _consumption;
    }
    int GetConsumption() {
        return consumption;
    }
    virtual void print() = 0;
};

class Dacie : public Car {
public:
    Dacie() {
        SetSpeed(60);
        SetConsumption(5);
    }
    void print() {
        cout << "Dacie viteza = " << GetSpeed() << ", consum = " << GetConsumption() << endl;
    }
};

class Mercedes : public Car {
public:
    Mercedes() {
        SetSpeed(130);
        SetConsumption(7);
    }
    void print() {
        cout << "Mercedes viteza = " << GetSpeed() << ", consum = " << GetConsumption() << endl;
    }
};

int main() {
    Dacie d;
    d.print();

    Car* c = &d;
    c->print();

    c = new Mercedes();
    c->print();

    Dacie w[100];
    Car* v[100];
    v[0] = new Dacie();
    v[1] = new Dacie();
    v[2] = new Mercedes();
    for (int i = 0; i < 3; ++i) {
        v[i]->print();
    }

    return 0;
}