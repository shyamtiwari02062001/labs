#include <iostream>  
  using namespace std;
  class Shape {  
  protected:  
    double x, y,z;  
  public:  
    void set_dim(double i, double j=0,double k=0) {  
      x = i;  
      y = j;  
      z=k;
    }  
    virtual void show_cube(void) {  
      cout << "No cube computation defined ";  
      cout << "for this class.\n";  
    }  
  } ;  
  class square : public Shape {  
    public:  
      void show_cube(void) {  
        cout << "Square with dimensions ";  
        cout << x << "x" << y<<"x"<<z;  
        cout << " has an cube of ";  
        cout << x *  y *z<< ".\n";  
       }  
  };  
       
  class circle : public Shape {  
    public:  
      void show_cube(void) {  
        cout << "Circle with radius ";  
        cout << x;  
        cout << " has an cube of ";  
        cout <<1.3* 3.14 * x * x*x<<endl;  
      }  
  } ;  
       
  int main()  
  {  
    Shape *p;  
    square s;  
    circle c;  
       
    p = &s;  
    p->set_dim(10.0, 10.0,10.0);  
    p->show_cube();  
       
    p = &c;  
    p->set_dim(9.0);  
    p->show_cube();  
       
    return 0;  
  }