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

ll mdc(ll a, ll b){

	ll i, menor;
	if(a < b)menor = a;
	else menor = b;
	for(i = menor; i>=1; i--){
		if(!(a%i) && !(b%i)){
			return i;
		}
	}
	return 0;
}

int main(){_

	vector<

	return 0;
}
