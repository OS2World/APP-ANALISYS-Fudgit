#include <math.h>
#include <stdio.h>
#include "fudgit.h"

#ifndef M_PI
#define M_PI        3.14159265358979323846
#endif

/* An example of a user-defined routine inversing the order of an even
 * vector. Typical call would be:
 *  myproc(A_VEC, data)
 * from C-calculator mode.
 */

void myproc(X, dn)
VEC X;
expr dn;
{
    int i, half_n;
    int n = (int)*dn;
    double tmp;

    if (n%2 == 1)   /* report error if odd number (Why not?)*/
        Ft_matherror("%s: Called with an odd number %d.", "myproc", n);

    /* You have full use of stdio library too!!! */
    fprintf(stderr, "BTW, Did you know that %lf is the sqrt(pi)?\n",
    sqrt(M_PI));

    half_n = n >>1;  /* half of n */
    for (i=0;i<half_n;i++) {    /* Standard C: indices go from 0 to data-1 */
        tmp = X[i];
        X[i] = X[n-i];
        X[n-i] = tmp;
    }
}

/* 
 * Another example involving a function. The following calculates the
 * non-normalized correlation between vectors A and B as defined by 
 * corr(A, B) = <A*B> - <A> * <B>
 *
 */

double myfunc(A, B, dn)
VEC A, B;
expr dn;
{
    int i, n = (int)*dn;
    double sumA, sumB, sumAB;

    sumA = sumB = sumAB = 0.0;

    for (i=0;i<n; i++) {
        sumA += A[i];
        sumB += B[i];
        sumAB += A[i] * B[i];
    }
    /* leave it simple */
    sumA /= *dn;
    sumB /= *dn;
    sumAB /= *dn;

    return (sumAB - sumA*sumB);
}


