#include <vector>
#include <iostream>
#include <algorithm>

int main() {
	std::vector<int> vec{ 1,2,3,4,5,6,7,8,9, 10 } ;
	for(auto it = std::stable_partition(vec.begin(), vec.end(), [](int i) {return i % 2 != 0; }); it < vec.end(); it ++)
			std::cout << *it << ' ';
	
	return 0;
}