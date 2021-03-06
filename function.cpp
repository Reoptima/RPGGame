#include <iostream>
#include <windows.h>
#include <string>
#include <list>
using namespace std;


template<typename Char, typename Traits, typename Allocator>
std::basic_string<Char, Traits, Allocator> operator*
        (size_t n, const std::basic_string<Char, Traits, Allocator> &s) {
    return s * n;
};

template<typename Char, typename Traits, typename Allocator>
std::basic_string<Char, Traits, Allocator> operator*
        (const std::basic_string<Char, Traits, Allocator> s, size_t n) {
    std::basic_string<Char, Traits, Allocator> tmp = s;
    for (size_t i = 0; i < n; ++i) {
        tmp += s;
    }
    return tmp;
};

void clear() {
    system("cls");
//    string indent = "\n";
//    cout << indent * 40;
}

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int input_int(const string& name)
{
    string a;
    int i;
    cout << "Введите число "+name+": ";
    while (true){
        getline(cin, a);
        if (is_number(a)){
            return stoi(a);
        }
    }
}

string input_str(const string& name)
{
    string a;
    cout << "Введите "+name+": ";
    getline(cin, a);
    return a;
}

enum ConsoleColor
{
    Black         = 0,
    Blue          = 1,
    Green         = 2,
    Cyan          = 3,
    Red           = 4,
    Magenta       = 5,
    Brown         = 6,
    LightGray     = 7,
    DarkGray      = 8,
    LightBlue     = 9,
    LightGreen    = 10,
    LightCyan     = 11,
    LightRed      = 12,
    LightMagenta  = 13,
    Yellow        = 14,
    White         = 15
};

void SetColor(ConsoleColor text, ConsoleColor background)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (WORD)((background << 4) | text));
}

int choice(const string& question, const list<string>& variants){
    std::cout << question << std::endl;
    int number = 1;
    SetColor(White, Black);
    for (const auto& variant : variants){
        std::cout << to_string(number)+" - "+variant << std::endl;
        number+=1;
    }
    SetColor(White, Black);
    return input_int("");
}

int choiceWhile(const string& question, const list<string>& variants, bool IsZero=false){
    while (true) {
        clear();
        std::cout << question << std::endl;
        int number = 1;
        SetColor(White, Black);
        for (const auto &variant : variants) {
            std::cout << to_string(number) + " - " + variant << std::endl;
            number += 1;
        }
        SetColor(White, Black);
        int result = input_int("");
        if (((IsZero and result>-1) or result>0) and result<variants.size()+1){
            return result;
        }
    }
}

bool percentageChance(int percentage){
    return percentage>rand()%100;
}

int randInt(int from, int before){
    int number = rand()%(before+1);
    if(number<from){
        number+=from;
    }
    return number;
}

bool sortLevel(vector<string> i1, vector<string> i2)
{
    return stoi(i1[1])>stoi(i2[1]);
}

bool sortGold(vector<string> i1, vector<string> i2)
{
    return stoi(i1[2])>stoi(i2[2]);
}
