# include <string.h>

int myAtoi(char *s) {
    int i = 0;
    char sign;
    for ( ; i < strlen(s) && s[i] == ' '; i++ );
    if ( s[i] == '-' ) {
        sign = '-';
        i++;
    }
    else sign = '+';
    long long res = 0;
    for ( ; i < strlen(s) && s[i] >= '0' && s[i] <= '9' ; i++ ) {
        res = res * 10 + s[i] - 48;
    }
    if ( sign == '-' ) res = -1 * res;
    if ( res > 2147483647 ) return 2147483647;
    else if ( res < -2147483648 ) return -2147483648;
    return (int)res;
    // Your code here
}