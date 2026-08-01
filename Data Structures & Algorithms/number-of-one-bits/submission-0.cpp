class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t i{n};
        unsigned int fin{0};
        for (int z{0}; z < 32; ++z) {
            if (i & 1) {
                ++fin;
            }
            i >>= 1;
        }
        return fin;
    }
};
