class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int fmax = 0;
        int smax = 0;

        for (int num : nums) {
            if (num > fmax) {
                smax = fmax;
                fmax = num;
            }
            else if (num > smax) {
                smax = num;
            }
        }

        return (fmax - 1) * (smax - 1);
    }
};