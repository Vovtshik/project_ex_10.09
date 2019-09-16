#include "std_lib_facilities.h"

void in_file(vector<string>& vs, string& name);
void out_file(vector<string>& vs, string& name);

int main()
{
	setlocale(LC_ALL, "Rus");
	
    
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