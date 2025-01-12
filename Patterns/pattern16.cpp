/*

A
B B
C C C
D D D D
E E E E E

*/

#include <iostream>
using namespace std;

int main()
{
    int n=5;

    char x='A';

    for (int i=0;i<n;i++)//rows
    {
        for (int j=0;j<(i+1);j++)//increasing columns
        {
            cout<<x<<" ";//prints the alphabet for i times
        }
        ++x;//switches to next alphabet

        cout<<endl;
    }
    return 0;
}