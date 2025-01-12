/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

#include <iostream>
using namespace std;

int main()
{
    int n=5;

    for (int i=1;i<=n;i++)//rows
    {
        for (int j=1;j<=i;j++)//columns
        {
            if ((i+j)%2!=0)//if the sum of the coordinates of the position is odd then print "0"
            {
                cout<<"0 ";
            }
            else           //if the sum of the coordinates of the position id even then pront "1"
            {
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
    return 0;
}