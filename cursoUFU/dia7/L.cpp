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
	int n;cin >> n;

	vector<set<int>> adj(21);
	while(cin >> v1 >> v2){
	
		adj[v1].insert(v2);
		adj[v2].insert(v1);
	}
	int maxi = -1, node;
	forn(i,1,n+1){
		if(sz(adj[i]) > maxi){
			maxi = sz(adj[i]);
			node = i;
		}
	}
	cout << node << endl;


	return 0;
}
