/*

*                 *
* *             * *
* * *         * * *
* * * *     * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 *

*/

#include <iostream>
using namespace std;

int main()
{
    int n=5;

    //upper half of the pattern
    for (int i=1;i<=n;i++)//rows
    {
        //first half of the upper half
        for (int j=1;j<=n;j++)
        {
            if (j<=i)
            {
                cout<<"* ";
            }
            else 
            {
                cout<<"  ";
            }
        }

        //second half of the upper half
        for (int j=1;j<=n;j++)
        {
            if (j>(n-i))
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    //lower half of the pattern
    for (int i=1;i<=n;i++)//rows
    {
        //first half of lower half
        for (int j=1;j<n;j++)
        {
            if (j<=n-i+1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }

        //second half of lower half
        for (int j=1;j<=n;j++)
        {
            if (j<i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}