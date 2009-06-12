//---------------------------------------------------------------------------*
//                                                                           *
//                        File 'goil_target_arm7.h'                          *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                      june 12th, 2009, at 14h47'22"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_target_arm7_DEFINED
#define goil_target_arm7_DEFINED

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
#include "goil_routines.h"
#include "goil_semantic_types.h"
#include "goil_types_counter.h"
#include "goil_types_isr.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                      Routine 'generate_target_arm7'                       *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_target_arm7 (C_Compiler &,
                                GGS_lstring  ,
                                GGS_ident_map  ,
                                GGS_oil_obj  ,
                                GGS_string & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                       Routine 'generate_isr_arm7'                         *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_isr_arm7 (C_Compiler &,
                                const GGS_isr_map  ,
                                GGS_string & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     Routine 'generate_counter_arm7'                       *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_counter_arm7 (C_Compiler &,
                                const GGS_counter_map  ,
                                GGS_string & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

#endif
