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

	int n; cin >> n;
	while(n--){
		int a,b; cin >> a >> b;
		if(a%b == 0) cout << 0 << endl;
		else cout << b - (a%b) << endl;
	}

	return 0;
}
