#include <iostream>
#include <iomanip>
#include "Square.h"
using namespace std;

int main()
{   
    int a, b;
    cout << "Welcome to Lab 11" << endl;
    cout << setw(20) << setfill ('-') << "" << endl;
    cout << "Enter the first length: ";
    cin >> a;
    Square s1(a);
    cout << "Enter the second length: ";
    cin >> b;
    Square s2(b);
    cout << "\nArea of the first length: " << s1.getArea() << endl;
    cout << "Area of the second length: " << s2.getArea() << endl;
    Square r;
    r = s1 + s2;
    cout << "Sum of the lengths: ";
    r.Print();
    cout << endl << "Average of the lengths: ";
    r = s1 * s2;
    r.Print();
    

    return 0;
}
