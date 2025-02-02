class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> arr(n);
        for (const auto& b : bookings) {
            int start = b[0] - 1, end = b[1], seats = b[2];
            arr[start] += seats;
            if (end < n) {
                arr[end] -= seats;
            }
        }
        partial_sum(begin(arr), end(arr), begin(arr));
        return arr;
    }
};
