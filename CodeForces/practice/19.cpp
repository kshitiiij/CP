#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,l,r,i,j;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>l>>r;
		vector<ll> arr;
		ll a,left,right,count=0;
		for(i=0;i<n;i++) {
			cin>>a;
			arr.push_back(a);
		}
		cout<<"hey"<<endl;
		sort(arr.begin(),arr.end());
		left = 0;
		right = arr.size()-1;
		while(left<right)
		{
			a = arr[left] + arr[right];
			if(a<=r and a>=l) {
				count++;
				left++;
				right--;
			}

			else if(a<l)
				left++;
			else if(a>r)
				right--;
		}
		arr.clear();
		cout<<count<<endl;
	}
	return 0;
}