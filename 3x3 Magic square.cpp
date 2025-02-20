#include <iostream>
using namespace std;

int main()
{
	cout<<"\t\t\t\t\t\t\t Muhammad Taha "<<endl;
	cout<<"\t\t\t\t\t\t\t Roll No: 230444 "<<endl;
	cout<<"(3x3 Matrix) "<<endl;
    int magicsq[3][3];
    int i, j, x;
    int row = 0; 
    int col = 3 / 2; 
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
            magicsq[i][j] = 0;
    }
    magicsq[row][col] = 1;
    for ( x = 2; x <= 3 * 3; x++)
    {
        int r = row - 1, c = col - 1;
        if ( r < 0)
            r += 3;
        if ( c < 0)
            c += 3;
        if ( magicsq[r][c] > 0)
        {
            row++;
            if ( row >= 3)
                row -= 3;
        }
        else
        {
            row = r;
            col = c;
        }
        magicsq[row][col] = x;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << magicsq[i][j] << " ";
        cout << endl;
    }
    return 0;
}
