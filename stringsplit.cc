#include <iostream>
#include <deque>

using namespace std;
int main ()
{
    int rd = 45;
    int msg = 665;
    string val = to_string(rd) + ":" + to_string(msg);
    // string val = to_string(rd);
    cout << val << endl;
    auto pos = val.find(":");
    if (pos == string::npos) {
        cout << "Not found";
    }
    cout << "pos " << pos << endl;
    rd = stoull(val.substr(0,pos));
    msg = stoull(val.substr(pos+1));
    cout << rd << " : " << msg;
   
   return 0;
}
