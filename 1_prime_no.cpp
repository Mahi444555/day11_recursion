//program on print prime numbers i.e. no who is only divisible by 1 and itself only
#include<iostream>
using namespace std;

// struct person
// {
//     int salary;
//     char name;
// }  ;  
int main()
{
    int n,i;
    cout<<"enter the n: "<<endl;
    cin>>n;
    //whrere if we want to check n is prime or not iteration start form 2 to n-1 because leave 1 and no itself
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not prime number"<<n<<"divisible by: "<<i<<endl;
            break;      //after not is not prime then no need to check futher more hecne we break loop
        }
    }
    if(n==i)
    {
        cout<<"Yes, it's prime number"<<i;
    }
}