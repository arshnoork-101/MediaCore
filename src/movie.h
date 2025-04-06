
#ifndef SENECA_MOVIE_H
#define SENECA_MOVIE_H

#include "mediaItem.h"  
#include "settings.h" 
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
namespace seneca {

// Represents a Movie, inheriting from MediaItem
class Movie : public MediaItem {
    // Private constructor to ensure controlled creation
    Movie(const std::string& title, const std::string& summary, unsigned short year)
        : MediaItem(title, summary, year) {}

public:
    // Display the movie details
    void display(std::ostream& out) const override;

    // Create a Movie object from a CSV-formatted string
    static Movie* createItem(const std::string& strMovie);
};
}

#endif // SENECA_MOVIE_H
