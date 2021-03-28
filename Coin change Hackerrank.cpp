#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>

int coinChange(int arr[],int w,int size)
{
    int sum=0;
    int i=size-1,coins=0;
    while(sum<=w)
    {
        if(sum<w)
        {
            if(sum+arr[i]>w)
            {
                i--;
            }
            else
            {
                sum=sum+arr[i];
                coins++;
            }
        }
             
        if(sum==w)
        {
            return coins;
        }
    }
    return -1;
}

using namespace std;
int main()
{
    int *arr,w,n;
    cin>>n>>w;
    arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<coinChange(arr,w,n);  
}
