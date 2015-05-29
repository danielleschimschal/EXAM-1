//I affirm that all code given below was written solely by me, Danielle Schimschal, and that any help I received adhered to the rules stated for this exam.
#include <string>
#include "Movie.h"
using namespace std;

class Theater{
public:
	Theater(string Name, string Phone);
	void AddMovie(Movie& Movie);
	string GetMovieForHour(int Hour);

	int GetShowTimeForGenre(string Genre);

	int GetPopcornPrice();
	int GetCokePrice();
};

