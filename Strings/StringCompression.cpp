#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0;  // Write index
        int i = 0;    // Read index

        while (i < chars.size()) {
            char current = chars[i];
            int count = 0;

            // Count occurrences of the current character
            while (i < chars.size() && chars[i] == current) {
                i++;
                count++;
            }

            chars[idx++] = current;  // Write the character

            // Write the count if greater than 1
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[idx++] = c;
                }
            }
        }

        return idx;
        
    }
};

int main() {
    Solution solution;
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    
    int newLength = solution.compress(chars);
    
    cout << "Compressed length: " << newLength << endl;
    cout << "Compressed characters: ";
    for (int i = 0; i < newLength; i++) {
        cout << chars[i];
    }
    cout << endl;

    return 0;
}