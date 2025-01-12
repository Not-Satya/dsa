/*

A B C D E
A B C D
A B C
A B 
A

*/

#include <iostream>
using namespace std;

int main()
{
    int n=5;

    for (int i=0;i<n;i++)//rows
    {
        char x='A';

        for(int j=1;j<=n-i;j++)//decreasing columns
        {
            cout<<x<<" ";
            ++x;
        }
        cout<<endl;
    }
    return 0;
}