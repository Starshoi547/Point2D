#include "Point2D.h"

Point2D::Point2D() {
	x = 0;
	y = 0;
};

Point2D::Point2D(int x, int y) {
	this->x = x;
	this->y = y;
};




int Point2D::getX() const {
	return x;
};
int Point2D::getY() const {
	return y;
};
void Point2D::setX(int x) {
	this->x = x;
};
void Point2D::setY(int y) {
	this->y = y;
};




//Point2D Point2D::summation(Paint2D point) const {
//	int tx = x + point.x;
//	int ty = y + point.y;
//	Point2D  pointResult = Point2D(tx, ty);
//	return pointResult;
//}

Point2D Point2D::operator +(Point2D point) const {
	int tx = x + point.x;
	int ty = y + point.y;
	Point2D  pointResult = Point2D(tx, ty);
	return pointResult;
}

Point2D Point2D::operator -(Point2D point) const {
	int tx = x - point.x;
	int ty = y - point.y;
	Point2D  pointResult = Point2D(tx, ty);
	return pointResult;
}

Point2D Point2D::operator *(Point2D point) const {
	int tx = x * point.x;
	int ty = y * point.y;
	Point2D  pointResult = Point2D(tx, ty);
	return pointResult;
};

Point2D Point2D::operator /(Point2D point) const {
	int tx = x / point.x;
	int ty = y / point.y;
	Point2D  pointResult = Point2D(tx, ty);
	return pointResult;
};


//void Point2D::operator ++() {
//	++x;
//	++y;
//};
//void Point2D::operator --() {
//	--x;
//	--y;
//};

Point2D Point2D::operator ++(int) {
	++x;
	++y;
	return *this;
}

Point2D Point2D::operator --(int) {
	--x;
	--y;
	return *this;
}



string Point2D::getInfo() {
	return "x = " + to_string(x)
		+ " y = " + to_string(y);
};