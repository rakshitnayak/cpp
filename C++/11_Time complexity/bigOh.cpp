

// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     int a = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         a = a + 1; //code runs till n value, so directly propotional to n;
//     }

//     for (int j = 1; j <= m; j++)
//     {
//         a = a + 1; //code runs till m value, so directly propotional to n;
//     }
//     return 0;
// }

//end -------hence time complexity for above example is O(n+m) which is also worst case.------///

// int n,m;
// cin>>n>>m;
// int a = 0;
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= m; j++)
//     {
//         a = a + rand();//rand generates random number
//     }
// }

//end--------here O(nm) is time complexity---------////

// int n,m;
// cin>>n>>m;
// int a = 0;
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= m; j++)
//     {
//         a = a + rand();//rand generates random number
//     }
// }

//for(int i=1;i<=n; i++){
//     a=a+rand();
// }

//end -----here the time complexity is O(nm+n)-----//

// int n;
// cin >> n;
// int a = 0;
// i = n;
// while (i >= 1)
// {
//     a = a + 1;
//     i /= 2;
// }

//end---here the time complexity is O(logn)----//