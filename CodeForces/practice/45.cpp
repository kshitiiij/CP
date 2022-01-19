//Maximum Increase
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i,j;

int main()
{
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++) cin>>arr[i];
    ll maxi =1,ans=0;
    for(i=0;i<n-1;i++) {
        if(arr[i]<arr[i+1])
            maxi++;
        else {
            if(maxi>ans) 
                ans = maxi;
            maxi = 1;
            
        }
    }
    if(maxi>ans)
        ans = maxi;
    cout<<ans<<endl;

    return 0;
}