/******************************************************************
 *
 * This file is part of FUDGIT dynamic loading package
 * This defines some of the internal functions you can link
 * your user-defined program with.
 *
 * Martin-D. Lacasse 
 * December 92
 *
 ******************************************************************/

/*
 *  Making types names consistent with those in FUDGIT
 */

typedef double *VEC;           /* a vector                      */
typedef double *var;           /* a variable                    */
typedef double *expr;          /* or an expression              */
typedef double *PARAM;         /* parameters, one of their kind */
typedef char *String;          /* a string                      */

/*
 *  The following function gives the string statement for execution
 *  in the C-calculator mode. Be careful about recursive calls!
 *  A typical call can be Ft_let("x=2\n").
 */

extern void Ft_let(char *);

/*
 *  The following is the error function returning to the prompt
 *  It allows the user to include a string or and integer in the
 *  error message.
 *  E.g. Ft_matherror("You are in trouble", 0 , 0);
 *       Ft_matherror("Could not include file %s with index %d", file, i+1);
 */

extern void Ft_matherror(char *, char *, int);

/*
 *  The Ft_exit() function exits elegantly and erases any temporary
 *  file left by the dynamic loader or in /tmp/fudgit*. Ft_exit()
 *  is also responsible for saving history and killing the plotting
 *  program that might otherwise be left in background. Use it with
 *  argument 0 or 1 (2 and above are reserved for handling signals).
 *  Most likely, it will be called in case of real error in which case
 *  you might want to return 1 to the calling shell, i.e., by calling
 *  Ft_exit(1);
 */

extern void Ft_exit(int);

/*
 *  The following are pointers to the number of parameters (as set by
 *  set parameters) and the number of data points (as set by read or
 *  set data). I suggest you pass the value to your function using
 *  `param' and `data' variables from the C-calculator mode. Use the
 *  following only if you really know what you are doing and would
 *  like to change their value directly.
 */

extern double *Ft_Param;
extern double *Ft_Data;

