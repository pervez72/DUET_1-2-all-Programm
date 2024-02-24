#include<bits/stdc++.h>
using namespace std;

int facto(int n){
    if(n==1||n==0){
        return 1;
    }
    else
        return (n*sacto(n-1));
}

int main(){
    int m;
    cin>>m;
    cout<<facto(m)<<endl;
    return 0;
}