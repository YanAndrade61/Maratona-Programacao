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

int main(){ _

	int n; cin >> n;
	vector<pair<float,int>> pos;
	
	cout << fixed << setprecision(2);

	forn(i,0,n){
		float x; cin >> x;
		pos.pb({x,i+1});
	}
	sort(all(pos));
	forn(i,0,3){
		cout << i+1 << "o. lugar: competidor " << pos[i].s << " - " << pos[i].f << " segundos";
		cout << endl;
	}		


	return 0;
}
