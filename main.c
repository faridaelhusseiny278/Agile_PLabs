#define ADD_MACRO(a, b) ((a) + (b))
#include <stdio.h>
//modified again 14:43
//DEV Version
//Reviewer changes
int addFunction(int a, int b) {
    return a + b;
}
int main(){
int x = 5, y = 3;
int result_function = addFunction(x, y);

int result_macro = ADD_MACRO(5, 3);
printf("%d",result_function);
printf("%d",result_macro);

}