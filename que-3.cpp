#include <iostream>  
using namespace std;  
int main()  
{  
    int n,r,sum=0,temp;

    cout<<"Enter the Number :  ";    
    cin>>n; 

    temp=n;    
    while(n>0)    
    {    
        r=n%10;    
        sum=sum+(r*r*r);    
        n=n/10;    
    } 

    if(temp==sum)    
        cout<<endl<<"Number is Armstrong";    
        else    
        cout<<endl<<" Number is Not Armstrong";   
    return 0;  
}