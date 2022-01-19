#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,a,b,c,x,y,z,i;

struct st
{
	//double one;
	ll two,three;
};

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b>>c>>x>>y>>z;
		vector<st> arr;
		// arr[0] = x/a;
		// arr[1] = y/b;
		// arr[2] = z/c;
		// arr.push_back({x/a,x,a});
		// arr.push_back({y/b,y,b});
		// arr.push_back({z/c,z,c});
		arr.push_back({x,a});
		arr.push_back({y,b});
		arr.push_back({z,c});
		ll time = 240;
		sort(arr.begin(),arr.end());
		//dpuble p = x/a,q=y/b,r = z/c;
		ll point=0,prob=20;
		if((a+b+c)*20<=240)
			point = (x+y+z)*20;
		else
		{
			while(time !=0 and prob!=0){
				point += arr[0].two;
				time -= arr[0].three;
				prob--;
			}
			prob =20;
			while(time !=0 and prob!=0){
				point += arr[1].two;
				time -= arr[1].three;
				prob--;
			}
			prob =20;
			while(time !=0 and prob!=0){
				point += arr[2].two;
				time -= arr[2].three;
				prob--;
			}
		}
		cout<<point<<endl;
	}
	return 0;
}