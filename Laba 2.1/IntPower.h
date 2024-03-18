#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class IntPower {
public:
    IntPower();
    IntPower(double first, int second);
    IntPower(const IntPower& other);


    IntPower& operator=(const IntPower& other);
    IntPower& operator++();
    IntPower operator++(int);
    IntPower& operator--();
    IntPower operator--(int);

    void setFirst(double first);
    void setSecond(int second);
    double getFirst() const;
    int getSecond() const;
    double Power() const;
    void Read();
    void Display() const;
    void Init(double a, int b);
    string toString() const;
    operator string() const;

private:
    double first;
    int second;
};


