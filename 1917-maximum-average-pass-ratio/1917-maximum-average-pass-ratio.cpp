class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n = classes.size();
        vector<int> p(n), t(n);
        for (int i = 0; i < n; i++) {
            p[i] = classes[i][0];
            t[i] = classes[i][1];
        }

        // heap array will store indices of classes
        vector<int> heap(n);
        for (int i = 0; i < n; i++) heap[i] = i;

        auto gain = [&](int i) {
            return (double)(p[i] + 1) / (t[i] + 1) - (double)p[i] / t[i];
        };

        auto cmp = [&](int i, int j) {
            return gain(i) < gain(j);
        };

        // build max heap
        make_heap(heap.begin(), heap.end(), cmp);

        while (extraStudents--) {
            // extract max
            pop_heap(heap.begin(), heap.end(), cmp);
            int idx = heap.back();
            heap.pop_back();

            // give one student to this class
            p[idx]++;
            t[idx]++;

            // push it back
            heap.push_back(idx);
            push_heap(heap.begin(), heap.end(), cmp);
        }

        double ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (double)p[i] / t[i];
        }
        return ans / n;
    }
};
