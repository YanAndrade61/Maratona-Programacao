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

int acc;

void bfs(int start, vector<set<int>> adj){

	queue<int> st;
	int visited[13] = {0};
	int dist[13] = {0};
	st.push(start);
	
	while(!st.empty()){
		int front = st.front();
		st.pop();
		if(visited[front]) continue;

		visited[front] = 1;
		acc += dist[front];
		for(auto v: adj[front]){
			st.push(v);
			dist[v] = dist[front]+1;
		}
	
	}

}


int main(){ _

	vector<set<int>> adj(13);
	
	int v1,v2;
	int n; cin >> n;
	while(cin >> v1 >> v2){
		adj[v1].insert(v2);
		adj[v2].insert(v1);
	}
	forn(i,0,n){
		acc = 0;
		bfs(i,adj);
		cout << acc << " ";
	}
	cout << endl;

	return 0;
}
