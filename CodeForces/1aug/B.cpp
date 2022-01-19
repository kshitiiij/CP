#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll t,n,i;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		string enem,greg;
		//ll enem[n],greg[n];
		//for(i=0;i<n;i++) cin>>enem[i];

		//for(i=0;i<n;i++) cin>>greg[i];
		cin>>enem>>greg;
		ll count =0;
		for(i=0;i<n;i++)
		{
			if(enem[i] == '0' and greg[i]=='1') {
				count++;
				//cout<<i<<"1";
			}
			if(enem[i]=='1' && enem[i+1]=='1' && greg[i]=='1' && greg[i+1]=='1' && i!=n-1)
			{
				count+=2;
				//cout<<i<<"2"<<i+1<<" ";
				i+=1;
			}
			if(enem[i]=='1' && greg[i]=='1' && greg[i+1]=='0'&&enem[i+1]=='1' || enem[i-1]=='1'&&greg[i-1]=='0')
			{
				count++;
				//cout<<i<<"3";
			}
		}
		cout<<count<<endl;

	}
	return 0;
}