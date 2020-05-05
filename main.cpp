//Jennifer Jimenez
//Area of a Square
#include <iostream>
#include <cmath>

using namespace std;

class Square
{
  private:
    double side;
  public:
    void setSide(double s);
    double getSide() const;
    double getArea() const;
};
  void Square::setSide(double s)
  {
     side = s;
  }

  double Square::getSide() const
  {
     return side;
  }

  double Square::getArea() const
  {
    return (side * side);
  }
int main() 
{
  double number;
  Square s1;
  Square s2;

  s1.setSide(5.0);
  s2.setSide(7.4);

  cout << "A square with a side of 5.0 will have an area of " << s1.getArea() << endl;
  
  cout << "\nA square with a side of 7.4 will have an area of " << s2.getArea() << endl;
}