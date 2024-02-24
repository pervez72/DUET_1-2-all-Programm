#include <stdio.h>
int fiboserise(int x){ 
    if (x==1 || x==0)
        return x; //thats fibo serise 
    return fiboserise(x-1)+fiboserise(x - 2);
}

int fibossum(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum +=fiboserise(i);
    } // thats sum serise 
    return sum;
}

int main() {
    int n;
    cin>>n;
    cout<<fibossum(n);

    return 0;
}