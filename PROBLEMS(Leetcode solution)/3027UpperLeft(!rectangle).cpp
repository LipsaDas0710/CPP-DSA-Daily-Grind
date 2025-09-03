// You are given a 2D array points of size n x 2 representing integer coordinates of some points on a 2D-plane, where points[i] = [xi, yi].

// We define the right direction as positive x-axis (increasing x-coordinate) and the left direction as negative x-axis (decreasing x-coordinate). Similarly, we define the up direction as positive y-axis (increasing y-coordinate) and the down direction as negative y-axis (decreasing y-coordinate)

// You have to place n people, including Alice and Bob, at these points such that there is exactly one person at every point. Alice wants to be alone with Bob, so Alice will build a rectangular fence with Alice's position as the upper left corner and Bob's position as the lower right corner of the fence (Note that the fence might not enclose any area, i.e. it can be a line). If any person other than Alice and Bob is either inside the fence or on the fence, Alice will be sad.

// Return the number of pairs of points where you can place Alice and Bob, such that Alice does not become sad on building the fence.

// Note that Alice can only build a fence with Alice's position as the upper left corner, and Bob's position as the lower right corner. For example, Alice cannot build either of the fences in the picture below with four corners (1, 1), (1, 3), (3, 1), and (3, 3), because:

// With Alice at (3, 3) and Bob at (1, 1), Alice's position is not the upper left corner and Bob's position is not the lower right corner of the fence.
// With Alice at (1, 3) and Bob at (1, 1), Bob's position is not the lower right corner of the fence.
 

// brute force approach: check for every pair of points if they can be upper left and lower right corners of a rectangle and if any other point lies inside or on the rectangle formed by these two points.
class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                auto A = points[i];
                auto B = points[j];

                // condition: A is upper-left of B
                if (A[0] <= B[0] && A[1] >= B[1]) {
                    bool valid = true;
                    for (int k = 0; k < n; k++) {
                        if (k == i || k == j) continue;
                        auto P = points[k];

                        if (P[0] >= min(A[0], B[0]) && P[0] <= max(A[0], B[0]) &&
                            P[1] >= min(A[1], B[1]) && P[1] <= max(A[1], B[1])) {
                            valid = false;
                            break;
                        }
                    }
                    if (valid) cnt++;
                }
            }
        }
        return cnt;
    }
};

// optimized 

class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
         int n = points.size();

        // sort by x asc, if tie then y desc
        sort(points.begin(), points.end(), [](const auto &a, const auto &b) { 
            return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0]; 
        });

        int res = 0;

        for (int i = 0; i < n; i++) {
            int b = points[i][1];
            int last = INT_MIN; // fix: allow negative y

            for (int j = i + 1; j < n; j++) {
                int a = points[j][1];
                if (a <= b && a > last) {
                    last = a;
                    ++res;
                }
            }
        }
        return res;
    
    }
};