#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll t,n,i,j;

int main()
{
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n%2==0)
	    {
	        for(i=0;i<n;i++)
	        {
	            for(j=0;j<n;j++)
	                cout<<-1<<" ";
	            cout<<endl;
	        }
	    }
	    else
	    {
	        for(i=0;i<n;i++)
	        {
	            for(j=0;j<n;j++) {
	                if(i==j)
	                    cout<<1<<" ";
	                else
	                    cout<<-1<<" ";
	            }     
	            cout<<endl;
	        }
	    }
	    
	}
	

	
	return 0;
}
