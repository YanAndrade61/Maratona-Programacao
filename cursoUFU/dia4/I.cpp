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

pair<int,int> out;

int breathSearch(int x, int y, int n, int m, vector<vector<int>> mt){
 
    queue<pair<int,int>> q;
    vector<vector<bool>> visited(n+2,vector<bool>(m+2,0));
    vector<vector<int>> dist(n+2,vector<int>(m+2,1));

    q.push({x,y});
    int yes = 0;
    
    while(!q.empty()){
	
        pair<int,int> node = q.front();
        q.pop();
	if(node.f == out.f && node.s == out.s) yes = dist[node.f][node.s];
	
        if(visited[node.f][node.s])continue;

        visited[node.f][node.s] = true;

        if(mt[node.f][node.s-1] != 0){
	       	q.push({node.f,node.s-1});
		dist[node.f][node.s-1] = dist[node.f][node.s]+1;
	}
        if(mt[node.f][node.s+1] != 0){
	       	q.push({node.f,node.s+1});
        	dist[node.f][node.s+1] = dist[node.f][node.s]+1;
	}
	if(mt[node.f-1][node.s] != 0){
	       	q.push({node.f-1,node.s});
        	dist[node.f-1][node.s] = dist[node.f][node.s]+1;
	}
	if(mt[node.f+1][node.s] != 0){
	       	q.push({node.f+1,node.s});
		dist[node.f+1][node.s] = dist[node.f][node.s]+1;
	}
    }
    
    return yes;

 
}

int main(){ _

	int n,m; cin >> n >> m;
	pair<int,int> in;
	vector<vector<int>> mt(n+2,vector<int>(m+2,0));
	forn(i,1,n+1){
		forn(j,1,m+1){
			int x; cin >> x;
			mt[i][j] = x;
			if(x == 2){
				in.f = i; in.s = j;
			}
			if(x == 3){
				out.f = i; out.s = j;
			}
		}
	}
	int yes = breathSearch(in.f,in.s,n,m,mt);
	cout << yes << endl;

	return 0;
}
