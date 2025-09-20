#include <iostream>
#include <string>

int main()
{
	std::string str = "2.147.483.647";
	int number{};
	int count{};
	for (int i{}; i < str.size(); ++i)
	{

		if (!isdigit(str[i]) && str[i] != ' ' && str[i] != ',' && str[i] != '.')
		{
			throw "Invalid input";
		}
		if (str[i] == ' ')
		{
			str.erase(std::find(str.begin(), str.end(), ' '));
		}
		else if (str[i] == ',')
		{
			str.erase(std::find(str.begin(), str.end(), ','));
		}
		else if (str[i] == '.')
		{
			str.erase(std::find(str.begin(), str.end(), '.'));
		}
		if (isdigit(str[i]))
		{
			++count;
		}
	}
	if (count > 10)
	{
		throw "Error! Number is too big";
	}

	number = stoi(str);
	std::cout << "string: " << str << "\n";
	std::cout << "numbeer: " << number << "\n";

}
