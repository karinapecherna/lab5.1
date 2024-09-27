#include <iostream>
#include <cmath>
using namespace std;

double g(const double a, const double b); // прототип функції

int main()
{
    double s, t;
    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    double c = g(1, s) + (1 + pow(g(t, 1), 2)) * pow(g(t, 1), 2) / (1 + pow(g(s + t, 1), 3));

    cout << "c = " << c << endl;
    return 0;
}

double g(const double a, const double b) // визначення функції
{
    return ((a * a) + (a * b) + (b * b));
}


	