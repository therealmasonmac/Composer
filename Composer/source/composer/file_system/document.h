#pragma once

#include <string>

namespace cmp
{
	class Document;

	class Document
	{
	public:
		virtual std::string GetName() const = 0;
	private:
		std::string name_;
	};
}