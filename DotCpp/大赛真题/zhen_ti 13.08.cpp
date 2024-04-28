#include <iostream>
#include <vector>

using namespace std;

int VecMax_(vector<int> &Data, bool B) {
	int Max = 0, key = 0;
	for(int i = 0; i < (int)Data.size(); i++) {
		if(Max < Data[i]) {
			Max = Data[i];
			key = i;
		}
	}
	
	Data[key] = 0;
	
	if(B) {
		return Max;
	} else {
		return key;
	}
}

int main()
{
	int n, l, r, m;
	
	cin >> n;
	vector<int> Data(n);
	vector<int> Temp(n); // 存储重叠的次数 将较大的值的位置 与重叠次数最多的位置 互换
	vector<int> NewData(n); // 存储重排后的Data
	
	for(int i = 0; i < n; i++) {
		cin >> Data[i];
	}
	
	cin >> m;
	
	int M[2][m];
	
	int Num = 0, NewNum = 0;
	for(int i = 0; i < m; i++) {
		cin >> l >> r;
		
		M[0][i] = l;
		M[1][i] = r;
		
		for(int i = l - 1; i < r; i++) {
			Temp[i]++;
			Num += Data[i];
		}
	}
	
	for(int i = 0; i < n; i++) {
		cout << Temp[i] << " ";
	}
	
//	cout << endl;
	

	
	for(int i = 0; i < n; i++) {
		int a = VecMax_(Data,1);
		int b = VecMax_(Temp,0);
		NewData[b] = a;
	}
	

	
	for(int i = 0; i < m; i++) {
		for(int j = M[0][i] - 1; j < M[1][i]; j++) {
			NewNum += NewData[j];
		}
	}
	
	cout << NewNum - Num;
	
//	for(int i = 0; i < m; i++) {
//		cout << M[0][i] << " " << M[1][i] << endl;
//	}
	
	return 0;
}
