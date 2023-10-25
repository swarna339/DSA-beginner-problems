A string S is passed as the input to the program. The program must reverse the order of the words in the string and print them as the output.

Boundary Condition(s):
5 <= Length of S <= 1000

Input Format:
The first line contains S.

Output Format:
The first line contains the words in the string S in the reverse order.

Example Input/Output 1:
Input:
Today is Friday

Output:
Friday is Today

Example Input/Output 2:
Input:
five six ten eleven

Output:
eleven ten six five


#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// Define a structure for a stack of strings
#define MAX_SIZE 1000

struct Stack {
    char* data[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Function to push a string onto the stack
void push(struct Stack* stack, char* str) {
    if (stack->top < MAX_SIZE - 1) {
        stack->data[++stack->top] = strdup(str);
    }
}

// Function to pop a string from the stack
char* pop(struct Stack* stack) {
    if (stack->top >= 0) {
        return stack->data[stack->top--];
    }
    return NULL; // Return null for an empty stack
}

// Function to reverse the words in a string using a stack
void reverseWords(char* str) {
    struct Stack wordStack;
    initialize(&wordStack);

    char* token = strtok(str, " ");

    // Push words into the stack
    while (token != NULL) {
        push(&wordStack, token);
        token = strtok(NULL, " ");
    }

    while (wordStack.top >= 0) {
        printf("%s ", pop(&wordStack));
    }
}

int main() {
    char str[] = "five six ten eleven";
    reverseWords(str);
    printf("\n");

    return 0;
}

