/*******************************************************************\

 Module: Unit test utilities

 Author: DiffBlue Limited. All rights reserved.

\*******************************************************************/

/// \file
/// Utility for loading and parsing a specified java class file, returning
/// the symbol table generated by this.

#ifndef CPROVER_TESTING_UTILS_LOAD_JAVA_CLASS_H
#define CPROVER_TESTING_UTILS_LOAD_JAVA_CLASS_H

#include <util/symbol_table.h>
#include <util/language.h>
#include <goto-programs/goto_model.h>

symbol_tablet load_java_class(
  const std::string &java_class_name,
  const std::string &class_path,
  const std::string &main = "");

symbol_tablet load_java_class(
  const std::string &java_class_name,
  const std::string &class_path,
  const std::string &main,
  std::unique_ptr<languaget> &&java_lang);

#endif // CPROVER_TESTING_UTILS_LOAD_JAVA_CLASS_H
