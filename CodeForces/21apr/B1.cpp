#include<iostream>
using namespace std;
typedef long long ll;

ll t,n,arr[2002],i,s=0;
main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++) cin>>arr[i];
		for(i=0;i<n;i++) s^=arr[i];

		if(s==0) cout<<"YES"<<endl;
		else {
			ll t=0,count=0;
			for(i=0;i<n;i++)
			{
				t^=arr[i];
				if(t=s) {
					count++;
					t=0;
				}
			}
			if (count>2 && t==0) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}


	}
}