/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int n=5;

    for (int i=1;i<=n;i++)//rows
    {
        //for first half of the pattern(left)
        for (int j=1;j<=n;j++)
        {
            if (j>=(n-i+1))
            {
                cout<<"* ";
            }
            else 
            {
                cout<<"  ";
            }
        }
        //for the second half of the pattern(right)
        for (int j=1;j<=i;j++)
        {
            if (j<i)
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}