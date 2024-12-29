#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr(5,0);
    for(auto i:arr){
        std::cout<<i<<" ";
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
