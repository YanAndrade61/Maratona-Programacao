#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define ll long long

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define forn(i,a,b) for(int i = a; i < b; i++)
#define _ ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);

const int INF = 0x3f3f3f3f;

int n,k;


int odd(int x){

	int cont =0, mult = 2;

	while(mult*x <= n){
	
		forn(i,0,mult){
			cont++;
		}
		mult *= 2;
	}
	return cont;
}

int main(){ _

	cin >> n >> k;
	cout << odd(4) << endl;

	return 0;

}
