#include <bits/stdc++.h>
using namespace std;

bool comparator (pair <long long, long long> &first, pair <long long, long long> &second){

	if ((first.second == 0) ^ (second.second == 0)){
		return first.second > second.second;
	}else{	
		return first.first < second.first;
	}
}

void solve(){

	long long noOfSwords, noOfMonsters;

	cin >> noOfSwords >> noOfMonsters;
	
	vector <long long> monsters (noOfMonsters), newSwords (noOfMonsters);
	
	multiset <long long> swords;
	for (long long i = 0; i <  noOfSwords; i++){
		
		long long sword;
		cin >> sword;
		swords.insert (sword);
	}

	for (long long i = 0; i < noOfMonsters; i++){
		cin >> monsters[i];
	}

	for (long long i = 0; i < noOfMonsters; i++){
		cin >> newSwords[i];
	}

	vector <pair <long long,long long>> monsterAndNewSwords;

	for (long long i = 0; i < noOfMonsters; i++){
		monsterAndNewSwords.push_back ({monsters[i],newSwords[i]});
	}
	
	sort (monsterAndNewSwords.begin(),monsterAndNewSwords.end(),comparator);

	long long destroyedMonsterCount = 0;

	for (long long i = 0; i < noOfMonsters; i++){

		long long monster = monsterAndNewSwords[i].first;
		long long newSword = monsterAndNewSwords[i].second;

		auto it = swords.lower_bound (monster);
		
		if (it != swords.end()){
			long long val = *it;
			swords.erase (it);
			destroyedMonsterCount++;
			if (newSword > 0){
				swords.insert (max (newSword,val));
			}	
			
		}
	}

	cout << destroyedMonsterCount << "\n";

}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long test;
	cin >> test;

	while (test--){

		solve();

	}
	return 0;
}