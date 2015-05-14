#include <stdio.h>
#include <stdbool.h>
#include "constants.h"
#include "macros.h"
// START FUNC DECL
int
countf_nn_I1(
		    int *src_fld,
		    char *fk_fld,
		    long long n,
		    char *cfld,
		    long long * restrict cnt,
		    int n_out,
		    bool safe_mode
		    )
// STOP FUNC DECL
{
  int status = 0;
  register char  *cptr = cfld;
  if ( safe_mode == false ) {
    for ( long long i = 0; i < n; i++ ) {
      if ( *cptr++ == FALSE ) { continue; }
      char idx = fk_fld[i];
      int val = src_fld[i];
      int idxI4 = (int)idx;
      cnt[idxI4] += val;
    }
  }
  else {
    for ( long long i = 0; i < n; i++ ) {
      if ( *cptr++ == FALSE ) { continue; }
      char idx = fk_fld[i];
      if ( ( idx < 0 ) || ( idx >= n_out ) ) { go_BYE(-1); }
      int val = src_fld[i];
      int idxI4 = (int)idx;
      cnt[idxI4] += val;
    }
  }
 BYE:
  return(status);
}
