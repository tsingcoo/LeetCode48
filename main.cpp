#include <iostream>
#include "solution.h"
#include "solution2.h"
int main() {

    Solution2 s;
    std::vector<std::vector<int>> matrix;
    matrix.push_back({1,2,3});
    matrix.push_back({4,5,6});
    matrix.push_back({7,8,9});

    s.rotate(matrix);
    for(auto i = matrix.begin(); i !=matrix.end(); ++i){
        for(auto j = i->begin(); j != i->end(); ++j){
            std::cout<<*j<<" ";
        }
        std::cout<<std::endl;
    }

//    std::cout<<"==========="<<std::endl;
//
//    s.antirotate(matrix);
//    for(auto i = matrix.begin(); i !=matrix.end(); ++i){
//        for(auto j = i->begin(); j != i->end(); ++j){
//            std::cout<<*j<<" ";
//        }
//        std::cout<<std::endl;
//    }

    return 0;
}