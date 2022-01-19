//Board Moves
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,m,i,j;

int main()
{
    cin>>t;
    while(t--) {
        cin>>n;
        ll ans=0;
        if(n==1)
            cout<<0<<endl;
        else {
            m =n/2;
            n = 1;
            ll num=1;
            for(i=1;i<=m;i++) {
                num = 4*n + 4;
                n +=2;
                ans += num*i;
                
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}