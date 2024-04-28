#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	map<int, int> Map;
	int n, m, l, r, k, Num = 0;
	
	cin >> n; 
	
	vector<int> Data(n);
	
	for(int i = 0; i < n; i++) {
		cin >> Data[i];
	}
	
	cin >> m; 
	
	while(m--) {
		cin >> l >> r >> k;
		
		for(int i = l - 1; i < r; i++) {
			Map[Data[i]]++;
		}
		
		for(auto it : Map) {
			if(it.second == k)
				Num ++;
		}
		
		cout << Num << endl;
		Num = 0;
		Map.clear();
	}
	
	return 0;
}
