#include "IntPower.h"
#include <iostream>

using namespace std;

int main() {
    IntPower i;

    i.Read();
    i.Power();
    i.Display();

    cout << "Testing increment and decrement operators:" << endl;
    IntPower j(2, 3);
    cout << "Initial value: " << j.toString() << endl;
    cout << "After pre-increment: " << (++j).toString() << endl;
    cout << "After post-increment: " << (j++).toString() << endl;
    cout << "After pre-decrement: " << (--j).toString() << endl;
    cout << "After post-decrement: " << (j--).toString() << endl;

    return 0;
}
