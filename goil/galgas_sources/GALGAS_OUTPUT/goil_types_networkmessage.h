//---------------------------------------------------------------------------*
//                                                                           *
//                    File 'goil_types_networkmessage.h'                     *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                      june 12th, 2009, at 14h44'55"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_types_networkmessage_DEFINED
#define goil_types_networkmessage_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/C_GGS_Object.h"
#include "galgas/GGS_location.h"
#include "galgas/GGS_lbool.h"
#include "galgas/GGS_lchar.h"
#include "galgas/GGS_lstring.h"
#include "galgas/GGS_ldouble.h"
#include "galgas/GGS_luint.h"
#include "galgas/GGS_lsint.h"
#include "galgas/GGS_luint64.h"
#include "galgas/GGS_lsint64.h"
#include "galgas/GGS_stringset.h"
#include "galgas/GGS_binaryset.h"
#include "galgas/GGS_filewrapper.h"
#include "galgas/predefined_types.h"
#include "galgas/AC_galgas_class.h"
#include "galgas/AC_galgas_domain.h"
#include "galgas/AC_galgas_mapindex.h"
#include "galgas/AC_galgas_map.h"
#include "galgas/AC_galgas_listmap.h"
#include "galgas/AC_galgas_list.h"
#include "galgas/AC_galgas_sortedlist.h"

//---------------------------------------------------------------------------*

#include "galgas/C_Lexique.h"

// Include imported semantics
#include "goil_basic_types.h"
#include "goil_routines.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*

class GGS_base_netprop ;
class cPtr_base_netprop ;
class GGS_void_netprop ;
class cPtr_void_netprop ;
class GGS_static_netprop ;
class cPtr_static_netprop ;
class GGS_dynamic_netprop ;
class cPtr_dynamic_netprop ;
class GGS_zero_netprop ;
class cPtr_zero_netprop ;
class GGS_netmess_obj ;
class cPtr_netmess_obj ;
class GGS_netmess_map ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     GALGAS class 'GGS_base_netprop'                       *
//                                                                           *
//---------------------------------------------------------------------------*

