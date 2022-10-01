# The random generator class

The class that generate random values.

✔ Just take "random.hpp" from "include" folder in the project.

# DOCUMENTATION
The class has 2 constructors. The first constructor is default, he just initialize the class objects.

The second constructor - random(DLONG from, DLONG to), it takes two arguments and it's 
the value generating range 

# get_longlong

The method returns the random value of long long (DLONG) type.

# Syntax

``` C++
inline DLONG get_longlong() noexcept
```

## Return value
Type: DLONG

The method returns a random value.

# get_double

The method returns the random value of double type.

# Syntax

``` C++
inline double get_double() noexcept
```

## Return value
Type: double

The method returns a random value.

# get_int

The method returns the random value of int type.

# Syntax

``` C++
inline int get_int() noexcept
```

## Return value
Type: int

The method returns a random value.

# max

The method returns a maximal value of the range.

# Syntax

``` C++
inline DLONG max() const noexcept
```

## Return value
Type: DLONG

The method returns a maximal value of the range.

# min

The method returns a minimal value of the range.

# Syntax

``` C++
inline DLONG min() const noexcept
```

## Return value
Type: DLONG

The method returns a minimal value of the range.

# minmax

The method returns a pair of minimal and maximal value of the range.

# Syntax

``` C++
inline std::pair<DLONG, DLONG> minmax() const noexcept
```

## Return value
Type: std::pair<DLONG, DLONG>

The method returns a minimal value of the range.

# set_range

The method is the setter that sets a value generating range.

# Syntax

``` C++
inline void set_range(DLONG from, DLONG to)
```

## Parameters
[in] from

Type: DLONG

The first value of the generation range (start).


[in] to

Type: DLONG

The second value of the generation range (end).
