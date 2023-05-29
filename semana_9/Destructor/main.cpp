#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    /*Point *p = new Point;
    delete p;*/

    if(true) {
        Point p;
    }

    cout << "fuera del ambito de p" << endl;
    return 0;
}