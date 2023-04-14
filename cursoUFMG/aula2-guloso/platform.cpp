#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define ll long long

#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define forn(i,a,b) for(int i = a; i<b; i++)
#define _ ios_base::sync_with_stdio(NULL);cin.tie(0); cout.tie(0);

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;

int main(){ _

	int n,m,d; cin >> n >> m >> d;
	vector<int> c(m);
	vector<int> river(n+2,0);

	forn(i,0,m){
		cin >> c[i];
	}
	int pos = n;
	for(int i = m-1; i >= 0 ; i--){
		while(c[i]--){
			river[pos--] = i+1;
		}
	}
	forn(i,1,n+1){
		cout << river[i] << ' ';
	}
	cout << endl;
	
	return 0;
}
