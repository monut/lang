// Example program
#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main()
{
 
  typedef pair<int, int> pi;
  priority_queue<pi, vector<pi>, greater<pi> > pq;

  pq.push(make_pair(20,300));
  pq.push(make_pair(10,200));

  while(!pq.empty()) {
    auto x = pq.top();  
    cout << x.first << " " << x.second <<"\n";
    pq.pop();
  }
}
