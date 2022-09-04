# Calculate Permutations
An implementation of
$$
nPr = \frac{n!}{(n - r)!}
$$
using the C programming language.

## How it works
Manually calculating the factorials and then doing the math is not scalable, as factorials grow very fast. There is however, another way: We simply multiply all the numbers from n until n - r.