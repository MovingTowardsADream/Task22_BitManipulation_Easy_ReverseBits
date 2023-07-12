#include <iostream>

class Solution {
public:
    static uint32_t reverseBits(uint32_t n) {
        int result = 0;
        for (int i = 0;i < 32;i++) {
            int a = (n & 1)<<(31 - i);
            result |= a;
            n >>= 1;
        }
        return result;
    }
};

int main()
{
    std::cout << Solution::reverseBits(43261596);
}
