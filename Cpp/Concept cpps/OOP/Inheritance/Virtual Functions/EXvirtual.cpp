#include<iostream>
#include"Point.h"

class Shape
{
public:
	virtual std::ostream& print(std::ostream &out) = 0;

	virtual ~Shape() {}

	friend std::ostream& operator<<( std::ostream &out, Shape &shape );
};


std::ostream& operator<<( std::ostream &out, Shape &shape )
{
	return shape.print(out);
}


class Triangle : public Shape
{
private:
	
	Point A;
	Point B;
	Point C;

public:
	
	Triangle(const Point &p1, const Point &p2, const Point &p3)
		: A(p1), B(p2), C(p3)
	{
	}


	virtual std::ostream& print(std::ostream &out) 
	{
		out<<"Triangle("<<A<<","<<B<<","<<C<<").\n";
	
	return out;	
	}
};


class Circle : public Shape
{
private:

	Point C;
	int m_radius;

public:

	Circle(const Point &p1, int radius) : C(p1), m_radius(radius)
	{
	}

	
	virtual std::ostream& print(std::ostream &out)
	{
		out<<"Circle("<<C<<", "<<m_radius<<").\n";
	
	return out;	
	}
};


int main()
{
    Circle c(Point(1, 2, 3), 7);
    std::cout << c << '\n';
 
    Triangle t(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9));
    std::cout << t << '\n';
 
    return 0;
}
