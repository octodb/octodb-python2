/* module.h - definitions for the module
 *
 * Copyright (C) 2004-2015 Gerhard H�ring <gh@ghaering.de>
 *
 * This file is part of pysqlite.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

#ifndef PYSQLITE_MODULE_H
#define PYSQLITE_MODULE_H
#include "Python.h"

#define PYSQLITE_VERSION "2.8.4"

extern PyObject* pysqlite_Error;
extern PyObject* pysqlite_Warning;
extern PyObject* pysqlite_InterfaceError;
extern PyObject* pysqlite_DatabaseError;
extern PyObject* pysqlite_InternalError;
extern PyObject* pysqlite_OperationalError;
extern PyObject* pysqlite_ProgrammingError;
extern PyObject* pysqlite_IntegrityError;
extern PyObject* pysqlite_DataError;
extern PyObject* pysqlite_NotSupportedError;

extern PyObject* pysqlite_OptimizedUnicode;

/* the functions time.time() and time.sleep() */
extern PyObject* time_time;
extern PyObject* time_sleep;

/* A dictionary, mapping colum types (INTEGER, VARCHAR, etc.) to converter
 * functions, that convert the SQL value to the appropriate Python value.
 * The key is uppercase.
 */
extern PyObject* converters;

extern int _enable_callback_tracebacks;
extern int pysqlite_BaseTypeAdapted;

#define PARSE_DECLTYPES 1
#define PARSE_COLNAMES 2
#endif
