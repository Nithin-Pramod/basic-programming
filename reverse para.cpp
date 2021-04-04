#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

string reverseInParentheses(string inputString) {
    stack<int> st;
    string retstr;
    for(int i = 0; i < inputString.size();i++)
    {
        if(inputString[i]=='(')
        {
            st.push(i);
        }
        if(inputString[i]==')')
        {
            int start = st.top();
            st.pop();
            reverse(inputString.begin()+start,inputString.begin()+i);
        }
        
    }
    for(int i  = 0;i < inputString.size();i++)
    {
        if(inputString[i]!='('&&inputString[i]!=')')
        {
            retstr+=inputString[i];
        }
    }
    return retstr;
}

void main()
{
  string str;
  getline(cin,str);
  cout<<reverseInParentheses(str);
}
