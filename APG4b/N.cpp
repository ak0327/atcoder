#define _GLIBCXX_DEBUG // vec[i]範囲外アクセス時に実行時エラーを出力

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
//	string 	str;
//
//	str = "abcd";
//	cout << str.at(0) << endl;
//	cout << str.size() << endl;
//
//	vector<int> vec;
//	vec = {25, 100, 64};
//	cout << vec.at(0) << endl;
//	cout << vec.size() << endl;
//
//	cout << "\n\n" << endl;
//
//	vector<int> vec2(3);
//	cin >> vec.at(0) >> vec.at(1) >> vec.at(2);
//	int sum = 0;
//
//	for (int i : vec)
//	{
//		sum += i;
//	}
//	cout << "sum=" << sum << endl;
//
//	cout << "\n\n" << endl;



//	int N;
//	cin >> N;
//
//	vector<int> math(N);
//	vector<int> english(N);
//
//	for (int i=0; i<N; i++)
//	{
//		cin >> math.at(i);
//	}
//	for (int i=0; i<N; i++)
//	{
//		cin >> english.at(i);
//	}
//
//	for (int i=0; i<N; i++)
//	{
//		cout << math.at(i) + english.at(i) << endl;
//	}



	vector<int> vec = {1, 2, 3};
	vec.push_back(10);
	for (int i : vec){
		cout << i << endl;
	}

	vec.pop_back();
	for (int i : vec){
		cout << i << endl;
	}


}

// g++ -std=c++11 N.cpp