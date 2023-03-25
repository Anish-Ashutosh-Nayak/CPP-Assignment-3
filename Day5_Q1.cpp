#include<iostream>
using namespace std;

int main()
{
    int M;
    cout<<"Enter a number : ";
    cin>>M;
    
    if(M%3 == 0 && M%5 == 0)
        cout<<"Good number";
    else if(M%3 == 0 && M%5 != 0)
        cout<<"Bad number";
    else if(M%5 == 0 && M%3 != 0)
        cout<<"Poor number";
    else
        cout<<"-1";
    return 0;
}