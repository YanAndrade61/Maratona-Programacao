#include<bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'    
#define f first
#define s second
#define pb push_back
#define ii pair<int,int>

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define forn(i,a,n) for(int i = a; i < n; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll INFll = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

	int n; cin >> n;
	vector<int> v(n);
	forn(i,0,n) cin >> v[i];
	
	vector<ii> troca;
	forn(i,0,n){
	
		int j = i;
		forn(t,i,n){
			if(v[j] > v[t]) j =t;
		}
		if(j != i){
			troca.pb({i, j});
			swap(v[i], v[j]);
		}
	}
	cout << sz(troca) << endl;
	for(auto p: troca)
		cout << p.f << " " << p.s << endl;

	return 0;
}
