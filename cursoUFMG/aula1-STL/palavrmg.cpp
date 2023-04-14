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
	
		string pal; cin >> pal;
		int ord = 1;
		for(int i = 1; i < (int) pal.length(); i++){
			if(tolower(pal[i]) <= tolower(pal[i-1])) ord=0;
		}
		cout << pal << ": " << (ord ? 'O' : 'N') << endl;
	}

	return 0;
}
