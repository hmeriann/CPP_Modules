#include <iostream>

class Sample {
public:
    int num;
    void    func(void);
    Sample();
    ~Sample();
};

Sample::Sample()
{

}

Sample::~Sample()
{

}

void    Sample::func()
{
    std::cout << "Sample::func() called" << std::endl;
    return ;
}

int main(void)
{
    Sample one;
    Sample two;

    int Sample::*num_p = NULL;  // Declared pointer to an integer in sample class.
                                // But there could be many integers, which one?

    void (Sample::*f)(void);    // Declared pointer to a function in Sample class.
                                // But again, there could be a few with the same parameters, which one?

    num_p = &Sample::num;   // Now we're talking... but it still could be any instance.
    f = &Sample::func;      // It could point to any instance too, that's the idea.

    (one.*num_p) = 42;
    (two.*num_p) = 32;
    // The same pointer changed values in two different instances..
    std::cout << one.num << std::endl;
    std::cout << two.num << std::endl;


    // For pointer to instances, the syntax is the same as C.. plus the (*)
    Sample *three;
    three = &two;

    (three->*num_p) = 52;
    std::cout << three->num << std::endl;
    std::cout << two.num << std::endl;

    (three->*f)();
    (one.*f)();
    return (0);
}
