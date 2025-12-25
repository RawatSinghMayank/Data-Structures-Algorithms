#include <bits/stdc++.h>
using namespace std;
#define int long long

class SegmentTree {

	private : 
		vector <int> segTree;
		
	public:
		SegmentTree (int n){
		
			segTree.resize (4 * n + 1);
		}

	void buildSegTree (vector <int>&  nums, int index, int low, int high){
	
		if (low == high){
		
			segTree[index] = nums[low];
			return;
		}	
		
		int mid = low + ((high - low) >> 1);
		buildSegTree (nums, 2 * index + 1, low, mid);
		buildSegTree (nums, 2 * index + 2, mid + 1, high);

		segTree[index] = min (segTree[2 * index + 1], segTree[2 * index + 2]);
	}

	int querySegTree (int index, int low, int high, int left ,int right){

		if (right < low || high < left){
			return INT_MAX;
		}else if (low >= left && high <= right){
			return segTree[index];	
		}
	
		int mid = low + ((high - low) >> 1);
		int leftTree = querySegTree (2 * index + 1, low, mid, left,right);
		int rightTree = querySegTree (2 * index + 2, mid + 1, high, left, right);

		return min (leftTree, rightTree);
	}
	
	void pointUpdate (int index, int low, int high, int i,int value){
	
		if (low == high){
			segTree[index] = value;
			return;
		}

		int mid = low + ((high - low) >> 1);
		if (i <= mid){
			pointUpdate (2 * index + 1, low, mid, i, value);
		}else{
			pointUpdate (2 * index + 2, mid + 1, high , i ,value);
		}

		segTree[index] = min (segTree[2 * index + 1], segTree[2 * index + 2]);
	
	}


};

void solve2(){
	
	
//working on 2 arrays

	int n1;
	cin >> n1;
	
	vector <int> nums1(n1);
	for (int i = 0; i < n1; i++){
		cin >> nums1[i];
	}
	SegmentTree segTree1(n1);
	segTree1.buildSegTree (nums1, 0 , 0, n1 - 1);

	int n2;
	cin >> n2;
	
	vector <int> nums2 (n2);
	for (int i = 0; i < n2; i++){
		cin >> nums2[i];
	}

	SegmentTree segTree2(n2);
	segTree2.buildSegTree (nums2, 0, 0, n2 - 1);

	int q;
	cin >> q;

	while (q--){
	
		int type;
		cin >> type;

		if (type == 1){

			int l1, r1, l2, r2;
			cin >> l1 >> r1 >> l2 >> r2;

			cout << min (segTree1.querySegTree (0,0,n1 - 1, l1 ,r1), segTree2.querySegTree (0,0,n2- 1, l2,r2)) << endl;
			
		}else{
			
			int arrNo, i, val;
			cin >> arrNo >> i >> val;
	
			if (arrNo == 1){
				segTree1.pointUpdate (0,0,n1 - 1,i,val);
				nums1[i] = val;
			}else{
				segTree2.pointUpdate (0,0,n2 - 1,i,val);
				nums2[i] = val;
			}		
	
		}

	}
}

void solve1(){
	
	int n;
	cin >> n;

	vector <int> nums (n);
	for (int i = 0; i < n; i++){
		cin >> nums[i];
	}

	SegmentTree segTree (n);
	segTree.buildSegTree (nums, 0, 0, n - 1);

	
	int l, r;
	cin >> l >> r;

	cout << segTree.querySegTree (0, 0, n - 1, l , r) << endl;
	cout << "Enter index to update " << endl;
	int i;	
	cin >> i;
	int value;
	cout << "Enter value " << endl;
	cin >> value;
	segTree.pointUpdate (0, 0 , n - 1, i,  value);
	nums[i] = value;
	
	cout << segTree.querySegTree (0, 0 , n - 1, l, r) << endl;

}

signed main(){
	
	solve2();
	return 0;
}