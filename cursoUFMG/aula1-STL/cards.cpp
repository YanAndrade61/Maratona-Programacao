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
	string bin = "";
	while(n--){
		char c; cin >> c;
		if(c == 'z')bin += "0";
		if(c == 'n')bin += "1";
	}
	sort(bin.begin(),bin.end(),greater<>());
	for(auto c: bin)
		cout << c << " ";
	cout << endl;
	return 0;
}
