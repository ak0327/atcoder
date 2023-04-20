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

//3
//1 3 2 5 3
int main(){
	int a, cnt;
	vector<int> data(5);

	cin >> a;
	for (int i=0; i<5; i++){
		cin >> data.at(i);
	}

	cnt = 0;
	for (int i : data){
		if (i == a){
			cnt++;
		}
	}
	cout << cnt << endl;

	cout << "\n" << endl;

	string str = "hello";
	for (char c: str){
		cout << c << endl;
	}
}