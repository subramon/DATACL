/* DO NOT AUTO GENERATE HEADER FILE  */
    case I4 : 
      switch ( dst_idx_meta.fldtype ) { 
	case I4 : 
	  xfer_I4_I4(src_fld_X, nn_src_fld_X, src_nR,
	                     dst_idx_X, nn_dst_idx_X, dst_nR,
			     dst_fld_X, nn_dst_fld_X);
	  break;
	case I8 : 
	  xfer_I4_I8(src_fld_X, nn_src_fld_X, src_nR,
	                     dst_idx_X, nn_dst_idx_X, dst_nR,
			     dst_fld_X, nn_dst_fld_X);
	  break;
	default : go_BYE(-1); break;
      }
      break;
