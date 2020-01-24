/* Missing cblas_crotg wrapper
 * author: Mhu
 */

#include "cblas.h"
#include "cblas_f77.h"
void cblas_zrotg(void *a, void *b, void *c, void *s) {
   extern void zrotg_(complex *ca, complex *cb, float *C, complex *S);
   zrotg_(a, b, c, s); 
}
