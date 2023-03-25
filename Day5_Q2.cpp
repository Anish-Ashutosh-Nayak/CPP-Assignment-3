#include<iostream>
using namespace std;

int main()
{
    int n, temp, rem, total=0;
    cout<<"Enter a number : ";
    cin>>n;
    
    for(temp = n; n!=0; n=n/10)
    {
        rem = n%10;
        total = total * 10 + rem;
    }
    cout<<"Before reverse : "<<temp;
    cout<<"\nAfter reverse : "<<total;
    return 0;
}