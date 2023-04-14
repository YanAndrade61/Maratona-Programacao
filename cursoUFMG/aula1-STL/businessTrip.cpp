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

	int k; cin >> k;
	int months[12];
	
	for(int i = 0; i < 12; i++) cin >> months[i];

	sort(months,months+12,greater<>());

	int acc = 0;
	int n = -1;
	for(int i = 0; i < 12; i++){
		acc += months[i];
		if(acc >= k){ n=i+1; break;}
	}
	if(k == 0)cout << 0 << endl;
	else cout << n << endl;

	return 0;
}
