
//code for parametric constructor to find distance between x-coordinate and y-coordinate :
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend void distance(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display_point()
    {

        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};
void distance(Point point1, Point point2)
{
    int difference_x = pow((point2.x - point1.x), 2);
    int difference_y = pow((point2.y - point1.y), 2);
    int difference_xy = sqrt(difference_x + difference_y);
    cout << "The distance is " << difference_xy << endl;
}
int main()
{
    Point a1(1, 1);
    Point a2(1, 1);
    distance(a1, a2);

    Point b1(0, 1);
    Point b2(0, 6);
    distance(b1, b2);

    Point c1(1, 0);
    Point c2(70, 0);
    distance(c1, c2);

    return 0;
}
