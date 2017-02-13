//
// Created by 王青龙 on 13/02/2017.
//

#include "solution2.h"

void Solution2::rotate(std::vector<std::vector<int>> &matrix) {
    std::reverse(matrix.begin(), matrix.end());
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
}
