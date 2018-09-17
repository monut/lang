#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// To execute C++, please define "int main()"

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v){
    for(auto val : v){
        os << val << " ";
    }
    return os;
}

int main() {
    vector<int> v = {1,2,3,4,5};
   
    vector<vector<int>> v2;
    int st = 0;
    int i = 2;
     
    v2.emplace_back(v.cbegin()+st, v.cbegin() +i );
    
    cout << v2;
    
    vector<int> v3(v.begin()+st, v.begin() + i);
    
    vector<int> v4;
    copy(v.begin() + st, v.begin() + i, back_inserter(v4));
    
    
    cout << " v4 " << v4;
    
}

