#include <iostream>
#include <cmath>
using namespace std;
struct point
{
    float x1, y1, z1, x2, y2, z2;
    void coordinate()
    {
        cout << "Enter the coordinate of the two point :\n";
        cout << "Enter the coordinate of point A\n";
        cin >> x1 >> y1 >> z1;
        cout << "Enter the coordinate of point B\n";
        cin >> x2 >> y2 >> z2;
    }
};
typedef struct point point;
int main(){
    float x;
    point d;
    d.coordinate();
    cout << "The distance between two point of the plane is :";
    x = sqrt(fabs((d.x2 - d.x1) * (d.x2 - d.x1)) +  fabs((d.y2 - d.y1) * (d.y2 - d.y1)) + fabs((d.z2 - d.z1) * (d.z2 - d.z1)));
    cout << x << "\n";
}
