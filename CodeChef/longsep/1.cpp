#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,a,b,c,d,e;
ll arr[3];
ll flag =0;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d>>e;
		if(a+b<=d && c<=e)
			flag =1;
		else if(a+c<=d && b<=e)
			flag =1;
		else if(b+c<=d && a<=e)
			flag =1;
		else
			flag =0;


		if(flag==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}