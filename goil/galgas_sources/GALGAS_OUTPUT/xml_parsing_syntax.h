//---------------------------------------------------------------------------*
//                                                                           *
//                       File 'xml_parsing_syntax.h'                         *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                      june 12th, 2009, at 14h44'46"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef xml_parsing_syntax_DEFINED
#define xml_parsing_syntax_DEFINED

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

#include "xml_parsing_lexique.h"

// Include imported semantics
#include "xml_types.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                            Routine 'addText'                              *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_addText (C_Compiler &,
                                GGS_xmlNodeList  &,
                                const GGS_bool ,
                                const GGS_bool ,
                                const GGS_string  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//               Parser class xml_parsing_syntax declaration                 *
//                                                                           *
//---------------------------------------------------------------------------*

class xml_parsing_syntax {
  public : virtual ~xml_parsing_syntax (void) {}

  protected : virtual void nt_start_symbol_ (xml_parsing_lexique &,
                                GGS_xmlNodeList  &,
                                const GGS_bool ,
                                const GGS_bool ,
                                const GGS_bool ) = 0 ;

  protected : virtual void nt_element_list_ (xml_parsing_lexique &,
                                GGS_xmlNodeList  &,
                                const GGS_bool ,
                                const GGS_bool ,
                                const GGS_bool ,
                                const GGS_string ) = 0 ;

  protected : virtual void nt_element_ (xml_parsing_lexique &,
                                GGS_xmlNodeList  &,
                                const GGS_bool ,
                                const GGS_bool ,
                                const GGS_bool ,
                                const GGS_string ) = 0 ;

  protected : void pr_start_symbol_xml_parsing_syntax_31_19_ (xml_parsing_lexique &,
                                GGS_xmlNodeList  &,
                                const GGS_bool ,
                                const GGS_bool ,
                                const GGS_bool ) ;

  protected : virtual sint16 select_repeat_xml_parsing_syntax_0 (xml_parsing_lexique &) = 0 ;

  protected : void pr_element_list_xml_parsing_syntax_98_19_ (xml_parsing_lexique &,
                                GGS_xmlNodeList  &,
                                const GGS_bool ,
                                const GGS_bool ,
                                const GGS_bool ,
                                const GGS_string ) ;

  protected : virtual sint16 select_repeat_xml_parsing_syntax_1 (xml_parsing_lexique &) = 0 ;

  protected : void pr_element_xml_parsing_syntax_125_14_ (xml_parsing_lexique &,
                                GGS_xmlNodeList  &,
                                const GGS_bool ,
                                const GGS_bool ,
                                const GGS_bool ,
                                const GGS_string ) ;

  protected : void pr_element_xml_parsing_syntax_159_14_ (xml_parsing_lexique &,
                                GGS_xmlNodeList  &,
                                const GGS_bool ,
                                const GGS_bool ,
                                const GGS_bool ,
                                const GGS_string ) ;

  protected : virtual sint16 select_repeat_xml_parsing_syntax_2 (xml_parsing_lexique &) = 0 ;

  protected : virtual sint16 select_xml_parsing_syntax_3 (xml_parsing_lexique &) = 0 ;

} ;

//---------------------------------------------------------------------------*

#endif
