//I affirm that all code given below was written solely by me, Danielle Schimschal, and that any help I received adhered to the rules stated for this exam.
#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>


using namespace std;

class Movie{
public:
	string aTitle;
	string aGenre;
	int aShowTime;

	Movie(){
		aTitle = "Bull Durham";
		aGenre = "Comedy";
		aShowTime = 0;
	}
	Movie(string Title, string Genre, int ShowTime){
		aTitle = Title;
		aGenre = Genre;
		aShowTime = ShowTime;
	}

	string GetTitle();
	string GetGenre();
	int GetShowTime();
};
#endif
