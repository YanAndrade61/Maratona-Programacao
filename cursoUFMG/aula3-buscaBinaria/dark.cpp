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

	int n; cin >> n;
	vector<pair<int,int>> jedi;

	forn(i,0,n){
	
		int a,b,c; cin >> a >> b >> c;
		jedi.pb({a+b+c-max(max(a,b),c),a+b+c});
	}
	
	vector<pair<int,int>> ord(all(jedi));
	sort(all(ord));
	
	for(auto p: jedi){
	
		int l = 0, r = n;

		while(r > l){
		
			int m = (l+r)/2;
			
			if(p.s > ord[m].f+2) l = m+1;
			else r = m;
		}
		
		p.s > p.f+2 ? cout << l-1 : cout << l;
		cout << " ";
	}
	cout << endl;

	return 0;
}
