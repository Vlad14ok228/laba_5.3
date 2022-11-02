#include <iostream>
#include <cmath>
using namespace std;
double f(const double x);
int main()
{
    double rp, rk, z, t{}, f{};
    int i;
    cout << "gp = "; cin >> rp;
    cout << "gk = "; cin >> rk;
    cout << "i = "; cin >> i;
    double dr = (rk - rp) / i;
    double r = rp;
    while (r <= rk)
    {
        z = f*(t*t) + 2*f*(2*t+1);
        cout << r << " " << z << endl;
        r += dr;
    }
    return 0;
}
double f(const double x)
{
    if (abs(x) >= 1 && x == 0)
        return sin(x + 1) / sin(x) + cos(x);
    else
    {
        double S = 0;

        int i = 0;
        double a = 1;
        S = ((-1) / (x * x)) * ((2 * i - 1) / (2 * i + 1));
        do
        {
            i++;
            S += a;
        } while (i < 8);
        return S;
    }
}
