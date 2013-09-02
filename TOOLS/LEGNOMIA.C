#include <math.h>
#include "fudgit.h"

/* returns the legendre nomial of degree n */
/* Uses the recurrence relation
 * P(i+1) = [(2i + 1) x P(i) - i P(i-1)] / (i + 1)
 * P(i) = [(2i - 1) x P(i-1) - (i-1) P(i-2) / i
 *        { oddx    }         prev_di          di
 */

double leg(x, order) 
expr x;
expr order; 
{ 
    int inl = (int)*order; 
 
    if (inl < 0) {
        Ft_matherror("%s: Order cannot be negative (%d).", "leg", inl);
    }
    else if (inl == 0) {
        return(1.0);
    }
    else if (inl == 1) {
        return(*x);
    }
    else {
        double p0 = 1.0; 
        double p1 = *x; 
        double di = 1.0;
        double twox = 2.0 * *x;
        double oddx = *x;
        double prev_di, pnow;
        int j;

        for (j=2;j<=inl;j++) { 
            prev_di = di; 
            di += 1.0; 
            oddx += twox; 
            /* recurrence relation */
            pnow = (oddx * p1 - prev_di * p0) / di;
            p0 = p1;
            p1 = pnow;
        } 
        return (pnow);
    }
} 
