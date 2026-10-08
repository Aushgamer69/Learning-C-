#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Ayush"] = 99;
    marksMap["raj"] = 79;
    marksMap["vivck"] = 19;

    map<string, int>::iterator iter;
    marksMap.insert({{"don",85},{"kon",47}});
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    return 0;
}