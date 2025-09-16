class MaxHeap {
    public:
        int size;
        int capacity;
        int* nums;
        MaxHeap(int cap) {
            capacity = cap;
            size = 0;
            nums = new int[capacity];
        }

        int parent(int i) {
            return (i-1)/2;
        }

        int left(int i) {
            return (i*2 + 1);
        }

        int right(int i) {
            return (i*2 + 2);
        }

        void insert(int x){
            if(size == capacity){
                cout << "Binary Heap Overflow" << endl;
                return;
            }
            nums[size] = x;
            int k = size;
            size++;
            while(k != 0 && nums[parent(k)] < nums[k]){
                swap(&nums[parent(k)], &nums[k]);
                k = parent(k);
            }
        }
        void heapify(int i){
            int l = left(i);
            int r = right(i);
            int largest = i;
            if(l < size && nums[l] > nums[largest]){
                largest = l;
            }
            if(r < size && nums[r] > nums[largest]){
                largest = r;
            }
            if(largest != i){
                swap(&nums[largest], &nums[i]);
                heapify(largest);
            }
        }
        int ExtractMin() {
            if (size <= 0)
                return INT_MAX;
            if (size == 1) {
                size--;
                return nums[0];
            }
            int mini = nums[0];
            nums[0] = nums[size - 1];  
            size--;
            heapify(0);  
            return mini;
        }
        void swap(int* a, int* b){
            int temp = *a;
            *a = *b;
            *b = temp;
        }
        void print() {
            for (int i = 0; i < size; i++)
                cout << nums[i] << " ";
            cout << endl;
        }
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        MaxHeap h(nums.size());
        for(auto a : nums){
            h.insert(a);
        }
        for(int i = 0; i < k - 1;i++){
            h.ExtractMin();
        }
        return h.ExtractMin();
    }
};

