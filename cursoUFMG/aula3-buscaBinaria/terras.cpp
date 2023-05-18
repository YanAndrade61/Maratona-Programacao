#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define ll long long

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define forn(i,a,b) for(int i = a; i < b; i++)
#define _ ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);

const int INF = 0x3f3f3f3f;

int main(){ _
	
	int n,k; cin >> n >> k;
	vector<pair<int,pair<int,int>>> terras;
       	
	forn(i,0,n){

		int xa,ya,xb,yb;
		cin >> xa >> ya >> xb >> yb;
		terras.pb({xb-xa,{ya,yb}});
	}
	int l = 0, r = 1e9+10;
	while(r > l){
	
		int m = (l+r)/2;
		int acc = 0;

		for(auto p: terras){
			if(m < p.s.f) continue;
			acc += p.f*(min(m,p.s.s)-p.s.f);
		}
		if(acc < k) l = m+1;
		else r = m;
	}
	l != 1e9+10 ? cout << l : cout << "PERDAO MEU REI";
	cout << endl;


	return 0;
}
