#ifndef _COUNTER_H_
#define _COUNTER_H
class Counter
{
    private:
        int counter_value {0};
        int max_counter_value;
        
    public:
        Counter(int);

        void increment();

        void decrement();

        int getCounter() const;
};

#endif