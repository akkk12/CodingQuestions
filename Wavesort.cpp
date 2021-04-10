class Solution {
    public:
    vector<int> wave(vector<int> Vec) {
        sort(Vec.begin(), Vec.end());
        int N = Vec.size();
        for(int i = 0; i < N - 1; i += 2) {
            swap(Vec[i], Vec[i + 1]);
        }
        return Vec;
    }
};
