#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

// To execute C++, please define "int main()"


template<typename T>
ostream& operator<<(ostream& os, const list<T>& v){
    for(auto val : v){
        os << val << " ";
    }
    return os;
}

int main() {
    list<int> lst1 = {1,2,3,4};
    list<int> lst2;
    
    lst2.splice(lst2.end(), lst1);
    cout << " lst2 " << lst2 << endl;
    cout << " lst1 " << lst1 << endl;
    
    auto it = lst2.begin();
    advance(it,2); 
    
    lst1.splice(lst1.end(), lst2, it);
    cout << " lst2 " << lst2 << endl;
    cout << " lst1 " << lst1 << endl;
    
    it = lst2.begin();
    advance(it,1); 
    
    // insert the element starting from lst1.begin() 
    // pushes the elements back from that position
 
    lst1.splice(lst1.begin(), lst2, it, lst2.end());
    cout << " lst2 " << lst2 << endl;
    cout << " lst1 " << lst1 << endl;
    
}

