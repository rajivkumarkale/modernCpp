#pragma once
class Point {
   public:
    // deleted constructor
    Point() = delete;
    
    // constructor
    Point(double x_param, double y_param);

    // copy construcotr
    Point(const Point& source_point);

    // move construcotr
    Point(Point&& source_point);

    // destructor
    ~Point();

    // getters
    double* get_x() const;
    double* get_y() const;

    // setters
    void set_x(double x_);
    void set_y(double y_);

    void print_info() const;

   private:
    double* x{};
    double* y{};

    // utility
    void invalidate();
};