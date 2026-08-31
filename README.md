# calendar
multi programmation language for display a cli calendar

CLI Calendar — Multi-Language Project

A simple command-line calendar implemented in multiple programming languages.

The main goal of this project is not to build the most advanced calendar application, but to learn, practice, and compare different programming languages by implementing the same idea in each language.

The project currently includes implementations in:

Rust
C
C++
Java
Python

More languages may be added in the future.

About the Project

This project started as a way to learn programming languages by building the same small application several times.

A CLI calendar is a good project for this purpose because it requires several fundamental programming concepts:

Command-line arguments
Input validation
Date and time calculations
Algorithms
Loops and conditionals
Functions and modules
Data structures
Formatting terminal output
Error handling
File organization
Build systems and project tooling

By implementing the calendar independently in different languages, I can focus on understanding the differences between languages instead of simply translating the same source code.

The goal is to write each implementation in a way that feels natural to the language being used.

Project Goals

The main goals of this project are:

Learn programming languages through practical development.
Understand the strengths and weaknesses of different languages.
Compare how the same problem can be solved in different ways.
Practice algorithms and problem solving.
Improve command-line application development.
Learn how different languages handle memory, types, errors, modules, and dependencies.
Become more comfortable with compilers, interpreters, build systems, and development tools.
Keep the project simple enough to understand completely.

This is primarily a learning project.

The implementations are intentionally kept relatively small so that the code remains understandable and easy to experiment with.

Supported Languages
Rust

Rust is currently one of the main implementations of the project.

It is used to learn concepts such as:

Ownership and borrowing
Structs and enums
Pattern matching
Error handling with Result and Option
Modules
Iterators
Traits
Cargo and project organization
Strong static typing

Rust is particularly interesting for this project because it allows the calendar to be implemented while learning memory safety and modern systems programming concepts.

C

The C implementation focuses on fundamental programming concepts.

Topics include:

Manual memory management
Arrays
Functions
Structures
Pointers
Header files
Compilation
Command-line arguments
Low-level programming

The C version is useful as a baseline because many concepts are explicit and close to the underlying machine.

C++

The C++ implementation is used to explore both low-level and higher-level programming.

Topics may include:

Classes and objects
Templates
STL containers
Algorithms
References
RAII
Error handling
Modern C++ features
CMake or other build systems

The C++ implementation may evolve toward modern C++ rather than intentionally following an old C-style approach.

Java

The Java implementation is intended to explore a different programming model based around the JVM.

Topics include:

Classes
Objects
Interfaces
Collections
Exception handling
Packages
The Java standard library
Maven or Gradle
Java's date and time APIs

Java also provides an opportunity to compare a managed runtime with languages such as C, C++, and Rust.

Python

Python is used to explore the same problem with a higher-level and more concise language.

Topics include:

Python data structures
Functions
Modules
Exceptions
Argument parsing
The standard library
Object-oriented programming where appropriate
Python's date and time functionality

The Python implementation may be considerably shorter than the implementations in lower-level languages. This difference is part of the purpose of the project.

Possible Future Languages

This project is intentionally open-ended.

Other languages may be added as I continue learning.

Possible future implementations include:

Go
Zig
Kotlin
Swift
C#
JavaScript
TypeScript
Ruby
Lua
Haskell
OCaml
Elixir
D

The list is not fixed. New languages will be added when there is a reason to learn or experiment with them.

Features

The exact features may differ between implementations while the project is being developed.

The basic calendar should eventually support:

Displaying a calendar for a specific month
Displaying a calendar for a specific year
Showing the current month
Handling leap years
Correctly calculating the number of days in a month
Correctly calculating the weekday of a date
Command-line arguments
Input validation
Useful error messages

Possible future features:

Different calendar layouts
Configurable first day of the week
Multiple output formats
Colored terminal output
Event support
Calendar export
Configuration files
Localization
Different calendar systems

These features are secondary to the main purpose of the project: learning.

Example

A basic invocation could look like:

$ calendar
    August 2026

Mon Tue Wed Thu Fri Sat Sun
                  1   2
  3   4   5   6   7   8   9
 10  11  12  13  14  15  16
 17  18  19  20  21  22  23
 24  25  26  27  28  29  30
 31


The exact interface and formatting may vary between implementations.

Project Structure

The repository is organized by programming language.

cli-calendar/
├── rust/
│   ├── Cargo.toml
│   └── src/
│       └── main.rs
│
├── c/
│   ├── Makefile
│   ├── src/
│   └── include/
│
├── cpp/
│   ├── CMakeLists.txt
│   ├── src/
│   └── include/
│
├── java/
│   ├── pom.xml
│   └── src/
│
├── python/
│   ├── pyproject.toml
│   └── src/
│
└── README.md


The structure may change as the project grows.

Each language should remain as independent as possible so that its implementation can use the conventions, tools, and standard libraries appropriate to that language.

Development Philosophy

The project follows a few simple principles.

Learn, Don't Just Translate

The goal is not to write one implementation and mechanically translate it into every other language.

Each implementation should take advantage of the language being studied.

For example, a Rust implementation should make use of Rust's ownership model and type system, while a Python implementation should take advantage of Python's standard library and high-level abstractions.

Keep the Code Understandable

This is a learning project, so readability is more important than making the implementation as short or clever as possible.

Code should be understandable to someone learning the language.

Prefer the Standard Library

Whenever reasonable, the project should first explore what can be accomplished using the language's standard library.

