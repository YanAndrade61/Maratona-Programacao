#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define ll long long
#define ii pair<int,int>

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define forn(i,a,b) for(int i = a; i < b; i++)
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;

ll mdc(ll x, ll y) {
    ll i, menor;
    if (x<y) {
        menor=x;
    } else {
        menor=y;
    }
    for (i=menor; i>=1; i--) {
        if (!(x%i)&&!(y%i)) {
            return i;
        }
    }
    return 0;
}
ll mmc(ll x, ll y) {
    return x*y/mdc(x,y);
}

int main(){ _

	while(true){
	
		int n; cin >> n;
		if(!cin)break;
		
		ll res = 1;
		forn(i,2,n+1){
		
			res = mmc(res,i);
		}
		cout << res << endl;
		
	}
	return 0;
}
