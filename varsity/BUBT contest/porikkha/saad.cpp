#include <bits/stdc++.h>
using namespace std;
void fun(char *str)
{
    int count = 0;
    char z;
    for (int i = 0; str[i]; i++)
        if (str[i] != ' '){
            str[count++] = str[i];
            str[count]-32;
            }
    str[count] = '\0';
}
int main()
{
    char str[100];
    gets(str);
    fun(str);
    cout << str;
    return 0;
}
