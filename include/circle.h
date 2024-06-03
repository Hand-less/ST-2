// Copyright 2024 Salaev Vladislav
#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_

class Circle {
private:
    double radius;
    double ference;
    double area;

    void updateFerence();
    void updateArea();
    void updateRadiusFromFerence();
    void updateRadiusFromArea();

public:
    Circle(double r);

    void setRadius(double r);
    void setFerence(double f);
    void setArea(double a);

    double getRadius() const;
    double getFerence() const;
    double getArea() const;
};


#endif  // INCLUDE_CIRCLE_H_
