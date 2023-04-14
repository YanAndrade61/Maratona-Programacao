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

    	string n;
    	cin >> n;
    	ll r = 0;
    	for(ll i = n.size() - 1; i >= 0; i--){
        	char c = n[i];
        	ll t = atoi(&c);
        	r += t * pow(2, n.size() - i - 1);
    	}
    	cout << r << endl;
	
	return 0;
}
