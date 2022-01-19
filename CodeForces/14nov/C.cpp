//Two Arrays
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll t,n,m,i,j,k,a,b;

int main()
{
    // ios_base: :sync_with_stdio(false);
    // cin.tie(NULL);
    cin>>t;
    while(t--) {
        cin>>n;
        ll same1=0,same2=0;
        ll ar1[n],ar2[n];
        for(i=0;i<n;i++) cin>>ar1[i];
        for(i=0;i<n;i++) cin>>ar2[i];
        sort(ar1,ar1+n);
        for(i=0;i<n;i++) {
            if(ar1[i]==ar2[i])
                    same1++;
            
        }

        for(i=0;i<n;i++) ar1[i]++;
        
        sort(ar2,ar2+n);

        for(i=0;i<n;i++) {
            if(ar1[i]==ar2[i])
                same2++;
        }
        
        if(n-same1 == same2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
return 0;
}