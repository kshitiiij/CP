//
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,x,i,j;

int main()
{
    cin>>t;
    while(t--) {
        cin>>n;

        ll v[n];
        for(i=0;i<n;i++) 
           cin>>v[i];

        if(n==1)
            cout<<v[0]<<endl;
        else {
            sort(v,v+n);
            ll ans = v[0];
            for(i=0;i<n-1;i++) {
                if(ans < (v[i+1]-v[i]))
                    ans = v[i+1]-v[i];
            }
            cout<<ans<<endl;
        }

        
        
    }

    return 0;
}