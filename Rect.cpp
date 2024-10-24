#include "Rect.h"
#include <iostream>
using namespace std;

Rect::Rect()
{
    h = w = 0;
}

Rect::Rect(int height, int width)
{
    h = height;
    w = width;
}

void Rect::Input()
{
    cout << "height ";
    cin >> h;
    cout << "width ";
    cin >> w;
}

void Rect::Output()
{
    cout << "height " << h << " width " << w << endl;
}