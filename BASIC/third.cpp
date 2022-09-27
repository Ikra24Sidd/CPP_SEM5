//program to check
// 1-> if we can use 2 or more main functions in a single program
// 2-> if we can use cout without 'using namespace std'
// 3-> if we can run a program without iostream header file

#include <iostream>
using namespace std;
int main()
{
	cout << "This is main 1\n";
	return 0;
}

// int main()
// {
// 	cout << "This is main 2";
// 	return 0;
// }


//1-> error: redefinition of 'int main()'

//2-> error: 'cout' was not declared in this scope; did you mean 'std::cout'?
//note: 'std::cout' declared here extern ostream cout;  /// Linked to standard output

//3->note: 'std::cout' is defined in header '<iostream>'; did you forget to
//'#include <iostream>'?