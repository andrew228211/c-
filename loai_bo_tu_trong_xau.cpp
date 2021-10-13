#include <iostream>
#include <string.h>
#include <string>
using namespace std;
using std::string;
int main()
{
    char s[100];
    char s1[100];
    cin.getline(s,100);
   	cin>>s1;
    char *p = strtok(s, " ");
    while (p != NULL)
    {
        if (strcmp(p, s1) != 0)
            printf("%s ", p);
        p = strtok(NULL, " ");
    }
}

