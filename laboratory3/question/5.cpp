
#include<iostream>
using namespace std;
// class definition
class Circle
{
    public: 
        double radius;
         
        double  compute_area()
        {
            return 3.14*radius*radius;
        }
     
};
 
// main function
int main()
{
    Circle obj;
    obj.radius = 5.5;
    cout << "Radius is: " << obj.radius << "\n";
    cout << "Area is: " << obj.compute_area()<<endl;
    return 0;
}