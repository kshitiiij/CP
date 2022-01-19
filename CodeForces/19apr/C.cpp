#include <bits/stdc++.h>
using namespace std;
long long n;
vector<int> ans;


bool modul(vector<int> arr, int size)
{
	long long prod=1;
	for (int i = 0; i < size; i++)
		prod = prod * arr[i];
	
	if(prod % n==1)
		return true;
	else
		return false;
}

void subseque(vector<int> arr, int index, vector<int> subarr)
{
	if (index == arr.size())
	{
		int l = subarr.size();
		if (l != 0)
		{
			if(modul(subarr,l))
				ans = subarr;
		}
	}
	else
	{
		subseque(arr, index + 1, subarr);
		subarr.push_back(arr[index]);
		subseque(arr, index + 1, subarr);
	}
	return;
}


int main()
{
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n-1;i++)
	{
		arr.push_back(i+1);
	}
	
	vector<int> b;

	subseq(arr, 0, b);

	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	cout<<endl;

	return 0;
}

