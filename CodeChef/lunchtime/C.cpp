#include<iostream>
#include<cmath>

using namespace std;

float velocity(int u,int a,int s)
{
	
	float vel = pow(u,2)-2*a*s;
	if(vel>0)
		vel = sqrt(vel);
	return vel;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int u,v,a,s;
		cin>>u>>v>>a>>s;
		float vel = velocity(u,a,s);
		if(v>=vel)
			cout<<"Yes"<<endl;
		else 
			cout<<"No"<<endl;

	}

	return 0;
}