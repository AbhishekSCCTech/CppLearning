#pragma once
class NaturalNumberSum
{
public:
    NaturalNumberSum() : callCount(0) {}
    int sum(int n);
    int getCallCount() const { return callCount; }

private:
    int callCount;
};

