//theatre square
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,m,a,i;


int main()
{
		cin>>n>>m>>a;
		ll num1,num2;
		num1 = ceil(double(m)/double(a));
		num2 = ceil(double(n)/double(a));

		cout<<num1*num2<<endl;
		
	
	return 0;
}