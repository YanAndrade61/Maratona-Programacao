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
	int da = 0, db = 0;
	forn(i,0,n){
		forn(j,0,n){
			int x; cin >> x;
			if(i == j) da += x;
			if(i == n-j-1) db += x;
		}
	}
	cout << abs(da-db) << endl;

	return 0;
}
