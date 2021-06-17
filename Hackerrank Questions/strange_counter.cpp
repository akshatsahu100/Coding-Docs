#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'strangeCounter' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER t as parameter.
 */

long strangeCounter(long t) {
    // find the cycle number
    long cycle_no = 0;
    for(long i=0; i<64; i++){
        long GP_sum = 3 * (pow(2,i)-1);
        if(t<=GP_sum){
            cycle_no = i;
            break;
        }
    }
    
    // find the start point of that cycle
    long start_counter = 3 * pow(2, cycle_no - 1);
    long GP_sum = 3 * (pow(2,cycle_no-1)-1);
    long myans = start_counter  - (t - GP_sum) + 1;
    
    return myans;
    // do t - start point
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    long t = stol(ltrim(rtrim(t_temp)));

    long result = strangeCounter(t);

    fout << result << "\n";

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
