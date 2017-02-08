//
// Created by 王青龙 on 08/02/2017.
//

#include "solution.h"

void Solution::rotate(std::vector<std::vector<int>> &matrix) {
    std::reverse(matrix.begin(), matrix.end());
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = i + 1; j < matrix.size(); ++j) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void Solution::antirotate(std::vector<std::vector<int>> &matrix) {
    for (auto & v:matrix) {//记得用引用才可以
        std::reverse(v.begin(), v.end());
    }
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = i + 1; j < matrix.size(); ++j) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
}
