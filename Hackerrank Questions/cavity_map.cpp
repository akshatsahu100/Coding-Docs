#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'cavityMap' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY grid as parameter.
 */

vector<string> cavityMap(vector<string> grid) {
    vector<string> ans(grid.size());
    for(int i=0; i<grid.size(); i++){
        string temp = "";
        for(int j=0; j<grid[i].size(); j++){
            if(i>0 && i<grid.size() - 1 && j>0 && j<grid[i].size() - 1){
                if(grid[i][j] > grid[i-1][j] && grid[i][j] > grid[i][j-1] && grid[i][j] >  grid[i+1][j] && grid[i][j] > grid[i][j+1]){
                    temp += "X";
                }
                else{
                    temp += grid[i][j];
                }
            }
            else{
                temp += grid[i][j];
            }
        }
        ans[i] = temp;
    }
    
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
