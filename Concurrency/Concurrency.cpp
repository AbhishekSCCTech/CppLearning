#include "ProducerConsumer.h"

int main() {
    ProducerConsumer pc;
    thread producer(&ProducerConsumer::Produce, &pc);
    thread consumer(&ProducerConsumer::Consume, &pc);

    producer.join(); // Wait for producer
    consumer.join(); // Wait for consumer

    return 0;
}
