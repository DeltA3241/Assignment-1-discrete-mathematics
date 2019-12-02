#include<iostream>
#include<string>
#include<fstream>
using namespace ::std;



int main()
{
	char Array[66] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9',' ','.',',','\n'};
	

	int k;
	cout << "Enter non-negative value of k to begin encryption : \n";
	cin >> k;
	while (k <= 0)
	{
		cout << "Please enter a postive value for k : \n";
		cin >> k;
	}

	ifstream fin("T.txt");

	int size=0;
	char a;
	while (!fin.eof())
	{
		fin.get(a);
		size++;
	}
	fin.close();

	cout << "size is : " << size;
	cout << "\n\n\n";

	system("pause");


	/*char change;
	while (!fin.eof())
	{
		fin >> A[i];

		i++;
	}
*/

	return 0;
}