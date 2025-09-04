#include <iostream>
using namespace std;

void Pyra(int n)
{
    for(int i=n;i>0;i--)
    {
        for(int k=n-i;k>0;k--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
int n=5;
Pyra(n);
return 0;

/*

*****
 ****
  ***
   **
    *     */
    
}
