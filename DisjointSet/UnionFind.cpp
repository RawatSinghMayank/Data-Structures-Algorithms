#include <bits/stdc++.h>

using namespace std;

class DisjointSet{

private:
	vector <int> parent, rank,size;

public:
	DisjointSet (int n){
		this -> parent.resize (n + 1,0);
		this -> rank.resize (n + 1,0);
		this -> size.resize (n + 1,1);

		for (int i = 0; i <= n; i++){
			this ->parent[i] = i;
		}
	}

	int findParent (int node){

		if (parent[node] == node) return node;

		return parent[node] = findParent (parent[node]);
	}

	void unionByRank (int node1, int node2){

		int ultimateParentNode1 = findParent (node1);
		int ultimateParentNode2 = findParent (node2);

		if (ultimateParentNode1 == ultimateParentNode2) return ;

		else if (rank [ultimateParentNode1] < rank[ultimateParentNode2]){
			parent[ultimateParentNode1] = ultimateParentNode2;
			
		}
		else if (rank[ultimateParentNode2] < rank[ultimateParentNode1]) {
			parent[ultimateParentNode2] = ultimateParentNode1;
		}
		else {
			parent[ultimateParentNode2] = ultimateParentNode1;
			rank[ultimateParentNode1]++;
		}

	}

	void unionBySize (int node1, int node2){

		int ultimateParentNode1 = findParent (node1);
		int ultimateParentNode2 = findParent (node2);

		if (ultimateParentNode1 == ultimateParentNode2) return;

		else if (size[ultimateParentNode1] < size[ultimateParentNode2]) {
			parent[ultimateParentNode1] = ultimateParentNode2;
			size[ultimateParentNode2] += size[ultimateParentNode1];
		}
		else{
			parent[ultimateParentNode2] = ultimateParentNode1;
			size[ultimateParentNode1] += size[ultimateParentNode2];
		}
	}

};
#include <bits/stdc++.h>

using namespace std;

class DisjointSet{

private:
	vector <int> parent, rank,size;

public:
	DisjointSet (int n){
		this -> parent.resize (n + 1,0);
		this -> rank.resize (n + 1,0);
		this -> size.resize (n + 1,1);

		for (int i = 0; i <= n; i++){
			this ->parent[i] = i;
		}
	}

	int findParent (int node){

		if (parent[node] == node) return node;

		return parent[node] = findParent (parent[node]);
	}

	void unionByRank (int node1, int node2){

		int ultimateParentNode1 = findParent (node1);
		int ultimateParentNode2 = findParent (node2);

		if (ultimateParentNode1 == ultimateParentNode2) return ;

		else if (rank [ultimateParentNode1] < rank[ultimateParentNode2]){
			parent[ultimateParentNode1] = ultimateParentNode2;
			
		}
		else if (rank[ultimateParentNode2] < rank[ultimateParentNode1]) {
			parent[ultimateParentNode2] = ultimateParentNode1;
		}
		else {
			parent[ultimateParentNode2] = ultimateParentNode1;
			rank[ultimateParentNode1]++;
		}

	}

	void unionBySize (int node1, int node2){

		int ultimateParentNode1 = findParent (node1);
		int ultimateParentNode2 = findParent (node2);

		if (ultimateParentNode1 == ultimateParentNode2) return;

		else if (size[ultimateParentNode1] < size[ultimateParentNode2]) {
			parent[ultimateParentNode1] = ultimateParentNode2;
			size[ultimateParentNode2] += size[ultimateParentNode1];
		}
		else{
			parent[ultimateParentNode2] = ultimateParentNode1;
			size[ultimateParentNode1] += size[ultimateParentNode2];
		}
	}

};


int main (){

	DisjointSet ds(7);

	ds.unionBySize (1,2);
	ds.unionBySize (2,3);
	ds.unionBySize (4,5);
	ds.unionBySize (6,7);
	ds.unionBySize (5,6);

	if (ds.findParent (3) == ds.findParent (7))
		cout << "Same\n";
	else 
		cout << "Not same\n";

	ds.unionBySize(3,7);

	if (ds.findParent (3) == ds.findParent (7))
		cout << "Same\n";
	else 
		cout << "Not same\n";


	return 0;
}