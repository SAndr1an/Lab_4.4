#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, y, R, xp, xk, dx;
    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(4) << "x" << "    |"
        << setw(6) << "y" << "     |" << endl;
    cout << "----------------------" << endl;
    x = xp;

    while (x <= xk)
    {
        if (x <= -7 - R) {
            y = R;
        }
        else if ((x > -7 - R) && (x <= -7 + R)) {
            y = R - (sqrt(R * R - (x + 7) * (x + 7)) / 2);
        }
        else if ((x > -7 + R) && (x <= -4)) {
            y = R;
        }
        else if ((x > -4) && (x <= 0)) {
            y = R + (((x + 4) + (-R)) / 4);
        }
        else if ((x > 0) && (x <= 3.14)) {
            y = sin(x);
        }
        else {
            y = x - 3.14;
        }
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "----------------------" << endl;
    system("pause");
    return 0;
}