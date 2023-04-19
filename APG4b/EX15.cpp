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

int sum(vector<int> scores){
	int ans;

	ans = 0;
	for (int i: scores){
		ans += i;
	}
	return (ans);
}

void output(int sumA, int sumB, int sumC){
	cout << sumA * sumB * sumC << endl;
}

vector<int> input(int N){
	vector<int> vec(N);
	for (int i=0; i<N; i++){
		cin >> vec.at(i);
	}
	return (vec);
}

int main(){
	int N;
	cin >> N;

	vector<int> A = input(N);
	vector<int> B = input(N);
	vector<int> C = input(N);

	int sumA = sum(A);
	int sumB = sum(B);
	int sumC = sum(C);

	output(sumA, sumB, sumC);
}