extern int
init_ddirs(
	   char *dsk_data_dir
	   )
;
//----------------------------
extern int
mmap_meta_data(
	       char *docroot,

	       char **ptr_x_tbl_X,
	       size_t *ptr_x_tbl_nX,
	       TBL_REC_TYPE **ptr_x_tbl,
	       int *ptr_x_n_tbl,

	       char **ptr_x_ht_tbl_X,
	       size_t *ptr_x_ht_tbl_nX,
	       META_KEY_VAL_TYPE **ptr_x_ht_tbl, 
	       int *ptr_x_n_ht_tbl, 

	       char **ptr_x_fld_X,
	       size_t *ptr_x_fld_nX,
	       FLD_REC_TYPE **ptr_x_fld,
	       int *ptr_x_n_fld,

	       char **ptr_x_ht_fld_X,
	       size_t *ptr_x_ht_fld_nX,
	       META_KEY_VAL_TYPE **ptr_x_ht_fld, 
	       int *ptr_x_n_ht_fld,

	       char **ptr_x_ddir_X,
	       size_t *ptr_x_ddir_nX,
	       DDIR_REC_TYPE **ptr_x_ddir,
	       int *ptr_x_n_ddir,

	       char **ptr_x_fld_info_X,
	       size_t *ptr_x_fld_info_nX,
	       FLD_INFO_TYPE **ptr_x_fld_info,
	       int *ptr_x_n_fld_info,

	       char  **ptr_x_aux_X,
	       size_t *ptr_x_aux_nX,

	       int *ptr_dsk_ddir_id

	       )
;
//----------------------------
extern int
unmap_meta_data(
		char  *x_tbl_X,
		size_t x_tbl_nX,

		char  *x_ht_tbl_X,
		size_t x_ht_tbl_nX,

		char  *x_fld_X,
		size_t x_fld_nX,

		char  *x_ht_fld_X,
		size_t x_ht_fld_nX,

		char  *x_ddir_X,
		size_t x_ddir_nX,

		char  *x_fld_info_X,
		size_t x_fld_info_nX,

		char  *x_aux_X,
		size_t x_aux_nX

		)
;
//----------------------------
extern int
init_meta_data(
	       char *docroot,
	       char *dsk_data_dir
	       )
;
//----------------------------
extern int
bootstrap_meta_data(
		    char *g_docroot,
		    char *bs_docroot,
		    char *dsk_data_dir
		    )
;
//----------------------------
