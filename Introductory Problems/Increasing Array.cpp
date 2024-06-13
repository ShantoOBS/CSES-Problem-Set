// Code_Is_Fun
 
 
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 
typedef unsigned long long ull;
typedef double long  dll;
typedef long long ll;
 
#define MOD 1000000007
#define LINF (1LL<<60)
#define INF 2147483647
#define PI 3.1415926535897932384626433
#define yes puts("YES")
#define no puts("NO")
#define x first
#define y second
#define pb emplace_back
#define V vector
#define pii pair<int,int>
#define mp(x,y) make_pair((x),(y))
#define mid(s,e) ((s+e)/2)
#define fori(n) for(int i=0;i<(n);i++)
#define forl(n) for(long long i=0;i<(n);i++)
 
 
ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcd(ll a,ll b){return (a*(b/gcd(a,b)));}
 
 
 
 
void solve(){
 
  ll n;
 
    cin>>n;
 
    V<ll>v(n);
 
 
 
   forl(n){
       cin>>v[i];
   }
 
    ll ct=0;
 
    for(ll i=1;i<n;i++){
 
       if(v[i]<v[i-1]){
 
           ct+=(v[i-1]-v[i]);
           v[i]=v[i-1];
 
       }
 
    }
 
    cout<<ct<<endl;
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 
     solve();
 
}