External dependencies can be introduced when they provide a useful learning opportunity or solve a problem that would otherwise require unnecessary complexity.

Compare Concepts, Not Just Syntax

One of the interesting parts of the project is comparing how different languages approach the same problem.

For example:

Concept	Rust	C	C++	Java	Python
Memory management	Ownership	Manual	RAII / Manual	Garbage collected	Garbage collected
Type system	Static	Static	Static	Static	Dynamic
Compilation	Native	Native	Native	JVM bytecode	Interpreted / bytecode
Error handling	Result / Option	Return values / conventions	Exceptions / other	Exceptions	Exceptions
Main abstraction	Structs / enums	Structs	Classes / structs	Classes	Objects / modules
Package tooling	Cargo	Compiler / Make	CMake / package managers	Maven / Gradle	pip / uv / Poetry / etc.

This table is only a high-level overview. The implementations themselves are intended to provide practical examples of these differences.

What I Am Learning

For every implementation, I want to document things that are specific to the language.

Examples include:

How the compiler works
How dependencies are managed
How projects are structured
How command-line arguments are handled
How errors are represented
How dates are calculated
How memory is managed
How testing works
How formatting is performed
How the executable is built
How the application is distributed

The README and source code may therefore evolve as I learn more.

Testing

Each implementation should eventually have its own tests.

Important cases include:

January and December
Months with 28 days
Leap years
Non-leap years
Months with 30 days
Months with 31 days
Years at century boundaries
Invalid dates
Invalid command-line arguments
Very large years where supported

Example test cases:

February 2024 -> 29 days
February 2025 -> 28 days
April 2026    -> 30 days
January 2026  -> 31 days
December 2026 -> 31 days


The goal is to test the underlying date calculations rather than only checking the visual output.

Building and Running

Each implementation has its own build instructions.

Rust

Requirements:

Rust
Cargo

Build:

cd rust
cargo build


Run:

cargo run


Run tests:

cargo test


Build an optimized version:

cargo build --release

C

Requirements:

A C compiler
Make, if using the provided Makefile

Example:

cd c
make
./calendar or use 
cd src/
gcc -Wall -Wextra main.c -o program && ./program

C++

Requirements:

A modern C++ compiler
CMake, if using CMake

Example:

cd cpp
cmake -S . -B build
cmake --build build
./build/calendar

Java

Requirements:

JDK

If Maven is used:

cd java
mvn test
mvn package

Python

Requirements:

Python 3

Example:

cd python
python3 -m calendar or use
uv run python src/calendar/main.py


The Python commands will be updated as the implementation and packaging setup are finalized.

Comparing Implementations

An important part of this project is comparing the implementations after completing them.

Questions I want to answer include:

Which language makes the date calculations easiest to express?
Which implementation is easiest to read?
Which language provides the best error handling?
Which implementation has the smallest amount of code?
Which implementation produces the fastest executable?
Which language makes testing easiest?
How different are the memory models?
How do the build systems compare?
How do standard libraries differ?
Which language would I choose for a larger CLI application?

The answers may change as my understanding of each language improves.

Performance

Performance is not the primary objective of this project.

A calendar is a very small application, and the computational requirements are minimal.

However, basic performance comparisons may be performed as a learning exercise.

Potential measurements include:

Startup time
Execution time
Binary size
Memory usage
Compilation time

These measurements should be treated as experiments rather than definitive benchmarks of the programming languages themselves.

Learning Log

I may use this project to keep track of things learned while implementing each language.

For example:

Rust
- Ownership
- Borrowing
- Result
- Iterators
- Cargo

C
- Pointers
- Memory allocation
- Header files
- Make

C++
- RAII
- STL
- Classes
- CMake

Java
- JVM
- Collections
- Exceptions
- Maven

Python
- Modules
- argparse
- datetime
- Testing


This section can grow over time as the project develops.

Why a Calendar?

A calendar looks simple, but implementing one from scratch exposes several interesting problems.

The program needs to determine:

How many days are in a month
Whether a year is a leap year
Which weekday a particular date falls on
How the calendar should be aligned
How dates should be formatted
How invalid input should be handled

This makes it a small project with enough algorithmic complexity to be useful for learning.

It is also small enough that the complete implementation can be understood without requiring a large framework or complicated architecture.

Project Status

This project is under active development.

The implementations may have different levels of completeness because the primary objective is learning rather than maintaining feature parity between languages.

A language may therefore be added even if its implementation is initially incomplete.

Current languages
 Rust
 C
 C++
 Java
 Python
Planned / Possible
 Go
 Zig
 Kotlin
 Swift
 C#
 JavaScript / TypeScript
 Other languages
Contributing

This repository is primarily a personal learning project, but suggestions, corrections, and improvements are welcome.

If you find:

A bug
An incorrect date calculation
A portability problem
An incorrect use of a language feature
A better approach
A useful language to add

feel free to open an issue or submit a pull request.

License

Choose a license for the repository if you intend to distribute the code publicly.

For example, this project can use the MIT License.

See LICENSE for the full license text.

Final Goal

The final goal of this project is not to create the world's best CLI calendar.

The goal is to become a better programmer by solving the same problem in different ways.

By the end of the project, I want to have a practical understanding of how different programming languages approach:

Algorithms
Memory
Types
Error handling
Abstraction
Testing
Tooling
Compilation
Project organization
Command-line applications

The calendar is simply the common problem used to explore those concepts.

This project will continue to evolve as I learn more languages and discover better ways to solve the same problems.
