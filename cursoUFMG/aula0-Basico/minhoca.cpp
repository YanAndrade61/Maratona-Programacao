#include<bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'    
#define f first
#define s second
#define ii pair<int,int>

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define forn(i,n) for(int i = 0; i < n; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll INFll = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

	int n,m; cin >> n >> m;
	int maxi = -INF;
	vector<int> row(n,0);
	vector<int> col(m,0);
	forn(i,n){
		forn(j,m){
			int num; cin >> num;
			row[i] += num;
			col[j] += num;
			maxi = max(maxi,max(row[i],col[j]));
		}
	}
	cout << maxi << endl;

	return 0;
}
