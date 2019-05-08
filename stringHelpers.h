#ifndef STRINGHELPERS_H
#define STRINGHELPERS_H

#include <sstream>

// std::to_string ne fonctionne pas sous MinGW

template <typename T>
std::string toString(const T& value);

#include "stringHelpers.inl"

#endif // STRINGHELPERS_H
