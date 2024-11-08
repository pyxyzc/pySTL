#include <iostream>

class File
{
public:
    void *p = nullptr;

    File(const char *path)
    {
        std::cout << "File::File()" << std::endl;
        p = malloc(1);
        std::cout << "malloc(" << p << ")" << std::endl;
    }
    ~File()
    {
        std::cout << "File::~File()" << std::endl;
        std::cout << "free(" << p << ")" << std::endl;
        free(p);
    }
    // File(const File &)
    // {
    //     std::cout << "File::File(const File &)" << std::endl;
    // }
    // File &operator=(const File &)
    // {
    //     std::cout << "File::operator=(const File &)" << std::endl;
    //     return *this;
    // }
    // File(File &&)
    // {
    //     std::cout << "File::File(File &&)" << std::endl;
    // }
};

void loadpng(File file)
{
    std::cout << "loadpng...begin" << std::endl;
    std::cout << "loadpng...end" << std::endl;
}

int main()
{
    if (1)
    {
        std::cout << "1" << std::endl;
        auto a = File("a.txt");
        loadpng(a);
        std::cout << "2" << std::endl;
    }

    std::cout << "3" << std::endl;
    return 0;
}