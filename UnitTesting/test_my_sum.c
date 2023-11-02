#include <assert.h>
int my_sum(int a ,int b){
    return a+b;
}


int main()
{
    assert(2 == my_sum(1, 1));
    assert(-2 == my_sum(-1, -1));
    assert(2 == my_sum(0, 0));
    return(0);
}