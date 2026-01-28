/* typedef:
            - reserved keyword used to create an additional name
            - alias for another data type.
            - new identifier for an existing type
            - help with readability and reduces typos
*/

#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t; // this is an advanced data type but it's long so bro will make it shorter by defining it.
                                                             // this is the alias

// another example is that to shorten typing like
typedef std::string text_t;
typedef int number_t;

// but using is better
//  using text_t = std::string; is the same
//  using number_t = int; also works the same

int main()
{
    using std::cout;

    text_t firstName = "bro";
    number_t age = 21;

    cout << firstName << '\n';
    cout << age << '\n';

    return 0;
}