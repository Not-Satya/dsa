/*

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* * 
*

*/

#include <iostream>
using namespace std;

int main()
{
    int n=5;

    //upper half of the pattern
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //lower half of the pattern
    for (int i=1;i<n;i++)
    {
        for (int j=1;j<=n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}