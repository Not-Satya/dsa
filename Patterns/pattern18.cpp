/*

E
D E 
C D E
B C D E
A B C D E

*/

#include <iostream>
using namespace std;

int main()
{
    int n=5;

    for (int i=1;i<=n;i++)//rows
    {
        char x = 'E';

        for (int j=i;j>=1;j--)//increasing columns
        {
            char p = (x-j)+1;//prints from the previous value

            cout<<p<<" ";
        }
        cout<<endl;
    }
    return 0;
}