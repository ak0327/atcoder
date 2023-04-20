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
//	bitset<4> b("1101");
//
//	for (int i=0; i<4; i++){
//		cout << b.test(i) << endl;
//	}
//
//	for (int i=0; i<4; i++){
//		cout << (b >> i).test(0) << endl;
//	}

	// 1<<3 = 2**3, 1000(bin)
	for (int tmp=0; tmp < (1<<3); tmp++){
		bitset<3> s(tmp);
		cout << "bit:" << s << ", (s>>0)&1:" << (s >> 0).test(0) << endl;
	}

}