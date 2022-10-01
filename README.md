# The random generator class

The class that generate random values.

✔ Just take "random.hpp" from "include" folder in the project.

# DOCUMENTATION
The class has 2 constructors. The first constructor is default, he just initialize the class objects.

# THE SECOND CONSTRUCTOR

Gets 2 arguments and it's the value generating range 

# Syntax
``` C++
template <class value_type>
random(value_type from, value_type to)
```

# get_longlong

The method returns the random value of long long (DLONG) type.

# Syntax

``` C++
inline DLONG get_longlong() noexcept
```

# get_double

The method returns the random value of double type.

# Syntax

``` C++
inline double get_double() noexcept
```

# get_int

The method returns the random value of int type.

# Syntax

``` C++
inline int get_int() noexcept
```

# max

The method returns a maximal value of the range.

# Syntax

``` C++
inline DLONG max() const noexcept
```

# min

The method returns a minimal value of the range.

# Syntax

``` C++
inline DLONG min() const noexcept
```

# minmax

The method returns a pair of minimal and maximal value of the range.

# Syntax

``` C++
inline std::pair<DLONG, DLONG> minmax() const noexcept
```

# set_range

The method is the setter that sets a value generating range.

# Syntax

``` C++
template <class value_type>
inline void set_range(value_type from, value_type to) noexcept
```

## Parameters
[in] from

Type: value_type

The first value of the generation range (start).


[in] to

Type: value_type

The second value of the generation range (end).
