#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int size;
	std::cin >> size;
	std::vector<std::string> str(size);
	for (int i = 0; i < size; i++)
	{
		std::cin >> str[i];
	}

	std::sort(str.begin(), str.end(), [] (std::string l, std::string r) 
		{
			if (l.size() == r.size())
				return l < r;

			return l.size() < r.size();
		});

	for (int i = 0; i < size; i++)
	{
		std::cout << str[i] << std::endl;
	}

	return 0;
}