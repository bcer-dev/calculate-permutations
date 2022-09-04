#include <stdio.h>
#include <stdint.h>

uint64_t permutations(uint16_t n, uint16_t r)
{
    uint64_t result = 1;

    for (int i = n; i > n - r; --i)
    {
        result *= i;
    }

    return result;
}

int main()
{
    uint64_t num = permutations(26, 3);
    printf("%lu\n", num);
    
    return 0;
}