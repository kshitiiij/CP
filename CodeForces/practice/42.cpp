//Buttons
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i,j;

int main()
{
    cin>>n;
    i=1;
    ll count =0;
    while(i<n) {
        count += (n-i)*i;
        i++;
    }
    count +=n;
    cout<<count<<endl;
    return 0;
}