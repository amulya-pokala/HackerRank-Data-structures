#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {   stack <char> sta;
        int c=0;
        string s;
        cin>>s;
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]=='['||s[j]=='{'||s[j]=='(') sta.push(s[j]);
            else if(s[j]==']')
             {
                   if(sta.empty()){cout<<"NO"<<endl;c=1;break;}
                   else if(sta.top()=='[') sta.pop();
                   else {cout<<"NO"<<endl;c=1;break;}
            }
            else if(s[j]=='}')
             {
                   if(sta.empty()){cout<<"NO"<<endl;c=1;break;}
                if(sta.top()=='{') sta.pop();
                 else {cout<<"NO"<<endl;c=1;break;}
            }
            else if(s[j]==')')
             {
                   if(sta.empty()){cout<<"NO"<<endl;c=1;break;}
                    if(sta.top()=='(') sta.pop();
                    else {cout<<"NO"<<endl;c=1;break;}
            }
        }
        if(c==0&&sta.empty()) cout<<"YES"<<endl;
        else if(c==1) ;
        else if(!sta.empty()) cout<<"NO"<<endl;
    }
    return 0;
}
