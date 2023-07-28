#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        for (int r = 0; r < 9; r++)
        {
            unordered_set<char> check_row;

            for (int c = 0; c < 9; c++)
            {
                if (board[r][c] != '.' && check_row.find(board[r][c]) != check_row.end())
                {
                    return false;
                }
            
                check_row.insert(board[r][c]);
            }

        }

        for (int c = 0; c < 9; c++)
        {
            unordered_set<char> check_col;

            for (int r = 0; r < 9; r++)
            {
                if (board[r][c] != '.' && check_col.find(board[r][c]) != check_col.end())
                {
                    return false;
                }

                check_col.insert(board[r][c]);
            }

        }

        vector<unordered_set<char>> subbox(9);
        for (int r = 0; r < 9; r++)
        {
            for (int c = 0; c < 9; c++)
            {
                int index = (c / 3) + 3 * (r / 3);

                if (board[r][c] != '.' && subbox[index].find(board[r][c]) != subbox[index].end())
                {
                    return false;
                }

                subbox[index].insert(board[r][c]);
            }


        }

        return true;





    }
};