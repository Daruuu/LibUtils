#include "utils/text.hpp"

std::string utils::to_upper(const std::string& text)
{
	std::string result = text;
	std::transform(
		result.begin(),
		result.end(),
		result.begin(),
		[](char c)
		{
			//	toupper retorna un tipo Integer , no un character
			return static_cast<char>(std::toupper(c));
		}
	);
	return result;
}
