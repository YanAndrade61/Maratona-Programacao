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

	int n; cin >> n;
	string alf = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while(n--){
		
		int d; cin >> d;
		string str; cin >> str;
		
		for(char ci : str){
			int cod = ci-'A'+d+26;
			cout << alf[cod];
			//if(d >= 0)
			//       cout <<(char) ('A'+(cod+d)%26);
			//else	
			//       cout << (char)('A'+(cod+d)+26);
		}
		cout << endl;
	}

	return 0;
}
