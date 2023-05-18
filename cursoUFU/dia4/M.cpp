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

	int n; cin >> n;
	int acido = 0, base = 0, neutro = 0;
	cout << fixed << setprecision(3);

	while(n--){
		int x; cin >> x;
		if(x < 7)acido += 1;
		if(x == 7)neutro += 1;
		if(x > 7)base += 1;
	}
	float total = acido+base+neutro;
	cout << "acido " << acido/total << endl;  
	cout << "neutro " << neutro/total << endl;  
	cout << "base " << base/total << endl;  


	return 0;
}
