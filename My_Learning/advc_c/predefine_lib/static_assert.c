#include<stdio.h>
#include<string.h>
#include<assert.h>
int max_value = 100;
int user_input = 120;
 static_assert(user_input >= max_value, "User input exceeds the maximum allowed value.");
int main() {
    //int user_input = 120;
   // static_assert(user_input <= max_value, "User input exceeds the maximum allowed value.");
    printf("User input is within the allowed range.");
    return 0;
}
