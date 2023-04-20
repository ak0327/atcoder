#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower

using namespace std;

int main(){
	vector<vector<int>> data(3, vector<int>(4));

	for (int i=0; i<3; i++){
		for (int j=0; j<4; j++){
			cin >> data.at(i).at(j);
		}
	}

	// const vector<int>& に補完された
	for (const vector<int>& vec : data){
		for (int i: vec){
			cout << i << endl;
		}
		cout << endl;
	}
}