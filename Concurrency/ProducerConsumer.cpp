#include "ProducerConsumer.h"

ProducerConsumer::ProducerConsumer() : data(0), ready(false) {}

void ProducerConsumer::Produce() {
    for (int i = 1; i <= 5; ++i) {
        data = i; 
        ready = true; // data ready
        cout << "Produced: " << data << endl;
        this_thread::sleep_for(chrono::milliseconds(500)); // Simulate work
    }
    ready = false; 
}

void ProducerConsumer::Consume() {
    while (true) {
        if (ready) {
            cout << "Consumed: " << data << endl;
            this_thread::sleep_for(chrono::milliseconds(1000)); // Simulate processing
        }
        if (!ready) break; //  no more data
    }
}
