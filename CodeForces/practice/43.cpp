//Move Brackets
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,i,j;

int main()
{
    cin>>t;
    while(t--) {
        cin>>n;
        string s;
        cin>>s;
        ll counter=0,ans=0;
        for(i=0;i<n;i++) {
            
            if(s[i] == '(' and counter<0) {
                counter =0;
                counter++;
            }
            else if(s[i] == '(')
                counter++;
            else if(s[i] == ')' and counter>0)
                counter--;
            else if(s[i] == ')' and counter<1) {
                counter--;
                ans++;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}