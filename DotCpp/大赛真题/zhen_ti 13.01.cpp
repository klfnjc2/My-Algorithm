#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(char A, char B) {
	return A > B;
	
}

int main()
{
	string S = "WHERETHEREISAWILLTHEREISAWAY";
	sort(S.begin(),S.end(),cmp);
	
	
	for(int i = S.size() - 1; i >= 0; i--) {
		cout << S[i];
	}
	
	return 0;
}
