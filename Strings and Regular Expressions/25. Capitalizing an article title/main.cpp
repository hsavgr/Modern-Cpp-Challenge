#include <iostream>
#include <cstring>


using namespace std;

int main() {
    char arr[] = "the c++ challenger.";

    cout << "lower case string is:> " << arr;
    cout << "\nUPPER CASE string is:> ";
    for (int x = 0; x < strlen(arr); x++)
    {
        if (arr[x] != ' ')
        {
            putchar(toupper(arr[x++]));
        }
        putchar(toupper(arr[x]));
    }
    return 0;
}