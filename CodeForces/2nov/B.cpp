//
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,x,i,j;

int main()
{
    cin>>t;
    while(t--) {
        cin>>x>>n;
        ll quo,rem,num,ans=x;

        if(x%2!=0) {
            quo = n/4;
            rem = n%4;
            if(rem==0)
                cout<<x<<endl;
            else {
                num = 4*quo +1;
                while(rem--) {
                    if(ans%2==0)
                        ans -= num++;
                    else
                        ans += num++;
                }
                cout<<ans<<endl;
            }

        }
        else {
            quo = n/4;
            rem = n%4;
            if(rem==0)
                cout<<x<<endl;
            else {
                num = 4*quo +1;
                while(rem--) {
                    if(ans%2==0)
                        ans -= num++;
                    else
                        ans += num++;
                }
                cout<<ans<<endl;
            }
        }
    }

    return 0;
}