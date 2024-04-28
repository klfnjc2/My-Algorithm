#include <iostream>
#include <algorithm>
using namespace std;

struct XYZ {
	int X,Y,Z;
	int XWin, YWin, ZWin;
}Data[10005];

bool cmp_X(XYZ A, XYZ B) {
	return A.XWin > B.XWin;
}

bool cmp_Y(XYZ A, XYZ B) {
	return A.YWin > B.YWin;
}

bool cmp_Z(XYZ A, XYZ B) {
	return A.ZWin > B.ZWin;
}

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> Data[i].X;
	}

	for (int i = 0; i < n; i++) {
		cin >> Data[i].Y;
	}

	for (int i = 0; i < n; i++) {
		cin >> Data[i].Z;
	}

	for (int i = 0; i < n; i++) {
		Data[i].XWin = Data[i].X - Data[i].Y - Data[i].Z;
		Data[i].YWin = Data[i].Y - Data[i].X - Data[i].Z;
		Data[i].ZWin = Data[i].Z - Data[i].Y - Data[i].X;
	}

	sort(Data, Data + n, cmp_X);

	int XWinSum = 0, YWinSum = 0, ZWinSum = 0, Num = 0, i = 1;

	Num = Data[0].XWin;

	while (Num >= 0 && i < n) {
		XWinSum ++;
		Num += Data[i].XWin;
		i++;
	}
	
	Num = Data[0].YWin;
	i = 1;

	while (Num >= 0 && i < n) {
		YWinSum ++;
		Num += Data[i].YWin;
		i++;
	}
	
	Num = Data[0].ZWin;
	i = 1;

	while (Num >= 0 && i < n) {
		ZWinSum ++;
		Num += Data[i].ZWin;
		i++;
	}

	int Max = max(XWinSum, max(YWinSum, ZWinSum));

	cout << Max;

	if (Max == 0) {
		return -1;
	} else {
		return Max;
	}
}
