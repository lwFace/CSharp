// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.0.2
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// .\be\be_codegen.cpp:146

#ifndef _TAO_IDL_EXAMPLEINTERFACESC_SPSMYF_H_
#define _TAO_IDL_EXAMPLEINTERFACESC_SPSMYF_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include /**/ "tao/Versioned_Namespace.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from 
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_root/root_ch.cpp:142
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  class Collocation_Proxy_Broker;
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:41

namespace ExampleInterfaces
{

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:784

#if !defined (_EXAMPLEINTERFACES_IADDER__VAR_OUT_CH_)
#define _EXAMPLEINTERFACES_IADDER__VAR_OUT_CH_

  class IAdder;
  typedef IAdder *IAdder_ptr;

  typedef
    TAO_Objref_Var_T<
        IAdder
      >
    IAdder_var;
  
  typedef
    TAO_Objref_Out_T<
        IAdder
      >
    IAdder_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:45

  class  IAdder
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<IAdder>;

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:306
    
    typedef IAdder_ptr _ptr_type;
    typedef IAdder_var _var_type;
    typedef IAdder_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static IAdder_ptr _duplicate (IAdder_ptr obj);

    static void _tao_release (IAdder_ptr obj);

    static IAdder_ptr _narrow (::CORBA::Object_ptr obj);
    static IAdder_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static IAdder_ptr _nil (void);

    virtual ::CORBA::Double add (::CORBA::Double arg1,
    ::CORBA::Double arg2);

    // TAO_IDL - Generated from
    // d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:156

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  private:
    TAO::Collocation_Proxy_Broker *the_TAO_IAdder_Proxy_Broker_;
  
  protected:
    // Concrete interface only.
    IAdder (void);

    // These methods traverse the inheritance tree and set the
    // parents piece of the given class in the right mode.
    virtual void ExampleInterfaces_IAdder_setup_collocation (void);

    // Concrete non-local interface only.
    IAdder (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    IAdder (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~IAdder (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    IAdder (const IAdder &);

    void operator= (const IAdder &);
  };

  // TAO_IDL - Generated from
  // d:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern  ::CORBA::TypeCode_ptr const _tc_IAdder;

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:70

} // module ExampleInterfaces

// Proxy Broker Factory function pointer declarations.

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_root/root_ch.cpp:184

extern 
TAO::Collocation_Proxy_Broker *
(*ExampleInterfaces__TAO_IAdder_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj);

// TAO_IDL - Generated from
// .\be\be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_EXAMPLEINTERFACES_IADDER__TRAITS_)
#define _EXAMPLEINTERFACES_IADDER__TRAITS_

  template<>
  struct  Objref_Traits< ::ExampleInterfaces::IAdder>
  {
    static ::ExampleInterfaces::IAdder_ptr duplicate (
        ::ExampleInterfaces::IAdder_ptr p);
    static void release (
        ::ExampleInterfaces::IAdder_ptr p);
    static ::ExampleInterfaces::IAdder_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::ExampleInterfaces::IAdder_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_ch.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace ExampleInterfaces
{
   void operator<<= ( ::CORBA::Any &, IAdder_ptr); // copying
   void operator<<= ( ::CORBA::Any &, IAdder_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, IAdder_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, ExampleInterfaces::IAdder_ptr); // copying
 void operator<<= (::CORBA::Any &, ExampleInterfaces::IAdder_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ExampleInterfaces::IAdder_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// d:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/cdr_op_ch.cpp:47

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const ExampleInterfaces::IAdder_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, ExampleInterfaces::IAdder_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1589
#if defined (__ACE_INLINE__)
#include "ExampleInterfacesC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

