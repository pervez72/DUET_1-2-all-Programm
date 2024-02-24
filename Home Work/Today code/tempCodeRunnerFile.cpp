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
