/*

* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * * 
* * * *     * * * *
* * * * * * * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int n=5;

    //upper half of the pattern
    for (int i=1;i<=n;i++)
    {
        //first half of the upper half 
        for (int j=1;j<=n;j++)
        {
            if (j<=(n-i)+1)
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
            if (j<i)
            {
                cout<<"  ";
            }
            else 
            {
                cout<<"* ";
            }
        }

        //jump to next line
        cout<<endl;
    }

    //lower half of the pattern
    for (int i=1;i<=n;i++)
    {
        //first half of the lower half
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

        n=5;

        //second half of the lower half
        for (int j=1;j<=n;j++)
        {
            if (j<=n-i)
            {
                cout<<"  ";
            }
            else 
            {
                cout<<"* ";
            }
        }

        //jump to next line
        cout<<endl;
    }
    return 0;
}

