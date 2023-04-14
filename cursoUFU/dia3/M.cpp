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

	while(true){
	
		int a,b; cin >> a >> b;
		if(!cin) break;
		int seg = 0;
		int mini = INF;
		int maxi = -INF;
		for(int i = a; i <= b; i++){
		
			string res = "";
			res += to_string(i);
			string inv(res.rbegin(),res.rend());
			if(res == inv){
				if(i > maxi)maxi = i;
				if(i < mini) mini = i;
			}
		}
		if(maxi == -INF)cout << -1 << endl;
		else cout << mini << " " << maxi << endl;
	
	}
	

	return 0;
}
