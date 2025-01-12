/*

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/

#include <iostream>
using namespace std;

int main()
{
    int n=5;

    for (int i=1;i<=n;i++)//rows
    {
        //first half of the pattern(left)
        for (int j=1;j<=n;j++)
        {
            if (j>(i-1))
            {
                cout<<"* ";
            }
            else 
            {
                cout<<"  ";
            }
        }
        //second half of the pattern (right)
        for (int j=1;j<=(n-i);j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}