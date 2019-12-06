//
// Created by bigsaem on 2019-12-06.
//

#ifndef LAB10_HEAP_HPP
#define LAB10_HEAP_HPP

#include "vector"

using namespace std;
template <typename T, typename container >
class heap{
private:
    vector<T> list;
    container originalList;
    void heapify(){
        std::make_heap(list.begin(),list.end());
    }
public:
    heap() = default;
    heap(container original):originalList(original){
        typename container::iterator it;
        for(it = original.begin(); it < original.end(); ++it){
            list.push_back(*it);
        }
        heapify();
    }
    T pop(){
        T  first = list.front();
        list.erase(list.begin());
        return first;
    }
    int size(){
        return list.size();
    }
    bool is_empty(){
        return list.size() == 0? true: false;
    }
    bool clear(){
        for(auto it = list.begin(); it <list.end(); ++it){
            delete it;
        }
    }
    vector<T> getList(){
        return list;
    }

};
#endif //LAB10_HEAP_HPP
