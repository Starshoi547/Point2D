#include "Header.h"
class Point2D
{
private:
	int x;
	int y;



public:

	Point2D();
	Point2D(int x, int y);

	~Point2D();


	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);
	string getInfo();

	Point2D summation(Point2D point) const;

	Point2D operator -(Point2D point) const;

	Point2D operator +(Point2D point) const;

	Point2D operator *(Point2D point) const;

	Point2D operator /(Point2D point) const;


	//void operator ++();
	//void operator --();

	Point2D operator ++(int);
	Point2D operator --(int);
};



