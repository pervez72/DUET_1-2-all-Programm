#include<bits/stdc++.h>
using namespace std;
int primefactors(int x)
{
    int i;
    for(i=2;x>1;i++)
    {
        while(x%i==0)
        {
            cout<<i;
            x=x/i;
            return i;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter a positive number:";
    cin>>n;
    primefactors(n);
        return 0;
}
 