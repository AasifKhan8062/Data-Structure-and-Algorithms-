#include <algorithm>
#include <array>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

void STLarray() {
  array<int, 5> arr = {1, 2, 3, 4, 5};
  cout << "Print Array Element ";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "Size of Array " << arr.size() << endl;
  cout << "1 index Element in Array " << arr.at(1) << endl;
  cout << "Empty of Array " << arr.empty() << endl;
  cout << "Front Element In Array " << arr.front() << endl;
  cout << "Back Element In  Array " << arr.back() << endl;
  cout << endl;
}

void STLvecter() {
  vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);

  cout << "push_back Element In  vector ";
  for (int i : vec) {
    cout << i << " ";
  }
  cout << endl;
  vec.pop_back();
  cout << "pop_back Element In  vector ";
  for (int i : vec) {
    cout << i << " ";
  }
  cout << endl;
  cout << "Size of vector " << vec.size() << endl;
  cout << "Capacity of vector " << vec.capacity() << endl;
  vector<int> stlvec(vec);
  cout << "Copy Element of vector";
  for (int i : vec) {
    cout << i << " ";
  }
  cout << endl;
  vector<int> Stlvec(5, 1);
  Stlvec.push_back(2);
  Stlvec.push_back(3);
  Stlvec.push_back(4);
  cout << "Size Vecter Element ";
  for (int i : Stlvec) {
    cout << i << " ";
  }
}

void STLdeque() {
  deque<int> que;
  que.push_back(1);
  que.push_back(2);
  que.push_front(3);
  que.push_front(4);
  cout << "push_front && push_back Element of deque " << endl;
  for (int i : que) {
    cout << i << " ";
  }
  cout << endl;
  cout << "pop_front && pop_back Element of deque " << endl;
  que.pop_back();
  que.pop_front();
  for (int i : que) {
    cout << i << " ";
  }
  cout << endl;
  que.erase(que.begin(), que.end() - 2);
  cout << "Erase Element of deque " << endl;
  for (int i : que) {
    cout << i << " ";
  }
  cout << endl;
  cout << "Size of deque " << que.size() << endl;
  cout << "empty Of deque " << que.empty() << endl;
  cout << "Maximun Size Of deque " << que.max_size() << endl;
}

void STLlist() {
  list<int> List;
  List.push_back(1);
  List.push_back(4);
  List.push_front(2);
  List.push_front(3);
  cout << "push_front && push_back List Element " << endl;
  for (int i : List) {
    cout << i << " ";
  }
  cout << endl;
  List.pop_front();
  List.pop_back();
  cout << "pop_front && pop_back List Element " << endl;
  for (int i : List) {
    cout << i << " ";
  }
  cout << endl;
  cout << "Size of List " << List.size() << endl;
  cout << "empty Of List " << List.empty() << endl;
  cout << "Maximun Size Of List " << List.max_size() << endl;
}

void STLstack() {
  stack<int> Stack;
  Stack.push(1);
  Stack.push(2);
  Stack.push(3);
  Stack.push(4);
  Stack.push(5);
  cout << "Push Element " << endl;
  Stack.pop();
  Stack.pop();
  Stack.pop();
  cout << "Pop Element " << endl;
  cout << "Top elemet in Stack " << Stack.top() << endl;
  cout << "Size elemet in Stack " << Stack.size() << endl;
  cout << "Empty elemet in Stack " << Stack.empty() << endl;
}

