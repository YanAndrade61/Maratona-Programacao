#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define ii pair<int,int>
#define ll long long

#define all(x) x.begin(),x.end()
#define sz(x) (int) x.size()
#define forn(i,a,b) for(int i = a; i < b; i++)
#define _ ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);

const int INF  = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;

ll fatorial(int n){

	ll fat = 1;
	forn(i,2,n+1){
		fat *= i;
	}
	return fat;
}

int main(){ _

	int n;
	while(cin >> n){
		cout << fatorial(n-1) << endl;
	
	}

	return 0;
}
