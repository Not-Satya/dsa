/*
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/

#include <iostream>
using namespace std;

int main()
{
    int n=5;
    
    //for rows of pattern
    for (int i=1;i<=n;i++)
    {
        //for columns of pattern
        for (int j=1;j<=n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
