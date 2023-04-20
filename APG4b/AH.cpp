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

template<typename T>
T square(T x) {
	return (x * x);
}

template<typename T>
bool chmax (T &a, const T &b) {
	if (a < b) {
		a = b;
		return (true);
	}
	return (false);
}


int main() {
	int		a = 3;
	double 	b = 1.2;

	cout << square<int>(a) << endl;
	cout << square<double>(b) << endl;
	cout << endl;
	cout << square(a) << endl;
	cout << square(b) << endl;
	cout << endl;

	int ans_max = 0;
	rep(i, 100) {
		chmax(ans_max, i);
	}
	cout << ans_max << endl;
}