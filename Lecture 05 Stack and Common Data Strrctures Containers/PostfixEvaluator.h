#pragma once
#include <stack>
#include <string>
#include <unordered_map>

class PostfixEvaluator {
public:
    int evaluate(const std::string& expression);
private:
    bool isOperator(char ch);
    int applyOperator(int a, int b, char op);
};
