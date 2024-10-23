#pragma once

#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>

using namespace std;

class ProducerConsumer {
public:
    ProducerConsumer();
    void Produce();
    void Consume();
private:
    atomic<int> data;
    atomic<bool> ready;
};
