/*

*
* *
* * *
* * * *
* * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int n=5;

    for (int i=1;i<=n;i++)//for rows of pattern
    {
        for (int j=1;j<=i;j++)//for increasing columns of the pattern
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}