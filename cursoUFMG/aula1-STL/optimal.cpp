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

	int n;cin >> n;
	vector<int> a(n);
	vector<pair<int,int>> b;
	for(int i=0; i<n; i++){
		cin >> a[i];
		b.push_back({-a[i],i});
	}
	sort(b.begin(),b.end());

	int m; cin >> m;
	while(m--){
	
		int k,pos; cin >> k >> pos;
		set<int> opt;
		for(int i=0;i<k;i++) opt.insert(b[i].s);
		vector<int> vec(opt.begin(),opt.end());
		cout << a[vec[pos-1]] << endl;		

	}


	return 0;
}
