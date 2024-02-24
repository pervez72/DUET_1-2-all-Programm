#include<bits/stdc++.h>
using namespace std;
int primefactor(int n)
{
    int i;
    for(i=2; n>1; i++)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
           
        }
    }
     return 0;
}

int main()
{
    int m;
    cout<<"Enter a positive number:";
    cin>>m;
    primefactor(m);
 return 0;
}
 