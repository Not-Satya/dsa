/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include <iostream>
using namespace std;

int main()
{
    int n=5;

    for (int i=1;i<=n;i++)//rows
    {
        for (int j=1;j<=(n-i+1);j++)//decreasing columns
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}