#include <iostream>
#include <algorithm>

using namespace std;

struct Str {
	int Num;
	int Sum;
}Data[1000001];

bool cmp(Str a, Str b) {
	if(a.Sum == b.Sum) {
		return a.Num < b.Num;
	} else {
		return a.Sum < b.Sum;
	}
}

int main() {
	int n, m;
	
	cin >> n >> m;
	
	for(int i = 1; i <= n; i ++) {
		Data[i].Num = i;
		int Temp = Data[i].Num;

		Data[i].Sum = 0;
		
		do {
			Data[i].Sum += Temp % 10;
		} while(Temp/=10);
	}
	
	sort(Data + 1,Data + n + 1,cmp);
	
	cout << Data[m].Num;
	
	return 0;
}
