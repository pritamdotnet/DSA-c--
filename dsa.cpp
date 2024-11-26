#include <iostream>
#include <vector>
#include <list> 
using namespace std;

// size, erase, clear, begin, end, rbegin, rend, insert, front, back
int main(){
  list<int> l;

  l.push_back(1);
  l.push_back(2);
  l.push_front(3);
  l.push_front(4);

  for(int val : l){
    cout << val << " ";
  }
  cout << endl;

  return 0;
}