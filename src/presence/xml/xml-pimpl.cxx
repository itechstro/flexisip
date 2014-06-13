// Copyright (c) 2005-2011 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD/e, an XML Schema
// to C++ data binding compiler for embedded systems.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
//

// Begin prologue.
//
//
// End prologue.

#include "xml-pimpl.hxx"

#include <xsde/cxx/parser/validating/string-common.hxx>

namespace namespace_
{
  // lang_pimpl
  //

  void lang_pimpl::
  pre ()
  {
    this->lang_pimpl_state_.str_.clear ();
  }

  void lang_pimpl::
  _characters (const ::xsde::cxx::ro_string& s)
  {
    this->lang_pimpl_state_.str_.append (s.data (), s.size ());
  }

  ::namespace_::lang lang_pimpl::
  post_lang ()
  {
    ::std::string s;
    s.swap (this->lang_pimpl_state_.str_);
    ::namespace_::lang r;
    r.value (s);
    return r;
  }

  // space_pimpl
  //

  space_pimpl::
  space_pimpl ()
  : space_pskel (0)
  {
  }

  void space_pimpl::
  pre ()
  {
    this->space_pimpl_state_.str_.clear ();
  }

  void space_pimpl::
  _characters (const ::xsde::cxx::ro_string& s)
  {
    if (this->_facets ().whitespace_ == 2 &&
        this->space_pimpl_state_.str_.size () == 0)
    {
      ::xsde::cxx::ro_string tmp (s.data (), s.size ());

      if (::xsde::cxx::trim_left (tmp) != 0)
      {
        this->space_pimpl_state_.str_ += tmp;
      }
    }
    else
      this->space_pimpl_state_.str_ += s;
  }

  void space_pimpl::
  _post ()
  {
    ::xsde::cxx::parser::validating::string_common::validate_facets (
      this->space_pimpl_state_.str_,
      this->_facets (),
      this->_context ());
  }

  ::namespace_::space space_pimpl::
  post_space ()
  {
    ::namespace_::space::value_type v =
    static_cast< ::namespace_::space::value_type > (0);
    const char* s = this->space_pimpl_state_.str_.c_str ();

    if (strcmp (s, "default") == 0)
      v = ::namespace_::space::default_;
    else if (strcmp (s, "preserve") == 0)
      v = ::namespace_::space::preserve;

    ::namespace_::space r (v);
    return r;
  }

  // lang_member_pimpl
  //

  lang_member_pimpl::
  lang_member_pimpl ()
  : lang_member_pskel (0)
  {
  }

  void lang_member_pimpl::
  pre ()
  {
    this->lang_member_pimpl_state_.str_.clear ();
  }

  void lang_member_pimpl::
  _characters (const ::xsde::cxx::ro_string& s)
  {
    if (this->_facets ().whitespace_ == 2 &&
        this->lang_member_pimpl_state_.str_.size () == 0)
    {
      ::xsde::cxx::ro_string tmp (s.data (), s.size ());

      if (::xsde::cxx::trim_left (tmp) != 0)
      {
        this->lang_member_pimpl_state_.str_ += tmp;
      }
    }
    else
      this->lang_member_pimpl_state_.str_ += s;
  }

  void lang_member_pimpl::
  _post ()
  {
    ::xsde::cxx::parser::validating::string_common::validate_facets (
      this->lang_member_pimpl_state_.str_,
      this->_facets (),
      this->_context ());
  }

  ::namespace_::lang_member lang_member_pimpl::
  post_lang_member ()
  {
    ::namespace_::lang_member::value_type v =
    static_cast< ::namespace_::lang_member::value_type > (0);
    const char* s = this->lang_member_pimpl_state_.str_.c_str ();

    if (strcmp (s, "") == 0)
      v = ::namespace_::lang_member::empty;

    ::namespace_::lang_member r (v);
    return r;
  }
}

// Begin epilogue.
//
//
// End epilogue.

