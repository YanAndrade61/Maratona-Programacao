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

	int t; cin >> t;
	while(t--){

		string str; int n; cin >> str >> n;

		string pad = "";
		int pos = 0, qtd = 0;

		for(char c: str){
			
			if(sz(pad) < n){ 
				pad += c;
			}
			else{
				if(c == pad[pos]){
					pos = (pos+1)%n;
				}
				else{
					pad = c;
					qtd++;
					pos = 0;
				}
			}
		}
		cout << qtd+1 << endl;
	}
	
	return 0;
}
