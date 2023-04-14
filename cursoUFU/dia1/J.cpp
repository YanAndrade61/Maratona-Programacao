#include<bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'    
#define f first
#define s second
#define ii pair<int,int>

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define forn(i,n) for(int i = 0; i < n; i++)

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll INFll = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

	while(true){
	
		char c; cin >> c;
		string str; cin >> str;
		if(!cin) break;
		
		int p = 0;
		
		for(char ci: str){
		
			if(ci == c)continue;
			if(ci == '0' && p == 0) continue;
			cout << ci;
			p++;
		}
		if(p == 0)cout << '0';
		cout << endl;
	}

	return 0;
}
