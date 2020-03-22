#pragma once

#include "document.h"

namespace cmp
{
	class RTFDoc;
	
	class RTFDoc : public Document
	{
	public:
		RTFDoc(std::string file);

		void grab(std::string file);

		void operator[] (std::string file);
	};
}