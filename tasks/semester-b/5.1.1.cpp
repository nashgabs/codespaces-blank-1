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
    return (f(x+h)-f(x-h))/(2*h); // using the centred difference method
}						    	//shown in equation 6.

double dfn_5p(double h,double x)
{
    return (f(x-(2*h))-f(x-(2*h))-8*(f(x-h))+8*(f(x+h)))/(12*h);
}

int main()
{
    cout << setprecision(20);
    double h=1;
    double x=1.2;
    double diff;
    // Calculate the percentage of difference
    cout << "h: " << h << "\n";
    cout << "Percentage of 5-point derivative away from  f':\t" << 100*(dfn_5p(h,x)- dfana(x))/dfana(x) << "\n";
    //cout << "Forward slop:\t\t" << dfn_for(h,x) << "\n";
    //cout << "Backward slope:\t\t" << dfn_bac(h,x) << "\n";
    cout << "3-point slope:\t\t" << dfn_cen(h,x) << "\n";
    cout << "5-point slope:\t\t" << dfn_5p(h,x) << "\n";

    cout << "cos(x):\t" << dfana(x) << "\n\n";

    int i = 0;
    for(i=0;i<8;i++)
    {
        h/=2;
        cout << "h: " << h << "\n";
        cout << "Percentage of 5-point derivative away from f':\t" << 100*(dfn_5p(h,x)- dfana(x))/dfana(x) << "\n";
        // cout << "Forward difference:\t\t" << dfn_for(h,x) << "\n";
        // cout << "Backward difference:\t\t" << dfn_bac(h,x) << "\n";
        cout << "3-point slope:\t\t" << dfn_cen(h,x) << "\n";
        cout << "5-point slope:\t\t" << dfn_5p(h,x) << "\n";
        cout << "cos(x):\t" << dfana(x) << "\n\n";
    }
    return 0;
}