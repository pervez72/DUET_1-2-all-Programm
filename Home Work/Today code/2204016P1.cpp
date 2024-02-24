#include <iostream>
using namespace std;
int pattern1(int row){

    int col;
    for (int i=row; i>=1; i--)
    {
        for (col=1; col<=(2*i)-1; col++)
        {
            cout<<i; 
        }
        cout<<"\n";
    }
    return 0;
}

int pattran2(int row){
    int col;

    for (int i=row; i>=1; i--)
    {
        for ( col =(2*i)-1; col>=1; col--)
        {
            cout<<col;
        }
        cout<<"\n";
    }
    return 0;

}

int pattern3(int row){

    int col;
    for (int i=row; i>=1; i--)
    {
        for ( col =(2*i)-1; col>=1; col--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for (int i =2; i <=row; i++)
    {
        for (int col=1; col<=(2*i)-1; col++)
        {
           cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;

}


int main(){

    int row1,row2,row3;
    cin>>row1>>row2>>row3;
    cout<<"Programm1"<<endl;
    cout<<pattern1(row1);
    cout<<"Programm2"<<endl;
    cout<<pattran2(row2);
    cout<<"Program3"<<"\n";
    cout<<pattern3(row3);
}