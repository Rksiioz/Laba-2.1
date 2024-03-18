#include "IntPower.h"

IntPower::IntPower() : first(0), second(0) {}

IntPower::IntPower(double first, int second) : first(first), second(second) {}

IntPower::IntPower(const IntPower& other) : first(other.first), second(other.second) {}

IntPower& IntPower::operator=(const IntPower& other) {
    if (this != &other) {
        first = other.first;
        second = other.second;
    }
    return *this;
}

IntPower& IntPower::operator++() {
    ++first;
    return *this;
}

IntPower IntPower::operator++(int) {
    IntPower temp(*this);
    ++first;
    return temp;
}

IntPower& IntPower::operator--() {
    --second;
    return *this;
}

IntPower IntPower::operator--(int) {
    IntPower temp(*this);
    --second;
    return temp;
}

string IntPower::toString() const {
    string result;

    result += "First: " + to_string(this->first) + '\n';
    result += "Second: " + to_string(this->second) + '\n';
    result += "Numeric: " + to_string(this->Power()) + '\n';

    return result;
}

void IntPower::Init(double first, int second) {
    setFirst(first);
    setSecond(second);
}

void IntPower::Read() {
    double first;
    int second;

    cout << "First: "; cin >> first;
    cout << endl;
    cout << "Second: "; cin >> second;

    Init(first, second);
}

void IntPower::Display() const {
    cout << this->toString() << endl;
}

double IntPower::Power() const {
    return pow(first, second);
}

double IntPower::getFirst() const {
    return first;
}

int IntPower::getSecond() const {
    return second;
}

void IntPower::setFirst(double first) {
    IntPower::first = first;
}

void IntPower::setSecond(int second) {
    IntPower::second = second;
}

IntPower::operator string() const {
    return toString();
}