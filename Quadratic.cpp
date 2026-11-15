#include <iostream>
#include <cmath>
using namespace std;

void calculateRoots(double a, double b, double c)
{
    if(a == 0)
    {
        cout << "Not a quadratic equation";
        return;
    }

    double D = b*b - 4*a*c;

    if(D > 0)
    {
        double x1 = (-b + sqrt(D))/(2*a);
        double x2 = (-b - sqrt(D))/(2*a);

        cout << "Real and distinct roots" << endl;
        cout << "Root 1 = " << x1 << endl;
        cout << "Root 2 = " << x2 << endl;
    }
    else if(D == 0)
    {
        double x = -b/(2*a);

        cout << "Real and equal roots" << endl;
        cout << "Root = " << x;
    }
    else
    {
        double real = -b/(2*a);
        double imaginary = sqrt(-D)/(2*a);

        cout << "Complex roots" << endl;
        cout << "Root 1 = " << real << " + "
             << imaginary << "i" << endl;
        cout << "Root 2 = " << real << " - "
             << imaginary << "i";
    }
}

int main()
{
    double a, b, c;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    calculateRoots(a, b, c);

    return 0;
}
