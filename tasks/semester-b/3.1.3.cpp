#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double f(double x)
{
    return (sin(x));
}

double dfana(double x)
{
/* Analytical differential for comparison */
    return (cos(x));
}

double dfn_for(double h,double x) // forward
{
    return (f(x+h)-f(x))/h;
}

double dfn_bac(double h,double x) // backward
{
    return (f(x)-f(x-h))/h; // using the backward difference method
}							//shown in equation 5.

double dfn_cen(double h,double x)
{
    return (f(x+h)-f(x-h))/(2*h); // using the centered difference method
}						    	//shown in equation 6.

int main()
{
    cout << setprecision(10);
    double h=0.001;
    double x=1.2;
    double diff;
    // Calculate the percentage of difference
    cout << "h: " << h << "\n";
    cout << "Percentage difference between:\t" << 100*(dfn_cen(h,x)- dfana(x))/dfana(x) << "\n";
    cout << "Forward difference:\t\t" << dfn_for(h,x) << "\n";
    cout << "Backward difference:\t\t" << dfn_bac(h,x) << "\n";
    cout << "Centered difference:\t\t" << dfn_cen(h,x) << "\n";
    cout << "cos(x):\t" << dfana(x) << "\n\n";

    int i = 0;
    for(i=0;i<8;i++)
    {
        h/=2;
        cout << "h: " << h << "\n";
        cout << "Percentage difference between:\t" << 100*(dfn_cen(h,x)- dfana(x))/dfana(x) << "\n";
        cout << "Forward difference:\t\t" << dfn_for(h,x) << "\n";
        cout << "Backward difference:\t\t" << dfn_bac(h,x) << "\n";
        cout << "Centered difference:\t\t" << dfn_cen(h,x) << "\n";
        cout << "cos(x):\t" << dfana(x) << "\n\n";
    }
    return 0;
}