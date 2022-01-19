//
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll t,n,i,j;

int main()
{
    cin>>t;
    // char key[26];
    vector< pair<char,int>> key;
    vector< pair<char, int> >::iterator it;
    for(i=0;i<26;i++) {
        char ch;
        cin>>ch;
        key.push_back(make_pair(ch,i+1));
    }
    string s;
    cin>>s;
    ll time =0,curr;
    for(i=0;i<s.length();i++) {
        if(i==0) {
            it = find(key.begin(),key.end(),s[i]);
            curr = it->second;
        }

        else {
            time += abs(find(key.begin(),key.end(),s[i])->second - curr);
        }
    }
    
    cout<<time<<endl;

    return 0;
}