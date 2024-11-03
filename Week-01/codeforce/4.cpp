//https://codeforces.com/contest/2036/problem/D

#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
	int n,m;int s=0;
	cin>>n>>m;
	string a[1003];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]='0'+a[i];
	}
	for(int i=1;i<=min(m,n)/2;i++)
	{
		string x="";
		for(int j=i;j<=m-i;j++){
            x+=a[i][j];
        }
			
		for(int j=i;j<=n-i;j++){
           x+=a[j][m+1-i];
        }
			
		for(int j=m+1-i;j>i;j--){
             x+=a[n+1-i][j];
        }
			
		for(int j=n+1-i;j>i;j--){
             x+=a[j][i];
        }
			
		int len=x.size();
		for(int i=0;i<len;i++)
			if(x[i]=='1'&&x[(i+1)%len]=='5'&&x[(i+2)%len]=='4'&&x[(i+3)%len]=='3')
				s++;
	}
	cout<<s<<endl;
}
 
signed main() {
	int t=1;
	cin>>t;
	while(t--)
		solve();
	return 0; 
}