#include<iostream>
#include<string>
#include<fstream>
using namespace ::std;



int main()
{
	char Array[65] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9',' ','.',',' };


	int k;
	cout << "Enter non-negative value of k to begin encryption : \n";
	cin >> k;
	while (k <= 0)
	{
		cout << "Please enter a postive value for k : \n";
		cin >> k;
	}

	ifstream fin("T.txt");

	int size = 0;
	char a;
	while (!fin.eof())
	{
		fin.get(a);
		size++;
	}
	fin.close();

	cout << "size is : " << size;
	cout << "\n\n\n";



	char* A = new char[size];
	for(int i=0;i<size;i++)
	{
		A[i]=' ';
	}


	ifstream fint("T.txt");

	 int change;

	int i = 0;
	char x;
	while (!fint.eof())
	{
		fint.get(x);
		A[i] = x;
		i++;
	}
	fint.close();


	for ( int x = 0;x < size;x++)
	{
		for ( int z = 0;z < 65;++z) {
		if ((A[x]) == (Array[z])) {

			change = (k + z) % 65;
			A[x] = Array[change];
			break;
	}
		}
	}

	ofstream fout("encrypted.txt");

	for (int q = 0;q < size;q++)
	{
		fout << A[q];
	}

    cout<<"Encrypted file : ";

	cout << "\n\n\n";

	for (int x = 0;x < size;x++)
	{
		cout << A[x];
	}

	cout << "\n\n----------------------------------------------------------\n";
	cout << endl;

	system("pause");

	return 0;
}
