#include <iostream>

class Point {
   public:
    Point(std::initializer_list<double> list) {
        x = *(list.begin());
        y = *(list.begin() + 1);
    }

    void print_info() const {
        std::cout << "Point [ x: " << x << ", y: " << y << " ]" << std::endl;
    }

   private:
    double x;
    double y;
};

int main() {
    Point point1{12.5, 45.3};
    point1.print_info();

    return 0;
}