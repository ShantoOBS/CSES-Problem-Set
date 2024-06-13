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
 
const ll mx=123;
ll v[mx],v1[mx];
 
 
void solve(){
 
  ll n;
  cin>>n;
 
 
   if(1<n &&n<4 ){
      cout<<"NO SOLUTION"<<endl;
      return;
  }
 
  V<ll>ans;
  for(ll i=1;i<=n;i++){
      if(!(i&1)){
          ans.pb(i);
      }
  }
 
 
         for(ll i=1;i<=n;i++){
      if((i&1)){
          ans.pb(i);
      }
      }
 
 
 
 
 
  for(auto i:ans){
      cout<<i<<" ";
  }
  cout<<endl;
 
 
 
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
     solve();
 
}
