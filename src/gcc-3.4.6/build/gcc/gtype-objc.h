/* Type information for objc.
   Copyright (C) 2003 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_imp_entry (void *x_p)
{
  struct imp_entry * const x = (struct imp_entry *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9imp_entry ((*x).next);
      gt_ggc_m_9tree_node ((*x).imp_context);
      gt_ggc_m_9tree_node ((*x).imp_template);
      gt_ggc_m_9tree_node ((*x).class_decl);
      gt_ggc_m_9tree_node ((*x).meta_decl);
    }
}

void
gt_ggc_mx_hashed_attribute (void *x_p)
{
  struct hashed_attribute * const x = (struct hashed_attribute *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_16hashed_attribute ((*x).next);
      gt_ggc_m_9tree_node ((*x).value);
    }
}

void
gt_ggc_mx_hashed_entry (void *x_p)
{
  struct hashed_entry * const x = (struct hashed_entry *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_16hashed_attribute ((*x).list);
      gt_ggc_m_12hashed_entry ((*x).next);
      gt_ggc_m_9tree_node ((*x).key);
    }
}

void
gt_pch_nx_imp_entry (void *x_p)
{
  struct imp_entry * const x = (struct imp_entry *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9imp_entry))
    {
      gt_pch_n_9imp_entry ((*x).next);
      gt_pch_n_9tree_node ((*x).imp_context);
      gt_pch_n_9tree_node ((*x).imp_template);
      gt_pch_n_9tree_node ((*x).class_decl);
      gt_pch_n_9tree_node ((*x).meta_decl);
    }
}

void
gt_pch_nx_hashed_attribute (void *x_p)
{
  struct hashed_attribute * const x = (struct hashed_attribute *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_16hashed_attribute))
    {
      gt_pch_n_16hashed_attribute ((*x).next);
      gt_pch_n_9tree_node ((*x).value);
    }
}

void
gt_pch_nx_hashed_entry (void *x_p)
{
  struct hashed_entry * const x = (struct hashed_entry *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_12hashed_entry))
    {
      gt_pch_n_16hashed_attribute ((*x).list);
      gt_pch_n_12hashed_entry ((*x).next);
      gt_pch_n_9tree_node ((*x).key);
    }
}

void
gt_pch_p_9imp_entry (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct imp_entry * const x ATTRIBUTE_UNUSED = (struct imp_entry *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).imp_context), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).imp_template), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).class_decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).meta_decl), cookie);
}

void
gt_pch_p_16hashed_attribute (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct hashed_attribute * const x ATTRIBUTE_UNUSED = (struct hashed_attribute *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).value), cookie);
}

void
gt_pch_p_12hashed_entry (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct hashed_entry * const x ATTRIBUTE_UNUSED = (struct hashed_entry *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).key), cookie);
}

/* GC roots.  */

static void gt_ggc_ma_cls_method_hash_list (void *);
static void
gt_ggc_ma_cls_method_hash_list (void *x_p ATTRIBUTE_UNUSED)
{
  if (cls_method_hash_list != NULL) {
    size_t i0;
    for (i0 = 0; i0 < (size_t)(SIZEHASHTABLE); i0++) {
      gt_ggc_m_12hashed_entry (cls_method_hash_list[i0]);
    }
    ggc_mark (cls_method_hash_list);
  }
}

static void gt_pch_pa_cls_method_hash_list
    (void *, void *, gt_pointer_operator, void *);
static void gt_pch_pa_cls_method_hash_list (void *this_obj ATTRIBUTE_UNUSED,
      void *x_p ATTRIBUTE_UNUSED,
      gt_pointer_operator op ATTRIBUTE_UNUSED,
      void *cookie ATTRIBUTE_UNUSED)
{
  if (cls_method_hash_list != NULL) {
    size_t i0;
    for (i0 = 0; i0 < (size_t)(SIZEHASHTABLE); i0++) {
      if ((void *)(cls_method_hash_list) == this_obj)
        op (&(cls_method_hash_list[i0]), cookie);
    }
    if ((void *)(&cls_method_hash_list) == this_obj)
      op (&(cls_method_hash_list), cookie);
  }
}

