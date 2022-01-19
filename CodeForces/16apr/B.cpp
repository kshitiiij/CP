#include<iostream>
#include<string>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long len;
		cin>>len;
		string s;
		cin>>s;

		long long t1=0,m=0;
		for(int i=0;i<len;i++)
		{
			if(s[i]=='T')
				t1++;
			else
				m++;
		}
		long long t2=0,m2=0,flag=1;
		if(t1!=(2*m))
			cout<<"NO"<<endl;
		
		else
		{
			for(int i=0;i<len;i++)
			{
    			if(s[i]=='M')
    				m2++;
   				else 
   					t2++;

   				if(m2>t2 || (t2-2*m2)>(m-m2))
   				{
   					flag=0;
   					break;
   				}

    		}

    		if(flag==1)
    			cout<<"YES"<<endl;
    		else
    			cout<<"NO"<<endl;
		}
		
		

	}
	return 0;
}