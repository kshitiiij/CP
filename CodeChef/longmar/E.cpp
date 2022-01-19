#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,e,h,a,b,c;
		cin>>n>>e>>h>>a>>b>>c;
		int arr[]={a,b,c};
		// arr[0]=a,arr[1]=b,arr[2]=c;
		// sort(arr,arr+3);
		int egg=e,choc=h;
		int ome=0,shake=0,cake=0;
 
		for(int j=0;j<3;j++)
		{	
			int min = arr[j];
			if(min==a)
			{
				while(egg>2)
				{
					ome++;
					egg-=2;
				}
			}
			else if(min==b)
			{
				while(choc>3)
				{
					shake++;
					choc-=3;
				}
			}
			else
			{
				while(egg!=0 || choc!=0)
				{
					cake++;
					egg--;
					choc--;
				}
			}
		}

		cout<<"ome "<<ome<<endl;
		cout<<"shake "<<shake<<endl;
		cout<<"cake "<<cake<<endl;

		if(ome+cake+shake>=n)
		{
			int price=0;
			price = ome*a + shake*b + cake*c;
			cout<<price<<endl;
		}
		else
			cout<<"-1"<<endl;
	}

	return 0;
}