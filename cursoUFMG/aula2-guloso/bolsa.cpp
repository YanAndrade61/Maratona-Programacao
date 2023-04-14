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

int n,c;
int tab[200001][2];
vector<int> cot;

ll dp(int dia, int comprou){
	
	ll resultado;	
	if(dia >= n)
		return 0;

	if(tab[dia][comprou] != -1)
		return tab[dia][comprou];

	if(comprou){
		
		resultado = max(dp(dia+1,1),dp(dia+1,0) + cot[dia]);
	
	}
	else{
		resultado = max(dp(dia+1,0),dp(dia+1,1)-(cot[dia]+c));
	}
	tab[dia][comprou] = resultado;
	return resultado;
	
}

int main(){ _

	cin >> n >> c;
	
	forn(i,0,n+1){
		tab[i][0] = -1;
		tab[i][1] = -1;
	}


	forn(i,0,n){
		int aux; cin >> aux;
		cot.pb(aux);	
	}
	
	cout << dp(0,0) << endl;

	return 0;
}
