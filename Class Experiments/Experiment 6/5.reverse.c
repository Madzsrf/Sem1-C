//5.	Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string. 

#include <stdio.h>
void reverse_string(char str[]) {
    int start = 0;
    int end = 0;    // Find the length of the string
    while (str[end] != '\0') {
        end++;
    }
    end--; // Set to last character index     //Swap characters from start and end until they meet in the middle
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char str[100];
    printf("Enter a string to reverse: ");
    fgets(str, sizeof(str), stdin);    // Remove newline character if present
    int len = 0;
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }
    reverse_string(str);
    printf("Reversed string: %s\n", str);
    return 0;
}