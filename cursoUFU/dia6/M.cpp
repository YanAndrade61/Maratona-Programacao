#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define ii pair<int,int>
#define ll long long

#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define forn(i,a,b) for(int i=a; i < b; i++)
#define _ ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);

const int INF = 0x3f3f3f3f;

int main(){_

	vector<ll> vec;
	ll x;
	while(cin >> x)vec.pb(x);
	
	sort(all(vec));
	int tam = sz(vec);
	
	cout << fixed << setprecision(1);
	
	long double res;
	if(tam%2 == 0)
		res = (vec[tam/2]+vec[(tam/2)-1])/2.0 ;
	else
		res =  vec[(tam/2)]/1.0;


	cout << res << endl;

	return 0;
}
