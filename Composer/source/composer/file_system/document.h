#pragma once

#include <string>

#include "kernel/memory_buffer.h"

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