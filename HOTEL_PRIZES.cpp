#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    //STDIN INPUT
    scanf("%i", &n);
    int sum=0;
    for(int i = 0; i < n; i++){
        int a, b;
        //string of chars with size 10
        char str[10];
        //want to read input until the 9th character
        scanf("%9s", str);
        scanf("%i %i", &a, &b);
        //math
        if(strncmp (str,"standart",2) == 0){
            sum += 50*a+100*b;
        }else{
            sum += 50*a+100*b+100;
        }
    }
    printf("%i", sum);
    return 0;
}
