#include "std_lib_facilities.h"

void in_file(vector<string>& vs, string& name);
void out_file(vector<string>& vs, string& name);
void fill(vector<string>& vs);

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите цифры (1 - 5) по порядку прописью; для выхода введите пустую строку\n";
	vector<string>nums1;
	fill(nums1);
	vector<string>nums2;
	cout << "Введите цифры (6-9) по порядку прописью; для выхода введите пустую строку\n";
   fill(nums2);

	return 0;
}

void in_file(vector<string>& vs, string& name)
{
	ifstream ist(name);
	if(!ist) error("Невозможно открыть входной файл", name);
	string temp{};
	while(true)
	{
		ist >> temp;
		if(ist)
			vs.push_back(temp);
		if(ist.eof())
			return;
	}
}

void out_file(vector<string>& vs, string& name)
{
	ofstream ost(name);
	if(!ost) error("Невозможно открыть выходной файл", name);
	string temp{};
	for(string& x: vs)
		ost << x << " ";
}

void fill(vector<string>& vs)
{
	string temp{};
	while(temp != "")
	{
		cin >> temp;
		vs.push_back(temp);
	}
}