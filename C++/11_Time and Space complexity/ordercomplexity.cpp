/* 
consider there is a problem ,and you find the solution ..now you want to figure out how good or bad the
solution is in terms of time and space required. i.e, how much time it has taken and space it has
occupied.

->time taken by the system is very important.
->hence we study multiple algorithms/solutions for single problem
ex: for sorting we study , selection sort,bubble sort,insertion sort and merge sort

now task is to reach the time complexity of algorithm without coding ,just by seeing
the algorithm we should find out the complexity".

there is something called big O notation.
where ,
1) we will find # no of unit operations and not time
2) we will focus on highest power term
3) do not care about coeffecient much

now what is big o notation??
ex: for insertion sort time taken is (knsquare).
aLgorithm A is called big O(f(n)),if time taken by A for input n <= k*f(n)

A->O(f(n))
Consider IS takes -> 5nsquare +10n +10000<= 6nsquare. //this is just an example.
now time taken by (IS,n)<=6nsquare
hence IS-> O(nsquare)