class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        int n=q.size();
        if (k <= 0 || k > n) {
            return q;
        }
        stack<int> st;
        for(int i=0; i<k; i++){
            int x=q.front();
            st.push(x);
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        int elements_to_rotate = n - k;
        for (int i = 0; i < elements_to_rotate; i++) {
            int x = q.front();
            q.pop();
            q.push(x);
        }
        return q;
    }
};