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

        std::vector<int> v;
        for(i=0;i<n;i++) {
            cin>>x;
            v.push_back(x);
        }

        if(n==1)
            cout<<v[0]<<endl;
        else {
            ll maxi = INT_MIN,mini = INT_MAX,num;
            while(n>=2) {
                // cout<<n<<" "<<endl;
                num = *min(v.begin(),v.end());
                cout<<v.size()<<endl;
                cout<<num<<" ";
                if(maxi>num)
                    maxi = num;
                v.erase(find(v.begin(),v.end(),num));
                for(i=0;i<v.size();i++) 
                    v[i] -= num; 
                n--;
            }
            // cout<<maxi<<endl;
        }

        
        
    }

    return 0;
}