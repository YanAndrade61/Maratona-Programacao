#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define ii pair<int,int>

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define forn(i,a,b) for(int i = a; i < b; i++)
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int INF = 0x3f3f3f3f;

int main(){ _

	int n; cin >> n;
	vector<int> inc[n];
	map<int,ii> v;

	forn(i,0,n){
	
		int x,y; cin >> x >> y;
		x--; y--;
		v[i] = {x,y};
		inc[x].pb(i);
		inc[y].pb(i);
	}
	forn(i,0,n){
		int yes = 0;
		for(auto j: inc[i]){
			if(v[i].f == v[j].f || v[i].f == v[j].s ||
			   v[i].s == v[j].f || v[i].s == v[j].s) {
				yes = 1;
				break;
			}
		}
		yes ? cout << "Y" : cout << "N";
	}
	cout << endl;

	return 0;
}
