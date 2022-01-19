//
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i,j;

int main()
{
    cin>>t;
    while(t--) {
        char key[26];
        for(i=0;i<26;i++) cin>>key[i];
    
        string s;
        cin>>s;
        ll time =0,curr,prev;
        for(i=0;i<s.length();i++)
        {
            if(i==0) {
                for(j=0;j<26;j++) {
                    if(s[i]==key[j]) {
                        prev=j;
                        break; 
                    }
                }
            }
            else {
                for(j=0;j<26;j++) {
                    if(s[i]==key[j]) {
                        curr=j;
                        
                        time += abs(curr-prev);
                        prev = curr; 
                        break; 
                    }
            }
        }
    }
    
    cout<<time<<endl;
    }

    return 0;
}