#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define ll long long

#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define forn(i,a,b) for(int i = a; i < b; i++)
#define _ ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);

const int INF = 0x3f3f3f3f;

int main(){ _
	
	int v1,v2;
	char c;

	vector<set<int>> adj(101);
	while(cin >> v1 >> c >> v2){
	
		adj[v1].insert(v2);
		adj[v2].insert(v1);
	}
	forn(i,0,101){
		
		if(!adj[i].empty()){
			cout << "V" << i;
			for(auto v: adj[i]){
				cout << " " << v;
			}
			cout << endl;
		}
	}


	return 0;
}
