#include<bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'    
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll INFll = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

	int n; cin >> n;
	int maxa, maxb;
	maxa = maxb = -INF;
	while(n--){
		int a; cin >> a;
		maxa = max(maxa,a);
	}
	int m; cin >> m;
	while(m--){
		int b; cin >> b;
		maxb = max(maxb,b);
	}
	cout << maxa << ' ' << maxb << endl;
	return 0;
}
