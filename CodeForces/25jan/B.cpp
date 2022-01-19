#include<iostream>
using namespace std;

int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int rem=n/2000;
		if(n>=rem*2020 && n<=rem*2021)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}