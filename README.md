# Generic-Numeric-Data-Type-in-C-
🔢 Polymorphic Numeric System in C++
This project implements a polymorphic numeric system in C++ that allows different numeric types (int, float, double, complex, etc.) to be manipulated uniformly through a base class Numeric. It's designed to support arithmetic, comparison, type conversion, and printing between these types — even when stored using base class pointers.

It also enables performing operations between mixed numeric types (e.g., int + double, float == complex) transparently and safely via dynamic dispatch.

🔧 Features

✅ Abstract base class Numeric to represent all numeric types.

✅ Derived classes:
    Int, Float, Double, Complex, and more.

✅ Full support for:

    • Arithmetic operations: +, -, *, /

    • Comparisons: <, >, ==

    • Type conversions: toInt(), toFloat(), toDouble()

    • Stream output using << operator for easy printing

✅ Dynamic dispatch using virtual functions.

✅ Heterogeneous numeric collections using std::vector<Numeric*>
