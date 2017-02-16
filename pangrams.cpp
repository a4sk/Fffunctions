#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;


int main() {
    char alf[27] = "abcdefghijklmnopqrstuvwxyz";
        char s[1000]; fgets(s,1000,stdin);
    int i; int x = 0; 
    for (x=0;x < 27;x++)
    {
        for(i = 0;s[i] != '\0'; i++)
        {
           // if (s[i] >= 65 && s[i] <=90){s[i]+=32;}      
            if (alf[x] == s[i] || alf[x] == (s[i] + 32)){break;}       
        }
        if (s[i] == '\0'){break;}
    }
    if (x==26){printf("pangram");}
    else{cout << "not pangram" << endl;}
    return 0;
}





