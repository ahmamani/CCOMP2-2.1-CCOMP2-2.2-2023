#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point<int> intPoint(2, 5);
    Point<float> ftPoint(2.6, 5.5);

    intPoint.print();
    ftPoint.print();

    return 0;
}