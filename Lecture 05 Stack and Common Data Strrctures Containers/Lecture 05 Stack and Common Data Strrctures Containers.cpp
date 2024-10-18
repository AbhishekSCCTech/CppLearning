#include <iostream>
#include "PostfixEvaluator.h"

int main() {
    PostfixEvaluator evaluator;
    std::string expression = "53+82-*";
    std::cout << "Result of postfix evaluation: " << evaluator.evaluate(expression) << std::endl;
    return 0;
}
