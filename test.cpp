 #include<iostream>
 using namespace std;
 int main(){
int col,row;
    cin>>row;
    for (int i=row; i>=0; i--)
    {
        for (col=0; col<=(2*i)-1; col++)
        {
            cout<<i; 
        }
        cout<<"\n";
    }
    return 0;
}

 