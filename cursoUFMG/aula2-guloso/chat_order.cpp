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

bool cmp(pair<string,int> x, pair<string, int> y){

	return x.s > y.s; 
}

int main(){ _

	int t; cin >> t;
	map<string,int> mp;

	forn(i,0,t){
		string str; cin >> str;
		mp[str] = i;
	}
	
	vector<pair<string,int>> vec(all(mp));
	sort(all(vec),cmp);

	for(auto p: vec){
		cout << p.f << endl;
	}

	return 0;
}
