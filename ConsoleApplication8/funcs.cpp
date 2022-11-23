#include "Header.h"

int ktoraCwiartka(float x, float y) {
    if (x > 0 && y > 0)
        return 1;
    else if (x < 0 && y > 0)
        return 2;
    else if (x < 0 && y < 0)
        return 3;
    else if (x > 0 && y < 0)
        return 4;
    else
        return 0;
}
void show(int a) {
    cout << a << endl << endl;
}
void show() {
    cout << "Enter X, Y" << endl;
}
void run()
{
    float x, y;
    show();
    cin >> x >> y;
    system("cls");
    show(ktoraCwiartka(x, y));
}