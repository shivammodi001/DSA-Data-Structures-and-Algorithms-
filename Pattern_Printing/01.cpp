#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "row: ";
    cin >> row;
    cout << "col: ";
    cin >> col;
    // * * * * *
    // *       *
    // *       *
    // * * * * *

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  "; // Print two spaces for alignment
            }
        }
        cout << endl;
    }

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j <= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  "; // Print two spaces for alignment
            }
        }
        cout << endl;
    }

    // * * * * * * * * *
    // * * * *   * * * *
    // * * *       * * *
    // * *           * *
    // *               *

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j <= 6 - i || j >= 4 + i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  "; // Print two spaces for alignment
            }
        }
        cout << endl;
    }

    //       *
    //     * * *
    //   * * * * *
    // * * * * * * *

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j >= 4 - i + 1 && j <= 4 + i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // a
    // a b
    // a b c
    // a b c d
    // a b c d e
    for (int i = 0; i < row; i++)
    {

        char c = 'a';
        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
            c += 1;
        }
        cout << endl;
    }
}
