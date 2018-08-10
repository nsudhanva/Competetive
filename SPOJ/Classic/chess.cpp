#include <iostream>

int main()
{
	const size_t N = 8;
	const char c1 = '*', c2 = ' ';

	for ( size_t i = 0; i < N; i++ )
	{
		for ( size_t j = 0; j < N; j++ )
		{
			std::cout << ( ( i + j ) % 2 == 0 ? c1 : c2 );
		}
		std::cout << std::endl;
	}

	return 0;
}
