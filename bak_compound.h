extern int proc_op_spec(
		 char *op_spec, 
		 int lno, 
		 COMP_EXPR_TYPE *comp_expr,
		 char *pure_op
		 )
;
//----------------------------
extern int proc_qfn(
	     const char *op, 
	     int lno, 
	     COMP_EXPR_TYPE *comp_expr
	     )
;
//----------------------------
extern int
is_created_prior(
		 char *fld,
		 COMP_EXPR_TYPE *comp_expr,
		 int n_comp_expr,
		 int is_temp,
		 int *ptr_expr_idx,
		 int *ptr_fld_idx
		 )
;
//----------------------------
extern int proc_scalar(
		char *scalar, 
		int lno, 
		COMP_EXPR_TYPE *comp_expr
		)
;
//----------------------------
extern int proc_env_var(
		 char *env_var, 
		 int lno, 
		 COMP_EXPR_TYPE *comp_expr
		 )
;
//----------------------------
extern int
proc_fld(
	 int tbl_id,
	 long long nR,
	 char *fld, 
	 FLD_TYPE dst_fldtype,
	 bool dst_has_null,
	 int expr_idx,
	 int fld_idx,
	 int is_write, 
	 COMP_EXPR_TYPE *comp_expr,
	 FLD_TYPE *ptr_fldtype,
	 bool *ptr_has_null
	 )
;
//----------------------------
extern int 
chk_comp_expr(
	      char *filename,
	      COMP_EXPR_TYPE **ptr_comp_expr,
	      int *ptr_n_comp_expr,
	      int *ptr_tbl_id,
	      TBL_REC_TYPE *ptr_tbl_rec

	      )
;
//----------------------------
extern void 
zero_comp_expr(
	       COMP_EXPR_TYPE *comp_expr, 
	       int n_comp_expr
	       )
;
//----------------------------
extern int
release_comp_expr(
		  COMP_EXPR_TYPE **ptr_comp_expr, 
		  int *ptr_n_comp_expr
		  )
;
//----------------------------
extern static int 
offset_pointers(
	        COMP_EXPR_TYPE *comp_expr, 
		int comp_expr_idx,
		int fldidx, 
		long long lb,
		char **ptr_X, 
		char **ptr_nn_X
		)
;
//----------------------------
extern int
exec_comp_expr(
	       int tbl_id,
	       TBL_REC_TYPE tbl_rec,
	       COMP_EXPR_TYPE *comp_expr, 
	       int n_comp_expr
	       )
;
//----------------------------
