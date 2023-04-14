#include<bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'    
#define f first
#define s second
#define ii pair<int,int>

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll INFll = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

	int n; cin >> n;
	while(n--){
	
		int cont=0;
		set<pair<ii,ii>> st;
		ii atual = {0,0};
		string str; cin >> str;
		for(auto c: str){
			ii prox = atual;
			if(c == 'N')prox.s++;
			if(c == 'S')prox.s--;
			if(c == 'W')prox.f++;
			if(c == 'E')prox.f--;
			cont += 5-4*st.count({atual,prox});
			st.insert({atual,prox});
			st.insert({prox,atual});
			atual = prox;
		} 	
		cout << cont << endl;
	}
	
	return 0;
}
