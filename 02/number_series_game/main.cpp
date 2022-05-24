#include <iostream>

using namespace std;

int main()
{
    int laskuri = 0;
    int luku = 0;

    cout << "How many numbers would you like to have? ";
    cin >> luku;

    while (laskuri < luku)
    {
        laskuri += 1;

        if (laskuri % 3 == 0 and laskuri % 7 == 0)
        {
            cout << "zip boing" << endl;
        }

        else if (laskuri % 3 == 0)
        {
            cout << "zip" << endl;
        }

        else if (laskuri % 7 == 0)
        {
            cout << "boing" << endl;
        }

        else
        {
            cout << laskuri << endl;
        }
    }
}
