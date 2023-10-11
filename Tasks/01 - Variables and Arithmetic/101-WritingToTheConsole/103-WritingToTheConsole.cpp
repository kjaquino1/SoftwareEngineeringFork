#include <stdio.h>

int main()
{
    // ************************ Using puts ******************************** 
    puts("Hello World!");   //Write Hello World to the terminal


    // ************************ Using printf ******************************* 
    printf("Hello Everyone. We are using CHow are things?");
    // TASK (a) - remove \n from the string above - what does this change? 
    //The line doesn't break.
    // ******************* Using printf placeholders *********************** 
    int age = 23;
    printf("My age is %d\n", age);

    // Some other placeholders include %c for character and %f for floating point
    float radius = 10.0f;
    float area = 3.415926 * radius * radius;

    // TASK(b) - Use printf to display the value of the variable area. Look at the lecture slides and find out how to limit this to 3 decimal places
    // Write solution here
    printf("The area = %4f\n", area);
    //

    // You can output complex strings to the terminal
    int p = 3;
    int q = 4;
    printf("p=%d, q=%d\n", p, q);

    // TASK(c) - using printf, display the radius and the area using a single printf statement
    // Write solution here
    printf("Radius = %.3f, Area = %.3f\n", radius, area);
    //
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

