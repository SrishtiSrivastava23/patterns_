#include <iostream>
using namespace std;
void Pyra(int n)
{
    for(int i=n;i>0;i--)
    {
        for(int k=i;k>0;k--)
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
}
/*

* * * *
* * *
* *
*

*/
