#pragma once

class Square {
   public:
    explicit Square(double side_param);
    ~Square();
    double surface() const;

   private:
    double side;
};