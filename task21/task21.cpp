#include <iostream>
#include <string>

// Так и не пришел к универсальному решению
int main()
{
	std::string str = "21474836471121";
	int number{};
	for (int i{}; i < str.size(); ++i)
	{
		if (!isdigit(str[i]))
		{
			throw "Invalid input";
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