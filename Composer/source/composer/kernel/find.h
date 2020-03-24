#pragma once

#include "regex.h"

#include <sstream>
#include <vector>

namespace cmp
{
	class Find
	{
	private:
		struct Word
		{
			unsigned int m_Collumn, m_Row; // Points to the start of the word

			Word(unsigned int collumn = 0, unsigned int row = 0)
				: m_Collumn(collumn), m_Row(row) {}
		};

		std::string m_Str;
		Word m_Cursor;
		std::vector<Word> m_SameLengthWords;
	private:
		
	public:
		Find(std::string str)
			: m_Str(str) {}

		Word& next() const
		{
		
		}

		Word& next(unsigned int collumn, unsigned int row) const
		{

		}

		Word& prev() const
		{

		}

		Word& prev(unsigned int collumn, unsigned int row) const
		{

		}

		std::vector<Word&> nof(unsigned int instances) const
		{

		}

		inline Word& first() const { return next(0, 0); }
		inline std::vector<Word&> all() const { return nof(0); }

	};
}