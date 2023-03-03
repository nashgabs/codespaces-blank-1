#include <iostream> // includes cin and cout
#include <math.h>   // includes pow() and other mathematical fuctions
#include <iomanip>  // includes setw, setprecision and other manipulators
#include <fstream>  // allows file manipulation

using namespace std; // removes repeated use of std::cout and std::cin

double f(int x, char opt); // returns the result of function 1,2 or 3 selected by char opt

double df(int x, char opt); // returns the result of function derivative 1,2 or 3 selected
                            // by char opt

double dfn_5p(double x, char opt); // fourth-order taylor approximation over the 5 points
                                   // -2h, -h, 0, h, and 2h

int openfile(fstream &file, string name); // creates or opens output.csv and returns 0 for success and
                                          // 1 for fail
void writefile(fstream &file, double entry, bool newrow);

int main()
{
    double start;        // A
    double end;          // B
    int divisions = 150; // number of divisions
    double step;         // interval size
    int i = 0;           // counter
    char in;             // user input char

    cout << "This calculator finds the slope of a selected function in a given interval [A,B] and step value.\nSTART:\n\t>> ";
    cin >> start; // user enters A
    cout << "END:\n\t>> ";
    cin >> end;                                  // user enters B
    step = abs((end - start)) / (divisions - 1); // interval step size
                                                 // including point x = A this gives "divisions" number of steps
    cout << "STEP:\n\t>> " << step << endl;

    fstream file;                      // create filestream object
    if (openfile(file, "output") == 1) // open file named output.csv to write
    {
        exit(1); // exit if fail
    }

    cout << "Type 1, 2 or 3 to select a function." << endl;
    // unicode printed functions
    cout << "1)  f(x) = x\u2074 - \u2155x\u00B3 - 4x\u00B2 + 2x + 1"
         << endl;
    cout << "2)  f(x) = \u2158x\u2075 + 16x\u00B2 - 25"
         << endl;
    cout << "3)  f(x) = \u00B9\u2044\u2082\u2080x\u00B3 + x\u00B2 - 60x + 1\n\t>> ";
    cin >> in; // user selects function f1, f2 or f3

    if (in == '1' || in == '2' || in == '3') // if user selected a valid option
    {
        // table header
        cout << "\tx"
             << "\tf(x)"
             << "\t\tdf/dx"
             << "\t\t5-point df/dx"
             << "\t\tAbsolute difference"
             << endl;
        do
        {
            // write to file and display table
            cout << "\t";
            writefile(file, start + (i * step), false); // x position
            cout << "\t";
            writefile(file, f(start + (i * step), in), false); // f(x)
            cout << "\t\t" << df(start + (i * step), in);      // df/dx
            cout << "\t\t";
            writefile(file, dfn_5p(start + (i * step), in), false); // 5-point df/dx
            cout << "\t\t\t";
            writefile(file, abs(dfn_5p(start + (i * step), in) - df(start + (i * step), in)), true); // absolute difference
            i++;                                                                                     // increase counter by one
        } while (start + (i * step) <= end);                                                         // for the interval [1,5] step size 1, the loop will output
                                                                                                     // f(1)
                                                                                                     // f(2)
                                                                                                     // f(3)
                                                                                                     // f(4)
                                                                                                     // f(5)
    }
    else
    {
        cout << "Error: Invalid selection." << endl; // display error message
    }

    file.close(); // release filestream object
    return 0;
}

double f(int x, char opt) // returns the result of function 1,2 or 3 selected by char opt
{
    switch (opt)
    {
    case '1':
        return pow(x, 4) - (pow(x, 3) / 5) - (4 * pow(x, 2)) + (2 * x) + 1; // function 1
    case '2':
        return ((4 * pow(x, 5)) / 5) + (16 * pow(x, 2)) - 25; // function 2
    case '3':
        return (pow(x, 3) / 20) + pow(x, 2) - (60 * x) + 1; // function 3
    }
    return 0;
}

double df(int x, char opt) // returns the result of function derivative 1,2 or 3 selected by char opt
{
    switch (opt)
    {
    case '1':
        return (4 * pow(x, 3)) - (3 * pow(x, 2)) / 5 - (8 * x) + 2; // function derivative 1
    case '2':
        return (4 * pow(x, 4)) + (32 * x); // function derivative 2
    case '3':
        return (pow(x, 2) * 3) / 20 + (2 * x) - 60; // function derivative 3
    }
    return 0;
}

// fourth-order taylor approximation over the 5 points -2h, -h, 0, h, and 2h
double dfn_5p(double x, char opt)
{
    double h = 1;
    return (f(x - 2 * h, opt) - 8 * f(x - h, opt) + 8 * f(x + h, opt) - f(x + 2 * h, opt)) / (12 * h);
}

int openfile(fstream &file, string name)
{
    file.open(name + ".csv", ios::out); // open file as output with name output.csv
    if (!file)
    {
        cout << "Error: " << name << ".csv was not created."; // display error message
        return 1;                                             // fail
    }

    else
    {
        file << "x,f(x),f'(x),e(x)" << endl; // write headers
        return 0;
    }
    return 1; // fail
}

void writefile(fstream &file, double entry, bool newrow)
{
    file << entry << ","; // new column
    cout << entry;        // display entry

    if (newrow) // if newrow is passed True
    {
        file << endl; // new row
        cout << endl; // display new line
        return;
    }

    return;
}