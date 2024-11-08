#include <cstdio>
#include <iostream>

struct printnum_args_t
{
    int &x;
    int &y;
};
typedef void (*pfunc_t)(void *arg);

void func_world(void *arg)
{
    printf("Hello_func_world\n");
}
void func_printnum(void *arg)
{
    auto a = (printnum_args_t *)arg;
    printf("%d %d\n", a->x, a->y);
}
void repeattwice(pfunc_t func, void *arg)
{
    func(arg);
    func(arg);
}

int main()
{
    int x;
    int y;
    std::cin >> x >> y;
    repeattwice(func_world, NULL);

    printnum_args_t a{x, y};
    repeattwice(func_printnum, &a);

    std::cin >> x >> y;
    repeattwice(func_printnum, &a);
}