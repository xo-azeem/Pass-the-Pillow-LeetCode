// Code

class Solution {
public:
    int passThePillow(int n, int time) {
        int ans = time / (n - 1);
        return ans % 2 == 0 ? (time % (n - 1) + 1) : (n - time % (n - 1));
    }
};
