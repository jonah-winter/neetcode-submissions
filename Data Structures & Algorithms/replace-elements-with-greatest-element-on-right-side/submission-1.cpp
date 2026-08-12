class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        std::vector<int> temp = arr;
        int currMax = -1;
        for (size_t i{0}; i < arr.size(); i++) {
            int ind = (arr.size() - 1) - i;
            arr[ind] = currMax; 
            currMax = (currMax < temp[ind]) ? temp[ind] : currMax;
        }
        return arr;
    }
};