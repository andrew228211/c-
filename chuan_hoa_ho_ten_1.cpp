#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
	string s1;
	getline(cin, s1);
	string s = "";
	for (int i = 0; i < s1.size() - 1; i++)
	{
		if (s1[i] >= 65 && s1[i] <= 90)
		{
			s1[i] += 32;
		}
	}
	int k = 0;
	for (int i = s1.size() - 1; i >= 0; i--)
	{
		if (s1[i] == ' ' && s1[i - 1] != ' ')
		{
			k = i+1;
			break;
		}
		if (s1[i] >= 97 && s1[i] <= 122)
		{
			s1[i] -=32;
		}
	}
	s1[k - 1] = ',';
	s1[0] = s1[0] - 32;
	for (int i = 0; i < k - 2; i++)
	{
		if (s1[i] == ' ' && (s1[i + 1] >= 97 || s1[i + 1] <= 122))
		{
			s1[i + 1] = s1[i + 1] - 32;
		}
	}
	for (int i = 0; i < k; i++)
	{
		s += s1[i];
	}
	s += " ";
	for (int i = k; i < s1.size(); i++)
	{
		s += s1[i];
	}
	cout <<s;
}
