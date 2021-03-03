//a regular bracket sequence always starts with an opening bracket and ends with a closing one.
//https://codeforces.com/contest/1494/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dl double
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL)
#define cases ll t; cin>>t; while(t--)
#define rep1(qq,pp) for(ll i=qq;i<pp;i++)
#define rep2(qqq,ppp) for(ll i=qqq;i>=ppp;i--)
#define nl "\n"
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
//cout<<fixed<<setprecision(13);

int main(){
	faster;
    
    string s,s1,s2;
    int cnt,f,g;
    
    cases{
        cin>>s;
        
        s1="",s2="";
        f=0,g=0;
        stack<char> st1,st2;
        
        if(s[0]==s.back()) N;
        else{
            rep1(0,s.size()){
                if(s[i]==s[0]){
                    s1+='(';
                    s2+='(';
                }else if(s[i]==s.back()){
                    s1+=')';
                    s2+=')';
                }else{
                    s1+=')';
                    s2+='(';
                }
            }
            
            rep1(0,s1.size()){
                if(s1[i]=='(') st1.push('(');
                else{
                    if(!st1.empty()) st1.pop();
                    else{
                        f=1;
                        break;
                    }
                }
            }
            
            if(st1.empty() && f==0) Y;
            else{
                rep1(0,s2.size()){
                    if(s2[i]=='(') st2.push('(');
                    else{
                        if(!st2.empty()) st2.pop();
                        else{
                            g=1;
                            break;
                        }
                    }
                }
            
                if(st2.empty() && g==0) Y;
                else N;
            }
        }
    }
}
