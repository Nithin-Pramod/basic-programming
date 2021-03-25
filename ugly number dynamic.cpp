#include<bits/stdc++.h>
using namespace std;

int getuglynumber(int n)
{
   int i2=0,i3=0,i5=0,ugly[n],m2=2,m3=3,m5=5,nextuglyno=1;
   ugly[0]=1;
   
   for(int i=1;i<n;i++)
   {
       nextuglyno=min(m2,min(m3,m5));
       ugly[i]=nextuglyno;
       if(nextuglyno==m2)
       {
           i2++;
           m2=ugly[i2]*2;
       }
       if(nextuglyno==m3)
       {
           i3++;
           m3=ugly[i3]*3;
       }
       if(nextuglyno==m5)
       {
           i5++;
           m5=ugly[i5]*5;
       }
   }
   return nextuglyno;
   
   
}

int main()
{
    int n;
    cout<<"Enter the nth number : ";
    cin>>n;
    cout<<"\n nth ugly number is : "<<getuglynumber(n);
}

