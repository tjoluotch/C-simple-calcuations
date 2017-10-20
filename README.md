using const as the parameter parsed in the function means that the compiler will check that no changes have been made to the vector.
this would mean a push_back or a pop would result in a compiler error

using the ampsand - & references the vector that you use in main, in the parameter and doesn't make a copy of it. Therefore any changes that your function makes to it happens on the vector (no copy is created).

