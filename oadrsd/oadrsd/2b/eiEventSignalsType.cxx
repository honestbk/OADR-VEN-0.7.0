// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
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
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "eiEventSignalsType.hxx"

#include "eiEventSignalType.hxx"

#include "eiEventBaselineType.hxx"

namespace oadr2b
{
  namespace ei
  {
    // eiEventSignalsType
    // 

    const eiEventSignalsType::eiEventSignal_sequence& eiEventSignalsType::
    eiEventSignal () const
    {
      return this->eiEventSignal_;
    }

    eiEventSignalsType::eiEventSignal_sequence& eiEventSignalsType::
    eiEventSignal ()
    {
      return this->eiEventSignal_;
    }

    void eiEventSignalsType::
    eiEventSignal (const eiEventSignal_sequence& s)
    {
      this->eiEventSignal_ = s;
    }

    const eiEventSignalsType::eiEventBaseline_optional& eiEventSignalsType::
    eiEventBaseline () const
    {
      return this->eiEventBaseline_;
    }

    eiEventSignalsType::eiEventBaseline_optional& eiEventSignalsType::
    eiEventBaseline ()
    {
      return this->eiEventBaseline_;
    }

    void eiEventSignalsType::
    eiEventBaseline (const eiEventBaseline_type& x)
    {
      this->eiEventBaseline_.set (x);
    }

    void eiEventSignalsType::
    eiEventBaseline (const eiEventBaseline_optional& x)
    {
      this->eiEventBaseline_ = x;
    }

    void eiEventSignalsType::
    eiEventBaseline (::std::unique_ptr< eiEventBaseline_type > x)
    {
      this->eiEventBaseline_.set (std::move (x));
    }
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace oadr2b
{
  namespace ei
  {
    // eiEventSignalsType
    //

    eiEventSignalsType::
    eiEventSignalsType ()
    : ::xml_schema::type (),
      eiEventSignal_ (this),
      eiEventBaseline_ (this)
    {
    }

    eiEventSignalsType::
    eiEventSignalsType (const eiEventSignalsType& x,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      eiEventSignal_ (x.eiEventSignal_, f, this),
      eiEventBaseline_ (x.eiEventBaseline_, f, this)
    {
    }

    eiEventSignalsType::
    eiEventSignalsType (const ::xercesc::DOMElement& e,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      eiEventSignal_ (this),
      eiEventBaseline_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void eiEventSignalsType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // eiEventSignal
        //
        if (n.name () == "eiEventSignal" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< eiEventSignal_type > r (
            eiEventSignal_traits::create (i, f, this));

          this->eiEventSignal_.push_back (::std::move (r));
          continue;
        }

        // eiEventBaseline
        //
        if (n.name () == "eiEventBaseline" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< eiEventBaseline_type > r (
            eiEventBaseline_traits::create (i, f, this));

          if (!this->eiEventBaseline_)
          {
            this->eiEventBaseline_.set (::std::move (r));
            continue;
          }
        }

        break;
      }
    }

    eiEventSignalsType* eiEventSignalsType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class eiEventSignalsType (*this, f, c);
    }

    eiEventSignalsType& eiEventSignalsType::
    operator= (const eiEventSignalsType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->eiEventSignal_ = x.eiEventSignal_;
        this->eiEventBaseline_ = x.eiEventBaseline_;
      }

      return *this;
    }

    eiEventSignalsType::
    ~eiEventSignalsType ()
    {
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace ei
  {
  }
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace oadr2b
{
  namespace ei
  {
    void
    operator<< (::xercesc::DOMElement& e, const eiEventSignalsType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // eiEventSignal
      //
      for (eiEventSignalsType::eiEventSignal_const_iterator
           b (i.eiEventSignal ().begin ()), n (i.eiEventSignal ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "eiEventSignal",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *b;
      }

      // eiEventBaseline
      //
      if (i.eiEventBaseline ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "eiEventBaseline",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *i.eiEventBaseline ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
