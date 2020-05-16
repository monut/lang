#include <queue>
using namespace std;

using pp = pair<uint64_t, uint64_t>;

auto comp = [](pp a, pp b) { return a.first > b.first;}; 

class MyHeap {

public:
    MyHeap(){};
    void PushHeap(pp arg){
            pq_.push(arg);
        };
    void PopHeap(){
            cout << " " << pq_.top().first << " " << pq_.top().second << endl;
            pq_.pop();
        };
private:
    
    
    priority_queue<pp, vector<pp>,decltype(comp)> pq_{comp};    
};

int main()
{
    MyHeap minhp;
    minhp.PushHeap(make_pair(40, 65));
    minhp.PushHeap(make_pair(80, 75));
    minhp.PushHeap(make_pair(20, 100));
    
    minhp.PopHeap();
    minhp.PopHeap();
    minhp.PopHeap();
    
}
