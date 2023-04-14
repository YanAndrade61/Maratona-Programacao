#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define ii pair<int,int>

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define forn(i,a,b) for(int i = a; i < b; i++)
#define _ ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int INF = 0x3f3f3f3f;

int main(){ _

	int n,h,w; cin >> n >> h >> w;
	while(n--){
	
		char c1,c2; cin >> c1 >> c2;
		
		if(c1 == 'Y' || (c1 == 'N' && w == 0)){
			w++; h--;
			cout << "Y";
		}
		else cout << "N";

		if(c2 == 'Y' || (c2 == 'N' && h == 0)){
			w--; h++;
			cout << " Y";
		}
		else cout << " N";

		cout << endl;
	}
	return 0;
}