static void gt_pch_na_cls_method_hash_list (void *);
static void
gt_pch_na_cls_method_hash_list (void *x_p ATTRIBUTE_UNUSED)
{
  if (cls_method_hash_list != NULL) {
    size_t i1;
    for (i1 = 0; i1 < (size_t)(SIZEHASHTABLE); i1++) {
      gt_pch_n_12hashed_entry (cls_method_hash_list[i1]);
    }
    gt_pch_note_object (cls_method_hash_list, &cls_method_hash_list, gt_pch_pa_cls_method_hash_list);
  }
}

static void gt_ggc_ma_nst_method_hash_list (void *);
static void
gt_ggc_ma_nst_method_hash_list (void *x_p ATTRIBUTE_UNUSED)
{
  if (nst_method_hash_list != NULL) {
    size_t i0;
    for (i0 = 0; i0 < (size_t)(SIZEHASHTABLE); i0++) {
      gt_ggc_m_12hashed_entry (nst_method_hash_list[i0]);
    }
    ggc_mark (nst_method_hash_list);
  }
}

static void gt_pch_pa_nst_method_hash_list
    (void *, void *, gt_pointer_operator, void *);
static void gt_pch_pa_nst_method_hash_list (void *this_obj ATTRIBUTE_UNUSED,
      void *x_p ATTRIBUTE_UNUSED,
      gt_pointer_operator op ATTRIBUTE_UNUSED,
      void *cookie ATTRIBUTE_UNUSED)
{
  if (nst_method_hash_list != NULL) {
    size_t i0;
    for (i0 = 0; i0 < (size_t)(SIZEHASHTABLE); i0++) {
      if ((void *)(nst_method_hash_list) == this_obj)
        op (&(nst_method_hash_list[i0]), cookie);
    }
    if ((void *)(&nst_method_hash_list) == this_obj)
      op (&(nst_method_hash_list), cookie);
  }
}

static void gt_pch_na_nst_method_hash_list (void *);
static void
gt_pch_na_nst_method_hash_list (void *x_p ATTRIBUTE_UNUSED)
{
  if (nst_method_hash_list != NULL) {
    size_t i1;
    for (i1 = 0; i1 < (size_t)(SIZEHASHTABLE); i1++) {
      gt_pch_n_12hashed_entry (nst_method_hash_list[i1]);
    }
    gt_pch_note_object (nst_method_hash_list, &nst_method_hash_list, gt_pch_pa_nst_method_hash_list);
  }
}

