# 🎬 MediaCore

## 📰 Overview  
**MediaCore** is a C++ terminal-based application that manages a catalog of media — Books, Movies, and TV Shows — by reading structured data from CSV files. It uses object-oriented principles like inheritance and polymorphism to dynamically handle various media types and display them in customizable formats via a command-line interface (CLI).

## 🎯 Objective  
To design a flexible, modular system that:

- Parses and processes diverse multimedia data from CSV files  
- Dynamically creates media objects using abstract base classes and polymorphism  
- Offers configurable display modes for concise or tabular output  
- Demonstrates safe memory management using modern C++ techniques

## ✨ Key Features

- **Polymorphic Media Handling**: Uses a base class (`MediaItem`) and derived classes (`Book`, `Movie`, `TVShow`) to handle different media types uniformly.
- **Configurable Output**: Supports summary and table views, with adjustable formatting width.
- **Robust Parsing**: Gracefully handles malformed input and enforces strict data validation.
- **Memory-Safe Architecture**: Employs smart pointers and RAII principles for dynamic object management.

## 🧩 Modules & Classes

- `MediaItem` – Abstract interface for all media types  
- `Book`, `Movie`, `TVShow` – Derived classes with type-specific properties  
- `Episode` – Encapsulates details for individual TV episodes  
- `utils.h` – String manipulation and CSV parsing utilities  
- `settings.h` – Centralized configuration (e.g., max width, display mode)

## 🗂️ Project Structure
```
.
├── src
│   ├── Book.cpp / .h
│   ├── Movie.cpp / .h
│   ├── TvShow.cpp / .h
│   ├── Episode.cpp / .h
├── data
│   ├── book.csv
|   ├── episodes.csv
│   ├── got.csv
│   └── movies.csv
|   └── tvShows.csv
|   └── words.txt
├── testers
│   ├── tester_1.cpp
├── README.md
```

## ✅ Conclusion  
**MediaCore** exemplifies how C++ can be used to elegantly handle complex, real-world data through OOP and modern language features. It's scalable, extensible, and demonstrates best practices in code organization and dynamic memory handling.


