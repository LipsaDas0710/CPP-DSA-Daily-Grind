// Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

// Each row must contain the digits 1-9 without repetition.
// Each column must contain the digits 1-9 without repetition.
// Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
// Note:

// A Sudoku board (partially filled) could be valid but is not necessarily solvable.
// Only the filled cells need to be validated according to the mentioned rules.
 

// Example 1:


// Input: board = 
// [["5","3",".",".","7",".",".",".","."]
// ,["6",".",".","1","9","5",".",".","."]
// ,[".","9","8",".",".",".",".","6","."]
// ,["8",".",".",".","6",".",".",".","3"]
// ,["4",".",".","8",".","3",".",".","1"]
// ,["7",".",".",".","2",".",".",".","6"]
// ,[".","6",".",".",".",".","2","8","."]
// ,[".",".",".","4","1","9",".",".","5"]
// ,[".",".",".",".","8",".",".","7","9"]]
// Output: true
// Example 2:

// Input: board = 
// [["8","3",".",".","7",".",".",".","."]
// ,["6",".",".","1","9","5",".",".","."]
// ,[".","9","8",".",".",".",".","6","."]
// ,["8",".",".",".","6",".",".",".","3"]
// ,["4",".",".","8",".","3",".",".","1"]
// ,["7",".",".",".","2",".",".",".","6"]
// ,[".","6",".",".",".",".","2","8","."]
// ,[".",".",".","4","1","9",".",".","5"]
// ,[".",".",".",".","8",".",".","7","9"]]
// Output: false
// Explanation: Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.
 

// Constraints:

// board.length == 9
// board[i].length == 9
// board[i][j] is a digit 1-9 or '.'.


#include <vector>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        char c=' ';
        for(int i=0;i<board.size();i++){
            for(int j=0; j<board[0].size();j++){
                if(board[i][j]!='.'){
                    c=board[i][j];
                    if(!isValid(board, i , j, c)){
                        return false;
                    }
                }
             
                
            }
        }
        return true;
    }
    bool isValid(vector<vector<char>>& board, int row, int col, char c){
        for(int i=0; i<9; i++){
            if(i!= row && board[i][col]==c) return false;
            if(i!= col && board[row][i]==c) return false;
            int boxRow = 3 * (row / 3) + i / 3;
            int boxCol = 3 * (col / 3) + i % 3;
            if((boxRow != row || boxCol != col) && board[3*(row/3)+i/3][3*(col/3)+i%3]==c) return false;
        }
        return true;
    } 
};


// int boxRow = 3 * (row / 3) + i / 3;
// int boxCol = 3 * (col / 3) + i % 3;


// to find the starting point of the box of 3x3 part we are ding row/3 and col/3
// then multiply by 3 to get the starting point of that box

// then we add i/3 and i%3 to traverse through the box
// we are doing i/3 for row as we are checking all the column first then moving to next row

// and i%3 for column as we are checking all the rows first then moving to next column

// i	i/3	i%3	boxRow	boxCol	Position	Label
// 0	0	0	3+0=3	3+0=3	(3,3)	a
// 1	0	1	3+0=3	3+1=4	(3,4)	b
// 2	0	2	3+0=3	3+2=5	(3,5)	c
// 3	1	0	3+1=4	3+0=3	(4,3)	d
// 4	1	1	3+1=4	3+1=4	(4,4)	e
// 5	1	2	3+1=4	3+2=5	(4,5)	f
// 6	2	0	3+2=5	3+0=3	(5,3)	g
// 7	2	1	3+2=5	3+1=4	(5,4)	h
// 8	2	2	3+2=5	3+2=5	(5,5)	i