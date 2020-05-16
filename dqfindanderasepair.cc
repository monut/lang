#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main ()
{

  deque<pair<int, int> > mydeque;

  mydeque.emplace_back(200, 30);
  mydeque.emplace_back(300, 35);
  mydeque.emplace_back(400, 38);
  mydeque.emplace_back(500, 39);
  
  cout << "mydeque contains:";
  for (auto& x: mydeque) {
        cout << "{ " << x.first << " " << x.second <<  " }" << endl;
  }
  cout << '\n';
  
  // int val_to_find = 900;
  int val_to_find = 400;
  auto it = find_if(mydeque.begin(), mydeque.end(), [val_to_find](pair<int, int> a) {
  return a.first == val_to_find;});
  if(it != mydeque.end()) {
    cout << "{ " << it->first << " " << it->second <<  " }" << endl;
    mydeque.erase(it);
  } else {
    cout << "Not found " << val_to_find << endl;
  }
  cout << "After erasing " << endl;
  for (auto& x: mydeque) {
    cout << "{ " << x.first << " " << x.second <<  " }" << endl;
  }
  cout << '\n';
  
  return 0;
}