const struct ggc_root_tab gt_ggc_r_gtype_objc_h[] = {
  {
    &objc_global_trees[0],
    1 * (OCTI_MAX),
    sizeof (objc_global_trees[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &imp_list,
    1,
    sizeof (imp_list),
    &gt_ggc_mx_imp_entry,
    &gt_pch_nx_imp_entry
  },
  {
    &cls_method_hash_list,
    1,
    sizeof (cls_method_hash_list),
    &gt_ggc_ma_cls_method_hash_list,
    &gt_pch_na_cls_method_hash_list
  },
  {
    &nst_method_hash_list,
    1,
    sizeof (nst_method_hash_list),
    &gt_ggc_ma_nst_method_hash_list,
    &gt_pch_na_nst_method_hash_list
  },
  LAST_GGC_ROOT_TAB
};

extern const struct ggc_root_tab gt_ggc_r_gt_coverage_h[];
extern const struct ggc_root_tab gt_ggc_r_gtype_desc_c[];
extern const struct ggc_root_tab gt_ggc_r_gt_alias_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cselib_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cgraph_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dbxout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dwarf2out_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dwarf2asm_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dojump_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_except_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_explow_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_expr_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_fold_const_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_function_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_gcse_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_integrate_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_optabs_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_ra_build_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_regclass_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_reg_stack_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cfglayout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_langhooks_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_sdbout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_stor_layout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_stringpool_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_varasm_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_c_common_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_c_pragma_h[];
extern const struct ggc_root_tab gt_ggc_r_gtype_objc_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_c_parse_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_c_decl_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_objc_objc_act_h[];
const struct ggc_root_tab * const gt_ggc_rtab[] = {
  gt_ggc_r_gt_coverage_h,
  gt_ggc_r_gtype_desc_c,
  gt_ggc_r_gt_alias_h,
  gt_ggc_r_gt_cselib_h,
  gt_ggc_r_gt_cgraph_h,
  gt_ggc_r_gt_dbxout_h,
  gt_ggc_r_gt_dwarf2out_h,
  gt_ggc_r_gt_dwarf2asm_h,
  gt_ggc_r_gt_dojump_h,
  gt_ggc_r_gt_emit_rtl_h,
  gt_ggc_r_gt_except_h,
  gt_ggc_r_gt_explow_h,
  gt_ggc_r_gt_expr_h,
  gt_ggc_r_gt_fold_const_h,
  gt_ggc_r_gt_function_h,
  gt_ggc_r_gt_gcse_h,
  gt_ggc_r_gt_integrate_h,
  gt_ggc_r_gt_optabs_h,
  gt_ggc_r_gt_ra_build_h,
  gt_ggc_r_gt_regclass_h,
  gt_ggc_r_gt_reg_stack_h,
  gt_ggc_r_gt_cfglayout_h,
  gt_ggc_r_gt_langhooks_h,
  gt_ggc_r_gt_sdbout_h,
  gt_ggc_r_gt_stor_layout_h,
  gt_ggc_r_gt_stringpool_h,
  gt_ggc_r_gt_tree_h,
  gt_ggc_r_gt_varasm_h,
  gt_ggc_r_gt_c_common_h,
  gt_ggc_r_gt_c_pragma_h,
  gt_ggc_r_gtype_objc_h,
  gt_ggc_r_gt_c_parse_h,
  gt_ggc_r_gt_c_decl_h,
  gt_ggc_r_gt_objc_objc_act_h,
  NULL
};
extern const struct ggc_root_tab gt_ggc_rd_gt_alias_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_bitmap_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_cselib_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_lists_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_c_decl_h[];
const struct ggc_root_tab * const gt_ggc_deletable_rtab[] = {
  gt_ggc_rd_gt_alias_h,
  gt_ggc_rd_gt_bitmap_h,
  gt_ggc_rd_gt_cselib_h,
  gt_ggc_rd_gt_emit_rtl_h,
  gt_ggc_rd_gt_lists_h,
  gt_ggc_rd_gt_c_decl_h,
  NULL
};
extern const struct ggc_cache_tab gt_ggc_rc_gt_emit_rtl_h[];
extern const struct ggc_cache_tab gt_ggc_rc_gt_fold_const_h[];
extern const struct ggc_cache_tab gt_ggc_rc_gt_tree_h[];
const struct ggc_cache_tab * const gt_ggc_cache_rtab[] = {
  gt_ggc_rc_gt_emit_rtl_h,
  gt_ggc_rc_gt_fold_const_h,
  gt_ggc_rc_gt_tree_h,
  NULL
};
extern const struct ggc_root_tab gt_pch_rc_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_pch_rc_gt_fold_const_h[];
extern const struct ggc_root_tab gt_pch_rc_gt_tree_h[];
const struct ggc_root_tab * const gt_pch_cache_rtab[] = {
  gt_pch_rc_gt_emit_rtl_h,
  gt_pch_rc_gt_fold_const_h,
  gt_pch_rc_gt_tree_h,
  NULL
};
extern const struct ggc_root_tab gt_pch_rs_gtype_desc_c[];
extern const struct ggc_root_tab gt_pch_rs_gt_alias_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_dbxout_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_dwarf2out_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_dwarf2asm_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_except_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_function_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_langhooks_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_sdbout_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_tree_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_varasm_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_c_decl_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_objc_objc_act_h[];
const struct ggc_root_tab * const gt_pch_scalar_rtab[] = {
  gt_pch_rs_gtype_desc_c,
  gt_pch_rs_gt_alias_h,
  gt_pch_rs_gt_dbxout_h,
  gt_pch_rs_gt_dwarf2out_h,
  gt_pch_rs_gt_dwarf2asm_h,
  gt_pch_rs_gt_emit_rtl_h,
  gt_pch_rs_gt_except_h,
  gt_pch_rs_gt_function_h,
  gt_pch_rs_gt_langhooks_h,
  gt_pch_rs_gt_sdbout_h,
  gt_pch_rs_gt_tree_h,
  gt_pch_rs_gt_varasm_h,
  gt_pch_rs_gt_c_decl_h,
  gt_pch_rs_gt_objc_objc_act_h,
  NULL
};
