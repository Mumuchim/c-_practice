#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

int main()
{
    std::string answer;

    std::cout << "LOVE MO PABA AQ?? :<\nPlease type your answer: ";
    std::getline(std::cin, answer);

    std::transform(answer.begin(), answer.end(), answer.begin(),
                   [](unsigned char c)
                   { return std::tolower(c); });

    // Expanded affirmative keywords
    if (answer.find("yes") != std::string::npos ||
        answer.find("yep") != std::string::npos ||
        answer.find("yup") != std::string::npos ||
        answer.find("yeah") != std::string::npos ||
        answer.find("of course") != std::string::npos ||
        answer.find("sure") != std::string::npos ||
        answer.find("definitely") != std::string::npos ||
        answer.find("totally") != std::string::npos ||
        answer.find("absolutely") != std::string::npos ||
        answer.find("certainly") != std::string::npos ||
        answer.find("oo") != std::string::npos ||
        answer.find("syempre") != std::string::npos ||
        answer.find("sigurado") != std::string::npos ||
        answer.find("oo naman") != std::string::npos ||
        answer.find("bakit hindi") != std::string::npos ||
        answer.find("wa") != std::string::npos ||
        answer.find("awa") != std::string::npos)
    {
        std::cout << "i love you too po aika katrina :>\n";
        system("start https://media4.giphy.com/media/v1.Y2lkPTc5MGI3NjExaWJxeDY2ZmQxbmMza3llcDBncHR1bjlmMDR5dDZ3d3J6ZHd5dGsxbCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/Zl7u48zLVFgLpRwq6f/giphy.gif");
    }
    else
    {
        std::cout << "awts gege ;-;\n";
        system("start https://media.giphy.com/media/9Y5BbDSkSTiY8/giphy.gif");
    }

    std::cout << "\nPress Enter to exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}
