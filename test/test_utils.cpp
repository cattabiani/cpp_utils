#include "../src/utils.hpp"
#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>

using namespace std;

TEST(JsonParserTest, BasicParsing) {
    std::ostringstream oss;

    vector<pair<int, char>> a{{1, 'a'}, {2, 'b'}, {3, 'c'}};
    unordered_map<int, vector<int>> b{{1, {1, 2}}, {2, {3, 4, 5}}};
    vector<string> c{"bau", "miao"};
    oss << a;
    ASSERT_EQ(oss.str(), "{1: a, 2: b, 3: c}");
    oss.str("");
    oss << b;
    ASSERT_EQ(oss.str(), "{2: [3, 4, 5], 1: [1, 2]}");
    oss.str("");
    oss << c;
    ASSERT_EQ(oss.str(), "[\"bau\", \"miao\"]");
}
