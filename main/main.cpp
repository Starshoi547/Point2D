#include "Header.h"
#include "Point2D.h"



int main()
{
    Point2D p1(4, 5);
    Point2D p2(6, 9);
    Point2D p3;


    cout << p1.getInfo() << endl;
    cout << p2.getInfo() << endl;
    p3 = p1 + p2;
    cout << p3.getInfo() << endl;
    p3 = p1 - p2;
    cout << p3.getInfo() << endl;
    p3 = p1 * p2;
    cout << p3.getInfo() << endl;
    p3 = p1 / p2;
    cout << p3.getInfo() << endl;

    cout << p1.getInfo() << endl;

    p3 = p1++;
    cout << p1.getInfo() << endl;
    cout << p3.getInfo() << endl;



    return 0;
}


