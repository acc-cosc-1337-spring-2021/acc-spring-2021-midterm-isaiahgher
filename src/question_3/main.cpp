#include "question3.cpp"
#include<algorithm>
#include "question3.h"

void transcribe_dna_into_rna(){
	static std::string const dna{"GCTA"};
	static std::string const rna{"CGAU"};

	char strand_switch(char c)
	{
		const auto charpos = dna.find(c);
		if( charpos != std::string::npos )
		{
			c = rna[charpos];
			return c;
		}
		return 0;
	}

	char to_rna(char c)
	{
		return strand_switch(c);
	}


	std::string to_rna( std::string dna_string)
	{
		std::transform( dna_string.begin(), dna_string.end(), dna_string.begin(), strand_switch);
		return dna_string;
	}
}
int main()
{
    return 0;
}