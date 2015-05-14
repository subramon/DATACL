// START FUNC DECL
int sort3_dsc_I4(
				 const void *ii, 
				 const void *jj
				 )
// STOP FUNC DECL
{ 
  int val11, val12, val13, val21,val22, val23;
  int *ptr1, *ptr2;
  ptr1 = (int *)ii;
  ptr2 = (int *)jj;

  val11 = *ptr1++; /* first element of first value */
  val12 = *ptr1++; /* second element of first value */
  val13 = *ptr1++; /* third element of first value */
  val21 = *ptr2++; /* first element of second value */
  val22 = *ptr2++; /* second element of second value */
  val23 = *ptr2++; /* third element of second value */

  /* Output in dsc order */
  if ( val11 < val21 )  {
    return (1);
  }
  else if ( val11 > val21 ) {
    return (-1);
  }
  else {
    if ( val12 < val22 )  {
      return (1);
    }
    else if ( val12 > val22 ) {
      return (-1);
    }
    else {
      if ( val13 < val23 )  {
	return (1);
      }
      else if ( val13 > val23 ) {
	return (-1);
      }
      else {
	return(0);
      }
    }
  }
}
