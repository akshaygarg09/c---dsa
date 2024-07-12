#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // Min-heap to store the top k largest elements
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int num : nums) {
            minHeap.push(num);

            // If the heap size exceeds k, remove the smallest element
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        // The top element of the min-heap is the kth largest element
        return minHeap.top();
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {3, 2, 1, 5, 6, 4};
    int k1 = 2;
    cout << "The " << k1 << "th largest element in [3, 2, 1, 5, 6, 4] is " << solution.findKthLargest(nums1, k1) << endl;

    vector<int> nums2 = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k2 = 4;
    cout << "The " << k2 << "th largest element in [3, 2, 3, 1, 2, 4, 5, 5, 6] is " << solution.findKthLargest(nums2, k2) << endl;

    return 0;
}
