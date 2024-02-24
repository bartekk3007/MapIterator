#include <iostream>
#include <map>

int main()
{
	std::map<int, std::string> m1;
	m1[1] = "Arek";
	m1[2] = "Bartek";
	m1[3] = "Czarek";
	m1[4] = "Daniel";

	for (std::pair<int, std::string> it : m1)
	{
		std::cout << it.second << '\n';
	}

	return 0;
}