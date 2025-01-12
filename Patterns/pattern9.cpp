/*

        *
      * * *
    * * * * *
  * * * * * * * 
* * * * * * * * * 
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

    //upper half of the pattern
    for (int i=1;i<=n;i++)//rows
    {
        //first half of the upper half (left)
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
        //second half of the upper half (right)
        for (int j=1;j<=i;j++)
        {
            if (j<=i-1)
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    //lower half of the pattern
    for(int i=1;i<=n;i++)
    {
        //first half of the lower half (left)
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

        //second hlaf of the lower half (left)
        for (int j=1;j<=(n-i);j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}