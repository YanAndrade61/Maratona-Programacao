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

int bfs(string start, map<string,set<string>> adj){

	queue<string> st;
	map<string,int> vis;
	map<string,int> dist;
	st.push(start);
	
	vis[start] = 1;
	while(!st.empty()){
		string front = st.front();
		st.pop();

		for(auto v: adj[front]){
			if(vis[v] == 0){
				vis[v] = 1;
				st.push(v);
				dist[v] = dist[front]+1;
			}
		}
	
	}
	return dist["Entrada"] + dist["Saida"];
}


int main(){ _

	map<string,set<string>> adj;
	
	int n,m; cin >> n >> m;
	string str1,str2;

	while(cin >> str1 >> str2){
		adj[str1].insert(str2);
		adj[str2].insert(str1);
	}
	cout << bfs("*",adj) << endl;

	return 0;
}
