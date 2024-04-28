#include <iostream>
using namespace std;

int main() {
	int D, Num = 0;
	
	string T, S;
	
	cin >> D;
	
	for(int i = 0; i < D; i++) {
		cin >> T >> S;
		
		if(S[0] != T[0] || S[S.size() - 1] != T[T.size() - 1]) { // 如果 S 和 T 的头尾不相等 那么无论如何转换都无法使 S 和 T 相同
			cout << -1 << endl;
			continue;
		}
		
		for(int i = 1; i < (int)S.size() - 1; i++)
			if(S[i] != T[i])
				if(S[i - 1] == T[i - 1] && S[i + 1] == T[i + 1]) {
					S[i] = S[i - 1];
					Num++;
				}
		
		if(Num == 0) {
			cout << -1 << endl;
		}
		cout << Num << endl; 
	}
}
