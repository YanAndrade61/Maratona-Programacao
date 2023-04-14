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


string minusc(string str){

	string res = "";
	for(char c : str){
		res += (char)tolower(c);
	}
	return res;
}

int main(){ _

	int n, t; cin >> n >> t;
	map<string,int> dic;
	forn(i,n){
		string str; cin >> str;
		str = minusc(str);
		dic[str] = 1;
	}
	while(t--){
		
		string line;
		string part;
		getline(cin,line);
		if(sz(line) < 1) getline(cin,line);
		stringstream ss(line);
		int i = 0;
		while(ss >> part){
			string mpart = minusc(part);
			if(dic[mpart] == 1 && i == 0){
				i++;
				continue;
			}
			if(dic[mpart] == 1) cout << (char)tolower(part[0]);
			else cout << (char)toupper(part[0]);
		}
		cout << endl;
	}


	return 0;
}
