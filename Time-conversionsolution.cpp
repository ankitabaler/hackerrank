#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    // Extract AM/PM indicator
    string period = s.substr(8, 2);
    // Extract the hour portion
    int hour = stoi(s.substr(0, 2));
    // Extract the rest of the time string (:MM:SS)
    string rest = s.substr(2, 6);

    if (period == "AM") {
        if (hour == 12) {
            hour = 0; // 12:xx:xxAM -> 00:xx:xx
        }
    } else { // PM
        if (hour != 12) {
            hour += 12; // 01:xx:xxPM -> 13:xx:xx
        }
    }

    // Format hour as a 2-digit string
    stringstream ss;
    ss << setfill('0') << setw(2) << hour << rest;

    return ss.str();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}