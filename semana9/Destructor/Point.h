#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {
    private:
        int x, y;
    public:
        Point() {
            std::cout << "contructor" << std::endl;
        }
        ~Point() {
            std::cout << "destructor" << std::endl;
        }

};

#endif