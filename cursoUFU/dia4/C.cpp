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

int main(){ _

	ll n;
	while(cin >> n){
	
		double x = (n-3)/3.0;
		if(floor(x) == x)
			cout << x << " " << x+1 << " " << x+2 << endl;
		else
			cout << "mensagem falsa" << endl;
	
	}

	return 0;
}
