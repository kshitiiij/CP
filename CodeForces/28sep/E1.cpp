#include<bits/stdc++.h>
#include<deque>
using namespace std;

typedef long long int ll;
ll t,n,m,a,i;


int main()
{
		cin>>t;
		while(t--)
		{
			cin>>n;
			deque <ll> arr;
			for(i=0;i<n;i++) {
				cin>>a;
				if(i==0)
					arr.push_back(a);
				else if(a < arr.front())
					arr.push_front(a);
				else
					arr.push_back(a);
			}

			//deque <int>::iterator it;
			for (auto it = arr.begin(); it != arr.end(); ++it)
        		cout << *it << " ";
			cout<<endl;
		}
		
	
	return 0;
}