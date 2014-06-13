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

#ifndef RESOURCE_LISTS_PIMPL_HXX
#define RESOURCE_LISTS_PIMPL_HXX

#include <xsde/cxx/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#ifndef XSDE_OMIT_PAGGR
#  define XSDE_OMIT_PAGGR
#  define RESOURCE_LISTS_PIMPL_HXX_CLEAR_OMIT_PAGGR
#endif

#include "resource-lists-pskel.hxx"

#include <xsde/cxx/stack.hxx>

#include "xml-pimpl.hxx"

namespace resource_lists
{
  class display_nameType_pimpl: public display_nameType_pskel
  {
    public:
    display_nameType_pimpl ();

    virtual void
    pre ();

    // Attributes.
    //
    virtual void
    lang (const ::namespace_::lang&);

    virtual ::resource_lists::display_nameType
    post_display_nameType ();

    public:
    ::xml_schema::string_pimpl base_impl_;

    public:
    struct display_nameType_pimpl_state
    {
      ::resource_lists::display_nameType display_nameType_;
    };

    display_nameType_pimpl_state display_nameType_pimpl_state_;
  };

  class display_name_pimpl: public display_name_pskel
  {
    public:
    display_name_pimpl ();

    virtual void
    pre ();

    virtual ::resource_lists::display_name
    post_display_name ();

    public:
    ::resource_lists::display_nameType_pimpl base_impl_;

    public:
    struct display_name_pimpl_state
    {
      ::resource_lists::display_name display_name_;
    };

    display_name_pimpl_state display_name_pimpl_state_;
  };

  class entryType_pimpl: public entryType_pskel
  {
    public:
    virtual void
    pre ();

    // Attributes.
    //
    virtual void
    uri (const ::std::string&);

    // Elements.
    //
    virtual void
    display_name (const ::resource_lists::display_name&);

    virtual ::resource_lists::entryType
    post_entryType ();

    public:
    struct entryType_pimpl_state
    {
      ::resource_lists::entryType entryType_;
    };

    entryType_pimpl_state entryType_pimpl_state_;
  };

  class entry_refType_pimpl: public entry_refType_pskel
  {
    public:
    virtual void
    pre ();

    // Attributes.
    //
    virtual void
    ref (const ::std::string&);

    // Elements.
    //
    virtual void
    display_name (const ::resource_lists::display_nameType&);

    virtual ::resource_lists::entry_refType
    post_entry_refType ();

    public:
    struct entry_refType_pimpl_state
    {
      ::resource_lists::entry_refType entry_refType_;
    };

    entry_refType_pimpl_state entry_refType_pimpl_state_;
  };

  class externalType_pimpl: public externalType_pskel
  {
    public:
    virtual void
    pre ();

    // Attributes.
    //
    virtual void
    anchor (const ::std::string&);

    // Elements.
    //
    virtual void
    display_name (const ::resource_lists::display_nameType&);

    virtual ::resource_lists::externalType
    post_externalType ();

    public:
    struct externalType_pimpl_state
    {
      ::resource_lists::externalType externalType_;
    };

    externalType_pimpl_state externalType_pimpl_state_;
  };

  class listType_pimpl: public listType_pskel
  {
    public:
    listType_pimpl (bool = false);

    ~listType_pimpl ();

    virtual void
    _reset ();

    virtual void
    pre ();

    // Attributes.
    //
    virtual void
    name (const ::std::string&);

    // Elements.
    //
    virtual void
    display_name (const ::resource_lists::display_nameType&);

    virtual void
    sequence_next ();

    virtual void
    choice_arm (choice_arm_tag);

    virtual void
    list (::resource_lists::list*);

    virtual void
    external (const ::resource_lists::externalType&);

    virtual void
    entry (const ::resource_lists::entryType&);

    virtual void
    entry_ref (const ::resource_lists::entry_refType&);

    virtual ::resource_lists::listType*
    post_listType ();

    public:
    void
    pre_impl (::resource_lists::listType*);

    public:
    struct listType_pimpl_state
    {
      ::resource_lists::listType* listType_;
      ::resource_lists::listType::sequence_type* sequence_;
    };

    listType_pimpl_state listType_pimpl_state_first_;
    ::xsde::cxx::stack listType_pimpl_state_;
    bool listType_pimpl_base_;
  };

  class list_pimpl: public list_pskel
  {
    public:
    list_pimpl (bool = false);

    ~list_pimpl ();

    virtual void
    _reset ();

    virtual void
    pre ();

    virtual ::resource_lists::list*
    post_list ();

    public:
    void
    pre_impl (::resource_lists::list*);

    public:
    ::resource_lists::listType_pimpl base_impl_;

    public:
    struct list_pimpl_state
    {
      ::resource_lists::list* list_;
    };

    list_pimpl_state list_pimpl_state_first_;
    ::xsde::cxx::stack list_pimpl_state_;
    bool list_pimpl_base_;
  };

  class resource_lists_pimpl: public resource_lists_pskel
  {
    public:
    resource_lists_pimpl (bool = false);

    ~resource_lists_pimpl ();

    virtual void
    _reset ();

    virtual void
    pre ();

    // Elements.
    //
    virtual void
    sequence_next ();

    virtual void
    list (::resource_lists::listType*);

    virtual ::resource_lists::resource_lists*
    post_resource_lists ();

    public:
    void
    pre_impl (::resource_lists::resource_lists*);

    public:
    struct resource_lists_pimpl_state
    {
      ::resource_lists::resource_lists* resource_lists_;
      ::resource_lists::resource_lists::sequence_type* sequence_;
    };

    resource_lists_pimpl_state resource_lists_pimpl_state_;
    bool resource_lists_pimpl_base_;
  };
}

#ifdef RESOURCE_LISTS_PIMPL_HXX_CLEAR_OMIT_PAGGR
#  undef XSDE_OMIT_PAGGR
#endif

#ifndef XSDE_OMIT_PAGGR

#include <xsde/cxx/hybrid/parser-map.hxx>

namespace resource_lists
{
  // Parser aggregate for the resource-lists element.
  //
  class resource_lists_paggr
  {
    public:
    resource_lists_paggr ();

    void
    pre ()
    {
      this->resource_lists_p_.pre ();
    }

    ::resource_lists::resource_lists*
    post ()
    {
      return this->resource_lists_p_.post_resource_lists ();
    }

    ::resource_lists::resource_lists_pimpl&
    root_parser ()
    {
      return this->resource_lists_p_;
    }

    static const char*
    root_name ();

    static const char*
    root_namespace ();

    void
    reset ()
    {
      this->resource_lists_p_._reset ();
    }

    static bool
    polymorphic ()
    {
      return false;
    }

    public:
    ::xml_schema::string_pimpl string_p_;
    ::xml_schema::uri_pimpl uri_p_;
    ::resource_lists::list_pimpl list_p_;
    ::resource_lists::listType_pimpl listType_p_;
    ::resource_lists::entryType_pimpl entryType_p_;
    ::resource_lists::display_name_pimpl display_name_p_;
    ::resource_lists::entry_refType_pimpl entry_refType_p_;
    ::resource_lists::externalType_pimpl externalType_p_;
    ::resource_lists::resource_lists_pimpl resource_lists_p_;
    ::resource_lists::display_nameType_pimpl display_nameType_p_;
    ::namespace_::lang_pimpl lang_p_;
  };
}

#endif // XSDE_OMIT_PAGGR

// Begin epilogue.
//
//
// End epilogue.

#include <xsde/cxx/post.hxx>

#endif // RESOURCE_LISTS_PIMPL_HXX
