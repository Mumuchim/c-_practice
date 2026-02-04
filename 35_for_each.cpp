#include <iostream>

// foreach loop = loop that eases the traversal over an
//                            iterable data set

int main()
{
    std::string manaloto[] = {"Pepito", "Elsa", "Chito", "Clarissa"};

    for (std::string family : manaloto) // boset may ganto pala so better to and same sa
                                        // sizeof(array)/sizeof(data_type)
    {
        std::cout << family << '\n';
    }

    int body_count[] = {1, 2, 3, 4, 5};

    for (int this_array : body_count) // yep less syntax sya pero not flexible
    {
        std::cout << this_array << '\n';
    }

    return 0;
}
