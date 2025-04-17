#include <bits/stdc++.h>
using namespace std;

#define fastIO                                                                 \
    ios::sync_with_stdio(false);                                               \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    cout.precision(numeric_limits<double>::max_digits10);

#define int long long

const int mod=1e9+7;




void solve() {
  
  int A,B; cin>>A>>B;
   
      if ((2 * A - B) % 3 || (2 * A - B) < 0 || (2 * B - A) % 3 || (2 * B - A) < 0)cout<<"NO\n";
      else cout<<"YES\n";
     
    
     
     
}

// tc : 
// sc : 

int32_t main() {
    fastIO;

    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
