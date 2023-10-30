#include<bits/stdc++.h>
using namespace std;
string s[30];
void solve()
{
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>s[i];

	string need="vika";
	int t=0;
	for(int i=0;i<m;i++) //to iterate over column
	{
		for(int j=0;j<n;j++) // to iterate over row
		{
			if(s[j][i]==need[t]) //if match 
			{
				t++;break;
			}
		}
	}
	if(t==4)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	solve();
} 
