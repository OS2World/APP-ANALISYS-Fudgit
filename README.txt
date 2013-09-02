
   F U D G I T   Version 2.31
   April 93

   Martin-D. Lacasse <isaac@physics.mcgill.ca>

   FUDGIT compiles on AIX, DATA GENERAL, HPUX, IRIX, LINUX , NeXT,
   SUNOS, OSF, and ULTRIX.

   See the Installation file for compiling.
------------------------------------------------------------
 Here is a brief description of FUDGIT:

 ******** What is FUDGIT? ********

 FUDGIT is a double-precision multi-purpose fitting program.
 It can manipulate complete columns of numbers in the form
 of vector arithmetic. FUDGIT is also an expression language
 interpreter understanding most of C grammar except pointers.
 Morever, FUDGIT is a front end for any plotting program supporting
 commands from stdin. It is a nice mathematical complement to
 GNUPLOT, for example.

 The main features of FUDGIT are:
    - Command shell including history;
    - Possible abbreviation of all the ``fitting mode'' commands;
    - Possible plural when it makes sense too;
    - Interactive shell supporting flow control (while,
      if-else-endif, foreach);
    - User definable macros;
    - User definable aliases;
    - On-line help;
    - On-line loadable procedure- or function-objects;
    - On-line selectable plotting program;
    - Fourier transforms;
    - Spline interpolation;
    - Smoothing;
    - Double-precision built-in calculator;
    - Built-in interpreter supporting most of C language including
      flow control (if, else, while, for, break, continue);
    - User definable functions and procedures;
    - Double-precision vector arithmetic;
    - Access to the complete C math library;
    - Access to any external C or FORTRAN routines/libraries
      through dynamic loading;
    - Built-in fitting series such as:
        + power series (polynomial);
        + sine series;
        + cosine series;
        + Legendre polynomials;
        + series of Gaussians;
        + series of exponentials;
    - User definable fitting functions;
    - Totally dynamical allocation of variables and parameters;
    - Possible selection of fitting ranges;

 FUDGIT has a collection of fitting routines including:
    - straight line (linear) least squares;
    - straight line (linear) least absolute deviation;
    - general linear least squares using QR decomposition;
    - general linear least squares using singular value decomposition;
    - nonlinear Marquardt-Levenberg method;

 Refer to the ``User's Manual'' for a complete description and a
 tutorial on I/O and fitting.

 ******** The Different Modes ********

 FUDGIT is composed of three different modes. These modes can be
 thought of as a C-shell like interpreter linked with a calculator,
 sharing the same variables in memory, and with a plotting program of
 your choice.
 
 The C-shell like interpreter is called the ``fitting mode''. It is
 the central mode and is the one from which all accesses to the disk
 are done. This mode has a range of commands allowing the user to read
 vectors from or save vectors to a data file, to read a command script,
 save the command history, do a Fourier transform of a vector, make a
 linear or nonlinear least square fit, etc... This mode also allows the
 user to define macros and aliases, and to perform plotting-fitting
 batch processes by using some of the built-in flow control commands
 (while, foreach, if-else-endif). All the commands in the fitting mode
 can be abbreviated. It is worth mentioning that in the fitting mode
 the command line parsing is done by analyzing words separated by one
 or more blanks (space or tab), as in an interactive csh.

 The ``C-calculator mode'' is a language interpreter supporting most of
 C grammar except pointers. It also supports the complete
 double-precision C math library. Thus, recognized keywords cannot be
 abbreviated, and the different tokens need not be separated. Most of
 the C operators and keywords are understood and a few extra operators
 have been added. This mode does essentially all the possible
 calculations on variables or vectors. Functions and procedures can be
 defined. String variables, string comparison, addition, subtraction
 are also supported by C-calculator mode. This mode is accessed by the
 command `cmode'.

 Finally, the ``plotting mode'' is a channel talking directly to the
 plotting program of your choice. Therefore, FUDGIT can serve as a
 front end to any plotting program able to accept input from stdin.
 This way, vectors can be build from the calculator and then plotted by
 your favorite plotting program. The default plotting program is
 GNUPLOT.

 Refer to the User's Guide for a complete tutorial and a reference manual.

