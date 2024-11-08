#include <cstdio>
#include <iostream>

struct func_printnum_t
{
    void operator()() const
    {
        printf("%d %d\n", x, y);
    }
    int &x;
    int &y;
};

template <class Fn>
void repeattwice(Fn const &func)
{
    func();
    func();
}

int main()
{
    int x;
    int y;
    std::cin >> x >> y;

    func_printnum_t a{x, y};
    repeattwice(a);

    repeattwice([&x, &y] { printf("%d %d\n", x, y); });
}