template <template <template auto, template auto, template auto> class F,
          template auto x, template auto y, template auto z>
using apply3 = F<x, y, z>;

template <int x, int y, int z>
using plus3 = x + y + z;

template <template auto F, template auto ... args>
using apply = F<args...>;

// structs have overload sets for the primary template

template <typename auto>
struct s;

template <typename T>
struct s<T> {};

template <int i>
struct s<i> {};

template <typename T, T i>
struct s<i> {};

