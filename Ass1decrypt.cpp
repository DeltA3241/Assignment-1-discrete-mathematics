#include<iostream>
#include<string>
#include<fstream>

using namespace::std;

int main()
{
	char Array[65] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','$','.',',' };

	int D = 3;

	int k;


	ifstream fin("encrypted.txt");
	char first=0;
	int size = 0;
	char a;
	while (!fin.eof())
	{
		fin.get(a);
		size++;
	}
	fin.close();

	cout << "size is : " << size << endl;
	
	ifstream fint("encrypted.txt");

	char* A = new char[size];
	char b;
	int z = 0;
	while (fint.get(b)) {
		A[z] = b;
		cout << A[z];
		++z;
	}
	

	
	first = A[0];
	int index=0;
	for (int i = 0;i < 65;i++)
	{
		if (first == Array[i])
		{
			index = i;
			break;
		}
	}
	cout << "Index is : " << index << endl;

	



	if (index > D)
	{
		k = index - D;
	}
	else if (index <= D)
	{
		k = (65-D) + index;
	}

 static int change;
	for ( int x = 0;x < size;x++)
	{     
		
		for (int z = 0;z < 65;++z) {
			if ((A[x]) == (Array[z])) {
				change = (z - k) % 65;
				A[x] = Array[change];
				break;
			}
		}
	}

	for (static int x = 0;x < size;x++)
	{
		cout << A[x];
	}

	cout << "\n\n\n";

	system("pause");

	return 0;
}
