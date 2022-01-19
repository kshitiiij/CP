#include<iostream>
using namespace std;

int main()
{
	int i,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int w1,w2,x1,x2,m;
		cin>>w1>>w2>>x1>>x2>>m;

		float diff = (w2-w1)/m;
		if(x1<diff && diff<x2)
			cout<<"1"<<endl;
		else if(x1==diff || x2==diff)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;

	}


	return 0;
}