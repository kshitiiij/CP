#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,d,l,r,i;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>d>>l>>r;
		if(l<=d and d<=r)
			cout<<"Take second dose now"<<endl;
		else if(d>r)
			cout<<"Too Late"<<endl;
		else if(d<l)
			cout<<"Too Early"<<endl;
	}
	return 0;
}