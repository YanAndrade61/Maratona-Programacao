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

int maxi;

int breathSearch(int origem, int n, vector<set<int>> adj){
 
	int cont=0;
	queue<int> q;
	bool visited[n+1];
	fill(visited,visited+n+1,0);
	
	q.push(origem);
	while(!q.empty()){
	
		int node = q.front();
		q.pop();
		if(visited[node])continue;
		
		visited[node] = true;
		maxi++;
		
		for(auto p: adj[node])
			q.push(p);
			
	}
	return cont;
	
 
}
 
int main(){ _
 
	int n,m, v, w, cont =1;
	int t; cin >> t;
	while(t--){
	
		int origem; cin >> origem;
		cin >> n >> m;
		if(n == 0)break;	
		
		vector<set<int>> adj(n+1);
		
		for(int i = 0; i < m; i++){
			cin >> v >> w;
			adj[v].insert(w);
			adj[w].insert(v);			 
		}
		maxi = 0;
		breathSearch(origem,n,adj);
		cout <<2*( maxi-1) << endl;
		
	}
 
} 
