/* Type information for f/where.c.
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
gt_ggc_mx__ffewhere_root_ll_ (void *x_p)
{
  struct _ffewhere_root_ll_ * const x = (struct _ffewhere_root_ll_ *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_13_ffewhere_ll_ ((*x).first);
      gt_ggc_m_13_ffewhere_ll_ ((*x).last);
    }
}

void
gt_ggc_mx__ffewhere_ll_ (void *x_p)
{
  struct _ffewhere_ll_ * const x = (struct _ffewhere_ll_ *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_13_ffewhere_ll_ ((*x).next);
      gt_ggc_m_13_ffewhere_ll_ ((*x).previous);
      gt_ggc_m_15_ffewhere_file_ ((*x).wf);
    }
}

void
gt_pch_nx__ffewhere_root_ll_ (void *x_p)
{
  struct _ffewhere_root_ll_ * const x = (struct _ffewhere_root_ll_ *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_18_ffewhere_root_ll_))
    {
      gt_pch_n_13_ffewhere_ll_ ((*x).first);
      gt_pch_n_13_ffewhere_ll_ ((*x).last);
    }
}

void
gt_pch_nx__ffewhere_ll_ (void *x_p)
{
  struct _ffewhere_ll_ * const x = (struct _ffewhere_ll_ *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_13_ffewhere_ll_))
    {
      gt_pch_n_13_ffewhere_ll_ ((*x).next);
      gt_pch_n_13_ffewhere_ll_ ((*x).previous);
      gt_pch_n_15_ffewhere_file_ ((*x).wf);
    }
}

void
gt_pch_p_18_ffewhere_root_ll_ (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct _ffewhere_root_ll_ * const x ATTRIBUTE_UNUSED = (struct _ffewhere_root_ll_ *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).first), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).last), cookie);
}

void
gt_pch_p_13_ffewhere_ll_ (void *this_obj ATTRIBUTE_UNUSED,
	void *x_p,
	gt_pointer_operator op ATTRIBUTE_UNUSED,
	void *cookie ATTRIBUTE_UNUSED)
{
  struct _ffewhere_ll_ * const x ATTRIBUTE_UNUSED = (struct _ffewhere_ll_ *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).previous), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).wf), cookie);
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_f_where_h[] = {
  {
    &ffewhere_root_ll_,
    1,
    sizeof (ffewhere_root_ll_),
    &gt_ggc_mx__ffewhere_root_ll_,
    &gt_pch_nx__ffewhere_root_ll_
  },
  LAST_GGC_ROOT_TAB
};

