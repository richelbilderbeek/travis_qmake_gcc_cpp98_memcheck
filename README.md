# travis_qmake_gcc_cpp98_memcheck

Branch|[![Travis CI logo](TravisCI.png)](https://travis-ci.org)|[![Codecov logo](Codecov.png)](https://www.codecov.io)
---|---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp98_memcheck.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp98_memcheck)|[![codecov.io](https://codecov.io/github/richelbilderbeek/travis_qmake_gcc_cpp98_memcheck/coverage.svg?branch=master)](https://codecov.io/github/richelbilderbeek/travis_qmake_gcc_cpp98_memcheck/branch/master)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++98`
 * Libraries: `STL` only
 * Tools: `memcheck`
 * Source: one single file, `main.cpp`

More complex builds:

 * Use of C++11: [travis_qmake_gcc_cpp11_memcheck](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp11_memcheck)
 * Use of C++14: [travis_qmake_gcc_cpp14_memcheck](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_memcheck)

Less complex builds:

 * No memcheck: [travis_qmake_gcc_cpp98](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98)
