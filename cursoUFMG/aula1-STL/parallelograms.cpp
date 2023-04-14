#include<bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'    
#define f first
#define s second
#define ii pair<int,int>

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll INFll = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

	int n; cin >> n;
	map<int,int> mp;
	while(n--){
		int a; cin >> a;
		mp[a] += 1;
	}
	int cnt = 0;
	for(auto p: mp)
		cnt += p.s/2;
	cout << cnt/2 << endl;
	
	return 0;
}
