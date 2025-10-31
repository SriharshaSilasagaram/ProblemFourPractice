#include <stdio.h>
/*
       ___      _       _                ___                       
      / _ \___ (_)_ __ | |_ ___ _ __    / _ \_____      _____ _ __ 
     / /_)/ _ \| | '_ \| __/ _ \ '__|  / /_)/ _ \ \ /\ / / _ \ '__|
    / ___/ (_) | | | | | ||  __/ |    / ___/ (_) \ V  V /  __/ |   
    \/    \___/|_|_| |_|\__\___|_|    \/    \___/ \_/\_/ \___|_|   

    Read the comments line-by-line and debug where it says CODE, the code will not run correctly in its current state
    This program will help you practice the main protion of the exam question i.e. writing a function (powerIncrementer) that takes a pointer parameter.
    If you're stuck ask for help early and often :D

*/
int placeholder=0;
int incrementer(int number);
void powerIncrementer(int placeholder); // CODE: Modify the parameter to be a pointer

int main() {
    int foo = 0;
    printf("Enter a value: ");
    // CODE: Use the scanf function to load user input into foo.

    // At this point we have created and intialized an int and then loaded it with user input.
    // Now we try to modify it by using incrementer which is defined below.

    int newFoo = incrementer(foo);
    printf("Using \"incrementer\" your value has changed from %d to %d\n", foo, newFoo);
    //Does this print an incremented  value of foo? Yes!
    
    // But what if there was a way to increment foo using a function that has a void return value?
    // A function that is able to "globally" modify a number like how we modify c-strings using functions like toupper.
    // Here come's the fun part where we get to POWER UP using pointers <(o.o)>

    int oldFoo = foo; // This is for saving the unmodified value of foo to test it against the modifed value
    int *p_foo = &foo; // This declares and initalizes a pointer to foo i.e. p_foo is equal to the address of foo.
    powerIncrementer(placeholder); // CODE: Modify the parameter to accept the pointer we just intialized 
    printf("Using \"powerIncrementer\" your value has changed from %d to %d\n", oldFoo, placeholder); // CODE: Modify only the second argument to our modified pointer

    return 0;
}

int incrementer(int foo){
    return foo + 1; 
}

void powerIncrementer(int placeholder){ //CODE: Modify the parameter to a pointer
    placeholder = placeholder + 1; // CODE: Would this line change placeholder's value when passed in? Modify it accordingly

}