void STLqueue() {
  queue<int> Queue;
  Queue.push(1);
  Queue.push(2);
  Queue.push(3);
  Queue.push(4);
  Queue.push(5);
  cout << "Push Element " << endl;
  Queue.pop();
  Queue.pop();
  Queue.pop();
  cout << "Pop Element " << endl;
  cout << "Top elemet in Stack " << Queue.front() << endl;
  cout << "Size elemet in Stack " << Queue.size() << endl;
  cout << "Empty elemet in Stack " << Queue.empty() << endl;
}
void STLpriority() {
  priority_queue<int> maxi;
  priority_queue<int, vector<int>, greater<int>> mini;
  cout << "Maxi Heap " << endl;
  maxi.push(1);
  maxi.push(2);
  maxi.push(3);
  maxi.push(4);
  maxi.push(5);
  cout << "Push Element " << endl;
  cout << "Top elemet in Stack " << maxi.top() << endl;
  cout << "Pop Element " << endl;
  int n = maxi.size();
  for (int i = 0; i < n; i++) {
    cout << maxi.top() << " ";
    maxi.pop();
  }
  cout << endl;
  cout << "Size elemet in Stack " << maxi.size() << endl;
  cout << "Empty elemet in Stack " << maxi.empty() << endl;
  cout << endl;
  cout << "Mini Heap " << endl;
  mini.push(5);
  mini.push(4);
  mini.push(3);
  mini.push(2);
  mini.push(1);
  cout << "Push Element " << endl;
  cout << "Top elemet in Stack " << mini.top() << endl;
  cout << "Pop Element " << endl;
  int N = mini.size();
  for (int i = 0; i < N; i++) {
    cout << mini.top() << " ";
    mini.pop();
  }
  cout << endl;
  cout << "Size elemet in Stack " << mini.size() << endl;
  cout << "Empty elemet in Stack " << mini.empty() << endl;
}

void STLset() {
  set<int> Set;
  cout << "Insert Element " << endl;
  Set.insert(1);
  Set.insert(2);
  Set.insert(3);
  Set.insert(4);
  Set.insert(5);

  for (auto i : Set) {
    cout << i << " ";
  }
  cout << endl;
  cout << "5 Is Present or Not " << Set.count(5) << endl;
  cout << "Erase In Element " << Set.erase(5) << endl;
  cout << "Find Element " << endl;
  set<int>::iterator its = Set.find(2);
  for (auto i = its; i != Set.end(); i++) {
    cout << *i << " ";
  }
  cout << endl;
  cout << "Size In Element " << Set.size() << endl;
}
void STLmultiset() {
  multiset<int> Set;
  cout << "Insert Element " << endl;
  Set.insert(1);
  Set.insert(2);
  Set.insert(3);
  Set.insert(4);
  Set.insert(5);

  for (auto i : Set) {
    cout << i << " ";
  }
  cout << endl;
  cout << "5 Is Present or Not " << Set.count(5) << endl;
  cout << "Erase In Element " << Set.erase(5) << endl;
  cout << "Find Element " << endl;
  set<int>::iterator its = Set.find(2);
  for (auto i = its; i != Set.end(); i++) {
    cout << *i << " ";
  }
  cout << endl;
  cout << "Size In Element " << Set.size() << endl;
}
void STLunorderedset() {
  unordered_set<int> Set;
  cout << "Insert Element" << endl;
  Set.insert(1);
  Set.insert(2);
  Set.insert(3);
  Set.insert(4);
  Set.insert(5);

  for (auto i : Set) {
    cout << i << " ";
  }
  cout << endl;
  cout << "5 Is Present or Not " << Set.count(5) << endl;
  cout << "Erase In Element " << Set.erase(5) << endl;
  cout << "Find Element " << endl;
  unordered_set<int>::iterator its = Set.find(2);
  for (auto i = its; i != Set.end(); i++) {
    cout << *i << " ";
  }
  cout << endl;
  cout << "Size In Element " << Set.size() << endl;
}
void STLunorderedmultiset() {
  unordered_multiset<int> Set;
  cout << "Insert Element" << endl;
  Set.insert(1);
  Set.insert(2);
  Set.insert(3);
  Set.insert(4);
  Set.insert(5);

  for (auto i : Set) {
    cout << i << " ";
  }
  cout << endl;
  cout << "5 Is Present or Not " << Set.count(5) << endl;
  cout << "Erase In Element " << Set.erase(5) << endl;
  cout << "Find Element " << endl;
  unordered_set<int>::iterator its = Set.find(2);
  for (auto i = its; i != Set.end(); i++) {
    cout << *i << " ";
  }
  cout << endl;
  cout << "Size In Element " << Set.size() << endl;
}

