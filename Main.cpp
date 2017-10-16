#include "stackdic.cpp"
int main()
{
    stackdic s;
    int dec ;
    cout<<" Enter the number in decimal "<<endl;
    cin>>dec;
    double y;
    while(dec!=0){
        y = dec%2;
        s.push(y);
        dec = dec/2;
    }
    cout<<"The number in binary is ";
    s.display();
    return 0;
}
