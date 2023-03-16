#include <stdio.h>


int main(void)
{
printf("Size of a char: %i byte(s)", syzeof(char));
printf("Size of an int: %i byte(s)", syzeof(int));
printf("Size of an int: %i byte(s)", syzeof(long int));
printf("Size of an int: %i byte(s)", syzeof(long long int));
printf("Size of an int: %i byte(s)", syzeof(float));
return (0);
}
