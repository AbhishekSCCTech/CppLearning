#include "PostfixEvaluator.h"

bool PostfixEvaluator::isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

int PostfixEvaluator::applyOperator(int a, int b, char op) {
    switch (op) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    }
    return 0;
}

int PostfixEvaluator::evaluate(const std::string& expression) {
    std::stack<int> s;
    for (char ch : expression) {
        if (isdigit(ch)) {
            s.push(ch - '0'); // Convert char to int
        }
        else if (isOperator(ch)) {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            s.push(applyOperator(a, b, ch));
        }
    }
    return s.top();
}
