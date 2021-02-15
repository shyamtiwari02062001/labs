#include <iostream>
#include<cmath>
using namespace std;
struct point{
    float x1, y1, x2, y2, x3, y3;
    void coordinate(){
        cout << "Enter the coordinate of the two point :\n";
        cout << "Enter the coordinate of point A\n";
        cin >> x1 >> y1;
        cout << "Enter the coordinate of point B\n";
        cin >> x2 >> y2;
        cout << "Enter the coordinate of point C\n";
        cin >> x3 >> y3;
    }
};
typedef struct point point;
int main(){
    float x;
    point d;
    d.coordinate();
    cout << "The area of triangle is :";
    x = fabs((d.x1 * (d.y2 - d.y3) + d.x2 * (d.y3 - d.y1) + d.x3 * (d.y1 - d.y3)) / 2);
    cout << x << "\n";
}