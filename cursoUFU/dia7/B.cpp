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

void dfs(int atual, vector<set<int>> adj, vector<int> vis){
	
	if(vis[atual] == 0){
		vis[atual] = 1;
		cout << atual << " ";
		for(auto v: adj[atual]){
			dfs(v,adj,vis);
		}
	}	

}

void bfs(int start, vector<set<int>> adj){

	queue<int> st;
	int visited[101] = {0};
	st.push(start);
	
	while(!st.empty()){
		int front = st.front();
		st.pop();
		if(visited[front]) continue;

		visited[front] = 1;
		
		for(auto v: adj[front]){
			st.push(v);
		}
		cout << front << " ";
	
	}

}


int main(){ _

	vector<set<int>> adj(101);
	
	int v1,v2;
	char c;
	while(cin >> v1 >> c >> v2){
		adj[v1].insert(v2);
		adj[v2].insert(v1);
	}
	bfs(0,adj);
	cout << endl;
	vector<int> vis(101,0);
	dfs(0,adj, vis);
	cout << endl;

	return 0;
}
