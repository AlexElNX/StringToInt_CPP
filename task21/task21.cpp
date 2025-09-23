#include <iostream>
#include <string>

int main()
{
	std::string str = "21474836471121";
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

	unsigned long long numberLong{};
	try
	{
		numberLong = stoll(str);
	}
	catch (std::out_of_range& ex)
	{
		std::cout << "Error! Number is too big: " << ex.what() << std::endl;
	}
	if (numberLong <= 2147483647)
	{
		number = stoi(str);
		std::cout << "string: " << str << "\n";
		std::cout << "numbeer: " << number << "\n";

	}


}
