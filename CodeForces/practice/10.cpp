#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,w,h;
ll sheet = 1;

string check(ll w, ll h, ll n)
{
	sheet =1;
	while (w%2 ==0)
	{
		if(sheet >= n)
			return "YES";
		w = w/2;
		sheet *=2;
		
	}
	while (h%2 ==0)
	{
		if(sheet >= n)
			return "YES";
		h = h/2;
		sheet *=2;
		
	}

	if(sheet>=n)
		return "YES";

	return "NO";


}


int main()
{
	cin>>t;
	while(t--)
	{
		cin>>w>>h>>n;
		if(n==1)
			cout<<"YES"<<endl;
		else
			cout<<check(w,h,n)<<endl;
		
	}
	return 0;
}