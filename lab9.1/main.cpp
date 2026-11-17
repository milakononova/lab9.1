
#include <iostream>
#include <iomanip>
#include <cmath>
#include "var.h"
#include "sum.h"

using namespace std;
using namespace nsVar;

int main()
{
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    if (x_p <= -1 || x_k >= 1 || x_p > x_k ||
        dx <= 0 || eps <= 0)
    {
        cout << "Invalid input!" << endl;
        return 1;
    }

    cout << fixed << setprecision(8);

    cout << setw(12) << "x"
        << setw(18) << "Arth(x)"
        << setw(18) << "Taylor sum"
        << setw(12) << "Terms" << endl;

    for (int i = 0; ; i++)
    {
        x = x_p + i * dx;

        if (x > x_k + 1e-12)
            break;

        nsSum::sum();

        cout << setw(12) << x
            << setw(18) << atanh(x)
            << setw(18) << s
            << setw(12) << n << endl;
    }

    return 0;
}
