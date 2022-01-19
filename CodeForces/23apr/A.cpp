#include<iostream>
#include<string>
#include<cmath>
using namespace std;
typedef long long ll;

ll t,n,count=0;
ll number=2050;

main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		count=0;
		string s = to_string(n);
		if(n%number) cout<<"-1"<<endl;
		else if(n==number) cout<<"1"<<endl;
		else 
		{
			while(true) 
			{
				if(n==0)	break;
				else if(n<number)
				{
						count=-1;
						break;
				}
				else if (s.length()>4 && n>2050) {
						ll x = stoi(s.substr(0,4));
						//cout<<x<<endl;
						if(x>=number)
						{

							n -= number*pow(10,s.length()-4);
							//cout<<n<<endl;
							count++;
							s = to_string(n);
						}
						else
						{
							n -= number*pow(10,s.length()-4-1);
							//cout<<n<<endl;
							count++;
							s = to_string(n);
						}
					//cout<<n<<endl;
				}
				else if(s.length()==4 && n>=2050) {
					if(n<number)
					{
						count=-1;
						break;
					}
					else {
						n-=number;
						count++;
						//cout<<n<<endl;
					}

				}

			
			}
			cout<<count<<endl;

		}

	}
}