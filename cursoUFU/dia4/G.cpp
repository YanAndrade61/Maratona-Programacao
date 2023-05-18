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

int breathSearch(int x, int y, int n, vector<vector<int>> mt){
 
    int cont=0;
    queue<pair<int,int>> q;
    vector<vector<bool>> visited(n+2,vector<bool>(n+2,0));

    q.push({x,y});
    int yes = 0;
    while(!q.empty()){
	
        pair<int,int> node = q.front();
        q.pop();
	if(node.f == n && node.s == n) yes = 1;

        if(visited[node.f][node.s])continue;

        visited[node.f][node.s] = true;

        if(mt[node.f][node.s-1] == 0) q.push({node.f,node.s-1});
        if(mt[node.f][node.s+1] == 0) q.push({node.f,node.s+1});
        if(mt[node.f-1][node.s] == 0) q.push({node.f-1,node.s});
        if(mt[node.f+1][node.s] == 0) q.push({node.f+1,node.s});

    }
    return yes;

 
}

int main(){ _

	int t; cin >> t;
	while(t--){
	
		int n; cin >> n;
		vector<vector<int>> mt(n+2,vector<int>(n+2,1));
		forn(i,1,n+1){
			forn(j,1,n+1){
				int x; cin >> x;
				mt[i][j] = x;
			}
		}
		int yes = breathSearch(1,1,n,mt);
		cout << yes << endl;
	
	}

	return 0;
}
