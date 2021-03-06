/* Type information for cp.
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
gt_ggc_mx_deferred_access (void *x_p)
{
  struct deferred_access * const x = (struct deferred_access *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).deferred_access_checks);
      gt_ggc_m_15deferred_access ((*x).next);
    }
}

void
gt_ggc_mx_saved_scope (void *x_p)
{
  struct saved_scope * const x = (struct saved_scope *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_17cxx_saved_binding ((*x).old_bindings);
      gt_ggc_m_9tree_node ((*x).old_namespace);
      gt_ggc_m_9tree_node ((*x).decl_ns_list);
      gt_ggc_m_9tree_node ((*x).class_name);
      gt_ggc_m_9tree_node ((*x).class_type);
      gt_ggc_m_9tree_node ((*x).access_specifier);
      gt_ggc_m_9tree_node ((*x).function_decl);
      gt_ggc_m_15varray_head_tag ((*x).lang_base);
      gt_ggc_m_9tree_node ((*x).lang_name);
      gt_ggc_m_9tree_node ((*x).template_parms);
      gt_ggc_m_9tree_node ((*x).x_previous_class_type);
      gt_ggc_m_9tree_node ((*x).x_previous_class_values);
      gt_ggc_m_9tree_node ((*x).x_saved_tree);
      gt_ggc_m_9tree_node ((*x).x_stmt_tree.x_last_stmt);
      gt_ggc_m_9tree_node ((*x).x_stmt_tree.x_last_expr_type);
      gt_ggc_m_16cp_binding_level ((*x).class_bindings);
      gt_ggc_m_16cp_binding_level ((*x).bindings);
      gt_ggc_m_11saved_scope ((*x).prev);
    }
}

void
gt_ggc_mx_cp_binding_level (void *x_p)
{
  struct cp_binding_level * const x = (struct cp_binding_level *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).names);
      gt_ggc_m_9tree_node ((*x).namespaces);
      gt_ggc_m_15varray_head_tag ((*x).static_decls);
      gt_ggc_m_9tree_node ((*x).vtables);
      gt_ggc_m_15binding_table_s ((*x).type_decls);
      gt_ggc_m_9tree_node ((*x).usings);
      gt_ggc_m_9tree_node ((*x).using_directives);
      gt_ggc_m_9tree_node ((*x).class_shadowed);
      gt_ggc_m_9tree_node ((*x).type_shadowed);
      gt_ggc_m_9tree_node ((*x).shadowed_labels);
      gt_ggc_m_9tree_node ((*x).blocks);
      gt_ggc_m_9tree_node ((*x).this_entity);
      gt_ggc_m_16cp_binding_level ((*x).level_chain);
      gt_ggc_m_9tree_node ((*x).dead_vars_from_for);
    }
}

void
gt_ggc_mx_cxx_binding (void *x_p)
{
  struct cxx_binding * const x = (struct cxx_binding *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_11cxx_binding ((*x).previous);
      gt_ggc_m_9tree_node ((*x).value);
      gt_ggc_m_9tree_node ((*x).type);
      gt_ggc_m_16cp_binding_level ((*x).scope);
    }
}

void
gt_ggc_mx_binding_entry_s (void *x_p)
{
  struct binding_entry_s * const x = (struct binding_entry_s *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_15binding_entry_s ((*x).chain);
      gt_ggc_m_9tree_node ((*x).name);
      gt_ggc_m_9tree_node ((*x).type);
    }
}

void
gt_ggc_mx_lang_tree_node (void *x_p)
{
  union lang_tree_node * x = (union lang_tree_node *)x_p;
  union lang_tree_node * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = ((union lang_tree_node *)TREE_CHAIN (&(*xlimit).generic));
  while (x != xlimit)
    {
      switch (cp_tree_node_structure (&((*x))))
        {
        case TS_CP_GENERIC:
          switch (tree_node_structure (&((*x).generic)))
            {
            case TS_COMMON:
              gt_ggc_m_9tree_node ((*x).generic.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.common.type);
              break;
            case TS_INT_CST:
              gt_ggc_m_9tree_node ((*x).generic.int_cst.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.int_cst.common.type);
              break;
            case TS_REAL_CST:
              gt_ggc_m_9tree_node ((*x).generic.real_cst.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.real_cst.common.type);
              gt_ggc_m_10real_value ((*x).generic.real_cst.real_cst_ptr);
              break;
            case TS_VECTOR:
              gt_ggc_m_9tree_node ((*x).generic.vector.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.vector.common.type);
              gt_ggc_m_9tree_node ((*x).generic.vector.elements);
              break;
            case TS_STRING:
              gt_ggc_m_9tree_node ((*x).generic.string.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.string.common.type);
              break;
            case TS_COMPLEX:
              gt_ggc_m_9tree_node ((*x).generic.complex.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.complex.common.type);
              gt_ggc_m_9tree_node ((*x).generic.complex.real);
              gt_ggc_m_9tree_node ((*x).generic.complex.imag);
              break;
            case TS_IDENTIFIER:
              gt_ggc_m_9tree_node ((*x).generic.identifier.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.identifier.common.type);
              break;
            case TS_DECL:
              gt_ggc_m_9tree_node ((*x).generic.decl.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl.common.type);
              gt_ggc_m_9tree_node ((*x).generic.decl.size);
              gt_ggc_m_9tree_node ((*x).generic.decl.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.decl.name);
              gt_ggc_m_9tree_node ((*x).generic.decl.context);
              gt_ggc_m_9tree_node ((*x).generic.decl.arguments);
              gt_ggc_m_9tree_node ((*x).generic.decl.result);
              gt_ggc_m_9tree_node ((*x).generic.decl.initial);
              gt_ggc_m_9tree_node ((*x).generic.decl.abstract_origin);
              gt_ggc_m_9tree_node ((*x).generic.decl.assembler_name);
              gt_ggc_m_9tree_node ((*x).generic.decl.section_name);
              gt_ggc_m_9tree_node ((*x).generic.decl.attributes);
              gt_ggc_m_7rtx_def ((*x).generic.decl.rtl);
              switch (TREE_CODE((tree) &((*x))))
                {
                case FUNCTION_DECL:
                  gt_ggc_m_8function ((*x).generic.decl.u2.f);
                  break;
                case PARM_DECL:
                  gt_ggc_m_7rtx_def ((*x).generic.decl.u2.r);
                  break;
                case FIELD_DECL:
                  gt_ggc_m_9tree_node ((*x).generic.decl.u2.t);
                  break;
                case VAR_DECL:
                  break;
                default:
                  break;
                }
              gt_ggc_m_9tree_node ((*x).generic.decl.saved_tree);
              gt_ggc_m_9tree_node ((*x).generic.decl.inlined_fns);
              gt_ggc_m_9tree_node ((*x).generic.decl.vindex);
              gt_ggc_m_9lang_decl ((*x).generic.decl.lang_specific);
              break;
            case TS_TYPE:
              gt_ggc_m_9tree_node ((*x).generic.type.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.type.common.type);
              gt_ggc_m_9tree_node ((*x).generic.type.values);
              gt_ggc_m_9tree_node ((*x).generic.type.size);
              gt_ggc_m_9tree_node ((*x).generic.type.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.type.attributes);
              gt_ggc_m_9tree_node ((*x).generic.type.pointer_to);
              gt_ggc_m_9tree_node ((*x).generic.type.reference_to);
              switch (debug_hooks == &sdb_debug_hooks ? 1 : debug_hooks == &dwarf2_debug_hooks ? 2 : 0)
                {
                case 0:
                  break;
                case 1:
                  break;
                case 2:
                  gt_ggc_m_10die_struct ((*x).generic.type.symtab.die);
                  break;
                default:
                  break;
                }
              gt_ggc_m_9tree_node ((*x).generic.type.name);
              gt_ggc_m_9tree_node ((*x).generic.type.minval);
              gt_ggc_m_9tree_node ((*x).generic.type.maxval);
              gt_ggc_m_9tree_node ((*x).generic.type.next_variant);
              gt_ggc_m_9tree_node ((*x).generic.type.main_variant);
              gt_ggc_m_9tree_node ((*x).generic.type.binfo);
              gt_ggc_m_9tree_node ((*x).generic.type.context);
              gt_ggc_m_9lang_type ((*x).generic.type.lang_specific);
              break;
            case TS_LIST:
              gt_ggc_m_9tree_node ((*x).generic.list.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.list.common.type);
              gt_ggc_m_9tree_node ((*x).generic.list.purpose);
              gt_ggc_m_9tree_node ((*x).generic.list.value);
              break;
            case TS_VEC:
              gt_ggc_m_9tree_node ((*x).generic.vec.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.vec.common.type);
              {
                size_t i0;
                for (i0 = 0; i0 < (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec))); i0++) {
                  gt_ggc_m_9tree_node ((*x).generic.vec.a[i0]);
                }
              }
              break;
            case TS_EXP:
              gt_ggc_m_9tree_node ((*x).generic.exp.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.exp.common.type);
              switch (TREE_CODE ((tree) &(*x)))
                {
                case WITH_CLEANUP_EXPR:
                  gt_ggc_m_7rtx_def ((*x).generic.exp.operands[2]);
                  gt_ggc_m_9tree_node ((*x).generic.exp.operands[1]);
                  gt_ggc_m_9tree_node ((*x).generic.exp.operands[0]);
                  break;
                case RTL_EXPR:
                  gt_ggc_m_7rtx_def ((*x).generic.exp.operands[1]);
                  gt_ggc_m_7rtx_def ((*x).generic.exp.operands[0]);
                  break;
                case GOTO_SUBROUTINE_EXPR:
                  gt_ggc_m_7rtx_def ((*x).generic.exp.operands[1]);
                  gt_ggc_m_7rtx_def ((*x).generic.exp.operands[0]);
                  break;
                case SAVE_EXPR:
                  gt_ggc_m_7rtx_def ((*x).generic.exp.operands[2]);
                  gt_ggc_m_9tree_node ((*x).generic.exp.operands[1]);
                  gt_ggc_m_9tree_node ((*x).generic.exp.operands[0]);
                  break;
                default:
                  {
                    size_t i1;
                    for (i1 = 0; i1 < (size_t)(TREE_CODE_LENGTH (TREE_CODE ((tree) &(*x)))); i1++) {
                      gt_ggc_m_9tree_node ((*x).generic.exp.operands[i1]);
                    }
                  }
                  break;
                }
              break;
            case TS_BLOCK:
              gt_ggc_m_9tree_node ((*x).generic.block.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.block.common.type);
              gt_ggc_m_9tree_node ((*x).generic.block.vars);
              gt_ggc_m_9tree_node ((*x).generic.block.subblocks);
              gt_ggc_m_9tree_node ((*x).generic.block.supercontext);
              gt_ggc_m_9tree_node ((*x).generic.block.abstract_origin);
              gt_ggc_m_9tree_node ((*x).generic.block.fragment_origin);
              gt_ggc_m_9tree_node ((*x).generic.block.fragment_chain);
              break;
            default:
              break;
            }
          break;
        case TS_CP_TPI:
          gt_ggc_m_9tree_node ((*x).tpi.common.chain);
          gt_ggc_m_9tree_node ((*x).tpi.common.type);
          gt_ggc_m_9tree_node ((*x).tpi.decl);
          break;
        case TS_CP_PTRMEM:
          gt_ggc_m_9tree_node ((*x).ptrmem.common.chain);
          gt_ggc_m_9tree_node ((*x).ptrmem.common.type);
          gt_ggc_m_7rtx_def ((*x).ptrmem.rtl);
          gt_ggc_m_9tree_node ((*x).ptrmem.member);
          break;
        case TS_CP_OVERLOAD:
          gt_ggc_m_9tree_node ((*x).overload.common.chain);
          gt_ggc_m_9tree_node ((*x).overload.common.type);
          gt_ggc_m_9tree_node ((*x).overload.function);
          break;
        case TS_CP_BASELINK:
          gt_ggc_m_9tree_node ((*x).baselink.common.chain);
          gt_ggc_m_9tree_node ((*x).baselink.common.type);
          gt_ggc_m_9tree_node ((*x).baselink.binfo);
          gt_ggc_m_9tree_node ((*x).baselink.functions);
          gt_ggc_m_9tree_node ((*x).baselink.access_binfo);
          break;
        case TS_CP_WRAPPER:
          gt_ggc_m_9tree_node ((*x).wrapper.common.chain);
          gt_ggc_m_9tree_node ((*x).wrapper.common.type);
          gt_ggc_m_11z_candidate ((*x).wrapper.z_c);
          break;
        case TS_CP_DEFAULT_ARG:
          gt_ggc_m_9tree_node ((*x).default_arg.common.chain);
          gt_ggc_m_9tree_node ((*x).default_arg.common.type);
          gt_ggc_m_14cp_token_cache ((*x).default_arg.tokens);
          break;
        case TS_CP_IDENTIFIER:
          gt_ggc_m_9tree_node ((*x).identifier.c_common.common.chain);
          gt_ggc_m_9tree_node ((*x).identifier.c_common.common.type);
          switch (0)
            {
            case 1:
              break;
            case 0:
              break;
            default:
              break;
            }
          gt_ggc_m_11cxx_binding ((*x).identifier.namespace_bindings);
          gt_ggc_m_11cxx_binding ((*x).identifier.bindings);
          gt_ggc_m_9tree_node ((*x).identifier.class_value);
          gt_ggc_m_9tree_node ((*x).identifier.class_template_info);
          gt_ggc_m_9tree_node ((*x).identifier.label_value);
          gt_ggc_m_9tree_node ((*x).identifier.implicit_decl);
          gt_ggc_m_9tree_node ((*x).identifier.error_locus);
          break;
        default:
          break;
        }
      x = ((union lang_tree_node *)TREE_CHAIN (&(*x).generic));
    }
}

void
gt_ggc_mx_lang_decl (void *x_p)
{
  struct lang_decl * const x = (struct lang_decl *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      switch (((*x).decl_flags).u1sel)
        {
        case 0:
          gt_ggc_m_9tree_node ((*x).decl_flags.u.template_info);
          break;
        case 1:
          gt_ggc_m_16cp_binding_level ((*x).decl_flags.u.level);
          break;
        case 2:
          gt_ggc_m_9tree_node ((*x).decl_flags.u.thunk_alias);
          break;
        default:
          break;
        }
      switch (((*x).decl_flags).u2sel)
        {
        case 0:
          gt_ggc_m_9tree_node ((*x).decl_flags.u2.access);
          break;
        case 1:
          break;
        case 2:
          gt_ggc_m_9tree_node ((*x).decl_flags.u2.virtual_offset);
          break;
        default:
          break;
        }
      switch (((*x)).decl_flags.can_be_full)
        {
        case 1:
          gt_ggc_m_9tree_node ((*x).u.f.befriending_classes);
          gt_ggc_m_9tree_node ((*x).u.f.context);
          gt_ggc_m_9tree_node ((*x).u.f.cloned_function);
          switch (((*x).u.f).u3sel + ((*x).u.f).pending_inline_p)
            {
            case 0:
              gt_ggc_m_18sorted_fields_type ((*x).u.f.u.sorted_fields);
              break;
            case 2:
              gt_ggc_m_14cp_token_cache ((*x).u.f.u.pending_inline_info);
              break;
            case 1:
              gt_ggc_m_17language_function ((*x).u.f.u.saved_language_function);
              break;
            default:
              break;
            }
          break;
        default:
          break;
        }
    }
}

void
gt_ggc_mx_lang_type (void *x_p)
{
  struct lang_type * const x = (struct lang_type *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      switch (((*x).u).h.is_lang_type_class)
        {
        case 2:
          break;
        case 1:
          gt_ggc_m_9tree_node ((*x).u.c.primary_base);
          gt_ggc_m_9tree_node ((*x).u.c.vfields);
          gt_ggc_m_9tree_node ((*x).u.c.vcall_indices);
          gt_ggc_m_9tree_node ((*x).u.c.vtables);
          gt_ggc_m_9tree_node ((*x).u.c.typeinfo_var);
          gt_ggc_m_9tree_node ((*x).u.c.vbases);
          gt_ggc_m_15binding_table_s ((*x).u.c.nested_udts);
          gt_ggc_m_9tree_node ((*x).u.c.as_base);
          gt_ggc_m_9tree_node ((*x).u.c.pure_virtuals);
          gt_ggc_m_9tree_node ((*x).u.c.friend_classes);
          gt_ggc_m_9tree_node ((*x).u.c.methods);
          gt_ggc_m_9tree_node ((*x).u.c.key_method);
          gt_ggc_m_9tree_node ((*x).u.c.decl_list);
          gt_ggc_m_9tree_node ((*x).u.c.template_info);
          gt_ggc_m_9tree_node ((*x).u.c.befriending_classes);
          break;
        case 0:
          gt_ggc_m_9tree_node ((*x).u.ptrmem.record);
          break;
        default:
          break;
        }
    }
}

void
gt_ggc_mx_language_function (void *x_p)
{
  struct language_function * const x = (struct language_function *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).base.x_stmt_tree.x_last_stmt);
      gt_ggc_m_9tree_node ((*x).base.x_stmt_tree.x_last_expr_type);
      gt_ggc_m_9tree_node ((*x).base.x_scope_stmt_stack);
      gt_ggc_m_9tree_node ((*x).x_dtor_label);
      gt_ggc_m_9tree_node ((*x).x_current_class_ptr);
      gt_ggc_m_9tree_node ((*x).x_current_class_ref);
      gt_ggc_m_9tree_node ((*x).x_eh_spec_block);
      gt_ggc_m_9tree_node ((*x).x_in_charge_parm);
      gt_ggc_m_9tree_node ((*x).x_vtt_parm);
      gt_ggc_m_9tree_node ((*x).x_return_value);
      gt_ggc_m_20named_label_use_list ((*x).x_named_label_uses);
      gt_ggc_m_16named_label_list ((*x).x_named_labels);
      gt_ggc_m_16cp_binding_level ((*x).bindings);
      gt_ggc_m_15varray_head_tag ((*x).x_local_names);
    }
}

void
gt_pch_nx_deferred_access (void *x_p)
{
  struct deferred_access * const x = (struct deferred_access *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_15deferred_access))
    {
      gt_pch_n_9tree_node ((*x).deferred_access_checks);
      gt_pch_n_15deferred_access ((*x).next);
    }
}

void
gt_pch_nx_saved_scope (void *x_p)
{
  struct saved_scope * const x = (struct saved_scope *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_11saved_scope))
    {
      gt_pch_n_17cxx_saved_binding ((*x).old_bindings);
      gt_pch_n_9tree_node ((*x).old_namespace);
      gt_pch_n_9tree_node ((*x).decl_ns_list);
      gt_pch_n_9tree_node ((*x).class_name);
      gt_pch_n_9tree_node ((*x).class_type);
      gt_pch_n_9tree_node ((*x).access_specifier);
      gt_pch_n_9tree_node ((*x).function_decl);
      gt_pch_n_15varray_head_tag ((*x).lang_base);
      gt_pch_n_9tree_node ((*x).lang_name);
      gt_pch_n_9tree_node ((*x).template_parms);
      gt_pch_n_9tree_node ((*x).x_previous_class_type);
      gt_pch_n_9tree_node ((*x).x_previous_class_values);
      gt_pch_n_9tree_node ((*x).x_saved_tree);
      gt_pch_n_9tree_node ((*x).x_stmt_tree.x_last_stmt);
      gt_pch_n_9tree_node ((*x).x_stmt_tree.x_last_expr_type);
      gt_pch_n_S ((*x).x_stmt_tree.x_last_expr_filename);
      gt_pch_n_16cp_binding_level ((*x).class_bindings);
      gt_pch_n_16cp_binding_level ((*x).bindings);
      gt_pch_n_11saved_scope ((*x).prev);
    }
}

void
gt_pch_nx_cp_binding_level (void *x_p)
{
  struct cp_binding_level * const x = (struct cp_binding_level *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_16cp_binding_level))
    {
      gt_pch_n_9tree_node ((*x).names);
      gt_pch_n_9tree_node ((*x).namespaces);
      gt_pch_n_15varray_head_tag ((*x).static_decls);
      gt_pch_n_9tree_node ((*x).vtables);
      gt_pch_n_15binding_table_s ((*x).type_decls);
      gt_pch_n_9tree_node ((*x).usings);
      gt_pch_n_9tree_node ((*x).using_directives);
      gt_pch_n_9tree_node ((*x).class_shadowed);
      gt_pch_n_9tree_node ((*x).type_shadowed);
      gt_pch_n_9tree_node ((*x).shadowed_labels);
      gt_pch_n_9tree_node ((*x).blocks);
      gt_pch_n_9tree_node ((*x).this_entity);
      gt_pch_n_16cp_binding_level ((*x).level_chain);
      gt_pch_n_9tree_node ((*x).dead_vars_from_for);
    }
}

void
gt_pch_nx_cxx_binding (void *x_p)
{
  struct cxx_binding * const x = (struct cxx_binding *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_11cxx_binding))
    {
      gt_pch_n_11cxx_binding ((*x).previous);
      gt_pch_n_9tree_node ((*x).value);
      gt_pch_n_9tree_node ((*x).type);
      gt_pch_n_16cp_binding_level ((*x).scope);
    }
}

void
gt_pch_nx_binding_entry_s (void *x_p)
{
  struct binding_entry_s * const x = (struct binding_entry_s *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_15binding_entry_s))
    {
      gt_pch_n_15binding_entry_s ((*x).chain);
      gt_pch_n_9tree_node ((*x).name);
      gt_pch_n_9tree_node ((*x).type);
    }
}

void
gt_pch_nx_lang_tree_node (void *x_p)
{
  union lang_tree_node * x = (union lang_tree_node *)x_p;
  union lang_tree_node * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_14lang_tree_node))
   xlimit = ((union lang_tree_node *)TREE_CHAIN (&(*xlimit).generic));
  while (x != xlimit)
    {
      switch (cp_tree_node_structure (&((*x))))
        {
        case TS_CP_GENERIC:
          switch (tree_node_structure (&((*x).generic)))
            {
            case TS_COMMON:
              gt_pch_n_9tree_node ((*x).generic.common.chain);
              gt_pch_n_9tree_node ((*x).generic.common.type);
              break;
            case TS_INT_CST:
              gt_pch_n_9tree_node ((*x).generic.int_cst.common.chain);
              gt_pch_n_9tree_node ((*x).generic.int_cst.common.type);
              break;
            case TS_REAL_CST:
              gt_pch_n_9tree_node ((*x).generic.real_cst.common.chain);
              gt_pch_n_9tree_node ((*x).generic.real_cst.common.type);
              gt_pch_n_10real_value ((*x).generic.real_cst.real_cst_ptr);
              break;
            case TS_VECTOR:
              gt_pch_n_9tree_node ((*x).generic.vector.common.chain);
              gt_pch_n_9tree_node ((*x).generic.vector.common.type);
              gt_pch_n_9tree_node ((*x).generic.vector.elements);
              break;
            case TS_STRING:
              gt_pch_n_9tree_node ((*x).generic.string.common.chain);
              gt_pch_n_9tree_node ((*x).generic.string.common.type);
              gt_pch_n_S ((*x).generic.string.pointer);
              break;
            case TS_COMPLEX:
              gt_pch_n_9tree_node ((*x).generic.complex.common.chain);
              gt_pch_n_9tree_node ((*x).generic.complex.common.type);
              gt_pch_n_9tree_node ((*x).generic.complex.real);
              gt_pch_n_9tree_node ((*x).generic.complex.imag);
              break;
            case TS_IDENTIFIER:
              gt_pch_n_9tree_node ((*x).generic.identifier.common.chain);
              gt_pch_n_9tree_node ((*x).generic.identifier.common.type);
              gt_pch_n_S ((*x).generic.identifier.id.str);
              break;
            case TS_DECL:
              gt_pch_n_9tree_node ((*x).generic.decl.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl.common.type);
              gt_pch_n_S ((*x).generic.decl.locus.file);
              gt_pch_n_9tree_node ((*x).generic.decl.size);
              gt_pch_n_9tree_node ((*x).generic.decl.size_unit);
              gt_pch_n_9tree_node ((*x).generic.decl.name);
              gt_pch_n_9tree_node ((*x).generic.decl.context);
              gt_pch_n_9tree_node ((*x).generic.decl.arguments);
              gt_pch_n_9tree_node ((*x).generic.decl.result);
              gt_pch_n_9tree_node ((*x).generic.decl.initial);
              gt_pch_n_9tree_node ((*x).generic.decl.abstract_origin);
              gt_pch_n_9tree_node ((*x).generic.decl.assembler_name);
              gt_pch_n_9tree_node ((*x).generic.decl.section_name);
              gt_pch_n_9tree_node ((*x).generic.decl.attributes);
              gt_pch_n_7rtx_def ((*x).generic.decl.rtl);
              switch (TREE_CODE((tree) &((*x))))
                {
                case FUNCTION_DECL:
                  gt_pch_n_8function ((*x).generic.decl.u2.f);
                  break;
                case PARM_DECL:
                  gt_pch_n_7rtx_def ((*x).generic.decl.u2.r);
                  break;
                case FIELD_DECL:
                  gt_pch_n_9tree_node ((*x).generic.decl.u2.t);
                  break;
                case VAR_DECL:
                  break;
                default:
                  break;
                }
              gt_pch_n_9tree_node ((*x).generic.decl.saved_tree);
              gt_pch_n_9tree_node ((*x).generic.decl.inlined_fns);
              gt_pch_n_9tree_node ((*x).generic.decl.vindex);
              gt_pch_n_9lang_decl ((*x).generic.decl.lang_specific);
              break;
            case TS_TYPE:
              gt_pch_n_9tree_node ((*x).generic.type.common.chain);
              gt_pch_n_9tree_node ((*x).generic.type.common.type);
              gt_pch_n_9tree_node ((*x).generic.type.values);
              gt_pch_n_9tree_node ((*x).generic.type.size);
              gt_pch_n_9tree_node ((*x).generic.type.size_unit);
              gt_pch_n_9tree_node ((*x).generic.type.attributes);
              gt_pch_n_9tree_node ((*x).generic.type.pointer_to);
              gt_pch_n_9tree_node ((*x).generic.type.reference_to);
              switch (debug_hooks == &sdb_debug_hooks ? 1 : debug_hooks == &dwarf2_debug_hooks ? 2 : 0)
                {
                case 0:
                  break;
                case 1:
                  gt_pch_n_S ((*x).generic.type.symtab.pointer);
                  break;
                case 2:
                  gt_pch_n_10die_struct ((*x).generic.type.symtab.die);
                  break;
                default:
                  break;
                }
              gt_pch_n_9tree_node ((*x).generic.type.name);
              gt_pch_n_9tree_node ((*x).generic.type.minval);
              gt_pch_n_9tree_node ((*x).generic.type.maxval);
              gt_pch_n_9tree_node ((*x).generic.type.next_variant);
              gt_pch_n_9tree_node ((*x).generic.type.main_variant);
              gt_pch_n_9tree_node ((*x).generic.type.binfo);
              gt_pch_n_9tree_node ((*x).generic.type.context);
              gt_pch_n_9lang_type ((*x).generic.type.lang_specific);
              break;
            case TS_LIST:
              gt_pch_n_9tree_node ((*x).generic.list.common.chain);
              gt_pch_n_9tree_node ((*x).generic.list.common.type);
              gt_pch_n_9tree_node ((*x).generic.list.purpose);
              gt_pch_n_9tree_node ((*x).generic.list.value);
              break;
            case TS_VEC:
              gt_pch_n_9tree_node ((*x).generic.vec.common.chain);
              gt_pch_n_9tree_node ((*x).generic.vec.common.type);
              {
                size_t i0;
                for (i0 = 0; i0 < (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec))); i0++) {
                  gt_pch_n_9tree_node ((*x).generic.vec.a[i0]);
                }
              }
              break;
            case TS_EXP:
              gt_pch_n_9tree_node ((*x).generic.exp.common.chain);
              gt_pch_n_9tree_node ((*x).generic.exp.common.type);
              switch (TREE_CODE ((tree) &(*x)))
                {
                case WITH_CLEANUP_EXPR:
                  gt_pch_n_7rtx_def ((*x).generic.exp.operands[2]);
                  gt_pch_n_9tree_node ((*x).generic.exp.operands[1]);
                  gt_pch_n_9tree_node ((*x).generic.exp.operands[0]);
                  break;
                case RTL_EXPR:
                  gt_pch_n_7rtx_def ((*x).generic.exp.operands[1]);
                  gt_pch_n_7rtx_def ((*x).generic.exp.operands[0]);
                  break;
                case GOTO_SUBROUTINE_EXPR:
                  gt_pch_n_7rtx_def ((*x).generic.exp.operands[1]);
                  gt_pch_n_7rtx_def ((*x).generic.exp.operands[0]);
                  break;
                case SAVE_EXPR:
                  gt_pch_n_7rtx_def ((*x).generic.exp.operands[2]);
                  gt_pch_n_9tree_node ((*x).generic.exp.operands[1]);
                  gt_pch_n_9tree_node ((*x).generic.exp.operands[0]);
                  break;
                default:
                  {
                    size_t i1;
                    for (i1 = 0; i1 < (size_t)(TREE_CODE_LENGTH (TREE_CODE ((tree) &(*x)))); i1++) {
                      gt_pch_n_9tree_node ((*x).generic.exp.operands[i1]);
                    }
                  }
                  break;
                }
              break;
            case TS_BLOCK:
              gt_pch_n_9tree_node ((*x).generic.block.common.chain);
              gt_pch_n_9tree_node ((*x).generic.block.common.type);
              gt_pch_n_9tree_node ((*x).generic.block.vars);
              gt_pch_n_9tree_node ((*x).generic.block.subblocks);
              gt_pch_n_9tree_node ((*x).generic.block.supercontext);
              gt_pch_n_9tree_node ((*x).generic.block.abstract_origin);
              gt_pch_n_9tree_node ((*x).generic.block.fragment_origin);
              gt_pch_n_9tree_node ((*x).generic.block.fragment_chain);
              break;
            default:
              break;
            }
          break;
        case TS_CP_TPI:
          gt_pch_n_9tree_node ((*x).tpi.common.chain);
          gt_pch_n_9tree_node ((*x).tpi.common.type);
          gt_pch_n_9tree_node ((*x).tpi.decl);
          break;
        case TS_CP_PTRMEM:
          gt_pch_n_9tree_node ((*x).ptrmem.common.chain);
          gt_pch_n_9tree_node ((*x).ptrmem.common.type);
          gt_pch_n_7rtx_def ((*x).ptrmem.rtl);
          gt_pch_n_9tree_node ((*x).ptrmem.member);
          break;
        case TS_CP_OVERLOAD:
          gt_pch_n_9tree_node ((*x).overload.common.chain);
          gt_pch_n_9tree_node ((*x).overload.common.type);
          gt_pch_n_9tree_node ((*x).overload.function);
          break;
        case TS_CP_BASELINK:
          gt_pch_n_9tree_node ((*x).baselink.common.chain);
          gt_pch_n_9tree_node ((*x).baselink.common.type);
          gt_pch_n_9tree_node ((*x).baselink.binfo);
          gt_pch_n_9tree_node ((*x).baselink.functions);
          gt_pch_n_9tree_node ((*x).baselink.access_binfo);
          break;
        case TS_CP_WRAPPER:
          gt_pch_n_9tree_node ((*x).wrapper.common.chain);
          gt_pch_n_9tree_node ((*x).wrapper.common.type);
          gt_pch_n_11z_candidate ((*x).wrapper.z_c);
          break;
        case TS_CP_DEFAULT_ARG:
          gt_pch_n_9tree_node ((*x).default_arg.common.chain);
          gt_pch_n_9tree_node ((*x).default_arg.common.type);
          gt_pch_n_14cp_token_cache ((*x).default_arg.tokens);
          break;
        case TS_CP_IDENTIFIER:
          gt_pch_n_9tree_node ((*x).identifier.c_common.common.chain);
          gt_pch_n_9tree_node ((*x).identifier.c_common.common.type);
          gt_pch_n_S ((*x).identifier.c_common.node.ident.str);
          switch (0)
            {
            case 1:
              break;
            case 0:
              break;
            default:
              break;
            }
          gt_pch_n_11cxx_binding ((*x).identifier.namespace_bindings);
          gt_pch_n_11cxx_binding ((*x).identifier.bindings);
          gt_pch_n_9tree_node ((*x).identifier.class_value);
          gt_pch_n_9tree_node ((*x).identifier.class_template_info);
          gt_pch_n_9tree_node ((*x).identifier.label_value);
          gt_pch_n_9tree_node ((*x).identifier.implicit_decl);
          gt_pch_n_9tree_node ((*x).identifier.error_locus);
          break;
        default:
          break;
        }
      x = ((union lang_tree_node *)TREE_CHAIN (&(*x).generic));
    }
}

void
gt_pch_nx_lang_decl (void *x_p)
{
  struct lang_decl * const x = (struct lang_decl *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9lang_decl))
    {
      switch (((*x).decl_flags).u1sel)
        {
        case 0:
          gt_pch_n_9tree_node ((*x).decl_flags.u.template_info);
          break;
        case 1:
          gt_pch_n_16cp_binding_level ((*x).decl_flags.u.level);
          break;
        case 2:
          gt_pch_n_9tree_node ((*x).decl_flags.u.thunk_alias);
          break;
        default:
          break;
        }
      switch (((*x).decl_flags).u2sel)
        {
        case 0:
          gt_pch_n_9tree_node ((*x).decl_flags.u2.access);
          break;
        case 1:
          break;
        case 2:
          gt_pch_n_9tree_node ((*x).decl_flags.u2.virtual_offset);
          break;
        default:
          break;
        }
      switch (((*x)).decl_flags.can_be_full)
        {
        case 1:
          gt_pch_n_9tree_node ((*x).u.f.befriending_classes);
          gt_pch_n_9tree_node ((*x).u.f.context);
          gt_pch_n_9tree_node ((*x).u.f.cloned_function);
          switch (((*x).u.f).u3sel + ((*x).u.f).pending_inline_p)
            {
            case 0:
              gt_pch_n_18sorted_fields_type ((*x).u.f.u.sorted_fields);
              gt_pch_note_reorder ((*x).u.f.u.sorted_fields, (*x).u.f.u.sorted_fields, resort_sorted_fields);
              break;
            case 2:
              gt_pch_n_14cp_token_cache ((*x).u.f.u.pending_inline_info);
              break;
            case 1:
              gt_pch_n_17language_function ((*x).u.f.u.saved_language_function);
              break;
            default:
              break;
            }
          break;
        default:
          break;
        }
    }
}

void
gt_pch_nx_lang_type (void *x_p)
{
  struct lang_type * const x = (struct lang_type *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9lang_type))
    {
      switch (((*x).u).h.is_lang_type_class)
        {
        case 2:
          break;
        case 1:
          gt_pch_n_9tree_node ((*x).u.c.primary_base);
          gt_pch_n_9tree_node ((*x).u.c.vfields);
          gt_pch_n_9tree_node ((*x).u.c.vcall_indices);
          gt_pch_n_9tree_node ((*x).u.c.vtables);
          gt_pch_n_9tree_node ((*x).u.c.typeinfo_var);
          gt_pch_n_9tree_node ((*x).u.c.vbases);
          gt_pch_n_15binding_table_s ((*x).u.c.nested_udts);
          gt_pch_n_9tree_node ((*x).u.c.as_base);
          gt_pch_n_9tree_node ((*x).u.c.pure_virtuals);
          gt_pch_n_9tree_node ((*x).u.c.friend_classes);
          gt_pch_n_9tree_node ((*x).u.c.methods);
          gt_pch_note_reorder ((*x).u.c.methods, (*x).u.c.methods, resort_type_method_vec);
          gt_pch_n_9tree_node ((*x).u.c.key_method);
          gt_pch_n_9tree_node ((*x).u.c.decl_list);
          gt_pch_n_9tree_node ((*x).u.c.template_info);
          gt_pch_n_9tree_node ((*x).u.c.befriending_classes);
          break;
        case 0:
          gt_pch_n_9tree_node ((*x).u.ptrmem.record);
          break;
        default:
          break;
        }
    }
}

void
gt_pch_nx_language_function (void *x_p)
{
  struct language_function * const x = (struct language_function *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_17language_function))
    {
      gt_pch_n_9tree_node ((*x).base.x_stmt_tree.x_last_stmt);
      gt_pch_n_9tree_node ((*x).base.x_stmt_tree.x_last_expr_type);
      gt_pch_n_S ((*x).base.x_stmt_tree.x_last_expr_filename);
      gt_pch_n_9tree_node ((*x).base.x_scope_stmt_stack);
      gt_pch_n_9tree_node ((*x).x_dtor_label);
      gt_pch_n_9tree_node ((*x).x_current_class_ptr);
      gt_pch_n_9tree_node ((*x).x_current_class_ref);
      gt_pch_n_9tree_node ((*x).x_eh_spec_block);
      gt_pch_n_9tree_node ((*x).x_in_charge_parm);
      gt_pch_n_9tree_node ((*x).x_vtt_parm);
      gt_pch_n_9tree_node ((*x).x_return_value);
      gt_pch_n_20named_label_use_list ((*x).x_named_label_uses);
      gt_pch_n_16named_label_list ((*x).x_named_labels);
      gt_pch_n_16cp_binding_level ((*x).bindings);
      gt_pch_n_15varray_head_tag ((*x).x_local_names);
      gt_pch_n_S ((*x).cannot_inline);
    }
}

void
gt_pch_p_15deferred_access (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct deferred_access * const x ATTRIBUTE_UNUSED = (struct deferred_access *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).deferred_access_checks), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
}

void
gt_pch_p_11saved_scope (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct saved_scope * const x ATTRIBUTE_UNUSED = (struct saved_scope *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).old_bindings), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).old_namespace), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).decl_ns_list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).class_name), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).class_type), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).access_specifier), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).function_decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).lang_base), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).lang_name), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).template_parms), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_previous_class_type), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_previous_class_values), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_saved_tree), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_stmt_tree.x_last_stmt), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_stmt_tree.x_last_expr_type), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_stmt_tree.x_last_expr_filename), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).class_bindings), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).bindings), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).prev), cookie);
}

void
gt_pch_p_16cp_binding_level (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct cp_binding_level * const x ATTRIBUTE_UNUSED = (struct cp_binding_level *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).names), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).namespaces), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).static_decls), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).vtables), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).type_decls), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).usings), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).using_directives), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).class_shadowed), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).type_shadowed), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).shadowed_labels), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).blocks), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).this_entity), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).level_chain), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).dead_vars_from_for), cookie);
}

void
gt_pch_p_11cxx_binding (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct cxx_binding * const x ATTRIBUTE_UNUSED = (struct cxx_binding *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).previous), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).value), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).type), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).scope), cookie);
}

void
gt_pch_p_15binding_entry_s (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct binding_entry_s * const x ATTRIBUTE_UNUSED = (struct binding_entry_s *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).chain), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).name), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).type), cookie);
}

void
gt_pch_p_14lang_tree_node (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  union lang_tree_node * const x ATTRIBUTE_UNUSED = (union lang_tree_node *)x_p;
  switch (cp_tree_node_structure (&((*x))))
    {
    case TS_CP_GENERIC:
      switch (tree_node_structure (&((*x).generic)))
        {
        case TS_COMMON:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.common.type), cookie);
          break;
        case TS_INT_CST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.int_cst.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.int_cst.common.type), cookie);
          break;
        case TS_REAL_CST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.real_cst_ptr), cookie);
          break;
        case TS_VECTOR:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vector.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vector.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vector.elements), cookie);
          break;
        case TS_STRING:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.string.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.string.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.string.pointer), cookie);
          break;
        case TS_COMPLEX:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.real), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.imag), cookie);
          break;
        case TS_IDENTIFIER:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.id.str), cookie);
          break;
        case TS_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.arguments), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.result), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.assembler_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.section_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.rtl), cookie);
          switch (TREE_CODE((tree) &((*x))))
            {
            case FUNCTION_DECL:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.decl.u2.f), cookie);
              break;
            case PARM_DECL:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.decl.u2.r), cookie);
              break;
            case FIELD_DECL:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.decl.u2.t), cookie);
              break;
            case VAR_DECL:
              break;
            default:
              break;
            }
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.saved_tree), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.inlined_fns), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.vindex), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl.lang_specific), cookie);
          break;
        case TS_TYPE:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.values), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.pointer_to), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.reference_to), cookie);
          switch (debug_hooks == &sdb_debug_hooks ? 1 : debug_hooks == &dwarf2_debug_hooks ? 2 : 0)
            {
            case 0:
              break;
            case 1:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.type.symtab.pointer), cookie);
              break;
            case 2:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.type.symtab.die), cookie);
              break;
            default:
              break;
            }
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.minval), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.maxval), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.next_variant), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.main_variant), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.binfo), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.lang_specific), cookie);
          break;
        case TS_LIST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.purpose), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.value), cookie);
          break;
        case TS_VEC:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vec.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vec.common.type), cookie);
          {
            size_t i0;
            for (i0 = 0; i0 < (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec))); i0++) {
              if ((void *)(x) == this_obj)
                op (&((*x).generic.vec.a[i0]), cookie);
            }
          }
          break;
        case TS_EXP:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.common.type), cookie);
          switch (TREE_CODE ((tree) &(*x)))
            {
            case WITH_CLEANUP_EXPR:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.exp.operands[2]), cookie);
              if ((void *)(x) == this_obj)
                op (&((*x).generic.exp.operands[1]), cookie);
              if ((void *)(x) == this_obj)
                op (&((*x).generic.exp.operands[0]), cookie);
              break;
            case RTL_EXPR:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.exp.operands[1]), cookie);
              if ((void *)(x) == this_obj)
                op (&((*x).generic.exp.operands[0]), cookie);
              break;
            case GOTO_SUBROUTINE_EXPR:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.exp.operands[1]), cookie);
              if ((void *)(x) == this_obj)
                op (&((*x).generic.exp.operands[0]), cookie);
              break;
            case SAVE_EXPR:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.exp.operands[2]), cookie);
              if ((void *)(x) == this_obj)
                op (&((*x).generic.exp.operands[1]), cookie);
              if ((void *)(x) == this_obj)
                op (&((*x).generic.exp.operands[0]), cookie);
              break;
            default:
              {
                size_t i1;
                for (i1 = 0; i1 < (size_t)(TREE_CODE_LENGTH (TREE_CODE ((tree) &(*x)))); i1++) {
                  if ((void *)(x) == this_obj)
                    op (&((*x).generic.exp.operands[i1]), cookie);
                }
              }
              break;
            }
          break;
        case TS_BLOCK:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.vars), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.subblocks), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.supercontext), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.fragment_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.fragment_chain), cookie);
          break;
        default:
          break;
        }
      break;
    case TS_CP_TPI:
      if ((void *)(x) == this_obj)
        op (&((*x).tpi.common.chain), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).tpi.common.type), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).tpi.decl), cookie);
      break;
    case TS_CP_PTRMEM:
      if ((void *)(x) == this_obj)
        op (&((*x).ptrmem.common.chain), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).ptrmem.common.type), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).ptrmem.rtl), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).ptrmem.member), cookie);
      break;
    case TS_CP_OVERLOAD:
      if ((void *)(x) == this_obj)
        op (&((*x).overload.common.chain), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).overload.common.type), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).overload.function), cookie);
      break;
    case TS_CP_BASELINK:
      if ((void *)(x) == this_obj)
        op (&((*x).baselink.common.chain), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).baselink.common.type), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).baselink.binfo), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).baselink.functions), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).baselink.access_binfo), cookie);
      break;
    case TS_CP_WRAPPER:
      if ((void *)(x) == this_obj)
        op (&((*x).wrapper.common.chain), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).wrapper.common.type), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).wrapper.z_c), cookie);
      break;
    case TS_CP_DEFAULT_ARG:
      if ((void *)(x) == this_obj)
        op (&((*x).default_arg.common.chain), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).default_arg.common.type), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).default_arg.tokens), cookie);
      break;
    case TS_CP_IDENTIFIER:
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.c_common.common.chain), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.c_common.common.type), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.c_common.node.ident.str), cookie);
      switch (0)
        {
        case 1:
          break;
        case 0:
          break;
        default:
          break;
        }
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.namespace_bindings), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.bindings), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.class_value), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.class_template_info), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.label_value), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.implicit_decl), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.error_locus), cookie);
      break;
    default:
      break;
    }
}

void
gt_pch_p_9lang_decl (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct lang_decl * const x ATTRIBUTE_UNUSED = (struct lang_decl *)x_p;
  switch (((*x).decl_flags).u1sel)
    {
    case 0:
      if ((void *)(x) == this_obj)
        op (&((*x).decl_flags.u.template_info), cookie);
      break;
    case 1:
      if ((void *)(x) == this_obj)
        op (&((*x).decl_flags.u.level), cookie);
      break;
    case 2:
      if ((void *)(x) == this_obj)
        op (&((*x).decl_flags.u.thunk_alias), cookie);
      break;
    default:
      break;
    }
  switch (((*x).decl_flags).u2sel)
    {
    case 0:
      if ((void *)(x) == this_obj)
        op (&((*x).decl_flags.u2.access), cookie);
      break;
    case 1:
      break;
    case 2:
      if ((void *)(x) == this_obj)
        op (&((*x).decl_flags.u2.virtual_offset), cookie);
      break;
    default:
      break;
    }
  switch (((*x)).decl_flags.can_be_full)
    {
    case 1:
      if ((void *)(x) == this_obj)
        op (&((*x).u.f.befriending_classes), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.f.context), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.f.cloned_function), cookie);
      switch (((*x).u.f).u3sel + ((*x).u.f).pending_inline_p)
        {
        case 0:
          if ((void *)(x) == this_obj)
            op (&((*x).u.f.u.sorted_fields), cookie);
          break;
        case 2:
          if ((void *)(x) == this_obj)
            op (&((*x).u.f.u.pending_inline_info), cookie);
          break;
        case 1:
          if ((void *)(x) == this_obj)
            op (&((*x).u.f.u.saved_language_function), cookie);
          break;
        default:
          break;
        }
      break;
    default:
      break;
    }
}

void
gt_pch_p_9lang_type (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct lang_type * const x ATTRIBUTE_UNUSED = (struct lang_type *)x_p;
  switch (((*x).u).h.is_lang_type_class)
    {
    case 2:
      break;
    case 1:
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.primary_base), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.vfields), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.vcall_indices), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.vtables), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.typeinfo_var), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.vbases), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.nested_udts), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.as_base), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.pure_virtuals), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.friend_classes), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.methods), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.key_method), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.decl_list), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.template_info), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.c.befriending_classes), cookie);
      break;
    case 0:
      if ((void *)(x) == this_obj)
        op (&((*x).u.ptrmem.record), cookie);
      break;
    default:
      break;
    }
}

void
gt_pch_p_17language_function (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct language_function * const x ATTRIBUTE_UNUSED = (struct language_function *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).base.x_stmt_tree.x_last_stmt), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).base.x_stmt_tree.x_last_expr_type), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).base.x_stmt_tree.x_last_expr_filename), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).base.x_scope_stmt_stack), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_dtor_label), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_current_class_ptr), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_current_class_ref), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_eh_spec_block), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_in_charge_parm), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_vtt_parm), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_return_value), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_named_label_uses), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_named_labels), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).bindings), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_local_names), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).cannot_inline), cookie);
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gtype_cp_h[] = {
  {
    &unemitted_tinfo_decls,
    1,
    sizeof (unemitted_tinfo_decls),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  {
    &assignment_operator_name_info[0].identifier,
    1 * ((int) LAST_CPLUS_TREE_CODE),
    sizeof (assignment_operator_name_info[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &assignment_operator_name_info[0].name,
    1, 
    sizeof (assignment_operator_name_info),
    &gt_ggc_m_S,
    (gt_pointer_walker) &gt_pch_n_S
  },
  {
    &assignment_operator_name_info[0].mangled_name,
    1, 
    sizeof (assignment_operator_name_info),
    &gt_ggc_m_S,
    (gt_pointer_walker) &gt_pch_n_S
  },
  {
    &operator_name_info[0].identifier,
    1 * ((int) LAST_CPLUS_TREE_CODE),
    sizeof (operator_name_info[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &operator_name_info[0].name,
    1, 
    sizeof (operator_name_info),
    &gt_ggc_m_S,
    (gt_pointer_walker) &gt_pch_n_S
  },
  {
    &operator_name_info[0].mangled_name,
    1, 
    sizeof (operator_name_info),
    &gt_ggc_m_S,
    (gt_pointer_walker) &gt_pch_n_S
  },
  {
    &static_dtors,
    1,
    sizeof (static_dtors),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &static_ctors,
    1,
    sizeof (static_ctors),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &static_aggregates,
    1,
    sizeof (static_aggregates),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &local_classes,
    1,
    sizeof (local_classes),
    &gt_ggc_mx_varray_head_tag,
    &gt_pch_nx_varray_head_tag
  },
  {
    &integer_three_node,
    1,
    sizeof (integer_three_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &integer_two_node,
    1,
    sizeof (integer_two_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &error_mark_list,
    1,
    sizeof (error_mark_list),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &scope_chain,
    1,
    sizeof (scope_chain),
    &gt_ggc_mx_saved_scope,
    &gt_pch_nx_saved_scope
  },
  {
    &cp_global_trees[0],
    1 * (CPTI_MAX),
    sizeof (cp_global_trees[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &global_type_node,
    1,
    sizeof (global_type_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &global_scope_name,
    1,
    sizeof (global_scope_name),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &global_namespace,
    1,
    sizeof (global_namespace),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
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
extern const struct ggc_root_tab gt_ggc_r_gt_cp_mangle_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cp_name_lookup_h[];
extern const struct ggc_root_tab gt_ggc_r_gtype_cp_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cp_call_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cp_decl_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cp_decl2_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cp_pt_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cp_repo_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cp_semantics_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cp_tree_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cp_parser_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cp_method_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_c_common_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_c_pragma_h[];
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
  gt_ggc_r_gt_cp_mangle_h,
  gt_ggc_r_gt_cp_name_lookup_h,
  gt_ggc_r_gtype_cp_h,
  gt_ggc_r_gt_cp_call_h,
  gt_ggc_r_gt_cp_decl_h,
  gt_ggc_r_gt_cp_decl2_h,
  gt_ggc_r_gt_cp_pt_h,
  gt_ggc_r_gt_cp_repo_h,
  gt_ggc_r_gt_cp_semantics_h,
  gt_ggc_r_gt_cp_tree_h,
  gt_ggc_r_gt_cp_parser_h,
  gt_ggc_r_gt_cp_method_h,
  gt_ggc_r_gt_c_common_h,
  gt_ggc_r_gt_c_pragma_h,
  NULL
};
extern const struct ggc_root_tab gt_ggc_rd_gt_alias_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_bitmap_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_cselib_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_lists_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_cp_name_lookup_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_cp_parser_h[];
const struct ggc_root_tab * const gt_ggc_deletable_rtab[] = {
  gt_ggc_rd_gt_alias_h,
  gt_ggc_rd_gt_bitmap_h,
  gt_ggc_rd_gt_cselib_h,
  gt_ggc_rd_gt_emit_rtl_h,
  gt_ggc_rd_gt_lists_h,
  gt_ggc_rd_gt_cp_name_lookup_h,
  gt_ggc_rd_gt_cp_parser_h,
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
const struct ggc_root_tab gt_pch_rs_gtype_cp_h[] = {
  { &assignment_operator_name_info, 1, sizeof (assignment_operator_name_info), NULL, NULL },
  { &operator_name_info, 1, sizeof (operator_name_info), NULL, NULL },
  LAST_GGC_ROOT_TAB
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
extern const struct ggc_root_tab gt_pch_rs_gt_cp_name_lookup_h[];
extern const struct ggc_root_tab gt_pch_rs_gtype_cp_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_cp_decl_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_cp_method_h[];
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
  gt_pch_rs_gt_cp_name_lookup_h,
  gt_pch_rs_gtype_cp_h,
  gt_pch_rs_gt_cp_decl_h,
  gt_pch_rs_gt_cp_method_h,
  NULL
};
