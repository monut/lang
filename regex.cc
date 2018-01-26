#include <iostream>
#include <regex>
#include <algorithm>
#include <string>

using namespace std;

template <typename T>
ostream&
operator<<(ostream& os, vector<T> v) {
        for( auto val : v) {
                cout << val << " ";
        }
        cout << endl;
}

int
main() {
        string ip = "198.10.2.3";
        regex re("\\.");
        vector<string> v1;
        copy(sregex_token_iterator(ip.begin(), ip.end(), re, -1),
                sregex_token_iterator(), back_inserter(v1));
        cout << v1;
}

