#include <iostream>

using namespace std;

//struct LR {
//	int L;
//	int R;
//}Data[10];

int main() {
	
//	int L = 1189, R = 841;
//	
//	Data[0].L = L;
//	Data[0].R = R;
	
	string S;
	
	cin >> S;
	
	if(S == "A0") {
		cout << 1189 << endl << 841;
	} else if(S == "A1") {
		cout << 841 << endl << 594; 
	} else if(S == "A2") {
		cout << 594 << endl << 420;
	} else if(S == "A3") {
		cout << 420 << endl << 297;
	} else if(S == "A4") {
		cout << 297 << endl << 210;
	} else if(S == "A5") {
		cout << 210 << endl << 148;
	} else if(S == "A6") {
		cout << 148 << endl << 105;
	} else if(S == "A7") {
		cout << 105 << endl << 74;
	} else if(S == "A8") {
		cout << 74 << endl << 52;
	} else {
		cout << 52 << endl << 37;
	}
	
//	for(int i = 1; i <= 10; i++) {
//		if(L > R) {
//			L /= 2;
//		} else {
//			R /= 2;
//		}
//		Data[i].L = L;
//		Data[i].R = R;
//	}
//	
//	string A = "A0";
//	
//	for(int i = 0; i < 10; i++) {
//		A[1] += i;
//		if(Data[i].L > Data[i].R) {
//			cout << A  << ": " << Data[i].L << " " << Data[i].R << endl;
//		} else {
//			cout << A  << ": " << Data[i].R << " " << Data[i].L << endl;
//		}
//			
//		A[1] -= i;
//	}
	
	return 0;
}
