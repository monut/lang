#include <iostream>
#include <string>
#include <vector>
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
    
    // this can also be done in the ctor initialization list
    // isto of decltype we can use std::function to provide a type of comparator
    // or use a static calss function to for comparator
    // reference https://stackoverflow.com/questions/16111337/declaring-a-priority-queue-in-c-with-a-custom-comparator/48587737#48587737
    // https://stackoverflow.com/questions/39797031/defining-priority-queue-inside-a-class-with-a-custom-comparator-function
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