class GGS_base_netprop : public AC_galgas_class {
//--- Default constructor
  public : inline GGS_base_netprop (void) :
  AC_galgas_class () {}

//--- Pointer assignment constructor
  public : GGS_base_netprop (cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_base_netprop (cPtr__AC_galgas_class & inObject) ;

//--- _castFrom class method (implements cast expression)
  public : static GGS_base_netprop
  _castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_base_netprop * getPtr (void) const {
    return (cPtr_base_netprop *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_location  reader_loc (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_base_netprop * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_base_netprop * operator () (LOCATION_ARGS) const {
      return (cPtr_base_netprop *) mPointer ;
    }
  #endif

//--- Galgas RTTI
AC_galgasClassRunTimeInformation * _galgasObjectRunTimeInfo (void) const ;

} ;

//---------------------------------------------------------------------------*

extern C_galgasRootClassRunTimeInformation gClassInfoFor__base_netprop ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     GALGAS class 'GGS_void_netprop'                       *
//                                                                           *
//---------------------------------------------------------------------------*

class GGS_void_netprop : public GGS_base_netprop {
//--- Default constructor
  public : inline GGS_void_netprop (void) :
  GGS_base_netprop () {}

//--- Pointer assignment constructor
  public : GGS_void_netprop (cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_void_netprop (cPtr__AC_galgas_class & inObject) ;

//--- _castFrom class method (implements cast expression)
  public : static GGS_void_netprop
  _castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_void_netprop constructor_new (C_Compiler & inLexique,
                                const GGS_location & argument_0
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_void_netprop * getPtr (void) const {
    return (cPtr_void_netprop *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_void_netprop * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_void_netprop * operator () (LOCATION_ARGS) const {
      return (cPtr_void_netprop *) mPointer ;
    }
  #endif

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformation gClassInfoFor__void_netprop ;

//---------------------------------------------------------------------------*
//                                                                           *
//                    GALGAS class 'GGS_static_netprop'                      *
//                                                                           *
//---------------------------------------------------------------------------*

class GGS_static_netprop : public GGS_base_netprop {
//--- Default constructor
  public : inline GGS_static_netprop (void) :
  GGS_base_netprop () {}

//--- Pointer assignment constructor
  public : GGS_static_netprop (cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_static_netprop (cPtr__AC_galgas_class & inObject) ;

//--- _castFrom class method (implements cast expression)
  public : static GGS_static_netprop
  _castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_static_netprop constructor_new (C_Compiler & inLexique,
                                const GGS_location & argument_0,
                                const GGS_lsint & argument_1,
                                const GGS_lstring & argument_2,
                                const GGS_lsint & argument_3,
                                const GGS_lstring & argument_4,
                                const GGS_luint64 & argument_5,
                                const GGS_lstring & argument_6
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_static_netprop * getPtr (void) const {
    return (cPtr_static_netprop *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_lsint  reader_size_in_bits (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_lstring  reader_bit_ordering (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_lsint  reader_bit_position (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_lstring  reader_data_interpretation (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_luint64  reader_initial_value (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_lstring  reader_direction (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_static_netprop * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_static_netprop * operator () (LOCATION_ARGS) const {
      return (cPtr_static_netprop *) mPointer ;
    }
  #endif

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformation gClassInfoFor__static_netprop ;

//---------------------------------------------------------------------------*
//                                                                           *
//                    GALGAS class 'GGS_dynamic_netprop'                     *
//                                                                           *
//---------------------------------------------------------------------------*

class GGS_dynamic_netprop : public GGS_base_netprop {
//--- Default constructor
  public : inline GGS_dynamic_netprop (void) :
  GGS_base_netprop () {}

//--- Pointer assignment constructor
  public : GGS_dynamic_netprop (cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_dynamic_netprop (cPtr__AC_galgas_class & inObject) ;

//--- _castFrom class method (implements cast expression)
  public : static GGS_dynamic_netprop
  _castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_dynamic_netprop constructor_new (C_Compiler & inLexique,
                                const GGS_location & argument_0,
                                const GGS_lsint & argument_1,
                                const GGS_lstring & argument_2,
                                const GGS_lsint & argument_3,
                                const GGS_luint64 & argument_4,
                                const GGS_lstring & argument_5
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_dynamic_netprop * getPtr (void) const {
    return (cPtr_dynamic_netprop *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_lsint  reader_max_size_in_bits (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_lstring  reader_bit_ordering (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_lsint  reader_bit_position (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_luint64  reader_initial_value (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_lstring  reader_direction (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_dynamic_netprop * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_dynamic_netprop * operator () (LOCATION_ARGS) const {
      return (cPtr_dynamic_netprop *) mPointer ;
    }
  #endif

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformation gClassInfoFor__dynamic_netprop ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     GALGAS class 'GGS_zero_netprop'                       *
//                                                                           *
//---------------------------------------------------------------------------*

class GGS_zero_netprop : public GGS_base_netprop {
//--- Default constructor
  public : inline GGS_zero_netprop (void) :
  GGS_base_netprop () {}

//--- Pointer assignment constructor
  public : GGS_zero_netprop (cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_zero_netprop (cPtr__AC_galgas_class & inObject) ;

//--- _castFrom class method (implements cast expression)
  public : static GGS_zero_netprop
  _castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_zero_netprop constructor_new (C_Compiler & inLexique,
                                const GGS_location & argument_0,
                                const GGS_lstring & argument_1
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_zero_netprop * getPtr (void) const {
    return (cPtr_zero_netprop *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_lstring  reader_direction (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_zero_netprop * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_zero_netprop * operator () (LOCATION_ARGS) const {
      return (cPtr_zero_netprop *) mPointer ;
    }
  #endif

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformation gClassInfoFor__zero_netprop ;

//---------------------------------------------------------------------------*
//                                                                           *
//                      GALGAS class 'GGS_netmess_obj'                       *
//                                                                           *
//---------------------------------------------------------------------------*

class GGS_netmess_obj : public GGS_oil_obj {
//--- Default constructor
  public : inline GGS_netmess_obj (void) :
  GGS_oil_obj () {}

//--- Pointer assignment constructor
  public : GGS_netmess_obj (cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_netmess_obj (cPtr__AC_galgas_class & inObject) ;

//--- _castFrom class method (implements cast expression)
  public : static GGS_netmess_obj
  _castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_netmess_obj constructor_new (C_Compiler & inLexique,
                                const GGS_lstring & argument_0,
                                const GGS_lstring & argument_1,
                                const GGS_base_netprop & argument_2
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_netmess_obj * getPtr (void) const {
    return (cPtr_netmess_obj *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_lstring  reader_ipdu (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_base_netprop  reader_netprop (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_netmess_obj * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_netmess_obj * operator () (LOCATION_ARGS) const {
      return (cPtr_netmess_obj *) mPointer ;
    }
  #endif

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformation gClassInfoFor__netmess_obj ;

//---------------------------------------------------------------------------*
//                                                                           *
//                            Map '@netmess_map'                             *
//                                                                           *
//---------------------------------------------------------------------------*

class elementOf_GGS_netmess_map ;

class GGS_netmess_map : public AC_galgas_map {
//--- Element Class
  public : typedef elementOf_GGS_netmess_map cElement ;

//--- Get pointers
  public : inline cElement * firstObject (void) const { return (cElement *) internalFirstObject () ; }
  public : inline cElement * lastObject (void) const { return (cElement *) internalLastObject () ; }

//--- Comparison methods
  public : GGS_bool operator_isEqual (const GGS_netmess_map & inOperand) const ;
  public : GGS_bool operator_isNotEqual (const GGS_netmess_map & inOperand) const ;

//--- Create a new element
  protected : virtual AC_galgas_map_element *
  new_element (const GGS_lstring & inKey, void * inInfo) ;

//--- Assign information to an existing element
  protected : virtual void
  assignInfo (AC_galgas_map_element * inPtr, void * inInfo) ;

//--- Enter an index
  public : void enterIndex (const GGS_lstring & inKey,
                            AC_galgas_index_core & outIndex) ;

//--- Get object pointer (for method call)
  public : inline GGS_netmess_map * operator () (UNUSED_LOCATION_ARGS) { return this ; }
  public : inline const GGS_netmess_map * operator () (UNUSED_LOCATION_ARGS) const { return this ; }

//--- 'emptyMap' constructor
  public : static GGS_netmess_map constructor_emptyMap (C_Compiler & inLexique COMMA_LOCATION_ARGS) ;

//--- Method used for duplicate a map
  protected : virtual void internalInsertForDuplication (AC_galgas_map_element * inPtr) ;

//--- Modifiers "set'Value'ForKey"

  public : static const utf32 kRemoveMessage_del [] ;

//--- 'del' Remove Modifier
  public : void modifier_del (C_Compiler & inLexique,
                                const GGS_lstring & inKey,
                                GGS_netmess_obj & outParameter0 COMMA_LOCATION_ARGS) ;

  public : static const utf32 kInsertMessage_put [] ;

//--- 'put' Insert Modifier
  public : void modifier_put (C_Compiler & inLexique,
                                const GGS_lstring & inKey,
                                const GGS_netmess_obj &  inParameter0 COMMA_LOCATION_ARGS) ;

  public : static const utf32 kSearchMessage_get [] ;

//--- 'get' Search Method
  public : void method_get (C_Compiler & inLexique,
                                const GGS_lstring & inKey,
                                GGS_netmess_obj   & outParameter0 COMMA_LOCATION_ARGS) const ;
//--- Internal method for removing an element
  protected : void removeElement (C_Compiler & inLexique,
                                   const utf32 * inErrorMessage,
                                   const GGS_lstring & inKey,
                                   GGS_netmess_obj & outParameter0,
                                   GGS_luint * outIndex
                                   COMMA_LOCATION_ARGS) ;
//--- Internal method for inserting an element
  protected : void insertElement (C_Compiler & inLexique,
                                   const utf32 * inErrorMessage,
                                   const GGS_lstring & inKey,
                                   const GGS_netmess_obj & inParameter0,
                                   GGS_luint * outIndex
                                   COMMA_LOCATION_ARGS) ;
//--- Internal method for searching for an element
  protected : void searchElement (C_Compiler & inLexique,
                                   const utf32 * inErrorMessage,
                                   const GGS_lstring & inKey,
                                   GGS_netmess_obj & outParameter0,
                                   GGS_luint * outIndex
                                   COMMA_LOCATION_ARGS) const ;
  public : GGS_string reader_description (C_Compiler & inLexique
                                          COMMA_LOCATION_ARGS,
                                          const sint32 inIndentation = 0) const ;
  public : static GGS_netmess_map constructor_mapWithMapToOverride (C_Compiler & inLexique,
                                            const GGS_netmess_map & inMapToOverride
                                            COMMA_LOCATION_ARGS) ;
  public : GGS_netmess_map reader_overriddenMap (C_Compiler & inLexique
                                            COMMA_LOCATION_ARGS) const ;
//--------------------------------- Map Enumerator
  public : class cEnumerator : public cAbstractMapEnumerator {
  //--- Constructors
    public : inline cEnumerator (const GGS_netmess_map & inMap,
                                 const bool inAscending) :
    cAbstractMapEnumerator (inMap, inAscending) {
    }
    public : inline cEnumerator (const GGS_netmess_map & inMap) :
    cAbstractMapEnumerator (inMap) {
    }
  //--- Iterator method
    public : inline cElement * nextObject (void) {
      return (cElement *) internalNextObject () ;
    }
    public : /* const */ GGS_netmess_obj   & _netmess (LOCATION_ARGS) const ;
  } ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                    abstract class 'cPtr_base_netprop'                     *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_base_netprop : public cPtr__AC_galgas_class {
//--- Constructor
  public : cPtr_base_netprop (const GGS_location & 
                                COMMA_LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_GGS_Object::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~cPtr_base_netprop (void) {}
  #endif

//--- Attributes
  public : GGS_location  loc ;
//--- Method 'generate'
  public : virtual void method_generate (C_Compiler &,
                                GGS_string& 
                                COMMA_LOCATION_ARGS) const = 0 ;

//--- Class message
  public : virtual const char * _message (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_Compiler & inLexique,
                        C_String & ioString,
                        const sint32 inIndentation
                        COMMA_LOCATION_ARGS) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformation * galgasRTTI (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                    abstract class 'cPtr_void_netprop'                     *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_void_netprop : public cPtr_base_netprop {
  private : typedef cPtr_base_netprop inherited ;
//--- Constructor
  public : cPtr_void_netprop (const GGS_location & 
                                COMMA_LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_GGS_Object::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~cPtr_void_netprop (void) {}
  #endif

//--- Attributes
//--- Method 'generate'
  public : virtual void method_generate (C_Compiler &,
                                GGS_string& 
                                COMMA_LOCATION_ARGS) const ;

//--- Class message
  public : virtual const char * _message (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_Compiler & inLexique,
                        C_String & ioString,
                        const sint32 inIndentation
                        COMMA_LOCATION_ARGS) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformation * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                   abstract class 'cPtr_static_netprop'                    *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_static_netprop : public cPtr_base_netprop {
  private : typedef cPtr_base_netprop inherited ;
//--- Constructor
  public : cPtr_static_netprop (const GGS_location & ,
                                const GGS_lsint & ,
                                const GGS_lstring & ,
                                const GGS_lsint & ,
                                const GGS_lstring & ,
                                const GGS_luint64 & ,
                                const GGS_lstring & 
                                COMMA_LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_GGS_Object::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~cPtr_static_netprop (void) {}
  #endif

//--- Attributes
  public : GGS_lsint  size_in_bits ;
  public : GGS_lstring  bit_ordering ;
  public : GGS_lsint  bit_position ;
  public : GGS_lstring  data_interpretation ;
  public : GGS_luint64  initial_value ;
  public : GGS_lstring  direction ;
//--- Method 'generate'
  public : virtual void method_generate (C_Compiler &,
                                GGS_string& 
                                COMMA_LOCATION_ARGS) const ;

//--- Class message
  public : virtual const char * _message (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_Compiler & inLexique,
                        C_String & ioString,
                        const sint32 inIndentation
                        COMMA_LOCATION_ARGS) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformation * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                  abstract class 'cPtr_dynamic_netprop'                    *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_dynamic_netprop : public cPtr_base_netprop {
  private : typedef cPtr_base_netprop inherited ;
//--- Constructor
  public : cPtr_dynamic_netprop (const GGS_location & ,
                                const GGS_lsint & ,
                                const GGS_lstring & ,
                                const GGS_lsint & ,
                                const GGS_luint64 & ,
                                const GGS_lstring & 
                                COMMA_LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_GGS_Object::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~cPtr_dynamic_netprop (void) {}
  #endif

//--- Attributes
  public : GGS_lsint  max_size_in_bits ;
  public : GGS_lstring  bit_ordering ;
  public : GGS_lsint  bit_position ;
  public : GGS_luint64  initial_value ;
  public : GGS_lstring  direction ;
//--- Method 'generate'
  public : virtual void method_generate (C_Compiler &,
                                GGS_string& 
                                COMMA_LOCATION_ARGS) const ;

//--- Class message
  public : virtual const char * _message (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_Compiler & inLexique,
                        C_String & ioString,
                        const sint32 inIndentation
                        COMMA_LOCATION_ARGS) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformation * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                    abstract class 'cPtr_zero_netprop'                     *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_zero_netprop : public cPtr_base_netprop {
  private : typedef cPtr_base_netprop inherited ;
//--- Constructor
  public : cPtr_zero_netprop (const GGS_location & ,
                                const GGS_lstring & 
                                COMMA_LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_GGS_Object::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~cPtr_zero_netprop (void) {}
  #endif

//--- Attributes
  public : GGS_lstring  direction ;
//--- Method 'generate'
  public : virtual void method_generate (C_Compiler &,
                                GGS_string& 
                                COMMA_LOCATION_ARGS) const ;

//--- Class message
  public : virtual const char * _message (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_Compiler & inLexique,
                        C_String & ioString,
                        const sint32 inIndentation
                        COMMA_LOCATION_ARGS) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformation * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                    abstract class 'cPtr_netmess_obj'                      *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_netmess_obj : public cPtr_oil_obj {
  private : typedef cPtr_oil_obj inherited ;
//--- Constructor
  public : cPtr_netmess_obj (const GGS_lstring & ,
                                const GGS_lstring & ,
                                const GGS_base_netprop & 
                                COMMA_LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_GGS_Object::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~cPtr_netmess_obj (void) {}
  #endif

//--- Attributes
  public : GGS_lstring  ipdu ;
  public : GGS_base_netprop  netprop ;
//--- Method 'generate'
  public : virtual void method_generate (C_Compiler &,
                                GGS_lstring  ,
                                GGS_string ,
                                GGS_string ,
                                GGS_string& 
                                COMMA_LOCATION_ARGS) const ;

//--- Class message
  public : virtual const char * _message (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_Compiler & inLexique,
                        C_String & ioString,
                        const sint32 inIndentation
                        COMMA_LOCATION_ARGS) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformation * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                      Element of map '@netmess_map'                        *
//                                                                           *
//---------------------------------------------------------------------------*

class e_netmess_map {
  public : GGS_netmess_obj  netmess ;

  public : e_netmess_map (void) ;
} ;

//---------------------------------------------------------------------------*

class elementOf_GGS_netmess_map : public AC_galgas_map_element {
//--- Constructor
  public : elementOf_GGS_netmess_map (const GGS_lstring & inKey,
                                     const sint32 inIndex,
                                     const e_netmess_map & inInfo) ;
//--- Get pointers
  public : inline elementOf_GGS_netmess_map * nextObject (void) const { return (elementOf_GGS_netmess_map *) mNextItem ; }
  public : inline elementOf_GGS_netmess_map * infObject (void) const { return (elementOf_GGS_netmess_map *) mInfPtr ; }
  public : inline elementOf_GGS_netmess_map * supObject (void) const { return (elementOf_GGS_netmess_map *) mSupPtr ; }
//--- Comparison
  protected : virtual bool isEqualToMapElement (const AC_galgas_map_element * inOperand) const ;
//--- Data member
  public : e_netmess_map mInfo ;
//--- Method for 'description' reader
  public : void appendForMapDescription (C_Compiler & inLexique,
                                         const sint32 inElementIndex,
                                         C_String & ioString,
                                         const sint32 inIndentation
                                         COMMA_LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------*

#endif
