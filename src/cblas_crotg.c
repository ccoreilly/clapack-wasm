/* Missing cblas_crotg wrapper
 * author: Mhu
 */

#include "cblas.h"
#include "cblas_f77.h"
void cblas_crotg(void *a, void *b, void *c, void *s) {
   extern void crotg_(complex *ca, complex *cb, float *C, complex *S);
   crotg_(a, b, c, s); 
}
