#include<bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'    
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll INFll = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

	int n; cin >> n;

	while(n--){
		string pro; cin >> pro;
		string seq; cin >> seq;
		seq += seq;
		
		size_t pos = seq.find(pro);
		if(pos != string::npos){
			cout << "S\n";
			continue;
		}
		reverse(seq.begin(),seq.end());
		
		pos = seq.find(pro);
		if(pos != string::npos) cout << "S\n";
		else cout << "N\n";
	}

	return 0;
}
