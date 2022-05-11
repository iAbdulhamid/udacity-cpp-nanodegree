// The header file with just the function declarations.
// When you click the "Run Code" button, this file will be saved as header_example.h

#ifndef HEADER_EXAMPLE_H // This is called an "include guard"
#define HEADER_EXAMPLE_H

void OuterFunction(int);
void InnerFunction(int);

#endif // end of "include guard"

/*
. "include guard" ?
. Since the header will be included into another file, and `#include` just pastes contents into a file,
    the include guard prevents the same file from being pasted multiple times into another file.
    This might happen if multiple files include the same header, and then are all included into the same `main.cpp`, for example.

. The "ifndef" checks if `HEADER_EXAMPLE_H` has not been defined in the file already.
    If it has not been defined yet, then it is defined with `#define HEADER_EXAMPLE_H`, and the rest of the header is used.
    If `HEADER_EXAMPLE_H` has already been defined, then the preprocessor does not enter the `ifndef` block.

Note: There are other ways to do this. Another common way is to use an '#pragma once' preprocessor directive, but we won't cover that in detail here.
See [this Wikipedia article](https://en.wikipedia.org/wiki/Include_guard) for examples.
*/