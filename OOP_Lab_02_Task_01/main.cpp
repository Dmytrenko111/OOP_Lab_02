//9
#define _USE_MATH_DEFINES

#include<iostream>
#include<math.h>

using namespace std;

class Circle
{
private:
    double *radius;
    int *x;
    int *y;
    int *z;
public:
    Circle();
    Circle(double cradius, int x, int y, int z);
    ~Circle();
    
    void SetRadius(double cradius);
    double GetRadius();
    double Square();
    double Length();
    void SetX(int X);
    void SetY(int Y);
    void SetZ(int Z);
    int GetX();
    int GetY();
    int GetZ();
};

Circle::Circle()
{
    this->radius = new double;
    this->x = new int;
    this->y = new int;
    this->z = new int;
}

Circle::Circle(double cradius, int X, int Y, int Z)
{
    this->radius = new double;
    this->x = new int;
    this->y = new int;
    this->z = new int;
}


Circle::~Circle()
{
    delete radius;
    delete z;
    delete y;
    delete x;
}

void Circle::SetRadius(double cradius)
{
    if (cradius <= 0)
    {
        throw "false radius";
    }
    
    *radius = cradius;
    
}

double Circle::GetRadius()
{
    return *radius;
}

double Circle::Square() {
    return (*radius * *radius * M_PI);
}

double Circle::Length()
{
    return (2 * *radius * M_PI);
}

void Circle::SetX(int X)
{
    *x = X;
}

void Circle::SetY(int Y)
{
    *y = Y;
}

void Circle::SetZ(int Z)
{
    *z = Z;
}

int Circle::GetX()
{
    return *x;
}

int Circle::GetY()
{
    return *y;
}

int Circle::GetZ()
{
    return *z;
}


int main(void)
{
    int X, Y, Z;
    double cradius;
    Circle *one = new Circle;
    cout << "Enter coordinates of the circle center:" << endl;
    cout << "x = ";
    cin >> X;
    cout << "y = ";
    cin >> Y;
    cout << "z = ";
    cin >> Z;
    cout << "Enter radius:" << endl;
    cin >> cradius;
    one->SetX(X);
    one->SetY(Y);
    one->SetZ(Z);
    one->SetRadius(cradius);
    cout << "Coordinates of the centre:" << endl;
    cout << "(" << one->GetX() << ";" << one->GetY() << ";" << one->GetZ() << ")" << endl << endl;
    cout << "Radius:" << endl << one->GetRadius() << endl << endl;
    cout << "circle length:" << endl << one->Length() << endl << endl;
    cout << "circle square:" << endl << one->Square() << endl << endl;
    return 0;
}
