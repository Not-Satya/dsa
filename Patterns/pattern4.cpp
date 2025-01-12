/* 

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

#include <iostream>
using namespace std;

int main()
{
    int n=5;

    for (int i=1;i<=n;i++)//for rows
    {
        for (int j=1;j<=i;j++)//for columns
        {
            cout<<i<<" ";//prints the value of i for i times
        }
        cout<<endl;
    }
    return 0;
}