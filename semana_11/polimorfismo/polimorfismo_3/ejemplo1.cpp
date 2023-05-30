// virtual members
#include <iostream>
#include <vector>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b; }
    int area ()
      { return 0; }
};

class Rectangle: public Polygon {
  public:
    int area ()
      { return width * height; }
};

class Triangle: public Polygon {
  public:
    int area ()
      { return (width * height / 2); }
};

int main () {
    Rectangle rect;
    Triangle trgl;
    Polygon poly;
  
    vector<Polygon*> vec;
    vec.push_back(&rect);
    vec.push_back(&trgl);
    vec.push_back(&poly);

    for(Polygon *p: vec) {
        p->set_values (4,5);
    }

    for(Polygon *p: vec) {
        cout << p->area() << '\n';
    }

    vector<Polygon&> vec1;
    vec1.push_back(rect);
    vec1.push_back(trgl);
    vec1.push_back(poly);

    for(Polygon &p: vec1) {
        p.set_values (4,5);
    }

    for(Polygon &p: vec1) {
        cout << p.area() << '\n';
    }
    
    return 0;
}