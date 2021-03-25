#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int maxdivide(int no,int di)
{
    while(no%di==0)
    {
        no=no/di;
    }
    return no;
}

int uglycheck(int number)
{
    number=maxdivide(number,2);
    number=maxdivide(number,3);
    number=maxdivide(number,5);
    
    return (number==1) ? 1 : 0;    
}


int getuglynumber(int n)
{
    int i=1,c,count=1;
    while(n>count)
    {
        i++;
        c=uglycheck(i);
        if(c==1)
        {
            count++;
            
        }
      
    }
   return i;   
}



int main()
{
    int n;
    cout<<"Enter the nth term : ";
    cin>>n;
    cout<<"\nthe nth ugly number is : "<<getuglynumber(n);
    }
    
    
