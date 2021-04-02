#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;

int findcandidate(const vector<int> arr,int size)
{
    int maj_index=0,count=1;
    for(int i =1;i<size;i++)
    {
        if(arr[maj_index]==arr[i])
        {
            count++;
        }
        else{count--;}
        if(count==0)
        {
            maj_index=i;
            count=1;
        }
    }
    return arr[maj_index];
}

int countCandidate(const vector<int> arr, int size,int cand)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==cand)
        {
            count++;
        }
    }
    if(count>=(size/2))
        return 1;
    else
        return 0;
}

void printMajority(const vector<int> arr,int size)
{
    int candidate = findcandidate(arr,size);

    int count= countCandidate(arr,size,candidate);

    if(count==1)
    {
        cout<<endl<<candidate<<" is the majority canditate";
    }
    else
    {
        cout<<endl<<"No majority candidate";
    }
}


int main()
{
    vector<int> v;
    int x,size;
    string buff;
    getline(cin,buff);
    istringstream in(buff);
    while(in>>x)
    {
        v.push_back(x);        
    }
    size=v.size();

    printMajority(v,size);
}
