#include "Counter.h"

Counter::Counter(int max_value)
:max_counter_value{max_value}
{}

void Counter::increment(){
    if (counter_value < max_counter_value)
        counter_value++;
}

void Counter::decrement(){
    if (counter_value > 0)
        counter_value--;
}

int Counter::getCounter() const {
    return counter_value;
}