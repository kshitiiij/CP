#include<bits/stdc++.h>
#include<vector>
using namespace std;

typedef long long int ll;
ll t,n,i;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<ll> arr;
		for(i=0;i<n;i++) 
		{
			ll a;
			cin>>a;
			arr.push_back(a);
		}
		vector<ll> s;
		s = arr;
		sort(s.begin(),s.end());

		ll step = 0;
		if(arr==s)
			cout<<step<<endl;
		else
		{
			ll m=0;
			while(m++<5)
			{		
				ll mini = -1;
				ll maxi = -1;
				for(i=0;i<n;i++)
				{
					if(arr[i]==s[i])
						continue;
					else if(mini==-1)
					{
						mini = i;
					}
					else if(arr[i]>i+1)
					{
						maxi = i;
						break;
					}
				}	

				//vector<ll> temp = {arr.begin() + mini,arr.end()-(arr.size()-maxi)};
				vector<ll>
				for (int l = 0; l < temp.size(); l++)
        			cout << temp[l] << " ";
				// sort(temp.begin(),temp.end());
				// for(ll j=0;j<temp.size();j++)
				// {
				// 	arr[mini+j] = temp[j];
				// }
				step++;
				//cout<<mini<<" "<<maxi<<endl;
			
			}
			
		}
			
	}	
	return 0;
}