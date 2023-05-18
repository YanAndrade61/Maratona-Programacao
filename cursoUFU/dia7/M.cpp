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

int n,m;

void busca(int i, int j, vector<vector<char>> mt, vector<vector<int>> vis){
	
	if(i < 0 || i >= n) return;
	if(j < 0 || j >= m) return;
	if(mt[i][j] == 'X') return;
	mt[i][j] = 'T';
	vis[i][j] = 1;
	busca(i,j+1,mt,vis);
	busca(i,j-1,mt,vis);
	busca(i+1,j,mt,vis);
	busca(i-1,j,mt,vis);

}

int main(){ _

	vector<vector<char>> mt(51,vector<char>(51,'X'));
	vector<vector<int>> vis(51,vector<int>(51,0));
	string str;
	vector<pair<int,int>> start;
	int i,j;
	i = j = 0;
	while(cin >> str){
		stringstream ss(str);
		char c;
		j = 0;
		while(ss >> c){
			if(c == 'T')start.pb({i,j});
			mt[i][j] = c;	
			j++;
		}
		i++;
	}
	n = i; m = j;
	for(auto p: start){
		if(vis[p.f][p.s] == 0)
			busca(p.f,p.s,mt, vis);
	}
	forn(i,0,n){
		forn(j,0,m){
			cout << mt[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
