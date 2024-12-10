#include <bits/stdc++.h>

using namespace std;

// if
// else if
// else

int main()
{

    int a = 30;
    int b = 10;

    int c = 10;
    int d = 40;

    if (a == b)
    {
        cout << "You are in if condition" << endl;
        if (c < d)
        {
            cout << "you are in nested if condition" << endl;
            if (b == c ) {
                cout << "boath are same " << endl;
            }
        }
        else if (c == d)
        {
            cout << "you are in nested elif condition" << endl;
        }
        else
        {
            cout << "Get out" << endl;
        }
    }
    else if (a < b)
    {
        cout << "You are ultra genius" << endl;
    }
    else
    {
        cout << "b is bigger than a" << endl;
    }
}