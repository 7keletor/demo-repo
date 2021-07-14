#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define  rep(i,a,b) for(i=a;i<b;i++)
#define ll long long int
using namespace std;
int main()
{
IOS;
ll i,n;
cin>>n;
rep(i,0,n)
cout<<i+1<<" ";
rep(i,0,n)
cout<<i*2<<" ";
cout<<"\n";
return 0;
}