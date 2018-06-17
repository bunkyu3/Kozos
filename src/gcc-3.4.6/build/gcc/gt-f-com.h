/* Type information for f/com.c.
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
gt_ggc_mx_tree_ggc_tracker (void *x_p)
{
  struct tree_ggc_tracker * const x = (struct tree_ggc_tracker *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_16tree_ggc_tracker ((*x).next);
      {
        size_t i0;
        for (i0 = 0; i0 < (size_t)(NUM_TRACKED_CHUNK); i0++) {
          gt_ggc_m_9tree_node ((*x).trees[i0]);
        }
      }
    }
}

void
gt_ggc_mx_f_binding_level (void *x_p)
{
  struct f_binding_level * const x = (struct f_binding_level *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).names);
      gt_ggc_m_9tree_node ((*x).blocks);
      gt_ggc_m_9tree_node ((*x).this_block);
      gt_ggc_m_15f_binding_level ((*x).level_chain);
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
      switch (TREE_CODE (&((*x)).generic) == IDENTIFIER_NODE)
        {
        case 0:
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
        case 1:
          gt_ggc_m_9tree_node ((*x).identifier.common.common.chain);
          gt_ggc_m_9tree_node ((*x).identifier.common.common.type);
          gt_ggc_m_9tree_node ((*x).identifier.global_value);
          gt_ggc_m_9tree_node ((*x).identifier.local_value);
          gt_ggc_m_9tree_node ((*x).identifier.label_value);
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
    }
}

void
gt_ggc_mx_lang_type (void *x_p)
{
  struct lang_type * const x = (struct lang_type *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_ggc_mx_language_function (void *x_p)
{
  struct language_function * const x = (struct language_function *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_pch_nx_tree_ggc_tracker (void *x_p)
{
  struct tree_ggc_tracker * const x = (struct tree_ggc_tracker *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_16tree_ggc_tracker))
    {
      gt_pch_n_16tree_ggc_tracker ((*x).next);
      {
        size_t i0;
        for (i0 = 0; i0 < (size_t)(NUM_TRACKED_CHUNK); i0++) {
          gt_pch_n_9tree_node ((*x).trees[i0]);
        }
      }
    }
}

void
gt_pch_nx_f_binding_level (void *x_p)
{
  struct f_binding_level * const x = (struct f_binding_level *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_15f_binding_level))
    {
      gt_pch_n_9tree_node ((*x).names);
      gt_pch_n_9tree_node ((*x).blocks);
      gt_pch_n_9tree_node ((*x).this_block);
      gt_pch_n_15f_binding_level ((*x).level_chain);
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
      switch (TREE_CODE (&((*x)).generic) == IDENTIFIER_NODE)
        {
        case 0:
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
        case 1:
          gt_pch_n_9tree_node ((*x).identifier.common.common.chain);
          gt_pch_n_9tree_node ((*x).identifier.common.common.type);
          gt_pch_n_S ((*x).identifier.common.id.str);
          gt_pch_n_9tree_node ((*x).identifier.global_value);
          gt_pch_n_9tree_node ((*x).identifier.local_value);
          gt_pch_n_9tree_node ((*x).identifier.label_value);
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
    }
}

void
gt_pch_nx_lang_type (void *x_p)
{
  struct lang_type * const x = (struct lang_type *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9lang_type))
    {
    }
}

void
gt_pch_nx_language_function (void *x_p)
{
  struct language_function * const x = (struct language_function *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_17language_function))
    {
    }
}

void
gt_pch_p_16tree_ggc_tracker (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct tree_ggc_tracker * const x ATTRIBUTE_UNUSED = (struct tree_ggc_tracker *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  {
    size_t i0;
    for (i0 = 0; i0 < (size_t)(NUM_TRACKED_CHUNK); i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).trees[i0]), cookie);
    }
  }
}

void
gt_pch_p_15f_binding_level (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct f_binding_level * const x ATTRIBUTE_UNUSED = (struct f_binding_level *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).names), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).blocks), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).this_block), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).level_chain), cookie);
}

void
gt_pch_p_14lang_tree_node (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  union lang_tree_node * const x ATTRIBUTE_UNUSED = (union lang_tree_node *)x_p;
  switch (TREE_CODE (&((*x)).generic) == IDENTIFIER_NODE)
    {
    case 0:
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
    case 1:
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.common.common.chain), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.common.common.type), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.common.id.str), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.global_value), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.local_value), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.label_value), cookie);
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
}

void
gt_pch_p_9lang_type (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct lang_type * const x ATTRIBUTE_UNUSED = (struct lang_type *)x_p;
}

void
gt_pch_p_17language_function (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct language_function * const x ATTRIBUTE_UNUSED = (struct language_function *)x_p;
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_f_com_h[] = {
  {
    &ffecom_type_vardesc_var,
    1,
    sizeof (ffecom_type_vardesc_var),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_type_namelist_var,
    1,
    sizeof (ffecom_type_namelist_var),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &tracker_head,
    1,
    sizeof (tracker_head),
    &gt_ggc_mx_tree_ggc_tracker,
    &gt_pch_nx_tree_ggc_tracker
  },
  {
    &shadowed_labels,
    1,
    sizeof (shadowed_labels),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &named_labels,
    1,
    sizeof (named_labels),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &current_binding_level,
    1,
    sizeof (current_binding_level),
    &gt_ggc_mx_f_binding_level,
    &gt_pch_nx_f_binding_level
  },
  {
    &ffecom_gfrt_[0],
    1 * (FFECOM_gfrt),
    sizeof (ffecom_gfrt_[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_multi_fields_[0][0],
    1 * (FFEINFO_basictype) * (FFEINFO_kindtype),
    sizeof (ffecom_multi_fields_[0][0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_multi_retval_,
    1,
    sizeof (ffecom_multi_retval_),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_multi_type_node_,
    1,
    sizeof (ffecom_multi_type_node_),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_func_length_,
    1,
    sizeof (ffecom_func_length_),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_func_result_,
    1,
    sizeof (ffecom_func_result_),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_double_half_,
    1,
    sizeof (ffecom_double_half_),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_double_zero_,
    1,
    sizeof (ffecom_double_zero_),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_float_half_,
    1,
    sizeof (ffecom_float_half_),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_float_zero_,
    1,
    sizeof (ffecom_float_zero_),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_which_entrypoint_decl_,
    1,
    sizeof (ffecom_which_entrypoint_decl_),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_previous_function_decl_,
    1,
    sizeof (ffecom_previous_function_decl_),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_outer_function_decl_,
    1,
    sizeof (ffecom_outer_function_decl_),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_f2c_ptr_to_real_type_node,
    1,
    sizeof (ffecom_f2c_ptr_to_real_type_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_f2c_ptr_to_integer_type_node,
    1,
    sizeof (ffecom_f2c_ptr_to_integer_type_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_tree_xargc_,
    1,
    sizeof (ffecom_tree_xargc_),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_tree_blockdata_type,
    1,
    sizeof (ffecom_tree_blockdata_type),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_tree_ptr_to_subr_type,
    1,
    sizeof (ffecom_tree_ptr_to_subr_type),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_tree_subr_type,
    1,
    sizeof (ffecom_tree_subr_type),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_tree_ptr_to_fun_type[0][0],
    1 * (FFEINFO_basictype) * (FFEINFO_kindtype),
    sizeof (ffecom_tree_ptr_to_fun_type[0][0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_tree_fun_type[0][0],
    1 * (FFEINFO_basictype) * (FFEINFO_kindtype),
    sizeof (ffecom_tree_fun_type[0][0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &ffecom_tree_fun_type_void,
    1,
    sizeof (ffecom_tree_fun_type_void),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_ggc_rd_gt_f_com_h[] = {
  { &free_binding_level, 1, sizeof (free_binding_level), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

