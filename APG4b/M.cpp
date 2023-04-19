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

int main()
{
	string	str = "hello";

	cout << str.at(0) << endl;

	str.at(0) = 'X';
	cout << str << endl;

	cout << str.size() << endl;
//	cout << "hello"s.size() << endl;

	string 	str2 = "hello\0world";
	cout << str2.size() << endl;

	string 	s1 = "abc";
	string 	s2 = "abc";
	string 	s3 = "ABC";

	if (s1 == s2)
		cout << s1 << " == " << s2 << endl;
	if (s1 != s3)
		cout << s1 << " != " << s3 << endl;

	cout << "s1 + s2 = " << s1 + s2 << endl;

	char c = 'a';
	s1 += c;
	cout << "s1 += c -> s1=" << s1 << endl;
	cout << "s1 + c = " << s1 + c << endl;
	cout << "s1 = " << s1 << endl;

//	char	a, b;
//	cin >> a >> b;
//	cout << "a=" << a << ", b=" << b << endl;

	string	input;
	getline(cin, input);

	cout << input << endl;
}