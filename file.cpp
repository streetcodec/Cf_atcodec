#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,r,m;
		cin>>n>>m;
		vector<int>v;
		for(int i = 0; i<n ; i++)
		{
			cin>>r;
			v.push_back(r);
		}
		vector<char>s;
		for(int i = 0; i<m+1 ; i++) s.push_back('B');
		for(int i = 0; i<n ; i++)
		{
			if(s[v[i]] == 'A') 
			{
			    s[m+1-v[i]] = 'A';
			    continue;
			}
			else if(s[m+1-v[i]] == 'A') 
			{
			    s[v[i]] = 'A';
			    continue;
			}
			else
			{
			if(m+1-v[i] < v[i]) s[m+1-v[i]] = 'A';
			else s[v[i]] = 'A';
			}
			
		}
		for(int i = 1; i<m+1 ; i++)cout<<s[i];
		
		cout<<endl;

	}
	return 0;
}