#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'quickestWayUp' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. 2D_INTEGER_ARRAY ladders
 *  2. 2D_INTEGER_ARRAY snakes
 */

int bfs(vector<vector<int>> adj, int s, int d){
    vector<int> dist(101, INT_MAX);
    queue<int> q;
    dist[s] = 0;
    q.push(s);
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(auto nbr:adj[s]){
            if(dist[nbr] == INT_MAX){
                dist[nbr] = dist[s] + 1;
                q.push(nbr);
            }
        }
    }
    if(dist[100] != INT_MAX)
    return dist[100];
    return -1;
}

int quickestWayUp(vector<vector<int>> ladders, vector<vector<int>> snakes) {
    // create the board to know the jumps
    vector<int> board(101, 0);
    for(int i=0; i<ladders.size(); i++){
        board[ladders[i][0]] = ladders[i][1] - ladders[i][0];
    }
    for(int i=0; i<snakes.size(); i++){
        board[snakes[i][0]] = snakes[i][1] - snakes[i][0];
    }
    
    // now the board is ready with jump values already 
    // now construct a graph with all edges taking into account the board jumps
    
    vector<vector<int>> adj(101);
    for(int i=1; i<101; i++){
        for(int dice = 1; dice <7; dice++){
            int j = i + dice; // get to a place with a dice throw
            j = j + board[j]; // in case you have a jump , add it 
            // now just create an edge from i to j
            if(j<=100)
            adj[i].push_back(j);
        }
    }
    adj[100].push_back(100);
    
    // now apply bfs for shorted path in unweighted graph from s = 0 to d = 100
    return bfs(adj, 1,100);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        vector<vector<int>> ladders(n);

        for (int i = 0; i < n; i++) {
            ladders[i].resize(2);

            string ladders_row_temp_temp;
            getline(cin, ladders_row_temp_temp);

            vector<string> ladders_row_temp = split(rtrim(ladders_row_temp_temp));

            for (int j = 0; j < 2; j++) {
                int ladders_row_item = stoi(ladders_row_temp[j]);

                ladders[i][j] = ladders_row_item;
            }
        }

        string m_temp;
        getline(cin, m_temp);

        int m = stoi(ltrim(rtrim(m_temp)));

        vector<vector<int>> snakes(m);

        for (int i = 0; i < m; i++) {
            snakes[i].resize(2);

            string snakes_row_temp_temp;
            getline(cin, snakes_row_temp_temp);

            vector<string> snakes_row_temp = split(rtrim(snakes_row_temp_temp));

            for (int j = 0; j < 2; j++) {
                int snakes_row_item = stoi(snakes_row_temp[j]);

                snakes[i][j] = snakes_row_item;
            }
        }

        int result = quickestWayUp(ladders, snakes);

        fout << result << "\n";
    }

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
