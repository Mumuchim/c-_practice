#include <iostream>
#include <ctime>

int main()
{
    using std::cout;

    srand(time(0));
    int randNum = rand() % 7 + 1;
    std::string answer;

    cout << "\nREADY KANA BA MAGKA GENDER? HSAHAHHAHAAH\ntype mo lang 'yes' other than that edi hindi\n\nPLEASE TYPE 'yes' : ";
    std::cin >> answer;

    // Convert input to lowercase so 'YES', 'Yes', and 'yes' all work
    for (int i = 0; i < answer.length(); i++)
    {
        answer[i] = tolower(answer[i]);
    }

    if (answer == "yes")
    {

        switch (randNum)
        {
        case 1:
            cout << "HMMMM sige, isa kang BADING na bumubuga ng apoy\n";
            break;
        case 2:
            cout << "HMMMM... sige, isa kang TOMBITS\n";
            break;
        case 3:
            cout << "HMMMM... bagay sayo maging LESBIAN for clout\n";
            break;
        case 4:
            cout << "HMMMM... geh lalaki ka nalang\n";
            break;
        case 5:
            cout << "HMMM... sige babae na hater\n";
            break;
        case 6:
            cout << "HMMM... pwede kang GOODING na mahiyain\n";
            break;
        case 7:
            cout << "HMMM... sawadika na ladyboy\n";
            break;
        }
    }

    else
    {
        cout << "\nTSK edi wag...  default character ampota HAHAHAHAH \n";
    }

    return 0; // exit
}