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

//int my_min(int x, int y)
//{
//	if (x < y){
//		return (x);
//	}
//	return (y);
//}

void add5(int x){
	x += 5;
	cout << x << endl;
}

void add5_ref(int &x){
	x += 5;
	cout << x << endl;
}

int	my_min(int a, int b, int c)
{
	if (a < b && c < b){
		return (a);
	}
	if (b < a && b && c){
		return (b);
	}
	return (c);
}

int	my_min(int a, int b){
	if (a < b)
		return (a);
	return (b);
}

int main()
{
//	int ans = my_min(10, 5);
//	cout << ans << endl;
	int num = 10;
	add5(num);

	cout << num <<  "\n" << endl;

	add5_ref(num);
	cout << num << "\n" << endl;

	cout << my_min(10, 20) << endl;
	cout << my_min(-1, -10, 100) << endl;

}