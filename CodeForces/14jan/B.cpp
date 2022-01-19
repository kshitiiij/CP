#include<iostream>
using namespace std;

int lcm(int n,int m)
{
	int max;
	max=(n>m)?n:m;
	while(1)
	{
		if(max%n==0 && max%m==0)
		{
			return max;

		}
		++max;
	}
	return 0;
}

int main()
{
	int i,test,l;
	cin>>test;
	for(i=0;i<test;i++)
	{
		string s,t;
		cin>>s>>t;
		int n,m;
		n=s.length();
		m=t.length();
		l=lcm(n,m);
		int nn=l/n,mm=l/m;
		string ss,tt;
		for(int j=0;j<nn;j++)
			ss+=s;
		for(int j=0;j<mm;j++)
			tt+=t;
		if(ss==tt)
			cout<<ss<<endl;
		else
			cout<<"-1"<<endl;
	}
	return 0;
}