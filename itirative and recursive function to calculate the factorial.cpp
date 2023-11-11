#include <bits/stdc++.h>
#include <chrono>
using namespace std;

long long itirative_factorial(int n)
{
	long long factorial = 1;

	for (long long i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	return factorial;
}
long long recursion_factorial(int n){
		if(n==1)return 1;
		return n*recursion_factorial(n-1);
	}
main()
{

	int n;
	cin >> n;
	if (n > 0)
	{
		chrono::time_point<chrono::system_clock> start, end;

		start = chrono::system_clock::now();
		cout << itirative_factorial(n) << endl;
		end = chrono::system_clock::now();
		chrono::duration<double> execution_time = end - start;
		cout << "execution time: " << execution_time.count() << "s\n";

// 			chrono::time_point<chrono::system_clock> start, end;
// 		  start = chrono::system_clock::now();
// 	 cout<< recursion_factorial(n)<<endl;
//     end = chrono::system_clock::now();
// 	  chrono::duration<double> execution_time = end - start;
//    cout  << "execution time: " << execution_time.count() << "s\n";
	}
}
