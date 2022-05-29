

#include<iostream>
using namespace std;

int prime (int n,int i)
{
    if(i==1)
        return 1;
    if(n%i==0)
       return 0;
    return prime(n,i-1);  //calling

}

int main()
{
    int n,p;
    cout<<"enter number: ";
    cin>>n;
    p=prime(n,n/2); //calling
    if(p==1)
        cout<<"yes it's prime: "<<n;
    else
        cout<<"not prime: "<<n;
}