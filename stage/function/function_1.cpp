#include <cstdio>
#include <iostream>

typedef void (*pfunc_t)(void *arg);

void func_world(void *arg)
{
    printf("Hello_func_world\n");
}
void func_printnum(void *arg)
{
    int x = *(int *)arg;
    printf("%d\n", x);
}
void repeattwice(pfunc_t func, void *arg)
{
    func(arg);
    func(arg);
}

int main()
{
    int x;
    std::cin >> x;
    repeattwice(func_world, NULL);
    repeattwice(func_printnum, &x);
}