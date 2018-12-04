#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    string value = get_string("Place name: ");
    printf("%s\n", value);
}