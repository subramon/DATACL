#include <stdio.h>
#include <limits.h>
#include "constants.h"
#include "macros.h"
#include "qtypes.h"
#include "q.h"
#include "qtils.h"

#define RSLT_BUF_SIZE 4096
bool g_write_to_temp_dir;
int
main(
     int argc,
     char **argv
     )
{
  int status = 0;
  char rslt_buf[RSLT_BUF_SIZE];
  /* START: Initializations */
  for ( int i = 0; i  < RSLT_BUF_SIZE ; i++ ) { 
    rslt_buf[i] = '\0';
  }
  /* STOP: Initializations */
  status = qtils(argc, argv, rslt_buf, RSLT_BUF_SIZE);
  cBYE(status);
  if ( *rslt_buf != '\0' ) {
    fprintf(stdout, "%s", rslt_buf);
  }
 BYE:
  return(status);
}

