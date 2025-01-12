/*

        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A

*/

#include <iostream>
using namespace std;

int main()
{
    int n=5;

    for (int i=1;i<=n;i++)//rows
    {
        char x='A';

        //for spaces of the first half of the pattern (left)
        for (int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }

        //for alphabets of the first half of the pattern (left)
        for (int j=0;j<i;j++)
        {
            cout<<x<<" ";
            ++x;
        }
        --x;

        //for the alphabets of the seconf half of the pattern (right)
        for (int j=1;j<i;j++)
        {
            --x;
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}