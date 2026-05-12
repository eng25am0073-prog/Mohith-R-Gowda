#if defined(__has_include)
#  if __has_include(<stdio.h>)
#    include <stdio.h>
#  else
extern int printf(const char *, ...);
extern int scanf(const char *, ...);
#  endif
#else
#  include <stdio.h>
#endif

int main() {
    int n, sum = 0;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate sum using a loop
    for (int i = 1; i <= n; i++) {
        sum += i;

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
