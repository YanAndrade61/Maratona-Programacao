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

int main(){ _

	int n,m; cin >> n >> m;
	int a = -INF, ord = 1, acc = 0;

	forn(i,0,n){
		int aux; cin >> aux;
		if(min(aux,m-aux) >= a)
			aux = min(aux,m-aux);
		else
			aux = max(aux,m-aux);

		if(a > aux){
			ord = 0;
		}
		a = aux;
		acc += a;
	}
	ord ? cout << acc : cout << -1;
	cout << endl;

	return 0;
}
