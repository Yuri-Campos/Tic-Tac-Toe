#include <iostream>
#include <string>

using namespace std;



int main()
{
    string board[3][3];

    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ )
        {

            board[i][j] = "P ";
        }
    }


    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ )
        {
            cout << board[i][j] << " |";
        }
        cout << endl;
        for (int k = 0; k < 3; k++) {
            cout << "___ ";
        }
        cout << endl;
    }


}
