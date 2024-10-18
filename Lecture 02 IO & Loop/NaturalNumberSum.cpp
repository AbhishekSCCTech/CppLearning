#include "NaturalNumberSum.h"
int NaturalNumberSum::sum(int n) {
    callCount++;
    return (n <= 0) ? 0 : n + sum(n - 1);
}