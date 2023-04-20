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

#define rep(i, n) for (int i=0; i<(int)n; i++)
#define my_cout(x) cout << x << endl;

using namespace std; //名前空間 std::を省略

int main() {
	vector<int> a = {3, 1, 5, 6, 7, 2, 4};

	auto itr1 = a.begin();
	itr1 = itr1 + 2;
	auto itr2 = itr1 + 4;

	cout << *itr1 << endl;
	cout << *itr2 << endl;

}