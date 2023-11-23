class Solution {
public:
	int hIndex(vector<int>& citations) {//暴力未超时
		int n=citations.size(),num;
		for(int j=n;j>0;j--){//j为论文数量
			num=0;
			for(int i=0;i<n;i++){//i为引用次数
				if(citations[i]>=j){
					num++;//记录引用次数大等于论文数的次数
					if(num==j)//满足H指数条件返回
						return j;
				}
			}
		}
		return 0;
	}
};
