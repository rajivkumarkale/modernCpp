#include <iostream>
using namespace std;

class Point {
   public:
    Point() : Point(0, 0) {}
    Point(int x, int y) : x{x}, y{y} { count++; }

    int get_point_count() const { return count; }

   private:
    int x, y;
    static int count;
};

int Point::count = 0;

class Base {
    //    public:
    //     int base_c;

   private:
    int base_a, base_b;
};

class Derived : public Base {
   public:
    void output() { cout << base_a << endl; }
    int derived_c;
};

int main() {
    // Point p1, p2, p3;
    // cout << p1.get_point_count() << endl;

    Derived d;
    cout << sizeof(d) << endl;

    return 0;
}