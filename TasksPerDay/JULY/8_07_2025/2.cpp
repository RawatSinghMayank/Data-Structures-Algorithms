https://usaco.org/index.php?page=viewproblem2&cpid=567


#include <bits/stdc++.h>
using namespace std;


int main(){

	freopen("paint.in","r",stdin);
	freopen("paint.out","w",stdout);
	int x1,x2,y1,y2;
	cin >> x1  >> x2 >> y1 >> y2;

	if (x2 < y1 || y2 < x1) cout << x2-x1 + y2 - y1 << "\n";
	else {int mini = min (x1,min(x2,min(y1,y2)));
	int maxi = max(x1,max(x2,max(y1,y2)));

	cout << maxi - mini << "\n";
	}
	return 0;
}


