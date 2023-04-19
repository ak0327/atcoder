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
	int	a = 10;
	int	b = 5;
	int c = 5;
	int ans_1 = max(a, b);

	cout << ans_1 << endl;
	cout << "&a:" << &a << ", &b:" << &b << ", &ans_1:" << &ans_1 << endl;

	cout << min(b, c) << endl;
	cout << "&b:" << &b << ", &c:" << &c << ", &min:" << &min(b, c) << endl;


	cout << "\nbefore swap" << endl;
	cout << "a:" << a << ", b" << b << endl;
	cout << "&a:" << &a << ", &b:" << &b << endl;
	swap(a, b);
	cout << "\nafter swap" << endl;
	cout << "a:" << a << ", b" << b << endl;
	cout << "&a:" << &a << ", &b:" << &b << endl;

}