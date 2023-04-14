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

	cout << fixed << setprecision(2);

	while(true){
	
		float a,b; cin >> a >> b;
		if(!cin)break;

		if(a < b)
			cout << ceil((b+(a/2.0))*100)/100 << endl;
		else
			cout << ceil((a+(b/2.0))*100)/100 << endl;
	}

	return 0;
}
