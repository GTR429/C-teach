#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {4, 1, 3, 5, 2};
    std::sort(vec.begin(), vec.end());
    
    for (int i=0;i<vec.size();i++){
    	std::cout << vec[i];
	}
    // vec is now sorted: {1, 2, 3, 4, 5}
    return 0;
}