void STLmap() {
  map<int, int> Map;
  Map[1] = 1;
  Map[2] = 2;
  Map[3] = 3;
  Map[4] = 4;
  Map[5] = 5;
  cout << "Print Element " << endl;
  for (auto i : Map) {
    cout << i.first << " " << i.second << endl;
  }
  cout << "Count Element " << Map.count(4) << endl;
  cout << "Erase In Element " << Map.erase(5) << endl;
  cout << "Size In Element " << Map.size() << endl;
  cout << "Find Element " << endl;
  auto its = Map.find(2);
  for (auto i = its; i != Map.end(); i++) {
    cout << (*i).first << " ";
  }
}
void STLmultimap() {
  multimap<int, int> Map;
  Map.insert({1, 1});
  Map.insert({2, 2});
  Map.insert({3, 3});
  Map.insert({4, 4});
  Map.insert({5, 5});
  cout << "Print Element " << endl;
  for (auto i : Map) {
    cout << i.first << " " << i.second << endl;
  }
  cout << "Count Element " << Map.count(4) << endl;
  cout << "Erase In Element " << Map.erase(5) << endl;
  cout << "Size In Element " << Map.size() << endl;
  cout << "Find Element " << endl;
  auto its = Map.find(2);
  for (auto i = its; i != Map.end(); i++) {
    cout << (*i).first << " ";
  }
}
void STLunodermap() {
  unordered_map<int, int> Map;
  Map.insert({1, 1});
  Map.insert({2, 2});
  Map.insert({3, 3});
  Map.insert({4, 4});
  Map.insert({5, 5});
  cout << "Print Element " << endl;
  for (auto i : Map) {
    cout << i.first << " " << i.second << endl;
  }
  cout << "Count Element " << Map.count(4) << endl;
  cout << "Erase In Element " << Map.erase(5) << endl;
  cout << "Size In Element " << Map.size() << endl;
  cout << "Find Element " << endl;
  auto its = Map.find(2);
  for (auto i = its; i != Map.end(); i++) {
    cout << (*i).first << " ";
  }
}
void STLunodermultimap() {
  unordered_multimap<int, int> Map;
  Map.insert({1, 1});
  Map.insert({2, 2});
  Map.insert({3, 3});
  Map.insert({4, 4});
  Map.insert({5, 5});
  cout << "Print Element " << endl;
  for (auto i : Map) {
    cout << i.first << " " << i.second << endl;
  }
  cout << "Count Element " << Map.count(4) << endl;
  cout << "Erase In Element " << Map.erase(5) << endl;
  cout << "Size In Element " << Map.size() << endl;
  cout << "Find Element " << endl;
  auto its = Map.find(2);
  for (auto i = its; i != Map.end(); i++) {
    cout << (*i).first << " ";
  }
}

void STLalgorithm() {
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  cout << "binary_search Element " << binary_search(v.begin(), v.end(), 5)
       << endl;
  cout << "Lower Bound Element "
       << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
  cout << "Upper Bound Element "
       << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;
  auto maxi = max_element(v.begin(), v.end());
  cout << "Maximum Element " << *maxi << endl;
  auto mini = min_element(v.begin(), v.end());
  cout << "Minimum Element " << *mini << endl;
  swap(maxi, mini);
  cout << "Swap Element " << *maxi << " " << *mini << endl;

  rotate(v.begin(), v.begin() + 2, v.end());
  cout << "Rotate Element " << endl;
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
  sort(v.begin(), v.end());
  cout << "Sorted vector: ";
  for (auto j : v) {
    cout << j << " ";
  }
  cout << endl;
  string str = "ABCDE";
  reverse(str.begin(), str.end());
  cout << "Reverse Element " << str << endl;
}

int main() {
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLarray();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLvecter();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLdeque();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLlist();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLstack();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLqueue();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLpriority();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLset();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLmap();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLmultimap();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLunodermap();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLunodermultimap();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLmultiset();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLunorderedset();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLunorderedmultiset();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  STLalgorithm();
  cout<<endl;
  cout<<"****************************************************"<<endl;
  cout<<endl;
  return 0;
}