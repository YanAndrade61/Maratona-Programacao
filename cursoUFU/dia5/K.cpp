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

int main(){ _

	
	string str1,str2;
	while(cin >> str1 >> str2){
		
		if(str1 == str2 && str1 == "acabou")break;

		map<char,ii> mp;
		for(auto c: str1){
			mp[c].f++;
		}
		for(auto c: str2){
			mp[c].s++;
		}
		for(auto p: mp){
			int mini = min(p.s.f,p.s.s);
			if(mini != 0){
				forn(i,0,mini) cout << p.f;	
			}
		}
		cout << endl;
	}


	return 0;
}
