/*

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1 

*/
#include <iostream>
using namespace std;

int main()
{
    int n=5;

    for (int i=1;i<=n;i++)//rows
    {
        int x=1;

        //first half of the pattern (left)
        for (int j=1;j<=n;j++)
        {
            if (j<=i)
            {
                cout<<x<<" ";//prints the same number of intigers as current row
                x++;
            }
            else 
            {
                cout<<"  ";//prints "  " for the rest untill j=n
            }
        }

        //second half of the pattern (right)
        for (int j=1;j<=n;j++)
        {
            if (j>=(n-i+1))
            {
                --x;
                cout<<x<<" ";//prints the same number of intigers as the current row but after printing "  " ,(n-current row) times
            }
            else 
            {
                cout<<"  ";//prints "  ", (n-current row) times
            }
        }
        cout<<endl;
    }
    return 0;
}