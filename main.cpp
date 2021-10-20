#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include<ctime>
#include <vector>
#include "windows.h"
using namespace std;
void SetColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}


int main()
{
	string ngiu;
	while (true)
	{
		system("cls");
		cout << endl << endl;
		cout << "\t\t Vui Long Nhap Ngay Sinh Cua Ban =~= "<<endl<<"vi du 02/11/2003"<<endl;
		getline(cin, ngiu);
		if (ngiu == "07/11/2004")
		{
			cout << "\t\t--- OKI !---" << endl <<endl;
			Sleep(1000);
			cout << "\t\tLoading 10%" << endl; Sleep(200);
			cout << "\t\tLoading 20%" << endl; Sleep(200);
			cout << "\t\tLoading 30%" << endl; Sleep(200);
			cout << "\t\tLoading 40%" << endl; Sleep(200);
			cout << "\t\tLoading 50%" << endl; Sleep(200);
			cout << "\t\tLoading 60%" << endl; Sleep(200);
			cout << "\t\tLoading 70%" << endl; Sleep(200);
			cout << "\t\tLoading 80%" << endl; Sleep(200);
			cout << "\t\tLoading 90%" << endl; Sleep(1000);
			cout << "\t\tLoading 99%" << endl; Sleep(1000);
			cout << "\t\tLoading 99.5%" << endl; Sleep(1000);
			cout << "\t\tLoading 100%" << endl << endl;

			vector <int> A;
			A.push_back(7);
			A.push_back(15);
			A.push_back(14);
			A.push_back(23);
			A.push_back(27);
			A.push_back(195);
			while(true)
			{
				int i = 0;
				SetColor(A.at(i++ % A.size()));

				ifstream file;
				file.open("C:\\Users\\lenovo legion\\Downloads\\Rain3.txt", ios_base::in);
				string line;
				while (getline(file, line)) {
					cout << line << endl;
					Sleep(25);
				}
				file.close();

				SetColor(A.at(i++ % A.size()));

				ifstream file2;
				file2.open("C:\\Users\\lenovo legion\\Downloads\\Rain1.txt", ios_base::in);
				string line2;
				while (getline(file2, line2)) {
					cout << line2 << endl;
					Sleep(25);
				}
				file2.close();
				SetColor(A.at(i++ % A.size()));
				ifstream file3;
				file3.open("C:\\Users\\lenovo legion\\Downloads\\Rain2.txt", ios_base::in);
				string line3;
				while (getline(file3, line3)) {
					cout << line3 << endl;
					Sleep(25);
				}
				file3.close();


				SetColor(A.at(i++ % A.size()));
				ifstream file4;
				file4.open("C:\\Users\\lenovo legion\\Downloads\\Rain4.txt", ios_base::in);
				string line4;
				while (getline(file4, line4)) {
					cout << line4 << endl;
					Sleep(25);
				}
				file4.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file5;
				file5.open("C:\\Users\\lenovo legion\\Downloads\\Rain5.txt", ios_base::in);
				string line5;
				while (getline(file5, line5)) {
					cout << line5 << endl;
					Sleep(25);
				}
				file5.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file6;
				file6.open("C:\\Users\\lenovo legion\\Downloads\\Rain6.txt", ios_base::in);
				string line6;
				while (getline(file6, line6)) {
					cout << line6 << endl;
					Sleep(25);
				}
				file6.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file7;
				file7.open("C:\\Users\\lenovo legion\\Downloads\\Rain7.txt", ios_base::in);
				string line7;
				while (getline(file7, line7)) {
					cout << line7 << endl;
					Sleep(25);
				}
				file7.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file8;
				file8.open("C:\\Users\\lenovo legion\\Downloads\\Rain8.txt", ios_base::in);
				string line8;
				while (getline(file8, line8)) {
					cout << line8 << endl;
					Sleep(25);
				}
				file8.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file9;
				file9.open("C:\\Users\\lenovo legion\\Downloads\\Rain9.txt", ios_base::in);
				string line9;
				while (getline(file9, line9)) {
					cout << line9 << endl;
					Sleep(25);
				}
				file9.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file10;
				file10.open("C:\\Users\\lenovo legion\\Downloads\\Rain10.txt", ios_base::in);
				string line10;
				while (getline(file10, line10)) {
					cout << line10 << endl;
					Sleep(50);
				}
				file10.close();

			}
			_getch();
		}
		else
		{
			cout << "\t\tSAI ROI NHHAP LAI IK " << endl << endl;
			system("pause");
		}
	}
}
