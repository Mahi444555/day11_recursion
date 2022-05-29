//print the prime number series from these to these
#include<iostream>
using namespace std;

int main()
{
    int  start, end, i,nextno;      //where nextno is number between series i.e. each number
    cout<<"enter the starting point: ";
    cin>>start;
    cout<<"enter the ending point: ";
    cin>>end;

    for(i=start;i<=end;i++)     //outer loop it will gives one number each time
    {
        for(nextno=2;nextno<=i-1;nextno++)
        {
            if(i%nextno==0)
            {
                cout<<i<<"\t"<<"Not a prime number divisible by "<<nextno<<endl;
                break;
            }
            
        }
        if(i==nextno)
        cout<<"Yes, it's prime number"<<nextno<<endl;
    }
}   