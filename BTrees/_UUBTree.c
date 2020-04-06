/*############################################################################
#
# Copyright (c) 2004 Zope Foundation and Contributors.
# All Rights Reserved.
#
# This software is subject to the provisions of the Zope Public License,
# Version 2.1 (ZPL).  A copy of the ZPL should accompany this distribution.
# THIS SOFTWARE IS PROVIDED "AS IS" AND ANY AND ALL EXPRESS OR IMPLIED
# WARRANTIES ARE DISCLAIMED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF TITLE, MERCHANTABILITY, AGAINST INFRINGEMENT, AND FITNESS
# FOR A PARTICULAR PURPOSE.
#
############################################################################*/

#define MASTER_ID "$Id$\n"

/* IIBTree - unsigned int key, unsigned int value BTree

   Implements a collection using int type keys
   and int type values
*/

/* Setup template macros */

#define PERSISTENT

#define MOD_NAME_PREFIX "UU"

#define DEFAULT_MAX_BUCKET_SIZE 120
#define DEFAULT_MAX_BTREE_SIZE 500
#define ZODB_UNSIGNED_KEY_INTS
#define ZODB_UNSIGNED_VALUE_INTS

#include "_compat.h"
#include "intkeymacros.h"
#include "intvaluemacros.h"

#ifdef PY3K
#define INITMODULE PyInit__UUBTree
#else
#define INITMODULE init_UUBTree
#endif
#include "BTreeModuleTemplate.c"