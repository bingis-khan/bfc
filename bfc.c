#include <stddef.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdint.h>
#include <stdio.h>
int _global_argc;
const char** _global_argv;
static  size_t   from_dash_integral0 (    size_t  x68 ) {
    return (  x68 );
}

struct env1 {
    ;
    ;
    ;
    size_t  growth_dash_factor2440;
    ;
    ;
    ;
    size_t  starting_dash_size2439;
    ;
    ;
    ;
    ;
    ;
};

struct env2 {
    ;
    ;
    ;
    size_t  growth_dash_factor2440;
    ;
    ;
    ;
    size_t  starting_dash_size2439;
    ;
    ;
    ;
    ;
    ;
};

enum Unit_5 {
    Unit_5_Unit,
};

enum CAllocator_7 {
    CAllocator_7_CAllocator,
};

struct Slice_8 {
    uint8_t *  f_ptr;
    size_t  f_count;
};

struct List_6 {
    enum CAllocator_7  f_al;
    struct Slice_8  f_elements;
    size_t  f_count;
};

struct envunion4 {
    enum Unit_5  (*fun) (  struct env1*  ,    struct List_6 *  );
    struct env1 env;
};

struct env3 {
    ;
    ;
    ;
    ;
    ;
    struct env1 envinst1;
};

struct Jump_13 {
    size_t  f_jump_dash_addr;
    size_t  f_jump_dash_from;
    size_t  f_patch_dash_addr;
};

struct Slice_12 {
    struct Jump_13 *  f_ptr;
    size_t  f_count;
};

struct List_11 {
    enum CAllocator_7  f_al;
    struct Slice_12  f_elements;
    size_t  f_count;
};

struct envunion10 {
    enum Unit_5  (*fun) (  struct env2*  ,    struct List_11 *  );
    struct env2 env;
};

struct env9 {
    ;
    ;
    ;
    ;
    ;
    struct env2 envinst2;
};

struct env14 {
    size_t  shrink_dash_factor2441;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion16 {
    enum Unit_5  (*fun) (  struct env14*  ,    struct List_11 *  ,    size_t  ,    size_t  );
    struct env14 env;
};

struct env15 {
    ;
    ;
    ;
    struct env14 envinst14;
    ;
};

struct envunion18 {
    enum Unit_5  (*fun) (  struct env15*  ,    struct List_11 *  ,    size_t  );
    struct env15 env;
};

struct env17 {
    ;
    ;
    ;
    ;
    ;
    struct env15 envinst15;
    ;
    ;
    ;
};

struct envunion20 {
    enum Unit_5  (*fun) (  struct env3*  ,    struct List_6 *  ,    uint8_t  );
    struct env3 env;
};

struct env19 {
    ;
    ;
    ;
    ;
    ;
    struct env3 envinst3;
};

struct env21 {
    ;
    ;
    ;
    ;
    struct env3 envinst3;
    ;
};

struct env22 {
    ;
    ;
    ;
    ;
    struct env3 envinst3;
    ;
};

struct env23 {
    ;
    ;
    ;
    ;
    struct env3 envinst3;
    ;
};

struct env24 {
    ;
    ;
    ;
    ;
    struct env3 envinst3;
    ;
};

struct env25 {
    ;
    ;
    ;
    ;
    struct env3 envinst3;
    ;
};

struct envunion27 {
    enum Unit_5  (*fun) (  struct env19*  ,    struct List_6 *  ,    struct Slice_8  );
    struct env19 env;
};

struct envunion28 {
    enum Unit_5  (*fun) (  struct env3*  ,    struct List_6 *  ,    uint8_t  );
    struct env3 env;
};

struct env26 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env19 envinst19;
    struct env3 envinst3;
    ;
    ;
};

static  int32_t   from_dash_integral30 (    size_t  x50 ) {
    return ( (int32_t ) (  x50 ) );
}

static  int32_t   lc_dash_ctype29 (  ) {
    return (  from_dash_integral30 ( 0 ) );
}

static  const char*   from_dash_string31 (    uint8_t *  ptr86 ,    size_t  dref87 ) {
    return ( ( (const char* ) (  ptr86 ) ) );
}

struct envunion33 {
    enum Unit_5  (*fun) (  struct env19*  ,    struct List_6 *  ,    struct Slice_8  );
    struct env19 env;
};

struct env32 {
    ;
    ;
    ;
    struct env19 envinst19;
    ;
};

struct Array_36 {
    uint8_t _arr [1];
};

struct envunion35 {
    enum Unit_5  (*fun) (  struct env21*  ,    struct List_6 *  ,    struct Array_36  );
    struct env21 env;
};

struct env34 {
    ;
    ;
    ;
    struct env21 envinst21;
    ;
};

struct Array_39 {
    uint8_t _arr [4];
};

struct envunion38 {
    enum Unit_5  (*fun) (  struct env22*  ,    struct List_6 *  ,    struct Array_39  );
    struct env22 env;
};

struct env37 {
    ;
    ;
    ;
    struct env22 envinst22;
    ;
};

struct Array_42 {
    uint8_t _arr [3];
};

struct envunion41 {
    enum Unit_5  (*fun) (  struct env23*  ,    struct List_6 *  ,    struct Array_42  );
    struct env23 env;
};

struct env40 {
    ;
    ;
    ;
    struct env23 envinst23;
    ;
};

struct Array_45 {
    uint8_t _arr [2];
};

struct envunion44 {
    enum Unit_5  (*fun) (  struct env24*  ,    struct List_6 *  ,    struct Array_45  );
    struct env24 env;
};

struct env43 {
    ;
    ;
    ;
    struct env24 envinst24;
    ;
};

struct Array_48 {
    uint8_t _arr [7];
};

struct envunion47 {
    enum Unit_5  (*fun) (  struct env25*  ,    struct List_6 *  ,    struct Array_48  );
    struct env25 env;
};

struct env46 {
    ;
    ;
    ;
    struct env25 envinst25;
    ;
};

struct ByteBuf_51 {
    struct List_6  f_buf;
};

struct envunion50 {
    enum Unit_5  (*fun) (  struct env34*  ,    struct ByteBuf_51 *  ,    struct Array_36  );
    struct env34 env;
};

struct env49 {
    ;
    struct env34 envinst34;
    ;
};

struct envunion53 {
    enum Unit_5  (*fun) (  struct env37*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env37 env;
};

struct env52 {
    ;
    struct env37 envinst37;
    ;
};

struct envunion55 {
    enum Unit_5  (*fun) (  struct env40*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env40 env;
};

struct env54 {
    ;
    struct env40 envinst40;
    ;
};

struct envunion57 {
    enum Unit_5  (*fun) (  struct env43*  ,    struct ByteBuf_51 *  ,    struct Array_45  );
    struct env43 env;
};

struct env56 {
    ;
    struct env43 envinst43;
    ;
};

struct envunion59 {
    enum Unit_5  (*fun) (  struct env46*  ,    struct ByteBuf_51 *  ,    struct Array_48  );
    struct env46 env;
};

struct env58 {
    ;
    struct env46 envinst46;
    ;
};

struct envunion61 {
    enum Unit_5  (*fun) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  );
    struct env56 env;
};

struct env60 {
    struct env56 envinst56;
    ;
    ;
    ;
    ;
};

struct envunion63 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct env62 {
    ;
    ;
    ;
    ;
    ;
    struct env54 envinst54;
    ;
};

struct envunion65 {
    enum Unit_5  (*fun) (  struct env49*  ,    struct ByteBuf_51 *  ,    struct Array_36  );
    struct env49 env;
};

struct envunion66 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct envunion67 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct env64 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env49 envinst49;
    struct env52 envinst52;
    struct env54 envinst54;
    ;
    ;
};

struct envunion69 {
    enum Unit_5  (*fun) (  struct env49*  ,    struct ByteBuf_51 *  ,    struct Array_36  );
    struct env49 env;
};

struct envunion70 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct env68 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env49 envinst49;
    struct env52 envinst52;
    ;
};

struct envunion72 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct env71 {
    ;
    ;
    ;
    ;
    ;
    struct env54 envinst54;
    ;
};

struct envunion74 {
    enum Unit_5  (*fun) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  );
    struct env56 env;
};

struct envunion75 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct env73 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env56 envinst56;
    struct env52 envinst52;
    ;
};

struct envunion77 {
    enum Unit_5  (*fun) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  );
    struct env56 env;
};

struct envunion78 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct env76 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env56 envinst56;
    struct env52 envinst52;
    ;
};

struct envunion80 {
    enum Unit_5  (*fun) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  );
    struct env56 env;
};

struct envunion81 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct env79 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env56 envinst56;
    struct env52 envinst52;
    ;
};

struct envunion83 {
    enum Unit_5  (*fun) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  );
    struct env56 env;
};

struct envunion84 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct envunion85 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct env82 {
    ;
    ;
    ;
    ;
    ;
    struct env56 envinst56;
    struct env52 envinst52;
    struct env54 envinst54;
    ;
    ;
};

struct envunion87 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct env86 {
    ;
    ;
    ;
    ;
    ;
    struct env54 envinst54;
    ;
};

struct envunion89 {
    enum Unit_5  (*fun) (  struct env32*  ,    struct ByteBuf_51 *  ,    struct Slice_8  );
    struct env32 env;
};

struct env88 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env32 envinst32;
    ;
};

static  enum CAllocator_7   idc90 (  ) {
    return ( CAllocator_7_CAllocator );
}

struct Slice_91 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  int64_t   op_dash_mul94 (    int64_t  l218 ,    int64_t  r220 ) {
    return ( (  l218 ) * (  r220 ) );
}

static  const char* *   offset_dash_ptr93 (    const char* *  x382 ,    int64_t  count384 ) {
    const char*  temp95;
    return ( (const char* * ) ( ( (void*) (  x382 ) ) + (  op_dash_mul94 ( (  count384 ) , ( (int64_t ) ( sizeof( ( (  temp95 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral96 (    size_t  x47 ) {
    return ( (int64_t ) (  x47 ) );
}

static  size_t   op_dash_sub97 (    size_t  l299 ,    size_t  r301 ) {
    return ( (  l299 ) - (  r301 ) );
}

static  struct Slice_91   get92 (  ) {
    return ( (struct Slice_91) { .f_ptr = ( (  offset_dash_ptr93 ) ( ( _global_argv ) ,  (  from_dash_integral96 ( 1 ) ) ) ) , .f_count = (  op_dash_sub97 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct StrView_98 {
    struct Slice_8  f_contents;
};

struct ConstStrIter_102 {
    const char*  f_ogstr;
    size_t  f_i;
};

struct Char_104 {
    uint8_t *  f_ptr;
    size_t  f_num_dash_bytes;
};

static  struct ConstStrIter_102   into_dash_iter105 (    struct ConstStrIter_102  self1656 ) {
    return (  self1656 );
}

struct Maybe_106 {
    enum {
        Maybe_106_None_t,
        Maybe_106_Just_t,
    } tag;
    union {
        struct {
            struct Char_104  field0;
        } Maybe_106_Just_s;
    } stuff;
};

static struct Maybe_106 Maybe_106_Just (  struct Char_104  field0 ) {
    return ( struct Maybe_106 ) { .tag = Maybe_106_Just_t, .stuff = { .Maybe_106_Just_s = { .field0 = field0 } } };
};

static  uint8_t *   cast108 (    const char*  x400 ) {
    return ( (uint8_t * ) (  x400 ) );
}

static  uint8_t *   offset_dash_ptr109 (    uint8_t *  x382 ,    int64_t  count384 ) {
    uint8_t  temp110;
    return ( (uint8_t * ) ( ( (void*) (  x382 ) ) + (  op_dash_mul94 ( (  count384 ) , ( (int64_t ) ( sizeof( ( (  temp110 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i64111 (    size_t  x670 ) {
    return ( (int64_t ) (  x670 ) );
}

static  bool   eq112 (    uint8_t  l130 ,    uint8_t  r132 ) {
    return ( (  l130 ) == (  r132 ) );
}

static  uint8_t   cast113 (    int32_t  x400 ) {
    return ( (uint8_t ) (  x400 ) );
}

enum Ordering_117 {
    Ordering_117_LT,
    Ordering_117_EQ,
    Ordering_117_GT,
};

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_117   cmp116 (    uint8_t  l183 ,    uint8_t  r185 ) {
    return ( builtin_uint8_tcmp( (  l183 ) , (  r185 ) ) );
}

static  uint8_t   from_dash_integral118 (    size_t  x62 ) {
    return ( (uint8_t ) (  x62 ) );
}

static  size_t   next_dash_char115 (    uint8_t *  p1254 ) {
    uint8_t  pb1255 = ( * (  p1254 ) );
    if ( (  cmp116 ( (  pb1255 ) , (  from_dash_integral118 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp116 ( (  pb1255 ) , (  from_dash_integral118 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp116 ( (  pb1255 ) , (  from_dash_integral118 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp116 ( (  pb1255 ) , (  from_dash_integral118 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp119 = ( (  from_dash_string31 ) ( ( (uint8_t*)"(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp119);
                    abort ( );
                    ( Unit_5_Unit );
                }
            }
        }
    }
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_117   cmp120 (    size_t  l198 ,    size_t  r200 ) {
    return ( builtin_size_tcmp( (  l198 ) , (  r200 ) ) );
}

static  struct Char_104   scan_dash_from_dash_mem114 (    uint8_t *  p1258 ) {
    size_t  clen1259 = ( (  next_dash_char115 ) ( (  p1258 ) ) );
    if ( (  cmp120 ( (  clen1259 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp121 = ( (  from_dash_string31 ) ( ( (uint8_t*)"UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp121);
        abort ( );
        ( Unit_5_Unit );
    }
    return ( (struct Char_104) { .f_ptr = (  p1258 ) , .f_num_dash_bytes = (  clen1259 ) } );
}

static  size_t   op_dash_add122 (    size_t  l294 ,    size_t  r296 ) {
    return ( (  l294 ) + (  r296 ) );
}

static  struct Maybe_106   next107 (    struct ConstStrIter_102 *  self1659 ) {
    uint8_t *  char_dash_ptr1660 = ( ( (  cast108 ) ( ( ( * (  self1659 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1661 = ( (  offset_dash_ptr109 ) ( (  char_dash_ptr1660 ) ,  ( (  size_dash_i64111 ) ( ( ( * (  self1659 ) ) .f_i ) ) ) ) );
    if ( (  eq112 ( ( * (  optr1661 ) ) , ( (  cast113 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_106) { .tag = Maybe_106_None_t } );
    }
    struct Char_104  char1662 = ( (  scan_dash_from_dash_mem114 ) ( (  optr1661 ) ) );
    (*  self1659 ) .f_i = (  op_dash_add122 ( ( ( * (  self1659 ) ) .f_i ) , ( (  char1662 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_106_Just ) ( (  char1662 ) ) );
}

static  size_t   reduce103 (    struct ConstStrIter_102  iterable1116 ,    size_t  base1118 ,    size_t (*  fun1120 )(    struct Char_104  ,    size_t  ) ) {
    size_t  x1121 = (  base1118 );
    struct ConstStrIter_102  it1122 = ( (  into_dash_iter105 ) ( (  iterable1116 ) ) );
    while ( ( true ) ) {
        struct Maybe_106  dref1123 = ( (  next107 ) ( ( & (  it1122 ) ) ) );
        if ( dref1123.tag == Maybe_106_None_t ) {
            return (  x1121 );
        }
        else {
            if ( dref1123.tag == Maybe_106_Just_t ) {
                x1121 = ( (  fun1120 ) ( ( dref1123 .stuff .Maybe_106_Just_s .field0 ) ,  (  x1121 ) ) );
            }
        }
    }
    const char*  temp123 = ( (  from_dash_string31 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp123);
    abort ( );
    ( Unit_5_Unit );
    size_t  temp124;
    return (  temp124 );
}

static  size_t   lam125 (    struct Char_104  dref1128 ,    size_t  x1130 ) {
    return (  op_dash_add122 ( (  x1130 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count101 (    struct ConstStrIter_102  it1127 ) {
    return ( (  reduce103 ) ( (  it1127 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam125 ) ) );
}

static  struct ConstStrIter_102   into_dash_iter127 (    const char*  self1653 ) {
    return ( (struct ConstStrIter_102) { .f_ogstr = (  self1653 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_102   chars126 (    const char*  self1668 ) {
    return ( (  into_dash_iter127 ) ( (  self1668 ) ) );
}

static  size_t   const_dash_str_dash_len100 (    const char*  s1917 ) {
    return ( (  count101 ) ( ( (  chars126 ) ( (  s1917 ) ) ) ) );
}

static  struct StrView_98   from_dash_const_dash_str99 (    const char*  s2549 ) {
    size_t  len2550 = ( (  const_dash_str_dash_len100 ) ( (  s2549 ) ) );
    return ( (struct StrView_98) { .f_contents = ( (struct Slice_8) { .f_ptr = ( (  cast108 ) ( (  s2549 ) ) ) , .f_count = (  len2550 ) } ) } );
}

struct Maybe_131 {
    enum {
        Maybe_131_None_t,
        Maybe_131_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_131_Just_s;
    } stuff;
};

static struct Maybe_131 Maybe_131_Just (  const char*  field0 ) {
    return ( struct Maybe_131 ) { .tag = Maybe_131_Just_t, .stuff = { .Maybe_131_Just_s = { .field0 = field0 } } };
};

struct StrConcat_135 {
    struct StrView_98  field0;
    size_t  field1;
};

static struct StrConcat_135 StrConcat_135_StrConcat (  struct StrView_98  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_135 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_134 {
    struct StrConcat_135  field0;
    struct StrView_98  field1;
};

static struct StrConcat_134 StrConcat_134_StrConcat (  struct StrConcat_135  field0 ,  struct StrView_98  field1 ) {
    return ( struct StrConcat_134 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_133 {
    struct StrConcat_134  field0;
    size_t  field1;
};

static struct StrConcat_133 StrConcat_133_StrConcat (  struct StrConcat_134  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_133 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_132 {
    struct StrConcat_133  field0;
    struct Char_104  field1;
};

static struct StrConcat_132 StrConcat_132_StrConcat (  struct StrConcat_133  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_132 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_139 {
    struct StrView_98  field0;
    struct StrConcat_132  field1;
};

static struct StrConcat_139 StrConcat_139_StrConcat (  struct StrView_98  field0 ,  struct StrConcat_132  field1 ) {
    return ( struct StrConcat_139 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_138 {
    struct StrConcat_139  field0;
    struct Char_104  field1;
};

static struct StrConcat_138 StrConcat_138_StrConcat (  struct StrConcat_139  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_138 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32142 (    size_t  x709 ) {
    return ( (int32_t ) (  x709 ) );
}

static  enum Unit_5   print_dash_str141 (    struct StrView_98  self1314 ) {
    ( ( printf ) ( ( (  from_dash_string31 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32142 ) ( ( ( (  self1314 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1314 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str147 (    size_t  self1414 ) {
    ( ( printf ) ( ( (  from_dash_string31 ) ( ( (uint8_t*)"%lu" ) ,  ( 3 ) ) ) ,  (  self1414 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str146 (    struct StrConcat_135  self1293 ) {
    struct StrConcat_135  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str141 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str147 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str145 (    struct StrConcat_134  self1293 ) {
    struct StrConcat_134  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str146 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str141 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str144 (    struct StrConcat_133  self1293 ) {
    struct StrConcat_133  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str145 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str147 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

struct Scalar_152 {
    uint32_t  f_value;
};

struct CharDestructured_151 {
    enum {
        CharDestructured_151_Ref_t,
        CharDestructured_151_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_104  field0;
        } CharDestructured_151_Ref_s;
        struct {
            struct Scalar_152  field0;
        } CharDestructured_151_Scalar_s;
    } stuff;
};

static struct CharDestructured_151 CharDestructured_151_Ref (  struct Char_104  field0 ) {
    return ( struct CharDestructured_151 ) { .tag = CharDestructured_151_Ref_t, .stuff = { .CharDestructured_151_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_151 CharDestructured_151_Scalar (  struct Scalar_152  field0 ) {
    return ( struct CharDestructured_151 ) { .tag = CharDestructured_151_Scalar_t, .stuff = { .CharDestructured_151_Scalar_s = { .field0 = field0 } } };
};

static  uint8_t   size_dash_u8155 (    size_t  x718 ) {
    return ( (uint8_t ) (  x718 ) );
}

static  size_t   op_dash_div156 (    size_t  l309 ,    size_t  r311 ) {
    return ( (  l309 ) / (  r311 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer154 (    uint8_t *  ptr781 ) {
    return ( (  size_dash_u8155 ) ( (  op_dash_div156 ( ( ( (size_t ) (  ptr781 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint32_t   size_dash_u32157 (    size_t  x712 ) {
    return ( (uint32_t ) (  x712 ) );
}

static  size_t   cast158 (    uint8_t *  x400 ) {
    return ( (size_t ) (  x400 ) );
}

static  struct CharDestructured_151   destructure153 (    struct Char_104  c1235 ) {
    if ( (  eq112 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer154 ) ( ( (  c1235 ) .f_ptr ) ) ) , (  from_dash_integral118 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_151_Scalar ) ( ( (struct Scalar_152) { .f_value = ( (  size_dash_u32157 ) ( ( ( (  cast158 ) ( ( (  c1235 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_151_Ref ) ( (  c1235 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_117   cmp160 (    uint32_t  l178 ,    uint32_t  r180 ) {
    return ( builtin_uint32_tcmp( (  l178 ) , (  r180 ) ) );
}

static  uint32_t   from_dash_integral161 (    size_t  x53 ) {
    return ( (uint32_t ) (  x53 ) );
}

static  uint8_t   cast164 (    uint32_t  x400 ) {
    return ( (uint8_t ) (  x400 ) );
}

static  uint8_t   u32_dash_u8163 (    uint32_t  x739 ) {
    return ( (  cast164 ) ( (  x739 ) ) );
}

static  struct Array_39   from_dash_listlike165 (    struct Array_39 *  self374 ) {
    return ( * (  self374 ) );
}

static  struct Array_39   unscalarize159 (    struct Scalar_152  scalar1238 ) {
    if ( (  cmp160 ( ( (  scalar1238 ) .f_value ) , (  from_dash_integral161 ( 128 ) ) ) == 2 ) ) {
        const char*  temp162 = ( (  from_dash_string31 ) ( ( (uint8_t*)"(unscalarize) non-ascii characters not supported for now" ) ,  ( 56 ) ) );
        printf("%s\n", temp162);
        abort ( );
        ( Unit_5_Unit );
    }
    uint8_t  b1239 = ( (  u32_dash_u8163 ) ( ( (  scalar1238 ) .f_value ) ) );
    struct Array_39  temp166 = ( (struct Array_39) { ._arr = { (  b1239 ) , (  from_dash_integral118 ( 0 ) ) , (  from_dash_integral118 ( 0 ) ) , (  from_dash_integral118 ( 0 ) ) } } );
    return ( (  from_dash_listlike165 ) ( ( &temp166 ) ) );
}

static  uint8_t *   cast_dash_ptr167 (    struct Array_39 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  struct Char_104   regularize150 (    struct Char_104  c1242 ,    struct Array_39 *  possible_dash_scalar_dash_mem1244 ) {
    struct CharDestructured_151  dref1245 = ( (  destructure153 ) ( (  c1242 ) ) );
    if ( dref1245.tag == CharDestructured_151_Ref_t ) {
        return ( dref1245 .stuff .CharDestructured_151_Ref_s .field0 );
    }
    else {
        if ( dref1245.tag == CharDestructured_151_Scalar_t ) {
            (*  possible_dash_scalar_dash_mem1244 ) = ( (  unscalarize159 ) ( ( dref1245 .stuff .CharDestructured_151_Scalar_s .field0 ) ) );
            return ( (struct Char_104) { .f_ptr = ( (  cast_dash_ptr167 ) ( (  possible_dash_scalar_dash_mem1244 ) ) ) , .f_num_dash_bytes = ( (  c1242 ) .f_num_dash_bytes ) } );
        }
    }
}

static  enum Unit_5   printf_dash_char149 (    struct Char_104  c1250 ) {
    struct Array_39  temp169;
    struct Array_39  temp168 = (  temp169 );
    struct Char_104  c1251 = ( (  regularize150 ) ( (  c1250 ) ,  ( &temp168 ) ) );
    ( ( printf ) ( ( (  from_dash_string31 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32142 ) ( ( (  c1251 ) .f_num_dash_bytes ) ) ) ,  ( (  c1251 ) .f_ptr ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str148 (    struct Char_104  self1274 ) {
    ( (  printf_dash_char149 ) ( (  self1274 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str143 (    struct StrConcat_132  self1293 ) {
    struct StrConcat_132  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str144 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str140 (    struct StrConcat_139  self1293 ) {
    struct StrConcat_139  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str141 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str143 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str137 (    struct StrConcat_138  self1293 ) {
    struct StrConcat_138  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str140 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  struct StrView_98   from_dash_string170 (    uint8_t *  ptr90 ,    size_t  count92 ) {
    return ( (struct StrView_98) { .f_contents = ( (struct Slice_8) { .f_ptr = (  ptr90 ) , .f_count = (  count92 ) } ) } );
}

static  uint8_t *   cast172 (    uint8_t *  x400 ) {
    return ( (uint8_t * ) (  x400 ) );
}

static  struct Char_104   from_dash_charlike171 (    uint8_t *  ptr1262 ,    size_t  num_dash_bytes1264 ) {
    uint8_t *  ptr1265 = ( ( (  cast172 ) ( (  ptr1262 ) ) ) );
    return ( (  scan_dash_from_dash_mem114 ) ( (  ptr1265 ) ) );
}

static  enum Unit_5   panic136 (    struct StrConcat_132  errmsg1334 ) {
    ( (  print_dash_str137 ) ( ( ( StrConcat_138_StrConcat ) ( ( ( StrConcat_139_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1334 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

static  const char*   undefined173 (  ) {
    const char*  temp174;
    return (  temp174 );
}

static  const char*   or_dash_fail130 (    struct Maybe_131  x1344 ,    struct StrConcat_132  errmsg1346 ) {
    struct Maybe_131  dref1347 = (  x1344 );
    if ( dref1347.tag == Maybe_131_None_t ) {
        ( (  panic136 ) ( (  errmsg1346 ) ) );
        return ( (  undefined173 ) ( ) );
    }
    else {
        if ( dref1347.tag == Maybe_131_Just_t ) {
            return ( dref1347 .stuff .Maybe_131_Just_s .field0 );
        }
    }
}

static  struct Maybe_131   try_dash_get175 (    struct Slice_91  slice2167 ,    size_t  i2169 ) {
    if ( ( (  cmp120 ( (  i2169 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp120 ( (  i2169 ) , ( (  slice2167 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_131) { .tag = Maybe_131_None_t } );
    }
    const char* *  elem_dash_ptr2170 = ( (  offset_dash_ptr93 ) ( ( (  slice2167 ) .f_ptr ) ,  ( (  size_dash_i64111 ) ( (  i2169 ) ) ) ) );
    return ( ( Maybe_131_Just ) ( ( * (  elem_dash_ptr2170 ) ) ) );
}

static  const char*   get129 (    struct Slice_91  slice2173 ,    size_t  i2175 ) {
    return ( (  or_dash_fail130 ) ( ( (  try_dash_get175 ) ( (  slice2173 ) ,  (  i2175 ) ) ) ,  ( ( StrConcat_132_StrConcat ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2175 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2173 ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get128 (    struct Slice_91  self2186 ,    size_t  idx2188 ) {
    return ( (  get129 ) ( (  self2186 ) ,  (  idx2188 ) ) );
}

struct Maybe_178 {
    enum {
        Maybe_178_None_t,
        Maybe_178_Just_t,
    } tag;
    union {
        struct {
            struct StrView_98  field0;
        } Maybe_178_Just_s;
    } stuff;
};

static struct Maybe_178 Maybe_178_Just (  struct StrView_98  field0 ) {
    return ( struct Maybe_178 ) { .tag = Maybe_178_Just_t, .stuff = { .Maybe_178_Just_s = { .field0 = field0 } } };
};

struct StrConcat_180 {
    struct StrView_98  field0;
    const char*  field1;
};

static struct StrConcat_180 StrConcat_180_StrConcat (  struct StrView_98  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_180 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_179 {
    struct StrConcat_180  field0;
    struct Char_104  field1;
};

static struct StrConcat_179 StrConcat_179_StrConcat (  struct StrConcat_180  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_179 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_184 {
    struct StrView_98  field0;
    struct StrConcat_179  field1;
};

static struct StrConcat_184 StrConcat_184_StrConcat (  struct StrView_98  field0 ,  struct StrConcat_179  field1 ) {
    return ( struct StrConcat_184 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_183 {
    struct StrConcat_184  field0;
    struct Char_104  field1;
};

static struct StrConcat_183 StrConcat_183_StrConcat (  struct StrConcat_184  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_183 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_5   print_dash_str188 (    const char*  self1665 ) {
    ( ( printf ) ( ( (  from_dash_string31 ) ( ( (uint8_t*)"%s" ) ,  ( 2 ) ) ) ,  (  self1665 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str187 (    struct StrConcat_180  self1293 ) {
    struct StrConcat_180  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str141 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str188 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str186 (    struct StrConcat_179  self1293 ) {
    struct StrConcat_179  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str187 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str185 (    struct StrConcat_184  self1293 ) {
    struct StrConcat_184  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str141 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str186 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str182 (    struct StrConcat_183  self1293 ) {
    struct StrConcat_183  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str185 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic181 (    struct StrConcat_179  errmsg1334 ) {
    ( (  print_dash_str182 ) ( ( ( StrConcat_183_StrConcat ) ( ( ( StrConcat_184_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1334 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

static  struct StrView_98   undefined189 (  ) {
    struct StrView_98  temp190;
    return (  temp190 );
}

static  struct StrView_98   or_dash_fail177 (    struct Maybe_178  x1344 ,    struct StrConcat_179  errmsg1346 ) {
    struct Maybe_178  dref1347 = (  x1344 );
    if ( dref1347.tag == Maybe_178_None_t ) {
        ( (  panic181 ) ( (  errmsg1346 ) ) );
        return ( (  undefined189 ) ( ) );
    }
    else {
        if ( dref1347.tag == Maybe_178_Just_t ) {
            return ( dref1347 .stuff .Maybe_178_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike192 (    uint8_t *  ptr77 ,    size_t  dref78 ) {
    return ( ( (const char* ) (  ptr77 ) ) );
}

static  void *   cast_dash_ptr197 (    FILE * *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  size_t   size_dash_of198 (    FILE *  x394 ) {
    return ( sizeof( (  x394 ) ) );
}

static  FILE *   zeroed195 (  ) {
    FILE *  temp196;
    FILE *  x646 = (  temp196 );
    ( ( memset ) ( ( (  cast_dash_ptr197 ) ( ( & (  x646 ) ) ) ) ,  (  from_dash_integral30 ( 0 ) ) ,  ( (  size_dash_of198 ) ( (  x646 ) ) ) ) );
    return (  x646 );
}

static  FILE *   null_dash_ptr194 (  ) {
    return ( (  zeroed195 ) ( ) );
}

static  bool   is_dash_ptr_dash_null193 (    FILE *  p656 ) {
    return ( (  p656 ) == ( (  null_dash_ptr194 ) ( ) ) );
}

static  int32_t   seek_dash_end199 (  ) {
    return (  from_dash_integral30 ( 2 ) );
}

static  int32_t   seek_dash_set200 (  ) {
    return (  from_dash_integral30 ( 0 ) );
}

struct TypeSize_203 {
    size_t  f_size;
};

static  struct TypeSize_203   get_dash_typesize202 (  ) {
    uint8_t  temp204;
    return ( (struct TypeSize_203) { .f_size = ( sizeof( ( (  temp204 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr205 (    void *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  size_t   op_dash_mul206 (    size_t  l304 ,    size_t  r306 ) {
    return ( (  l304 ) * (  r306 ) );
}

static  struct Slice_8   allocate201 (    enum CAllocator_7  dref2359 ,    size_t  count2361 ) {
    if (!(  dref2359 == CAllocator_7_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2362 = ( ( ( (  get_dash_typesize202 ) ( ) ) ) .f_size );
    uint8_t *  ptr2363 = ( (  cast_dash_ptr205 ) ( ( ( malloc ) ( (  op_dash_mul206 ( (  size2362 ) , (  count2361 ) ) ) ) ) ) );
    return ( (struct Slice_8) { .f_ptr = (  ptr2363 ) , .f_count = (  count2361 ) } );
}

static  size_t   i32_dash_size207 (    int32_t  x688 ) {
    return ( (size_t ) ( (int64_t ) (  x688 ) ) );
}

static  uint8_t *   get_dash_ptr209 (    struct Slice_8  slice2161 ,    size_t  i2163 ) {
    if ( ( (  cmp120 ( (  i2163 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp120 ( (  i2163 ) , ( (  slice2161 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic136 ) ( ( ( StrConcat_132_StrConcat ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2163 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2161 ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr2164 = ( (  offset_dash_ptr109 ) ( ( (  slice2161 ) .f_ptr ) ,  ( (  size_dash_i64111 ) ( (  i2163 ) ) ) ) );
    return (  elem_dash_ptr2164 );
}

static  enum Unit_5   set208 (    struct Slice_8  slice2178 ,    size_t  i2180 ,    uint8_t  x2182 ) {
    uint8_t *  ep2183 = ( (  get_dash_ptr209 ) ( (  slice2178 ) ,  (  i2180 ) ) );
    (*  ep2183 ) = (  x2182 );
    return ( Unit_5_Unit );
}

static  uint8_t   char_dash_u8210 (    struct Char_104  c1431 ) {
    struct CharDestructured_151  dref1432 = ( (  destructure153 ) ( (  c1431 ) ) );
    if ( dref1432.tag == CharDestructured_151_Ref_t ) {
        return ( * ( ( dref1432 .stuff .CharDestructured_151_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref1432.tag == CharDestructured_151_Scalar_t ) {
            return ( (  u32_dash_u8163 ) ( ( ( dref1432 .stuff .CharDestructured_151_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct Char_104   nullchar211 (  ) {
    return ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) );
}

static  size_t   min213 (    size_t  l1358 ,    size_t  r1360 ) {
    if ( (  cmp120 ( (  l1358 ) , (  r1360 ) ) == 0 ) ) {
        return (  l1358 );
    } else {
        return (  r1360 );
    }
}

static  struct Slice_8   subslice212 (    struct Slice_8  slice2195 ,    size_t  from2197 ,    size_t  to2199 ) {
    uint8_t *  begin_dash_ptr2200 = ( (  offset_dash_ptr109 ) ( ( (  slice2195 ) .f_ptr ) ,  ( (  size_dash_i64111 ) ( (  from2197 ) ) ) ) );
    if ( ( (  cmp120 ( (  from2197 ) , (  to2199 ) ) != 0 ) || (  cmp120 ( (  from2197 ) , ( (  slice2195 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_8) { .f_ptr = (  begin_dash_ptr2200 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2201 = (  op_dash_sub97 ( ( (  min213 ) ( (  to2199 ) ,  ( (  slice2195 ) .f_count ) ) ) , (  from2197 ) ) );
    return ( (struct Slice_8) { .f_ptr = (  begin_dash_ptr2200 ) , .f_count = (  count2201 ) } );
}

static  struct Maybe_178   try_dash_read_dash_contents191 (    const char*  filename3154 ,    enum CAllocator_7  al3156 ) {
    FILE *  file3157 = ( ( fopen ) ( (  filename3154 ) ,  ( (  from_dash_charlike192 ) ( ( (uint8_t*)"r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null193 ) ( (  file3157 ) ) ) ) {
        return ( (struct Maybe_178) { .tag = Maybe_178_None_t } );
    }
    ( ( fseek ) ( (  file3157 ) ,  (  from_dash_integral30 ( 0 ) ) ,  ( (  seek_dash_end199 ) ( ) ) ) );
    int32_t  file_dash_size3158 = ( ( ftell ) ( (  file3157 ) ) );
    ( ( fseek ) ( (  file3157 ) ,  (  from_dash_integral30 ( 0 ) ) ,  ( (  seek_dash_set200 ) ( ) ) ) );
    struct Slice_8  file_dash_buf3159 = ( ( (  allocate201 ) ( (  al3156 ) ,  (  op_dash_add122 ( ( (  i32_dash_size207 ) ( (  file_dash_size3158 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3159 ) .f_ptr ) ,  (  file_dash_size3158 ) ,  (  from_dash_integral30 ( 1 ) ) ,  (  file3157 ) ) );
    ( (  set208 ) ( (  file_dash_buf3159 ) ,  ( (  i32_dash_size207 ) ( (  file_dash_size3158 ) ) ) ,  ( (  char_dash_u8210 ) ( ( (  nullchar211 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file3157 ) ) );
    struct StrView_98  str3160 = ( (struct StrView_98) { .f_contents = ( (  subslice212 ) ( (  file_dash_buf3159 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub97 ( ( (  file_dash_buf3159 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_178_Just ) ( (  str3160 ) ) );
}

static  struct StrView_98   read_dash_contents176 (    const char*  filename3163 ,    enum CAllocator_7  al3165 ) {
    return ( (  or_dash_fail177 ) ( ( (  try_dash_read_dash_contents191 ) ( (  filename3163 ) ,  (  al3165 ) ) ) ,  ( ( StrConcat_179_StrConcat ) ( ( ( StrConcat_180_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"could not open file " ) ,  ( 20 ) ) ) ,  (  filename3163 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   cast215 (    uint8_t *  x400 ) {
    return ( (const char* ) (  x400 ) );
}

static  const char*   as_dash_const_dash_str214 (    struct StrView_98  s2575 ) {
    return ( (  cast215 ) ( ( ( (  s2575 ) .f_contents ) .f_ptr ) ) );
}

struct Elf_216 {
    struct ByteBuf_51  f_bytes;
    bool  f_finished;
};

struct envunion219 {
    struct Elf_216  (*fun) (  struct env88*  ,    enum CAllocator_7  );
    struct env88 env;
};

static  void *   cast_dash_ptr228 (    uint8_t * *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  size_t   size_dash_of229 (    uint8_t *  x394 ) {
    return ( sizeof( (  x394 ) ) );
}

static  uint8_t *   zeroed226 (  ) {
    uint8_t *  temp227;
    uint8_t *  x646 = (  temp227 );
    ( ( memset ) ( ( (  cast_dash_ptr228 ) ( ( & (  x646 ) ) ) ) ,  (  from_dash_integral30 ( 0 ) ) ,  ( (  size_dash_of229 ) ( (  x646 ) ) ) ) );
    return (  x646 );
}

static  uint8_t *   null_dash_ptr225 (  ) {
    return ( (  zeroed226 ) ( ) );
}

static  struct Slice_8   empty224 (  ) {
    return ( (struct Slice_8) { .f_ptr = ( (  null_dash_ptr225 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_6   mk223 (    enum CAllocator_7  al2428 ) {
    struct Slice_8  elements2429 = ( (  empty224 ) ( ) );
    return ( (struct List_6) { .f_al = (  al2428 ) , .f_elements = (  elements2429 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ByteBuf_51   mk222 (    enum CAllocator_7  al3374 ) {
    return ( (struct ByteBuf_51) { .f_buf = ( (  mk223 ) ( (  al3374 ) ) ) } );
}

struct env235 {
    struct List_6 *  list2505;
    struct env3 envinst3;
};

struct envunion236 {
    enum Unit_5  (*fun) (  struct env235*  ,    uint8_t  );
    struct env235 env;
};

struct SliceIter_237 {
    struct Slice_8  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_237   into_dash_iter239 (    struct Slice_8  self2241 ) {
    return ( (struct SliceIter_237) { .f_slice = (  self2241 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_240 {
    enum {
        Maybe_240_None_t,
        Maybe_240_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_240_Just_s;
    } stuff;
};

static struct Maybe_240 Maybe_240_Just (  uint8_t  field0 ) {
    return ( struct Maybe_240 ) { .tag = Maybe_240_Just_t, .stuff = { .Maybe_240_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_240   next241 (    struct SliceIter_237 *  self2247 ) {
    size_t  off2248 = ( ( * (  self2247 ) ) .f_current_dash_offset );
    if ( (  cmp120 ( (  op_dash_add122 ( (  off2248 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2247 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_240) { .tag = Maybe_240_None_t } );
    }
    uint8_t  elem2249 = ( * ( (  offset_dash_ptr109 ) ( ( ( ( * (  self2247 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64111 ) ( (  off2248 ) ) ) ) ) );
    (*  self2247 ) .f_current_dash_offset = (  op_dash_add122 ( (  off2248 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_240_Just ) ( (  elem2249 ) ) );
}

static  enum Unit_5   for_dash_each234 (    struct Slice_8  iterable1097 ,   struct envunion236  fun1099 ) {
    struct SliceIter_237  temp238 = ( (  into_dash_iter239 ) ( (  iterable1097 ) ) );
    struct SliceIter_237 *  it1100 = ( &temp238 );
    while ( ( true ) ) {
        struct Maybe_240  dref1101 = ( (  next241 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_240_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_240_Just_t ) {
                struct envunion236  temp242 = (  fun1099 );
                ( temp242.fun ( &temp242.env ,  ( dref1101 .stuff .Maybe_240_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  bool   eq248 (    size_t  l140 ,    size_t  r142 ) {
    return ( (  l140 ) == (  r142 ) );
}

struct env249 {
    ;
    ;
    struct Slice_8  new_dash_slice2445;
};

struct Tuple2_251 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_251 Tuple2_251_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_251 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion250 {
    enum Unit_5  (*fun) (  struct env249*  ,    struct Tuple2_251  );
    struct env249 env;
};

static  enum Unit_5   lam252 (   struct env249* env ,    struct Tuple2_251  dref2446 ) {
    return ( (  set208 ) ( ( env->new_dash_slice2445 ) ,  ( (  i32_dash_size207 ) ( ( dref2446 .field1 ) ) ) ,  ( dref2446 .field0 ) ) );
}

struct FromIter_255 {
    int32_t  f_from;
};

struct Zip_254 {
    struct SliceIter_237  f_left_dash_it;
    struct FromIter_255  f_right_dash_it;
};

static  struct Zip_254   into_dash_iter257 (    struct Zip_254  self934 ) {
    return (  self934 );
}

struct Maybe_258 {
    enum {
        Maybe_258_None_t,
        Maybe_258_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_251  field0;
        } Maybe_258_Just_s;
    } stuff;
};

static struct Maybe_258 Maybe_258_Just (  struct Tuple2_251  field0 ) {
    return ( struct Maybe_258 ) { .tag = Maybe_258_Just_t, .stuff = { .Maybe_258_Just_s = { .field0 = field0 } } };
};

struct Maybe_260 {
    enum {
        Maybe_260_None_t,
        Maybe_260_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_260_Just_s;
    } stuff;
};

static struct Maybe_260 Maybe_260_Just (  int32_t  field0 ) {
    return ( struct Maybe_260 ) { .tag = Maybe_260_Just_t, .stuff = { .Maybe_260_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add262 (    int32_t  l231 ,    int32_t  r233 ) {
    return ( (  l231 ) + (  r233 ) );
}

static  struct Maybe_260   next261 (    struct FromIter_255 *  dref911 ) {
    int32_t  v913 = ( ( (* dref911 ) ) .f_from );
    (* dref911 ) .f_from = (  op_dash_add262 ( ( ( (* dref911 ) ) .f_from ) , (  from_dash_integral30 ( 1 ) ) ) );
    return ( ( Maybe_260_Just ) ( (  v913 ) ) );
}

static  struct Maybe_258   next259 (    struct Zip_254 *  self937 ) {
    struct Zip_254  copy938 = ( * (  self937 ) );
    while ( ( true ) ) {
        struct Maybe_240  dref939 = ( (  next241 ) ( ( & ( (  copy938 ) .f_left_dash_it ) ) ) );
        if ( dref939.tag == Maybe_240_None_t ) {
            return ( (struct Maybe_258) { .tag = Maybe_258_None_t } );
        }
        else {
            if ( dref939.tag == Maybe_240_Just_t ) {
                struct Maybe_260  dref941 = ( (  next261 ) ( ( & ( (  copy938 ) .f_right_dash_it ) ) ) );
                if ( dref941.tag == Maybe_260_None_t ) {
                    return ( (struct Maybe_258) { .tag = Maybe_258_None_t } );
                }
                else {
                    if ( dref941.tag == Maybe_260_Just_t ) {
                        ( (  next241 ) ( ( & ( ( * (  self937 ) ) .f_left_dash_it ) ) ) );
                        ( (  next261 ) ( ( & ( ( * (  self937 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_258_Just ) ( ( ( Tuple2_251_Tuple2 ) ( ( dref939 .stuff .Maybe_240_Just_s .field0 ) ,  ( dref941 .stuff .Maybe_260_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_5   for_dash_each253 (    struct Zip_254  iterable1097 ,   struct envunion250  fun1099 ) {
    struct Zip_254  temp256 = ( (  into_dash_iter257 ) ( (  iterable1097 ) ) );
    struct Zip_254 *  it1100 = ( &temp256 );
    while ( ( true ) ) {
        struct Maybe_258  dref1101 = ( (  next259 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_258_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_258_Just_t ) {
                struct envunion250  temp263 = (  fun1099 );
                ( temp263.fun ( &temp263.env ,  ( dref1101 .stuff .Maybe_258_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  struct FromIter_255   into_dash_iter265 (    struct FromIter_255  it909 ) {
    return (  it909 );
}

static  struct Zip_254   zip264 (    struct Slice_8  left945 ,    struct FromIter_255  right947 ) {
    struct SliceIter_237  left_dash_it948 = ( (  into_dash_iter239 ) ( (  left945 ) ) );
    struct FromIter_255  right_dash_it949 = ( (  into_dash_iter265 ) ( (  right947 ) ) );
    return ( (struct Zip_254) { .f_left_dash_it = (  left_dash_it948 ) , .f_right_dash_it = (  right_dash_it949 ) } );
}

static  struct FromIter_255   from266 (    int32_t  f906 ) {
    return ( (struct FromIter_255) { .f_from = (  f906 ) } );
}

static  void *   cast_dash_ptr268 (    uint8_t *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  enum Unit_5   free267 (    enum CAllocator_7  dref2365 ,    struct Slice_8  slice2367 ) {
    if (!(  dref2365 == CAllocator_7_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr268 ) ( ( (  slice2367 ) .f_ptr ) ) ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   grow_dash_if_dash_full247 (   struct env1* env ,    struct List_6 *  list2444 ) {
    if ( (  eq248 ( ( ( * (  list2444 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2444 ) .f_elements = ( (  allocate201 ) ( ( ( * (  list2444 ) ) .f_al ) ,  ( env->starting_dash_size2439 ) ) );
    } else {
        if ( (  eq248 ( ( ( * (  list2444 ) ) .f_count ) , ( ( ( * (  list2444 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_8  new_dash_slice2445 = ( (  allocate201 ) ( ( ( * (  list2444 ) ) .f_al ) ,  (  op_dash_mul206 ( ( ( * (  list2444 ) ) .f_count ) , ( env->growth_dash_factor2440 ) ) ) ) );
            struct env249 envinst249 = {
                .new_dash_slice2445 =  new_dash_slice2445 ,
            };
            struct envunion250  fun2449 = ( (struct envunion250){ .fun = (  enum Unit_5  (*) (  struct env249*  ,    struct Tuple2_251  ) )lam252 , .env =  envinst249 } );
            ( (  for_dash_each253 ) ( ( (  zip264 ) ( ( ( * (  list2444 ) ) .f_elements ) ,  ( (  from266 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) ,  (  fun2449 ) ) );
            ( (  free267 ) ( ( ( * (  list2444 ) ) .f_al ) ,  ( ( * (  list2444 ) ) .f_elements ) ) );
            (*  list2444 ) .f_elements = (  new_dash_slice2445 );
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   add245 (   struct env3* env ,    struct List_6 *  list2452 ,    uint8_t  elem2454 ) {
    struct envunion4  temp246 = ( (struct envunion4){ .fun = (  enum Unit_5  (*) (  struct env1*  ,    struct List_6 *  ) )grow_dash_if_dash_full247 , .env =  env->envinst1 } );
    ( temp246.fun ( &temp246.env ,  (  list2452 ) ) );
    ( (  set208 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( ( * (  list2452 ) ) .f_count ) ,  (  elem2454 ) ) );
    (*  list2452 ) .f_count = (  op_dash_add122 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam243 (   struct env235* env ,    uint8_t  x2509 ) {
    struct envunion20  temp244 = ( (struct envunion20){ .fun = (  enum Unit_5  (*) (  struct env3*  ,    struct List_6 *  ,    uint8_t  ) )add245 , .env =  env->envinst3 } );
    return ( temp244.fun ( &temp244.env ,  ( env->list2505 ) ,  (  x2509 ) ) );
}

static  enum Unit_5   add_dash_all233 (   struct env19* env ,    struct List_6 *  list2505 ,    struct Slice_8  it2507 ) {
    struct env235 envinst235 = {
        .list2505 =  list2505 ,
        .envinst3 = env->envinst3 ,
    };
    ( (  for_dash_each234 ) ( (  it2507 ) ,  ( (struct envunion236){ .fun = (  enum Unit_5  (*) (  struct env235*  ,    uint8_t  ) )lam243 , .env =  envinst235 } ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_bytes231 (   struct env32* env ,    struct ByteBuf_51 *  bb3403 ,    struct Slice_8  xs3405 ) {
    struct envunion33  temp232 = ( (struct envunion33){ .fun = (  enum Unit_5  (*) (  struct env19*  ,    struct List_6 *  ,    struct Slice_8  ) )add_dash_all233 , .env =  env->envinst19 } );
    ( temp232.fun ( &temp232.env ,  ( & ( ( * (  bb3403 ) ) .f_buf ) ) ,  (  xs3405 ) ) );
    return ( Unit_5_Unit );
}

struct Array_271 {
    uint8_t _arr [16];
};

struct Elf64Ehdr_270 {
    struct Array_271  f_e_dash_ident;
    uint16_t  f_e_dash_type;
    uint16_t  f_e_dash_machine;
    uint32_t  f_e_dash_version;
    uint64_t  f_e_dash_entry;
    uint64_t  f_e_dash_phoff;
    uint64_t  f_e_dash_shoff;
    uint32_t  f_e_dash_flags;
    uint16_t  f_e_dash_ehsize;
    uint16_t  f_e_dash_phentsize;
    uint16_t  f_e_dash_phnum;
    uint16_t  f_e_dash_shentsize;
    uint16_t  f_e_dash_shnum;
    uint16_t  f_e_dash_shstrndx;
};

static  uint8_t *   cast_dash_ptr272 (    struct Elf64Ehdr_270 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

struct TypeSize_275 {
    size_t  f_size;
};

static  struct TypeSize_275   get_dash_typesize274 (  ) {
    struct Elf64Ehdr_270  temp276;
    return ( (struct TypeSize_275) { .f_size = ( sizeof( ( (  temp276 ) ) ) ) } );
}

static  size_t   ptr_dash_size_dash_of273 (    struct Elf64Ehdr_270 *  x397 ) {
    return ( ( ( (  get_dash_typesize274 ) ( ) ) ) .f_size );
}

static  struct Slice_8   as_dash_mem269 (    struct Elf64Ehdr_270 *  x3578 ) {
    return ( (struct Slice_8) { .f_ptr = ( (  cast_dash_ptr272 ) ( (  x3578 ) ) ) , .f_count = ( (  ptr_dash_size_dash_of273 ) ( (  x3578 ) ) ) } );
}

struct TypeSize_280 {
    size_t  f_size;
};

struct Elf64Phdr_282 {
    uint32_t  f_p_dash_type;
    uint32_t  f_p_dash_flags;
    uint64_t  f_p_dash_offset;
    uint64_t  f_p_dash_vaddr;
    uint64_t  f_p_dash_paddr;
    uint64_t  f_p_dash_filesz;
    uint64_t  f_p_dash_memsz;
    uint64_t  f_p_dash_align;
};

static  struct TypeSize_280   get_dash_typesize279 (  ) {
    struct Elf64Phdr_282  temp281;
    return ( (struct TypeSize_280) { .f_size = ( sizeof( ( (  temp281 ) ) ) ) } );
}

struct Array_284 {
    uint8_t _arr [8];
};

static  void *   cast_dash_ptr288 (    struct Array_271 *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  size_t   size_dash_of289 (    struct Array_271  x394 ) {
    return ( sizeof( (  x394 ) ) );
}

static  struct Array_271   zeroed286 (  ) {
    struct Array_271  temp287;
    struct Array_271  x646 = (  temp287 );
    ( ( memset ) ( ( (  cast_dash_ptr288 ) ( ( & (  x646 ) ) ) ) ,  (  from_dash_integral30 ( 0 ) ) ,  ( (  size_dash_of289 ) ( (  x646 ) ) ) ) );
    return (  x646 );
}

static  struct Array_284 *   cast290 (    struct Array_271 *  x400 ) {
    return ( (struct Array_284 * ) (  x400 ) );
}

static  struct Array_271   cast_dash_on_dash_zeroed283 (    struct Array_284  x649 ) {
    struct Array_271  temp285 = ( (  zeroed286 ) ( ) );
    struct Array_271 *  y650 = ( &temp285 );
    struct Array_284 *  yp651 = ( (  cast290 ) ( (  y650 ) ) );
    (*  yp651 ) = (  x649 );
    return ( * (  y650 ) );
}

static  struct Array_284   from_dash_listlike291 (    struct Array_284 *  self374 ) {
    return ( * (  self374 ) );
}

static  uint8_t   elf_dash_mag0293 (  ) {
    return (  from_dash_integral118 ( 127 ) );
}

static  uint8_t   elf_dash_mag1294 (  ) {
    return (  from_dash_integral118 ( 69 ) );
}

static  uint8_t   elf_dash_mag2295 (  ) {
    return (  from_dash_integral118 ( 76 ) );
}

static  uint8_t   elf_dash_mag3296 (  ) {
    return (  from_dash_integral118 ( 70 ) );
}

static  uint8_t   elf_dash_class64297 (  ) {
    return (  from_dash_integral118 ( 2 ) );
}

static  uint8_t   elfdata2lsb298 (  ) {
    return (  from_dash_integral118 ( 1 ) );
}

static  uint8_t   ev_dash_current299 (  ) {
    return (  from_dash_integral118 ( 1 ) );
}

static  uint8_t   elfosabi_dash_none300 (  ) {
    return (  from_dash_integral118 ( 0 ) );
}

static  uint16_t   from_dash_integral302 (    size_t  x56 ) {
    return ( (uint16_t ) (  x56 ) );
}

static  uint16_t   et_dash_exec301 (  ) {
    return (  from_dash_integral302 ( 2 ) );
}

static  uint16_t   em_dash_x86_dash_64303 (  ) {
    return (  from_dash_integral302 ( 62 ) );
}

static  uint32_t   ev_dash_current_dash_u32304 (  ) {
    return (  from_dash_integral161 ( 1 ) );
}

static  uint64_t   op_dash_add305 (    uint64_t  l314 ,    uint64_t  r316 ) {
    return ( (  l314 ) + (  r316 ) );
}

struct StrViewIter_309 {
    struct StrView_98  f_ds;
    size_t  f_i;
};

struct Map_308 {
    struct StrViewIter_309  field0;
    uint64_t (*  field1 )(    struct Char_104  );
};

static struct Map_308 Map_308_Map (  struct StrViewIter_309  field0 ,  uint64_t (*  field1 )(    struct Char_104  ) ) {
    return ( struct Map_308 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_308   into_dash_iter310 (    struct Map_308  self802 ) {
    return (  self802 );
}

struct Maybe_311 {
    enum {
        Maybe_311_None_t,
        Maybe_311_Just_t,
    } tag;
    union {
        struct {
            uint64_t  field0;
        } Maybe_311_Just_s;
    } stuff;
};

static struct Maybe_311 Maybe_311_Just (  uint64_t  field0 ) {
    return ( struct Maybe_311 ) { .tag = Maybe_311_Just_t, .stuff = { .Maybe_311_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_106   next313 (    struct StrViewIter_309 *  self1309 ) {
    if ( (  cmp120 ( ( ( * (  self1309 ) ) .f_i ) , ( ( ( ( * (  self1309 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_106) { .tag = Maybe_106_None_t } );
    }
    uint8_t *  char_dash_ptr1310 = ( ( (  offset_dash_ptr109 ) ( ( (  cast172 ) ( ( ( ( ( * (  self1309 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64111 ) ( ( ( * (  self1309 ) ) .f_i ) ) ) ) ) );
    struct Char_104  char1311 = ( (  scan_dash_from_dash_mem114 ) ( (  char_dash_ptr1310 ) ) );
    (*  self1309 ) .f_i = (  op_dash_add122 ( ( ( * (  self1309 ) ) .f_i ) , ( (  char1311 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_106_Just ) ( (  char1311 ) ) );
}

static  struct Maybe_311   next312 (    struct Map_308 *  dref804 ) {
    struct Maybe_106  dref807 = ( (  next313 ) ( ( & ( (* dref804 ) .field0 ) ) ) );
    if ( dref807.tag == Maybe_106_None_t ) {
        return ( (struct Maybe_311) { .tag = Maybe_311_None_t } );
    }
    else {
        if ( dref807.tag == Maybe_106_Just_t ) {
            return ( ( Maybe_311_Just ) ( ( ( (* dref804 ) .field1 ) ( ( dref807 .stuff .Maybe_106_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint64_t   reduce307 (    struct Map_308  iterable1116 ,    uint64_t  base1118 ,    uint64_t (*  fun1120 )(    uint64_t  ,    uint64_t  ) ) {
    uint64_t  x1121 = (  base1118 );
    struct Map_308  it1122 = ( (  into_dash_iter310 ) ( (  iterable1116 ) ) );
    while ( ( true ) ) {
        struct Maybe_311  dref1123 = ( (  next312 ) ( ( & (  it1122 ) ) ) );
        if ( dref1123.tag == Maybe_311_None_t ) {
            return (  x1121 );
        }
        else {
            if ( dref1123.tag == Maybe_311_Just_t ) {
                x1121 = ( (  fun1120 ) ( ( dref1123 .stuff .Maybe_311_Just_s .field0 ) ,  (  x1121 ) ) );
            }
        }
    }
    const char*  temp314 = ( (  from_dash_string31 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp314);
    abort ( );
    ( Unit_5_Unit );
    uint64_t  temp315;
    return (  temp315 );
}

static  struct StrViewIter_309   into_dash_iter317 (    struct StrView_98  self1303 ) {
    return ( (struct StrViewIter_309) { .f_ds = (  self1303 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Map_308   map316 (    struct StrView_98  iterable811 ,    uint64_t (*  fun813 )(    struct Char_104  ) ) {
    struct StrViewIter_309  it814 = ( (  into_dash_iter317 ) ( (  iterable811 ) ) );
    return ( ( Map_308_Map ) ( (  it814 ) ,  (  fun813 ) ) );
}

static  uint64_t   from_dash_integral319 (    size_t  x65 ) {
    return ( (uint64_t ) (  x65 ) );
}

static  void *   cast_dash_ptr325 (    size_t *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  size_t   size_dash_of326 (    size_t  x394 ) {
    return ( sizeof( (  x394 ) ) );
}

static  size_t   zeroed323 (  ) {
    size_t  temp324;
    size_t  x646 = (  temp324 );
    ( ( memset ) ( ( (  cast_dash_ptr325 ) ( ( & (  x646 ) ) ) ) ,  (  from_dash_integral30 ( 0 ) ) ,  ( (  size_dash_of326 ) ( (  x646 ) ) ) ) );
    return (  x646 );
}

static  uint8_t *   cast327 (    size_t *  x400 ) {
    return ( (uint8_t * ) (  x400 ) );
}

static  size_t   cast_dash_on_dash_zeroed321 (    uint8_t  x649 ) {
    size_t  temp322 = ( (  zeroed323 ) ( ) );
    size_t *  y650 = ( &temp322 );
    uint8_t *  yp651 = ( (  cast327 ) ( (  y650 ) ) );
    (*  yp651 ) = (  x649 );
    return ( * (  y650 ) );
}

static  size_t   u8_dash_size320 (    uint8_t  x745 ) {
    return ( (  cast_dash_on_dash_zeroed321 ) ( (  x745 ) ) );
}

struct StrConcat_330 {
    struct Char_104  field0;
    struct Char_104  field1;
};

static struct StrConcat_330 StrConcat_330_StrConcat (  struct Char_104  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_330 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_329 {
    struct StrConcat_330  field0;
    struct StrView_98  field1;
};

static struct StrConcat_329 StrConcat_329_StrConcat (  struct StrConcat_330  field0 ,  struct StrView_98  field1 ) {
    return ( struct StrConcat_329 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_334 {
    struct StrView_98  field0;
    struct StrConcat_329  field1;
};

static struct StrConcat_334 StrConcat_334_StrConcat (  struct StrView_98  field0 ,  struct StrConcat_329  field1 ) {
    return ( struct StrConcat_334 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_333 {
    struct StrConcat_334  field0;
    struct Char_104  field1;
};

static struct StrConcat_333 StrConcat_333_StrConcat (  struct StrConcat_334  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_333 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_5   print_dash_str337 (    struct StrConcat_330  self1293 ) {
    struct StrConcat_330  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str148 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str336 (    struct StrConcat_329  self1293 ) {
    struct StrConcat_329  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str337 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str141 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str335 (    struct StrConcat_334  self1293 ) {
    struct StrConcat_334  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str141 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str336 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str332 (    struct StrConcat_333  self1293 ) {
    struct StrConcat_333  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str335 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic331 (    struct StrConcat_329  errmsg1334 ) {
    ( (  print_dash_str332 ) ( ( ( StrConcat_333_StrConcat ) ( ( ( StrConcat_334_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1334 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

static  uint8_t   undefined338 (  ) {
    uint8_t  temp339;
    return (  temp339 );
}

static  uint8_t   or_dash_fail328 (    struct Maybe_240  x1344 ,    struct StrConcat_329  errmsg1346 ) {
    struct Maybe_240  dref1347 = (  x1344 );
    if ( dref1347.tag == Maybe_240_None_t ) {
        ( (  panic331 ) ( (  errmsg1346 ) ) );
        return ( (  undefined338 ) ( ) );
    }
    else {
        if ( dref1347.tag == Maybe_240_Just_t ) {
            return ( dref1347 .stuff .Maybe_240_Just_s .field0 );
        }
    }
}

static  enum Ordering_117   cmp341 (    struct Char_104  l1450 ,    struct Char_104  r1452 ) {
    if ( ( ( !  eq248 ( ( (  l1450 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq248 ( ( (  r1452 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp342 = ( (  from_dash_string31 ) ( ( (uint8_t*)"(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp342);
        abort ( );
        ( Unit_5_Unit );
    }
    return ( (  cmp116 ) ( ( (  char_dash_u8210 ) ( (  l1450 ) ) ) ,  ( (  char_dash_u8210 ) ( (  r1452 ) ) ) ) );
}

static  uint8_t   op_dash_sub343 (    uint8_t  l279 ,    uint8_t  r281 ) {
    return ( (  l279 ) - (  r281 ) );
}

static  uint8_t   op_dash_add344 (    uint8_t  l274 ,    uint8_t  r276 ) {
    return ( (  l274 ) + (  r276 ) );
}

static  struct Maybe_240   hex_dash_digit340 (    struct Char_104  c3118 ) {
    if ( ( (  cmp341 ( (  c3118 ) , ( (  from_dash_charlike171 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp341 ( (  c3118 ) , ( (  from_dash_charlike171 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_240_Just ) ( (  op_dash_sub343 ( ( (  char_dash_u8210 ) ( (  c3118 ) ) ) , ( (  char_dash_u8210 ) ( ( (  from_dash_charlike171 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp341 ( (  c3118 ) , ( (  from_dash_charlike171 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp341 ( (  c3118 ) , ( (  from_dash_charlike171 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_240_Just ) ( (  op_dash_add344 ( (  op_dash_sub343 ( ( (  char_dash_u8210 ) ( (  c3118 ) ) ) , ( (  char_dash_u8210 ) ( ( (  from_dash_charlike171 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral118 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp341 ( (  c3118 ) , ( (  from_dash_charlike171 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp341 ( (  c3118 ) , ( (  from_dash_charlike171 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_240_Just ) ( (  op_dash_add344 ( (  op_dash_sub343 ( ( (  char_dash_u8210 ) ( (  c3118 ) ) ) , ( (  char_dash_u8210 ) ( ( (  from_dash_charlike171 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral118 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_240) { .tag = Maybe_240_None_t } );
}

static  uint64_t   lam318 (    struct Char_104  c3123 ) {
    return ( (  from_dash_integral319 ) ( ( (  u8_dash_size320 ) ( ( (  or_dash_fail328 ) ( ( (  hex_dash_digit340 ) ( (  c3123 ) ) ) ,  ( ( StrConcat_329_StrConcat ) ( ( ( StrConcat_330_StrConcat ) ( ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\"" ) ,  ( 1 ) ) ) ,  (  c3123 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)"\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint64_t   op_dash_mul346 (    uint64_t  l324 ,    uint64_t  r326 ) {
    return ( (  l324 ) * (  r326 ) );
}

static  uint64_t   lam345 (    uint64_t  elem3125 ,    uint64_t  b3127 ) {
    return (  op_dash_add305 ( (  op_dash_mul346 ( (  b3127 ) , (  from_dash_integral319 ( 16 ) ) ) ) , (  elem3125 ) ) );
}

static  uint64_t   from_dash_hex306 (    struct StrView_98  arr3121 ) {
    return ( (  reduce307 ) ( ( (  map316 ) ( (  arr3121 ) ,  (  lam318 ) ) ) ,  (  from_dash_integral319 ( 0 ) ) ,  (  lam345 ) ) );
}

static  uint64_t   size_dash_u64347 (    size_t  x706 ) {
    return ( (uint64_t ) (  x706 ) );
}

static  uint16_t   size_dash_u16348 (    size_t  x715 ) {
    return ( (uint16_t ) (  x715 ) );
}

static  uint16_t   shn_dash_undef349 (  ) {
    return (  from_dash_integral302 ( 0 ) );
}

static  struct Elf64Ehdr_270   elf_dash_header278 (  ) {
    size_t  ehdr_dash_size3568 = ( ( ( (  get_dash_typesize274 ) ( ) ) ) .f_size );
    size_t  phdr_dash_size3569 = ( ( ( (  get_dash_typesize279 ) ( ) ) ) .f_size );
    struct Array_284  temp292 = ( (struct Array_284) { ._arr = { ( (  elf_dash_mag0293 ) ( ) ) , ( (  elf_dash_mag1294 ) ( ) ) , ( (  elf_dash_mag2295 ) ( ) ) , ( (  elf_dash_mag3296 ) ( ) ) , ( (  elf_dash_class64297 ) ( ) ) , ( (  elfdata2lsb298 ) ( ) ) , ( (  ev_dash_current299 ) ( ) ) , ( (  elfosabi_dash_none300 ) ( ) ) } } );
    return ( (struct Elf64Ehdr_270) { .f_e_dash_ident = ( (  cast_dash_on_dash_zeroed283 ) ( ( (  from_dash_listlike291 ) ( ( &temp292 ) ) ) ) ) , .f_e_dash_type = ( (  et_dash_exec301 ) ( ) ) , .f_e_dash_machine = ( (  em_dash_x86_dash_64303 ) ( ) ) , .f_e_dash_version = ( (  ev_dash_current_dash_u32304 ) ( ) ) , .f_e_dash_entry = (  op_dash_add305 ( (  op_dash_add305 ( ( (  from_dash_hex306 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"400000" ) ,  ( 6 ) ) ) ) ) , ( (  size_dash_u64347 ) ( (  ehdr_dash_size3568 ) ) ) ) ) , ( (  size_dash_u64347 ) ( (  phdr_dash_size3569 ) ) ) ) ) , .f_e_dash_phoff = ( (  size_dash_u64347 ) ( (  ehdr_dash_size3568 ) ) ) , .f_e_dash_shoff = (  from_dash_integral319 ( 0 ) ) , .f_e_dash_flags = (  from_dash_integral161 ( 0 ) ) , .f_e_dash_ehsize = ( (  size_dash_u16348 ) ( (  ehdr_dash_size3568 ) ) ) , .f_e_dash_phentsize = ( (  size_dash_u16348 ) ( (  phdr_dash_size3569 ) ) ) , .f_e_dash_phnum = (  from_dash_integral302 ( 1 ) ) , .f_e_dash_shentsize = (  from_dash_integral302 ( 0 ) ) , .f_e_dash_shnum = (  from_dash_integral302 ( 0 ) ) , .f_e_dash_shstrndx = ( (  shn_dash_undef349 ) ( ) ) } );
}

struct envunion351 {
    enum Unit_5  (*fun) (  struct env32*  ,    struct ByteBuf_51 *  ,    struct Slice_8  );
    struct env32 env;
};

static  uint8_t *   cast_dash_ptr353 (    struct Elf64Phdr_282 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  size_t   ptr_dash_size_dash_of354 (    struct Elf64Phdr_282 *  x397 ) {
    return ( ( ( (  get_dash_typesize279 ) ( ) ) ) .f_size );
}

static  struct Slice_8   as_dash_mem352 (    struct Elf64Phdr_282 *  x3578 ) {
    return ( (struct Slice_8) { .f_ptr = ( (  cast_dash_ptr353 ) ( (  x3578 ) ) ) , .f_count = ( (  ptr_dash_size_dash_of354 ) ( (  x3578 ) ) ) } );
}

static  uint32_t   pt_dash_load357 (  ) {
    return (  from_dash_integral161 ( 1 ) );
}

static  uint32_t   u32_dash_or358 (    uint32_t  l2942 ,    uint32_t  r2944 ) {
    return ( (  l2942 ) | (  r2944 ) );
}

static  uint32_t   pf_dash_r359 (  ) {
    return (  from_dash_integral161 ( 4 ) );
}

static  uint32_t   pf_dash_x360 (  ) {
    return (  from_dash_integral161 ( 1 ) );
}

static  struct Elf64Phdr_282   program_dash_header356 (  ) {
    return ( (struct Elf64Phdr_282) { .f_p_dash_type = ( (  pt_dash_load357 ) ( ) ) , .f_p_dash_flags = ( (  u32_dash_or358 ) ( ( (  pf_dash_r359 ) ( ) ) ,  ( (  pf_dash_x360 ) ( ) ) ) ) , .f_p_dash_offset = (  from_dash_integral319 ( 0 ) ) , .f_p_dash_vaddr = ( (  from_dash_hex306 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"400000" ) ,  ( 6 ) ) ) ) ) , .f_p_dash_paddr = ( (  from_dash_hex306 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"400000" ) ,  ( 6 ) ) ) ) ) , .f_p_dash_filesz = (  from_dash_integral319 ( 0 ) ) , .f_p_dash_memsz = (  from_dash_integral319 ( 0 ) ) , .f_p_dash_align = ( (  from_dash_hex306 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"200000" ) ,  ( 6 ) ) ) ) ) } );
}

static  struct Elf_216   mk220 (   struct env88* env ,    enum CAllocator_7  al3581 ) {
    struct ByteBuf_51  temp221 = ( (  mk222 ) ( (  al3581 ) ) );
    struct ByteBuf_51 *  bytes3582 = ( &temp221 );
    struct envunion89  temp230 = ( (struct envunion89){ .fun = (  enum Unit_5  (*) (  struct env32*  ,    struct ByteBuf_51 *  ,    struct Slice_8  ) )write_dash_bytes231 , .env =  env->envinst32 } );
    struct Elf64Ehdr_270  temp277 = ( (  elf_dash_header278 ) ( ) );
    ( temp230.fun ( &temp230.env ,  (  bytes3582 ) ,  ( (  as_dash_mem269 ) ( ( &temp277 ) ) ) ) );
    struct envunion351  temp350 = ( (struct envunion351){ .fun = (  enum Unit_5  (*) (  struct env32*  ,    struct ByteBuf_51 *  ,    struct Slice_8  ) )write_dash_bytes231 , .env =  env->envinst32 } );
    struct Elf64Phdr_282  temp355 = ( (  program_dash_header356 ) ( ) );
    ( temp350.fun ( &temp350.env ,  (  bytes3582 ) ,  ( (  as_dash_mem352 ) ( ( &temp355 ) ) ) ) );
    return ( (struct Elf_216) { .f_bytes = ( * (  bytes3582 ) ) , .f_finished = ( false ) } );
}

static  struct ByteBuf_51 *   bytebuf361 (    struct Elf_216 *  elf3596 ) {
    return ( & ( ( * (  elf3596 ) ) .f_bytes ) );
}

struct env362 {
    struct ByteBuf_51 *  bb3601;
    ;
};

enum Reg_366 {
    Reg_366_RAX,
    Reg_366_RBX,
    Reg_366_RCX,
    Reg_366_RDX,
    Reg_366_RDI,
    Reg_366_RSI,
    Reg_366_RSP,
    Reg_366_RBP,
    Reg_366_RIP,
};

struct RegImm_365 {
    enum {
        RegImm_365_Reg_t,
        RegImm_365_Imm4_t,
        RegImm_365_Imm8_t,
    } tag;
    union {
        struct {
            enum Reg_366  field0;
        } RegImm_365_Reg_s;
        struct {
            struct Array_39  field0;
        } RegImm_365_Imm4_s;
        struct {
            struct Array_39  field0;
        } RegImm_365_Imm8_s;
    } stuff;
};

static struct RegImm_365 RegImm_365_Reg (  enum Reg_366  field0 ) {
    return ( struct RegImm_365 ) { .tag = RegImm_365_Reg_t, .stuff = { .RegImm_365_Reg_s = { .field0 = field0 } } };
};

static struct RegImm_365 RegImm_365_Imm4 (  struct Array_39  field0 ) {
    return ( struct RegImm_365 ) { .tag = RegImm_365_Imm4_t, .stuff = { .RegImm_365_Imm4_s = { .field0 = field0 } } };
};

static struct RegImm_365 RegImm_365_Imm8 (  struct Array_39  field0 ) {
    return ( struct RegImm_365 ) { .tag = RegImm_365_Imm8_t, .stuff = { .RegImm_365_Imm8_s = { .field0 = field0 } } };
};

struct envunion364 {
    enum Unit_5  (*fun) (  struct env68*  ,    struct ByteBuf_51 *  ,    struct RegImm_365  );
    struct env68 env;
};

struct env375 {
    struct List_6 *  list2505;
    struct env3 envinst3;
};

struct envunion376 {
    enum Unit_5  (*fun) (  struct env375*  ,    uint8_t  );
    struct env375 env;
};

struct ArrayIter_377 {
    struct Array_36  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_377   into_dash_iter379 (    struct Array_36  self2093 ) {
    return ( (struct ArrayIter_377) { .f_backing = (  self2093 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct StrConcat_385 {
    struct StrConcat_134  field0;
    int32_t  field1;
};

static struct StrConcat_385 StrConcat_385_StrConcat (  struct StrConcat_134  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_385 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_384 {
    struct StrConcat_385  field0;
    struct Char_104  field1;
};

static struct StrConcat_384 StrConcat_384_StrConcat (  struct StrConcat_385  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_384 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_388 {
    struct StrView_98  field0;
    struct StrConcat_384  field1;
};

static struct StrConcat_388 StrConcat_388_StrConcat (  struct StrView_98  field0 ,  struct StrConcat_384  field1 ) {
    return ( struct StrConcat_388 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_387 {
    struct StrConcat_388  field0;
    struct Char_104  field1;
};

static struct StrConcat_387 StrConcat_387_StrConcat (  struct StrConcat_388  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_387 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_5   print_dash_str392 (    int32_t  self1408 ) {
    ( ( printf ) ( ( (  from_dash_string31 ) ( ( (uint8_t*)"%d" ) ,  ( 2 ) ) ) ,  (  self1408 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str391 (    struct StrConcat_385  self1293 ) {
    struct StrConcat_385  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str145 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str392 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str390 (    struct StrConcat_384  self1293 ) {
    struct StrConcat_384  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str391 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str389 (    struct StrConcat_388  self1293 ) {
    struct StrConcat_388  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str141 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str390 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str386 (    struct StrConcat_387  self1293 ) {
    struct StrConcat_387  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str389 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic383 (    struct StrConcat_384  errmsg1334 ) {
    ( (  print_dash_str386 ) ( ( ( StrConcat_387_StrConcat ) ( ( ( StrConcat_388_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1334 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

static  uint8_t *   cast_dash_ptr393 (    struct Array_36 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  uint8_t *   get_dash_ptr382 (    struct Array_36 *  arr2017 ,    size_t  i2020 ) {
    if ( ( (  cmp120 ( (  i2020 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp120 ( (  i2020 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic383 ) ( ( ( StrConcat_384_StrConcat ) ( ( ( StrConcat_385_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2020 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2021 = ( ( (  cast_dash_ptr393 ) ( (  arr2017 ) ) ) );
    return ( (  offset_dash_ptr109 ) ( (  p2021 ) ,  ( (int64_t ) (  i2020 ) ) ) );
}

static  uint8_t   get381 (    struct Array_36 *  arr2024 ,    size_t  i2027 ) {
    return ( * ( (  get_dash_ptr382 ) ( (  arr2024 ) ,  (  i2027 ) ) ) );
}

static  struct Maybe_240   next380 (    struct ArrayIter_377 *  self2100 ) {
    if ( (  cmp120 ( ( ( * (  self2100 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_240) { .tag = Maybe_240_None_t } );
    }
    uint8_t  e2102 = ( (  get381 ) ( ( & ( ( * (  self2100 ) ) .f_backing ) ) ,  ( ( * (  self2100 ) ) .f_cur ) ) );
    (*  self2100 ) .f_cur = (  op_dash_add122 ( ( ( * (  self2100 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_240_Just ) ( (  e2102 ) ) );
}

static  enum Unit_5   for_dash_each374 (    struct Array_36  iterable1097 ,   struct envunion376  fun1099 ) {
    struct ArrayIter_377  temp378 = ( (  into_dash_iter379 ) ( (  iterable1097 ) ) );
    struct ArrayIter_377 *  it1100 = ( &temp378 );
    while ( ( true ) ) {
        struct Maybe_240  dref1101 = ( (  next380 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_240_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_240_Just_t ) {
                struct envunion376  temp394 = (  fun1099 );
                ( temp394.fun ( &temp394.env ,  ( dref1101 .stuff .Maybe_240_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam395 (   struct env375* env ,    uint8_t  x2509 ) {
    struct envunion20  temp396 = ( (struct envunion20){ .fun = (  enum Unit_5  (*) (  struct env3*  ,    struct List_6 *  ,    uint8_t  ) )add245 , .env =  env->envinst3 } );
    return ( temp396.fun ( &temp396.env ,  ( env->list2505 ) ,  (  x2509 ) ) );
}

static  enum Unit_5   add_dash_all373 (   struct env21* env ,    struct List_6 *  list2505 ,    struct Array_36  it2507 ) {
    struct env375 envinst375 = {
        .list2505 =  list2505 ,
        .envinst3 = env->envinst3 ,
    };
    ( (  for_dash_each374 ) ( (  it2507 ) ,  ( (struct envunion376){ .fun = (  enum Unit_5  (*) (  struct env375*  ,    uint8_t  ) )lam395 , .env =  envinst375 } ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_bytes371 (   struct env34* env ,    struct ByteBuf_51 *  bb3403 ,    struct Array_36  xs3405 ) {
    struct envunion35  temp372 = ( (struct envunion35){ .fun = (  enum Unit_5  (*) (  struct env21*  ,    struct List_6 *  ,    struct Array_36  ) )add_dash_all373 , .env =  env->envinst21 } );
    ( temp372.fun ( &temp372.env ,  ( & ( ( * (  bb3403 ) ) .f_buf ) ) ,  (  xs3405 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_array369 (   struct env49* env ,    struct ByteBuf_51 *  bb3413 ,    struct Array_36  xs3415 ) {
    struct envunion50  temp370 = ( (struct envunion50){ .fun = (  enum Unit_5  (*) (  struct env34*  ,    struct ByteBuf_51 *  ,    struct Array_36  ) )write_dash_bytes371 , .env =  env->envinst34 } );
    ( temp370.fun ( &temp370.env ,  (  bb3413 ) ,  (  xs3415 ) ) );
    return ( Unit_5_Unit );
}

static  struct Array_36   from_dash_listlike397 (    struct Array_36 *  self374 ) {
    return ( * (  self374 ) );
}

struct StrConcat_401 {
    struct StrView_98  field0;
    struct StrView_98  field1;
};

static struct StrConcat_401 StrConcat_401_StrConcat (  struct StrView_98  field0 ,  struct StrView_98  field1 ) {
    return ( struct StrConcat_401 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_403 {
    struct StrConcat_401  field0;
    struct Char_104  field1;
};

static struct StrConcat_403 StrConcat_403_StrConcat (  struct StrConcat_401  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_403 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_406 {
    struct StrViewIter_309  f_left;
    struct StrViewIter_309  f_right;
};

enum EmptyIter_408 {
    EmptyIter_408_EmptyIter,
};

struct AppendIter_407 {
    enum EmptyIter_408  f_it;
    struct Char_104  f_elem;
    bool  f_appended;
};

struct StrConcatIter_405 {
    struct StrConcatIter_406  f_left;
    struct AppendIter_407  f_right;
};

static  struct StrConcatIter_405   into_dash_iter410 (    struct StrConcatIter_405  self1281 ) {
    return (  self1281 );
}

static  struct Maybe_106   next412 (    struct StrConcatIter_406 *  self1284 ) {
    struct Maybe_106  dref1285 = ( (  next313 ) ( ( & ( ( * (  self1284 ) ) .f_left ) ) ) );
    if ( dref1285.tag == Maybe_106_Just_t ) {
        return ( ( Maybe_106_Just ) ( ( dref1285 .stuff .Maybe_106_Just_s .field0 ) ) );
    }
    else {
        if ( dref1285.tag == Maybe_106_None_t ) {
            return ( (  next313 ) ( ( & ( ( * (  self1284 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_106   next414 (    enum EmptyIter_408 *  dref798 ) {
    return ( (struct Maybe_106) { .tag = Maybe_106_None_t } );
}

static  struct Maybe_106   next413 (    struct AppendIter_407 *  self1045 ) {
    struct Maybe_106  dref1046 = ( (  next414 ) ( ( & ( ( * (  self1045 ) ) .f_it ) ) ) );
    if ( dref1046.tag == Maybe_106_Just_t ) {
        return ( ( Maybe_106_Just ) ( ( dref1046 .stuff .Maybe_106_Just_s .field0 ) ) );
    }
    else {
        if ( dref1046.tag == Maybe_106_None_t ) {
            if ( ( ! ( ( * (  self1045 ) ) .f_appended ) ) ) {
                (*  self1045 ) .f_appended = ( true );
                return ( ( Maybe_106_Just ) ( ( ( * (  self1045 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_106) { .tag = Maybe_106_None_t } );
        }
    }
}

static  struct Maybe_106   next411 (    struct StrConcatIter_405 *  self1284 ) {
    struct Maybe_106  dref1285 = ( (  next412 ) ( ( & ( ( * (  self1284 ) ) .f_left ) ) ) );
    if ( dref1285.tag == Maybe_106_Just_t ) {
        return ( ( Maybe_106_Just ) ( ( dref1285 .stuff .Maybe_106_Just_s .field0 ) ) );
    }
    else {
        if ( dref1285.tag == Maybe_106_None_t ) {
            return ( (  next413 ) ( ( & ( ( * (  self1284 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_5   for_dash_each404 (    struct StrConcatIter_405  iterable1097 ,    enum Unit_5 (*  fun1099 )(    struct Char_104  ) ) {
    struct StrConcatIter_405  temp409 = ( (  into_dash_iter410 ) ( (  iterable1097 ) ) );
    struct StrConcatIter_405 *  it1100 = ( &temp409 );
    while ( ( true ) ) {
        struct Maybe_106  dref1101 = ( (  next411 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_106_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_106_Just_t ) {
                ( (  fun1099 ) ( ( dref1101 .stuff .Maybe_106_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  struct StrViewIter_309   chars419 (    struct StrView_98  self1317 ) {
    return ( (  into_dash_iter317 ) ( (  self1317 ) ) );
}

static  struct StrConcatIter_406   into_dash_iter418 (    struct StrConcat_401  dref1288 ) {
    return ( (struct StrConcatIter_406) { .f_left = ( (  chars419 ) ( ( dref1288 .field0 ) ) ) , .f_right = ( (  chars419 ) ( ( dref1288 .field1 ) ) ) } );
}

static  struct StrConcatIter_406   chars417 (    struct StrConcat_401  self1299 ) {
    return ( (  into_dash_iter418 ) ( (  self1299 ) ) );
}

static  enum EmptyIter_408   into_dash_iter424 (    enum EmptyIter_408  self796 ) {
    return (  self796 );
}

static  struct AppendIter_407   append423 (    enum EmptyIter_408  it1029 ,    struct Char_104  e1031 ) {
    return ( (struct AppendIter_407) { .f_it = ( (  into_dash_iter424 ) ( (  it1029 ) ) ) , .f_elem = (  e1031 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_407   cons422 (    enum EmptyIter_408  it1034 ,    struct Char_104  e1036 ) {
    return ( (  append423 ) ( (  it1034 ) ,  (  e1036 ) ) );
}

static  enum EmptyIter_408   nil425 (  ) {
    return ( EmptyIter_408_EmptyIter );
}

static  struct AppendIter_407   single421 (    struct Char_104  e1039 ) {
    return ( (  cons422 ) ( ( (  nil425 ) ( ) ) ,  (  e1039 ) ) );
}

static  struct AppendIter_407   chars420 (    struct Char_104  self1277 ) {
    return ( (  single421 ) ( (  self1277 ) ) );
}

static  struct StrConcatIter_405   into_dash_iter416 (    struct StrConcat_403  dref1288 ) {
    return ( (struct StrConcatIter_405) { .f_left = ( (  chars417 ) ( ( dref1288 .field0 ) ) ) , .f_right = ( (  chars420 ) ( ( dref1288 .field1 ) ) ) } );
}

static  struct StrConcatIter_405   chars415 (    struct StrConcat_403  self1299 ) {
    return ( (  into_dash_iter416 ) ( (  self1299 ) ) );
}

static  enum Unit_5   print402 (    struct StrConcat_403  s1326 ) {
    ( (  for_dash_each404 ) ( ( (  chars415 ) ( (  s1326 ) ) ) ,  (  printf_dash_char149 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   println400 (    struct StrConcat_401  s1329 ) {
    ( (  print402 ) ( ( ( StrConcat_403_StrConcat ) ( (  s1329 ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_5_Unit );
}

static  uint8_t   todo_prime_399 (    struct StrView_98  s2137 ) {
    ( (  println400 ) ( ( ( StrConcat_401_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"todo: " ) ,  ( 6 ) ) ) ,  (  s2137 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined338 ) ( ) );
}

struct envunion427 {
    enum Unit_5  (*fun) (  struct env49*  ,    struct ByteBuf_51 *  ,    struct Array_36  );
    struct env49 env;
};

struct env436 {
    struct List_6 *  list2505;
    struct env3 envinst3;
};

struct envunion437 {
    enum Unit_5  (*fun) (  struct env436*  ,    uint8_t  );
    struct env436 env;
};

struct ArrayIter_438 {
    struct Array_39  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_438   into_dash_iter440 (    struct Array_39  self2093 ) {
    return ( (struct ArrayIter_438) { .f_backing = (  self2093 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   get_dash_ptr443 (    struct Array_39 *  arr2017 ,    size_t  i2020 ) {
    if ( ( (  cmp120 ( (  i2020 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp120 ( (  i2020 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic383 ) ( ( ( StrConcat_384_StrConcat ) ( ( ( StrConcat_385_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2020 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2021 = ( ( (  cast_dash_ptr167 ) ( (  arr2017 ) ) ) );
    return ( (  offset_dash_ptr109 ) ( (  p2021 ) ,  ( (int64_t ) (  i2020 ) ) ) );
}

static  uint8_t   get442 (    struct Array_39 *  arr2024 ,    size_t  i2027 ) {
    return ( * ( (  get_dash_ptr443 ) ( (  arr2024 ) ,  (  i2027 ) ) ) );
}

static  struct Maybe_240   next441 (    struct ArrayIter_438 *  self2100 ) {
    if ( (  cmp120 ( ( ( * (  self2100 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_240) { .tag = Maybe_240_None_t } );
    }
    uint8_t  e2102 = ( (  get442 ) ( ( & ( ( * (  self2100 ) ) .f_backing ) ) ,  ( ( * (  self2100 ) ) .f_cur ) ) );
    (*  self2100 ) .f_cur = (  op_dash_add122 ( ( ( * (  self2100 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_240_Just ) ( (  e2102 ) ) );
}

static  enum Unit_5   for_dash_each435 (    struct Array_39  iterable1097 ,   struct envunion437  fun1099 ) {
    struct ArrayIter_438  temp439 = ( (  into_dash_iter440 ) ( (  iterable1097 ) ) );
    struct ArrayIter_438 *  it1100 = ( &temp439 );
    while ( ( true ) ) {
        struct Maybe_240  dref1101 = ( (  next441 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_240_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_240_Just_t ) {
                struct envunion437  temp444 = (  fun1099 );
                ( temp444.fun ( &temp444.env ,  ( dref1101 .stuff .Maybe_240_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam445 (   struct env436* env ,    uint8_t  x2509 ) {
    struct envunion20  temp446 = ( (struct envunion20){ .fun = (  enum Unit_5  (*) (  struct env3*  ,    struct List_6 *  ,    uint8_t  ) )add245 , .env =  env->envinst3 } );
    return ( temp446.fun ( &temp446.env ,  ( env->list2505 ) ,  (  x2509 ) ) );
}

static  enum Unit_5   add_dash_all434 (   struct env22* env ,    struct List_6 *  list2505 ,    struct Array_39  it2507 ) {
    struct env436 envinst436 = {
        .list2505 =  list2505 ,
        .envinst3 = env->envinst3 ,
    };
    ( (  for_dash_each435 ) ( (  it2507 ) ,  ( (struct envunion437){ .fun = (  enum Unit_5  (*) (  struct env436*  ,    uint8_t  ) )lam445 , .env =  envinst436 } ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_bytes432 (   struct env37* env ,    struct ByteBuf_51 *  bb3403 ,    struct Array_39  xs3405 ) {
    struct envunion38  temp433 = ( (struct envunion38){ .fun = (  enum Unit_5  (*) (  struct env22*  ,    struct List_6 *  ,    struct Array_39  ) )add_dash_all434 , .env =  env->envinst22 } );
    ( temp433.fun ( &temp433.env ,  ( & ( ( * (  bb3403 ) ) .f_buf ) ) ,  (  xs3405 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_array430 (   struct env52* env ,    struct ByteBuf_51 *  bb3413 ,    struct Array_39  xs3415 ) {
    struct envunion53  temp431 = ( (struct envunion53){ .fun = (  enum Unit_5  (*) (  struct env37*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_bytes432 , .env =  env->envinst37 } );
    ( temp431.fun ( &temp431.env ,  (  bb3413 ) ,  (  xs3415 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   undefined448 (  ) {
    enum Unit_5  temp449;
    return (  temp449 );
}

static  enum Unit_5   todo_prime_447 (    struct StrView_98  s2137 ) {
    ( (  println400 ) ( ( ( StrConcat_401_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"todo: " ) ,  ( 6 ) ) ) ,  (  s2137 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined448 ) ( ) );
}

static  enum Unit_5   push367 (   struct env68* env ,    struct ByteBuf_51 *  bb3478 ,    struct RegImm_365  ri3480 ) {
    struct RegImm_365  dref3481 = (  ri3480 );
    if ( dref3481.tag == RegImm_365_Reg_t ) {
        struct envunion69  temp368 = ( (struct envunion69){ .fun = (  enum Unit_5  (*) (  struct env49*  ,    struct ByteBuf_51 *  ,    struct Array_36  ) )write_dash_array369 , .env =  env->envinst49 } );
        struct Array_36  temp398 = ( (struct Array_36) { ._arr = { ( {  enum Reg_366  dref3483 = ( dref3481 .stuff .RegImm_365_Reg_s .field0 ) ;  dref3483 == Reg_366_RAX ? (  from_dash_integral118 ( 80 ) ) :  dref3483 == Reg_366_RBX ? (  from_dash_integral118 ( 83 ) ) : ( (  todo_prime_399 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"push [reg]" ) ,  ( 10 ) ) ) ) ) ; } ) } } );
        ( temp368.fun ( &temp368.env ,  (  bb3478 ) ,  ( (  from_dash_listlike397 ) ( ( &temp398 ) ) ) ) );
    }
    else {
        if ( dref3481.tag == RegImm_365_Imm4_t ) {
            struct envunion427  temp426 = ( (struct envunion427){ .fun = (  enum Unit_5  (*) (  struct env49*  ,    struct ByteBuf_51 *  ,    struct Array_36  ) )write_dash_array369 , .env =  env->envinst49 } );
            struct Array_36  temp428 = ( (struct Array_36) { ._arr = { (  from_dash_integral118 ( 104 ) ) } } );
            ( temp426.fun ( &temp426.env ,  (  bb3478 ) ,  ( (  from_dash_listlike397 ) ( ( &temp428 ) ) ) ) );
            struct envunion70  temp429 = ( (struct envunion70){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array430 , .env =  env->envinst52 } );
            ( temp429.fun ( &temp429.env ,  (  bb3478 ) ,  ( dref3481 .stuff .RegImm_365_Imm4_s .field0 ) ) );
        }
        else {
            if ( true ) {
                ( (  todo_prime_447 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"push" ) ,  ( 4 ) ) ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  uint32_t   op_dash_div454 (    uint32_t  l269 ,    uint32_t  r271 ) {
    return ( (  l269 ) / (  r271 ) );
}

struct Range_457 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_457 Range_457_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_457 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env458 {
    uint32_t  base1377;
    ;
};

struct envunion459 {
    uint32_t  (*fun) (  struct env458*  ,    int32_t  ,    uint32_t  );
    struct env458 env;
};

struct RangeIter_460 {
    struct Range_457  field0;
    int32_t  field1;
};

static struct RangeIter_460 RangeIter_460_RangeIter (  struct Range_457  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_460 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_460   into_dash_iter461 (    struct Range_457  dref889 ) {
    return ( ( RangeIter_460_RangeIter ) ( ( ( Range_457_Range ) ( ( dref889 .field0 ) ,  ( dref889 .field1 ) ) ) ,  ( dref889 .field0 ) ) );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_117   cmp463 (    int32_t  l173 ,    int32_t  r175 ) {
    return ( builtin_int32_tcmp( (  l173 ) , (  r175 ) ) );
}

static  struct Maybe_260   next462 (    struct RangeIter_460 *  self897 ) {
    struct RangeIter_460  dref898 = ( * (  self897 ) );
    if ( true ) {
        if ( (  cmp463 ( ( dref898 .field1 ) , ( dref898 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_260) { .tag = Maybe_260_None_t } );
        }
        struct Maybe_260  x902 = ( ( Maybe_260_Just ) ( ( dref898 .field1 ) ) );
        (*  self897 ) = ( ( RangeIter_460_RangeIter ) ( ( ( Range_457_Range ) ( ( dref898 .field0 .field0 ) ,  ( dref898 .field0 .field1 ) ) ) ,  (  op_dash_add262 ( ( dref898 .field1 ) , (  from_dash_integral30 ( 1 ) ) ) ) ) );
        return (  x902 );
    }
}

static  uint32_t   reduce456 (    struct Range_457  iterable1116 ,    uint32_t  base1118 ,   struct envunion459  fun1120 ) {
    uint32_t  x1121 = (  base1118 );
    struct RangeIter_460  it1122 = ( (  into_dash_iter461 ) ( (  iterable1116 ) ) );
    while ( ( true ) ) {
        struct Maybe_260  dref1123 = ( (  next462 ) ( ( & (  it1122 ) ) ) );
        if ( dref1123.tag == Maybe_260_None_t ) {
            return (  x1121 );
        }
        else {
            if ( dref1123.tag == Maybe_260_Just_t ) {
                struct envunion459  temp464 = (  fun1120 );
                x1121 = ( temp464.fun ( &temp464.env ,  ( dref1123 .stuff .Maybe_260_Just_s .field0 ) ,  (  x1121 ) ) );
            }
        }
    }
    const char*  temp465 = ( (  from_dash_string31 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp465);
    abort ( );
    ( Unit_5_Unit );
    uint32_t  temp466;
    return (  temp466 );
}

static  struct Range_457   to467 (    int32_t  from880 ,    int32_t  to882 ) {
    return ( ( Range_457_Range ) ( (  from880 ) ,  (  to882 ) ) );
}

static  int32_t   op_dash_sub468 (    int32_t  l236 ,    int32_t  r238 ) {
    return ( (  l236 ) - (  r238 ) );
}

static  uint32_t   op_dash_mul470 (    uint32_t  l264 ,    uint32_t  r266 ) {
    return ( (  l264 ) * (  r266 ) );
}

static  uint32_t   lam469 (   struct env458* env ,    int32_t  item1381 ,    uint32_t  x1383 ) {
    return (  op_dash_mul470 ( (  x1383 ) , ( env->base1377 ) ) );
}

static  uint32_t   pow455 (    uint32_t  base1377 ,    int32_t  p1379 ) {
    struct env458 envinst458 = {
        .base1377 =  base1377 ,
    };
    return ( (  reduce456 ) ( ( (  to467 ) ( (  from_dash_integral30 ( 0 ) ) ,  (  op_dash_sub468 ( (  p1379 ) , (  from_dash_integral30 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral161 ( 1 ) ) ,  ( (struct envunion459){ .fun = (  uint32_t  (*) (  struct env458*  ,    int32_t  ,    uint32_t  ) )lam469 , .env =  envinst458 } ) ) );
}

static  uint32_t   rshift453 (    uint32_t  x1530 ,    int32_t  am1532 ) {
    return (  op_dash_div454 ( (  x1530 ) , ( (  pow455 ) ( (  from_dash_integral161 ( 2 ) ) ,  (  am1532 ) ) ) ) );
}

static  int32_t   op_dash_mul471 (    int32_t  l241 ,    int32_t  r243 ) {
    return ( (  l241 ) * (  r243 ) );
}

static  uint8_t   nth_dash_byte452 (    uint32_t  x3431 ,    int32_t  n3433 ) {
    return ( ( (uint8_t ) ( (  rshift453 ) ( (  x3431 ) ,  (  op_dash_mul471 ( (  from_dash_integral30 ( 8 ) ) , (  n3433 ) ) ) ) ) ) );
}

static  struct RegImm_365   dword450 (    uint32_t  x3436 ) {
    struct Array_39  temp451 = ( (struct Array_39) { ._arr = { ( (  nth_dash_byte452 ) ( (  x3436 ) ,  (  from_dash_integral30 ( 0 ) ) ) ) , ( (  nth_dash_byte452 ) ( (  x3436 ) ,  (  from_dash_integral30 ( 1 ) ) ) ) , ( (  nth_dash_byte452 ) ( (  x3436 ) ,  (  from_dash_integral30 ( 2 ) ) ) ) , ( (  nth_dash_byte452 ) ( (  x3436 ) ,  (  from_dash_integral30 ( 3 ) ) ) ) } } );
    return ( ( RegImm_365_Imm4 ) ( ( (  from_dash_listlike165 ) ( ( &temp451 ) ) ) ) );
}

struct envunion473 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env64 env;
};

static  uint8_t   panic_prime_477 (    struct StrView_98  errmsg2140 ) {
    ( (  println400 ) ( ( ( StrConcat_401_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg2140 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined338 ) ( ) );
}

struct env486 {
    struct List_6 *  list2505;
    struct env3 envinst3;
};

struct envunion487 {
    enum Unit_5  (*fun) (  struct env486*  ,    uint8_t  );
    struct env486 env;
};

struct ArrayIter_488 {
    struct Array_42  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_488   into_dash_iter490 (    struct Array_42  self2093 ) {
    return ( (struct ArrayIter_488) { .f_backing = (  self2093 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   cast_dash_ptr494 (    struct Array_42 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  uint8_t *   get_dash_ptr493 (    struct Array_42 *  arr2017 ,    size_t  i2020 ) {
    if ( ( (  cmp120 ( (  i2020 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp120 ( (  i2020 ) , ( (size_t ) ( 3 ) ) ) != 0 ) ) ) {
        ( (  panic383 ) ( ( ( StrConcat_384_StrConcat ) ( ( ( StrConcat_385_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2020 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 3 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2021 = ( ( (  cast_dash_ptr494 ) ( (  arr2017 ) ) ) );
    return ( (  offset_dash_ptr109 ) ( (  p2021 ) ,  ( (int64_t ) (  i2020 ) ) ) );
}

static  uint8_t   get492 (    struct Array_42 *  arr2024 ,    size_t  i2027 ) {
    return ( * ( (  get_dash_ptr493 ) ( (  arr2024 ) ,  (  i2027 ) ) ) );
}

static  struct Maybe_240   next491 (    struct ArrayIter_488 *  self2100 ) {
    if ( (  cmp120 ( ( ( * (  self2100 ) ) .f_cur ) , ( (size_t ) ( 3 ) ) ) != 0 ) ) {
        return ( (struct Maybe_240) { .tag = Maybe_240_None_t } );
    }
    uint8_t  e2102 = ( (  get492 ) ( ( & ( ( * (  self2100 ) ) .f_backing ) ) ,  ( ( * (  self2100 ) ) .f_cur ) ) );
    (*  self2100 ) .f_cur = (  op_dash_add122 ( ( ( * (  self2100 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_240_Just ) ( (  e2102 ) ) );
}

static  enum Unit_5   for_dash_each485 (    struct Array_42  iterable1097 ,   struct envunion487  fun1099 ) {
    struct ArrayIter_488  temp489 = ( (  into_dash_iter490 ) ( (  iterable1097 ) ) );
    struct ArrayIter_488 *  it1100 = ( &temp489 );
    while ( ( true ) ) {
        struct Maybe_240  dref1101 = ( (  next491 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_240_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_240_Just_t ) {
                struct envunion487  temp495 = (  fun1099 );
                ( temp495.fun ( &temp495.env ,  ( dref1101 .stuff .Maybe_240_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam496 (   struct env486* env ,    uint8_t  x2509 ) {
    struct envunion20  temp497 = ( (struct envunion20){ .fun = (  enum Unit_5  (*) (  struct env3*  ,    struct List_6 *  ,    uint8_t  ) )add245 , .env =  env->envinst3 } );
    return ( temp497.fun ( &temp497.env ,  ( env->list2505 ) ,  (  x2509 ) ) );
}

static  enum Unit_5   add_dash_all484 (   struct env23* env ,    struct List_6 *  list2505 ,    struct Array_42  it2507 ) {
    struct env486 envinst486 = {
        .list2505 =  list2505 ,
        .envinst3 = env->envinst3 ,
    };
    ( (  for_dash_each485 ) ( (  it2507 ) ,  ( (struct envunion487){ .fun = (  enum Unit_5  (*) (  struct env486*  ,    uint8_t  ) )lam496 , .env =  envinst486 } ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_bytes482 (   struct env40* env ,    struct ByteBuf_51 *  bb3403 ,    struct Array_42  xs3405 ) {
    struct envunion41  temp483 = ( (struct envunion41){ .fun = (  enum Unit_5  (*) (  struct env23*  ,    struct List_6 *  ,    struct Array_42  ) )add_dash_all484 , .env =  env->envinst23 } );
    ( temp483.fun ( &temp483.env ,  ( & ( ( * (  bb3403 ) ) .f_buf ) ) ,  (  xs3405 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_array480 (   struct env54* env ,    struct ByteBuf_51 *  bb3413 ,    struct Array_42  xs3415 ) {
    struct envunion55  temp481 = ( (struct envunion55){ .fun = (  enum Unit_5  (*) (  struct env40*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_bytes482 , .env =  env->envinst40 } );
    ( temp481.fun ( &temp481.env ,  (  bb3413 ) ,  (  xs3415 ) ) );
    return ( Unit_5_Unit );
}

static  struct Array_42   from_dash_listlike498 (    struct Array_42 *  self374 ) {
    return ( * (  self374 ) );
}

static  enum Unit_5   mov474 (   struct env64* env ,    struct ByteBuf_51 *  bb3461 ,    enum Reg_366  r3463 ,    struct RegImm_365  ri3465 ) {
    struct RegImm_365  dref3466 = (  ri3465 );
    if ( dref3466.tag == RegImm_365_Imm4_t ) {
        struct envunion65  temp475 = ( (struct envunion65){ .fun = (  enum Unit_5  (*) (  struct env49*  ,    struct ByteBuf_51 *  ,    struct Array_36  ) )write_dash_array369 , .env =  env->envinst49 } );
        struct Array_36  temp476 = ( (struct Array_36) { ._arr = { ( {  enum Reg_366  dref3468 = (  r3463 ) ;  dref3468 == Reg_366_RAX ? (  from_dash_integral118 ( 184 ) ) :  dref3468 == Reg_366_RBX ? (  from_dash_integral118 ( 187 ) ) :  dref3468 == Reg_366_RBP ? (  from_dash_integral118 ( 189 ) ) :  dref3468 == Reg_366_RDI ? (  from_dash_integral118 ( 191 ) ) :  dref3468 == Reg_366_RDX ? (  from_dash_integral118 ( 186 ) ) :  dref3468 == Reg_366_RIP ? ( (  panic_prime_477 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"mov rip, ... is not defined." ) ,  ( 28 ) ) ) ) ) : ( (  todo_prime_399 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"mov _, imm4" ) ,  ( 11 ) ) ) ) ) ; } ) } } );
        ( temp475.fun ( &temp475.env ,  (  bb3461 ) ,  ( (  from_dash_listlike397 ) ( ( &temp476 ) ) ) ) );
        struct envunion66  temp478 = ( (struct envunion66){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array430 , .env =  env->envinst52 } );
        ( temp478.fun ( &temp478.env ,  (  bb3461 ) ,  ( dref3466 .stuff .RegImm_365_Imm4_s .field0 ) ) );
    }
    else {
        if ( dref3466.tag == RegImm_365_Reg_t &&  dref3466 .stuff .RegImm_365_Reg_s .field0 == Reg_366_RSP ) {
            struct envunion67  temp479 = ( (struct envunion67){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array480 , .env =  env->envinst54 } );
            struct Array_42  temp499 = ( (struct Array_42) { ._arr = { (  from_dash_integral118 ( 72 ) ) , (  from_dash_integral118 ( 137 ) ) , (  from_dash_integral118 ( 229 ) ) } } );
            ( temp479.fun ( &temp479.env ,  (  bb3461 ) ,  ( (  from_dash_listlike498 ) ( ( &temp499 ) ) ) ) );
        }
        else {
            if ( true ) {
                ( (  todo_prime_447 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"mov" ) ,  ( 3 ) ) ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  struct RegImm_365   reg500 (    enum Reg_366  reg3446 ) {
    return ( ( RegImm_365_Reg ) ( (  reg3446 ) ) );
}

struct envunion502 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env64 env;
};

static  uint32_t   op_dash_sub503 (    uint32_t  l259 ,    uint32_t  r261 ) {
    return ( (  l259 ) - (  r261 ) );
}

struct envunion505 {
    size_t  (*fun) (  struct env362*  );
    struct env362 env;
};

static  size_t   size508 (    struct List_6 *  l2435 ) {
    return ( ( * (  l2435 ) ) .f_count );
}

static  size_t   count_dash_written_dash_bytes507 (    struct ByteBuf_51 *  bb3380 ) {
    return ( (  size508 ) ( ( & ( ( * (  bb3380 ) ) .f_buf ) ) ) );
}

static  size_t   here506 (   struct env362* env ) {
    return ( (  count_dash_written_dash_bytes507 ) ( ( env->bb3601 ) ) );
}

struct envunion510 {
    enum Unit_5  (*fun) (  struct env86*  ,    struct ByteBuf_51 *  ,    enum Reg_366  );
    struct env86 env;
};

struct envunion515 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

static  enum Unit_5   dec511 (   struct env86* env ,    struct ByteBuf_51 *  bb3539 ,    enum Reg_366  r3541 ) {
    enum Reg_366  dref3542 = (  r3541 );
    switch (  dref3542 ) {
        case Reg_366_RAX : {
            struct envunion87  temp512 = ( (struct envunion87){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array480 , .env =  env->envinst54 } );
            struct Array_42  temp513 = ( (struct Array_42) { ._arr = { (  from_dash_integral118 ( 72 ) ) , (  from_dash_integral118 ( 255 ) ) , (  from_dash_integral118 ( 200 ) ) } } );
            ( temp512.fun ( &temp512.env ,  (  bb3539 ) ,  ( (  from_dash_listlike498 ) ( ( &temp513 ) ) ) ) );
            break;
        }
        case Reg_366_RBX : {
            struct envunion515  temp514 = ( (struct envunion515){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array480 , .env =  env->envinst54 } );
            struct Array_42  temp516 = ( (struct Array_42) { ._arr = { (  from_dash_integral118 ( 72 ) ) , (  from_dash_integral118 ( 255 ) ) , (  from_dash_integral118 ( 203 ) ) } } );
            ( temp514.fun ( &temp514.env ,  (  bb3539 ) ,  ( (  from_dash_listlike498 ) ( ( &temp516 ) ) ) ) );
            break;
        }
        default: {
            ( (  todo_prime_447 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"dec" ) ,  ( 3 ) ) ) ) );
            break;
        }
    }
    return ( Unit_5_Unit );
}

struct envunion518 {
    enum Unit_5  (*fun) (  struct env68*  ,    struct ByteBuf_51 *  ,    struct RegImm_365  );
    struct env68 env;
};

struct envunion520 {
    enum Unit_5  (*fun) (  struct env71*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env71 env;
};

static  enum Unit_5   test521 (   struct env71* env ,    struct ByteBuf_51 *  bb3496 ,    enum Reg_366  r3498 ,    struct RegImm_365  ri3500 ) {
    struct RegImm_365  dref3501 = (  ri3500 );
    if ( dref3501.tag == RegImm_365_Reg_t &&  dref3501 .stuff .RegImm_365_Reg_s .field0 == Reg_366_RAX ) {
        enum Reg_366  dref3502 = (  r3498 );
        switch (  dref3502 ) {
            case Reg_366_RAX : {
                struct envunion72  temp522 = ( (struct envunion72){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array480 , .env =  env->envinst54 } );
                struct Array_42  temp523 = ( (struct Array_42) { ._arr = { (  from_dash_integral118 ( 72 ) ) , (  from_dash_integral118 ( 133 ) ) , (  from_dash_integral118 ( 192 ) ) } } );
                ( temp522.fun ( &temp522.env ,  (  bb3496 ) ,  ( (  from_dash_listlike498 ) ( ( &temp523 ) ) ) ) );
                break;
            }
            default: {
                ( (  todo_prime_447 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"test ..., rax" ) ,  ( 13 ) ) ) ) );
                break;
            }
        }
    }
    else {
        if ( true ) {
            ( (  todo_prime_447 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"test" ) ,  ( 4 ) ) ) ) );
        }
    }
    return ( Unit_5_Unit );
}

struct envunion525 {
    size_t  (*fun) (  struct env73*  ,    struct ByteBuf_51 *  ,    struct RegImm_365  );
    struct env73 env;
};

struct env534 {
    struct List_6 *  list2505;
    struct env3 envinst3;
};

struct envunion535 {
    enum Unit_5  (*fun) (  struct env534*  ,    uint8_t  );
    struct env534 env;
};

struct ArrayIter_536 {
    struct Array_45  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_536   into_dash_iter538 (    struct Array_45  self2093 ) {
    return ( (struct ArrayIter_536) { .f_backing = (  self2093 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   cast_dash_ptr542 (    struct Array_45 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  uint8_t *   get_dash_ptr541 (    struct Array_45 *  arr2017 ,    size_t  i2020 ) {
    if ( ( (  cmp120 ( (  i2020 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp120 ( (  i2020 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic383 ) ( ( ( StrConcat_384_StrConcat ) ( ( ( StrConcat_385_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2020 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2021 = ( ( (  cast_dash_ptr542 ) ( (  arr2017 ) ) ) );
    return ( (  offset_dash_ptr109 ) ( (  p2021 ) ,  ( (int64_t ) (  i2020 ) ) ) );
}

static  uint8_t   get540 (    struct Array_45 *  arr2024 ,    size_t  i2027 ) {
    return ( * ( (  get_dash_ptr541 ) ( (  arr2024 ) ,  (  i2027 ) ) ) );
}

static  struct Maybe_240   next539 (    struct ArrayIter_536 *  self2100 ) {
    if ( (  cmp120 ( ( ( * (  self2100 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_240) { .tag = Maybe_240_None_t } );
    }
    uint8_t  e2102 = ( (  get540 ) ( ( & ( ( * (  self2100 ) ) .f_backing ) ) ,  ( ( * (  self2100 ) ) .f_cur ) ) );
    (*  self2100 ) .f_cur = (  op_dash_add122 ( ( ( * (  self2100 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_240_Just ) ( (  e2102 ) ) );
}

static  enum Unit_5   for_dash_each533 (    struct Array_45  iterable1097 ,   struct envunion535  fun1099 ) {
    struct ArrayIter_536  temp537 = ( (  into_dash_iter538 ) ( (  iterable1097 ) ) );
    struct ArrayIter_536 *  it1100 = ( &temp537 );
    while ( ( true ) ) {
        struct Maybe_240  dref1101 = ( (  next539 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_240_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_240_Just_t ) {
                struct envunion535  temp543 = (  fun1099 );
                ( temp543.fun ( &temp543.env ,  ( dref1101 .stuff .Maybe_240_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam544 (   struct env534* env ,    uint8_t  x2509 ) {
    struct envunion20  temp545 = ( (struct envunion20){ .fun = (  enum Unit_5  (*) (  struct env3*  ,    struct List_6 *  ,    uint8_t  ) )add245 , .env =  env->envinst3 } );
    return ( temp545.fun ( &temp545.env ,  ( env->list2505 ) ,  (  x2509 ) ) );
}

static  enum Unit_5   add_dash_all532 (   struct env24* env ,    struct List_6 *  list2505 ,    struct Array_45  it2507 ) {
    struct env534 envinst534 = {
        .list2505 =  list2505 ,
        .envinst3 = env->envinst3 ,
    };
    ( (  for_dash_each533 ) ( (  it2507 ) ,  ( (struct envunion535){ .fun = (  enum Unit_5  (*) (  struct env534*  ,    uint8_t  ) )lam544 , .env =  envinst534 } ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_bytes530 (   struct env43* env ,    struct ByteBuf_51 *  bb3403 ,    struct Array_45  xs3405 ) {
    struct envunion44  temp531 = ( (struct envunion44){ .fun = (  enum Unit_5  (*) (  struct env24*  ,    struct List_6 *  ,    struct Array_45  ) )add_dash_all532 , .env =  env->envinst24 } );
    ( temp531.fun ( &temp531.env ,  ( & ( ( * (  bb3403 ) ) .f_buf ) ) ,  (  xs3405 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_array528 (   struct env56* env ,    struct ByteBuf_51 *  bb3413 ,    struct Array_45  xs3415 ) {
    struct envunion57  temp529 = ( (struct envunion57){ .fun = (  enum Unit_5  (*) (  struct env43*  ,    struct ByteBuf_51 *  ,    struct Array_45  ) )write_dash_bytes530 , .env =  env->envinst43 } );
    ( temp529.fun ( &temp529.env ,  (  bb3413 ) ,  (  xs3415 ) ) );
    return ( Unit_5_Unit );
}

static  struct Array_45   from_dash_listlike546 (    struct Array_45 *  self374 ) {
    return ( * (  self374 ) );
}

static  size_t   jne526 (   struct env73* env ,    struct ByteBuf_51 *  bb3505 ,    struct RegImm_365  ri3507 ) {
    struct RegImm_365  dref3508 = (  ri3507 );
    if ( dref3508.tag == RegImm_365_Imm4_t ) {
        struct envunion74  temp527 = ( (struct envunion74){ .fun = (  enum Unit_5  (*) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  ) )write_dash_array528 , .env =  env->envinst56 } );
        struct Array_45  temp547 = ( (struct Array_45) { ._arr = { (  from_dash_integral118 ( 15 ) ) , (  from_dash_integral118 ( 133 ) ) } } );
        ( temp527.fun ( &temp527.env ,  (  bb3505 ) ,  ( (  from_dash_listlike546 ) ( ( &temp547 ) ) ) ) );
        size_t  off3510 = ( (  count_dash_written_dash_bytes507 ) ( (  bb3505 ) ) );
        struct envunion75  temp548 = ( (struct envunion75){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array430 , .env =  env->envinst52 } );
        ( temp548.fun ( &temp548.env ,  (  bb3505 ) ,  ( dref3508 .stuff .RegImm_365_Imm4_s .field0 ) ) );
        return (  off3510 );
    }
    else {
        if ( true ) {
            ( (  todo_prime_447 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"jne" ) ,  ( 3 ) ) ) ) );
        }
    }
}

static  uint32_t   jump_dash_offset549 (    size_t  from3604 ,    size_t  to3606 ) {
    return (  op_dash_sub503 ( (  op_dash_sub503 ( ( (  size_dash_u32157 ) ( (  to3606 ) ) ) , ( (  size_dash_u32157 ) ( (  from3604 ) ) ) ) ) , (  from_dash_integral161 ( 6 ) ) ) );
}

struct envunion551 {
    size_t  (*fun) (  struct env362*  );
    struct env362 env;
};

static  void *   cast_dash_ptr558 (    struct Jump_13 * *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  size_t   size_dash_of559 (    struct Jump_13 *  x394 ) {
    return ( sizeof( (  x394 ) ) );
}

static  struct Jump_13 *   zeroed556 (  ) {
    struct Jump_13 *  temp557;
    struct Jump_13 *  x646 = (  temp557 );
    ( ( memset ) ( ( (  cast_dash_ptr558 ) ( ( & (  x646 ) ) ) ) ,  (  from_dash_integral30 ( 0 ) ) ,  ( (  size_dash_of559 ) ( (  x646 ) ) ) ) );
    return (  x646 );
}

static  struct Jump_13 *   null_dash_ptr555 (  ) {
    return ( (  zeroed556 ) ( ) );
}

static  struct Slice_12   empty554 (  ) {
    return ( (struct Slice_12) { .f_ptr = ( (  null_dash_ptr555 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_11   mk553 (    enum CAllocator_7  al2428 ) {
    struct Slice_12  elements2429 = ( (  empty554 ) ( ) );
    return ( (struct List_11) { .f_al = (  al2428 ) , .f_elements = (  elements2429 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_309   into_dash_iter561 (    struct StrViewIter_309  self1306 ) {
    return (  self1306 );
}

static  struct Array_39   uninit_dash_buf565 (  ) {
    struct Array_39  temp566;
    return (  temp566 );
}

static  int64_t   op_dash_add568 (    int64_t  l208 ,    int64_t  r210 ) {
    return ( (  l208 ) + (  r210 ) );
}

static  bool   eq563 (    struct Char_104  l1442 ,    struct Char_104  r1444 ) {
    if ( ( !  eq248 ( ( (  l1442 ) .f_num_dash_bytes ) , ( (  r1444 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Array_39  temp564 = ( (  uninit_dash_buf565 ) ( ) );
    struct Char_104  lc1445 = ( (  regularize150 ) ( (  l1442 ) ,  ( &temp564 ) ) );
    struct Array_39  temp567 = ( (  uninit_dash_buf565 ) ( ) );
    struct Char_104  rc1446 = ( (  regularize150 ) ( (  r1444 ) ,  ( &temp567 ) ) );
    int64_t  i1447 = (  from_dash_integral96 ( 0 ) );
    while ( (  cmp120 ( ( (size_t ) (  i1447 ) ) , ( (  lc1445 ) .f_num_dash_bytes ) ) == 0 ) ) {
        if ( ( !  eq112 ( ( * ( (uint8_t * ) ( ( (void*) ( (  lc1445 ) .f_ptr ) ) + (  i1447 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( (  rc1446 ) .f_ptr ) ) + (  i1447 ) ) ) ) ) ) ) {
            return ( false );
        }
        i1447 = (  op_dash_add568 ( (  i1447 ) , (  from_dash_integral96 ( 1 ) ) ) );
    }
    return ( true );
}

static  struct Char_104   from_dash_string569 (    uint8_t *  ptr95 ,    size_t  count97 ) {
    return ( (struct Char_104) { .f_ptr = (  ptr95 ) , .f_num_dash_bytes = (  count97 ) } );
}

struct RegImmOff_572 {
    enum {
        RegImmOff_572_RegImm_t,
        RegImmOff_572_RegOff4_t,
    } tag;
    union {
        struct {
            struct RegImm_365  field0;
        } RegImmOff_572_RegImm_s;
        struct {
            enum Reg_366  field0;
            struct Array_39  field1;
        } RegImmOff_572_RegOff4_s;
    } stuff;
};

static struct RegImmOff_572 RegImmOff_572_RegImm (  struct RegImm_365  field0 ) {
    return ( struct RegImmOff_572 ) { .tag = RegImmOff_572_RegImm_t, .stuff = { .RegImmOff_572_RegImm_s = { .field0 = field0 } } };
};

static struct RegImmOff_572 RegImmOff_572_RegOff4 (  enum Reg_366  field0 ,  struct Array_39  field1 ) {
    return ( struct RegImmOff_572 ) { .tag = RegImmOff_572_RegOff4_t, .stuff = { .RegImmOff_572_RegOff4_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct envunion571 {
    enum Unit_5  (*fun) (  struct env82*  ,    struct ByteBuf_51 *  ,    struct RegImmOff_572  );
    struct env82 env;
};

static  enum Unit_5   inc573 (   struct env82* env ,    struct ByteBuf_51 *  bb3529 ,    struct RegImmOff_572  rio3531 ) {
    struct RegImmOff_572  dref3532 = (  rio3531 );
    if ( dref3532.tag == RegImmOff_572_RegOff4_t ) {
        struct envunion83  temp574 = ( (struct envunion83){ .fun = (  enum Unit_5  (*) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  ) )write_dash_array528 , .env =  env->envinst56 } );
        struct Array_45  temp575 = ( (struct Array_45) { ._arr = { (  from_dash_integral118 ( 255 ) ) , (  from_dash_integral118 ( 133 ) ) } } );
        ( temp574.fun ( &temp574.env ,  (  bb3529 ) ,  ( (  from_dash_listlike546 ) ( ( &temp575 ) ) ) ) );
        struct envunion84  temp576 = ( (struct envunion84){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array430 , .env =  env->envinst52 } );
        ( temp576.fun ( &temp576.env ,  (  bb3529 ) ,  ( dref3532 .stuff .RegImmOff_572_RegOff4_s .field1 ) ) );
    }
    else {
        if ( dref3532.tag == RegImmOff_572_RegImm_t ) {
            struct RegImm_365  dref3536 = ( dref3532 .stuff .RegImmOff_572_RegImm_s .field0 );
            if ( dref3536.tag == RegImm_365_Reg_t &&  dref3536 .stuff .RegImm_365_Reg_s .field0 == Reg_366_RBX ) {
                struct envunion85  temp577 = ( (struct envunion85){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array480 , .env =  env->envinst54 } );
                struct Array_42  temp578 = ( (struct Array_42) { ._arr = { (  from_dash_integral118 ( 72 ) ) , (  from_dash_integral118 ( 255 ) ) , (  from_dash_integral118 ( 195 ) ) } } );
                ( temp577.fun ( &temp577.env ,  (  bb3529 ) ,  ( (  from_dash_listlike498 ) ( ( &temp578 ) ) ) ) );
            }
            else {
                if ( true ) {
                    ( (  todo_prime_447 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"inc" ) ,  ( 3 ) ) ) ) );
                }
            }
        }
    }
    return ( Unit_5_Unit );
}

struct envunion580 {
    enum Unit_5  (*fun) (  struct env86*  ,    struct ByteBuf_51 *  ,    enum Reg_366  );
    struct env86 env;
};

struct envunion582 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct envunion585 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct envunion588 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env64 env;
};

struct envunion590 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env64 env;
};

struct envunion592 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct envunion595 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env64 env;
};

struct envunion597 {
    enum Unit_5  (*fun) (  struct env60*  ,    struct ByteBuf_51 *  );
    struct env60 env;
};

static  enum Unit_5   syscall598 (   struct env60* env ,    struct ByteBuf_51 *  bb3449 ) {
    struct envunion61  temp599 = ( (struct envunion61){ .fun = (  enum Unit_5  (*) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  ) )write_dash_array528 , .env =  env->envinst56 } );
    struct Array_45  temp600 = ( (struct Array_45) { ._arr = { (  from_dash_integral118 ( 15 ) ) , (  from_dash_integral118 ( 5 ) ) } } );
    ( temp599.fun ( &temp599.env ,  (  bb3449 ) ,  ( (  from_dash_listlike546 ) ( ( &temp600 ) ) ) ) );
    return ( Unit_5_Unit );
}

struct envunion602 {
    enum Unit_5  (*fun) (  struct env58*  ,    struct ByteBuf_51 *  ,    struct Array_48  );
    struct env58 env;
};

struct env609 {
    struct List_6 *  list2505;
    struct env3 envinst3;
};

struct envunion610 {
    enum Unit_5  (*fun) (  struct env609*  ,    uint8_t  );
    struct env609 env;
};

struct ArrayIter_611 {
    struct Array_48  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_611   into_dash_iter613 (    struct Array_48  self2093 ) {
    return ( (struct ArrayIter_611) { .f_backing = (  self2093 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   cast_dash_ptr617 (    struct Array_48 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  uint8_t *   get_dash_ptr616 (    struct Array_48 *  arr2017 ,    size_t  i2020 ) {
    if ( ( (  cmp120 ( (  i2020 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp120 ( (  i2020 ) , ( (size_t ) ( 7 ) ) ) != 0 ) ) ) {
        ( (  panic383 ) ( ( ( StrConcat_384_StrConcat ) ( ( ( StrConcat_385_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2020 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 7 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2021 = ( ( (  cast_dash_ptr617 ) ( (  arr2017 ) ) ) );
    return ( (  offset_dash_ptr109 ) ( (  p2021 ) ,  ( (int64_t ) (  i2020 ) ) ) );
}

static  uint8_t   get615 (    struct Array_48 *  arr2024 ,    size_t  i2027 ) {
    return ( * ( (  get_dash_ptr616 ) ( (  arr2024 ) ,  (  i2027 ) ) ) );
}

static  struct Maybe_240   next614 (    struct ArrayIter_611 *  self2100 ) {
    if ( (  cmp120 ( ( ( * (  self2100 ) ) .f_cur ) , ( (size_t ) ( 7 ) ) ) != 0 ) ) {
        return ( (struct Maybe_240) { .tag = Maybe_240_None_t } );
    }
    uint8_t  e2102 = ( (  get615 ) ( ( & ( ( * (  self2100 ) ) .f_backing ) ) ,  ( ( * (  self2100 ) ) .f_cur ) ) );
    (*  self2100 ) .f_cur = (  op_dash_add122 ( ( ( * (  self2100 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_240_Just ) ( (  e2102 ) ) );
}

static  enum Unit_5   for_dash_each608 (    struct Array_48  iterable1097 ,   struct envunion610  fun1099 ) {
    struct ArrayIter_611  temp612 = ( (  into_dash_iter613 ) ( (  iterable1097 ) ) );
    struct ArrayIter_611 *  it1100 = ( &temp612 );
    while ( ( true ) ) {
        struct Maybe_240  dref1101 = ( (  next614 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_240_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_240_Just_t ) {
                struct envunion610  temp618 = (  fun1099 );
                ( temp618.fun ( &temp618.env ,  ( dref1101 .stuff .Maybe_240_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam619 (   struct env609* env ,    uint8_t  x2509 ) {
    struct envunion20  temp620 = ( (struct envunion20){ .fun = (  enum Unit_5  (*) (  struct env3*  ,    struct List_6 *  ,    uint8_t  ) )add245 , .env =  env->envinst3 } );
    return ( temp620.fun ( &temp620.env ,  ( env->list2505 ) ,  (  x2509 ) ) );
}

static  enum Unit_5   add_dash_all607 (   struct env25* env ,    struct List_6 *  list2505 ,    struct Array_48  it2507 ) {
    struct env609 envinst609 = {
        .list2505 =  list2505 ,
        .envinst3 = env->envinst3 ,
    };
    ( (  for_dash_each608 ) ( (  it2507 ) ,  ( (struct envunion610){ .fun = (  enum Unit_5  (*) (  struct env609*  ,    uint8_t  ) )lam619 , .env =  envinst609 } ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_bytes605 (   struct env46* env ,    struct ByteBuf_51 *  bb3403 ,    struct Array_48  xs3405 ) {
    struct envunion47  temp606 = ( (struct envunion47){ .fun = (  enum Unit_5  (*) (  struct env25*  ,    struct List_6 *  ,    struct Array_48  ) )add_dash_all607 , .env =  env->envinst25 } );
    ( temp606.fun ( &temp606.env ,  ( & ( ( * (  bb3403 ) ) .f_buf ) ) ,  (  xs3405 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_array603 (   struct env58* env ,    struct ByteBuf_51 *  bb3413 ,    struct Array_48  xs3415 ) {
    struct envunion59  temp604 = ( (struct envunion59){ .fun = (  enum Unit_5  (*) (  struct env46*  ,    struct ByteBuf_51 *  ,    struct Array_48  ) )write_dash_bytes605 , .env =  env->envinst46 } );
    ( temp604.fun ( &temp604.env ,  (  bb3413 ) ,  (  xs3415 ) ) );
    return ( Unit_5_Unit );
}

static  struct Array_48   from_dash_listlike621 (    struct Array_48 *  self374 ) {
    return ( * (  self374 ) );
}

struct envunion624 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env64 env;
};

struct envunion626 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env64 env;
};

struct envunion628 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct envunion631 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env64 env;
};

struct envunion633 {
    enum Unit_5  (*fun) (  struct env60*  ,    struct ByteBuf_51 *  );
    struct env60 env;
};

struct envunion635 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct envunion638 {
    size_t  (*fun) (  struct env362*  );
    struct env362 env;
};

struct envunion640 {
    size_t  (*fun) (  struct env79*  ,    struct ByteBuf_51 *  ,    struct RegImm_365  );
    struct env79 env;
};

static  size_t   jg641 (   struct env79* env ,    struct ByteBuf_51 *  bb3521 ,    struct RegImm_365  ri3523 ) {
    struct RegImm_365  dref3524 = (  ri3523 );
    if ( dref3524.tag == RegImm_365_Imm4_t ) {
        struct envunion80  temp642 = ( (struct envunion80){ .fun = (  enum Unit_5  (*) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  ) )write_dash_array528 , .env =  env->envinst56 } );
        struct Array_45  temp643 = ( (struct Array_45) { ._arr = { (  from_dash_integral118 ( 15 ) ) , (  from_dash_integral118 ( 143 ) ) } } );
        ( temp642.fun ( &temp642.env ,  (  bb3521 ) ,  ( (  from_dash_listlike546 ) ( ( &temp643 ) ) ) ) );
        size_t  off3526 = ( (  count_dash_written_dash_bytes507 ) ( (  bb3521 ) ) );
        struct envunion81  temp644 = ( (struct envunion81){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array430 , .env =  env->envinst52 } );
        ( temp644.fun ( &temp644.env ,  (  bb3521 ) ,  ( dref3524 .stuff .RegImm_365_Imm4_s .field0 ) ) );
        return (  off3526 );
    }
    else {
        if ( true ) {
            ( (  todo_prime_447 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"jg" ) ,  ( 2 ) ) ) ) );
        }
    }
}

struct envunion646 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env64 env;
};

struct envunion648 {
    enum Unit_5  (*fun) (  struct env62*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env62 env;
};

static  enum Unit_5   xor649 (   struct env62* env ,    struct ByteBuf_51 *  bb3452 ,    enum Reg_366  r3454 ,    struct RegImm_365  ri3456 ) {
    enum Reg_366  dref3457 = (  r3454 );
    switch (  dref3457 ) {
        case Reg_366_RDI : {
            struct RegImm_365  dref3458 = (  ri3456 );
            if ( dref3458.tag == RegImm_365_Reg_t &&  dref3458 .stuff .RegImm_365_Reg_s .field0 == Reg_366_RDI ) {
                struct envunion63  temp650 = ( (struct envunion63){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array480 , .env =  env->envinst54 } );
                struct Array_42  temp651 = ( (struct Array_42) { ._arr = { (  from_dash_integral118 ( 72 ) ) , (  from_dash_integral118 ( 49 ) ) , (  from_dash_integral118 ( 255 ) ) } } );
                ( temp650.fun ( &temp650.env ,  (  bb3452 ) ,  ( (  from_dash_listlike498 ) ( ( &temp651 ) ) ) ) );
            }
            else {
                if ( true ) {
                    ( (  todo_prime_447 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"xor rdi" ) ,  ( 7 ) ) ) ) );
                }
            }
            break;
        }
        default: {
            ( (  todo_prime_447 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"xor" ) ,  ( 3 ) ) ) ) );
            break;
        }
    }
    return ( Unit_5_Unit );
}

struct envunion653 {
    enum Unit_5  (*fun) (  struct env60*  ,    struct ByteBuf_51 *  );
    struct env60 env;
};

static  uint8_t *   cast_dash_ptr656 (    uint32_t *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

struct TypeSize_659 {
    size_t  f_size;
};

static  struct TypeSize_659   get_dash_typesize658 (  ) {
    uint32_t  temp660;
    return ( (struct TypeSize_659) { .f_size = ( sizeof( ( (  temp660 ) ) ) ) } );
}

static  size_t   ptr_dash_size_dash_of657 (    uint32_t *  x397 ) {
    return ( ( ( (  get_dash_typesize658 ) ( ) ) ) .f_size );
}

static  struct Slice_8   as_dash_mem655 (    uint32_t *  x3383 ) {
    return ( (struct Slice_8) { .f_ptr = ( (  cast_dash_ptr656 ) ( (  x3383 ) ) ) , .f_count = ( (  ptr_dash_size_dash_of657 ) ( (  x3383 ) ) ) } );
}

struct StrConcat_664 {
    struct StrConcat_133  field0;
    struct StrView_98  field1;
};

static struct StrConcat_664 StrConcat_664_StrConcat (  struct StrConcat_133  field0 ,  struct StrView_98  field1 ) {
    return ( struct StrConcat_664 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_663 {
    struct StrConcat_664  field0;
    size_t  field1;
};

static struct StrConcat_663 StrConcat_663_StrConcat (  struct StrConcat_664  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_663 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_662 {
    struct StrConcat_663  field0;
    struct StrView_98  field1;
};

static struct StrConcat_662 StrConcat_662_StrConcat (  struct StrConcat_663  field0 ,  struct StrView_98  field1 ) {
    return ( struct StrConcat_662 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_667 {
    struct StrView_98  field0;
    struct StrConcat_662  field1;
};

static struct StrConcat_667 StrConcat_667_StrConcat (  struct StrView_98  field0 ,  struct StrConcat_662  field1 ) {
    return ( struct StrConcat_667 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_666 {
    struct StrConcat_667  field0;
    struct Char_104  field1;
};

static struct StrConcat_666 StrConcat_666_StrConcat (  struct StrConcat_667  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_666 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_5   print_dash_str671 (    struct StrConcat_664  self1293 ) {
    struct StrConcat_664  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str144 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str141 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str670 (    struct StrConcat_663  self1293 ) {
    struct StrConcat_663  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str671 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str147 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str669 (    struct StrConcat_662  self1293 ) {
    struct StrConcat_662  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str670 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str141 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str668 (    struct StrConcat_667  self1293 ) {
    struct StrConcat_667  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str141 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str669 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str665 (    struct StrConcat_666  self1293 ) {
    struct StrConcat_666  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str668 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic661 (    struct StrConcat_662  errmsg1334 ) {
    ( (  print_dash_str665 ) ( ( ( StrConcat_666_StrConcat ) ( ( ( StrConcat_667_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1334 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   set674 (    struct List_6 *  list2418 ,    size_t  i2420 ,    uint8_t  elem2422 ) {
    if ( ( (  cmp120 ( (  i2420 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp120 ( (  i2420 ) , ( ( * (  list2418 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic136 ) ( ( ( StrConcat_132_StrConcat ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2420 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2418 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set208 ) ( ( ( * (  list2418 ) ) .f_elements ) ,  (  i2420 ) ,  (  elem2422 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   patch654 (    struct ByteBuf_51 *  bb3392 ,    size_t  idx3394 ,    uint32_t  x3396 ) {
    struct Slice_8  mem3397 = ( (  as_dash_mem655 ) ( ( & (  x3396 ) ) ) );
    if ( (  cmp120 ( (  op_dash_add122 ( (  idx3394 ) , ( (  mem3397 ) .f_count ) ) ) , ( ( ( * (  bb3392 ) ) .f_buf ) .f_count ) ) == 2 ) ) {
        ( (  panic661 ) ( ( ( StrConcat_662_StrConcat ) ( ( ( StrConcat_663_StrConcat ) ( ( ( StrConcat_664_StrConcat ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"Tried to patch in " ) ,  ( 18 ) ) ) ,  ( (  mem3397 ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)" bytes at " ) ,  ( 10 ) ) ) ) ) ,  (  idx3394 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)", but the buffer is only " ) ,  ( 25 ) ) ) ) ) ,  ( ( ( * (  bb3392 ) ) .f_buf ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)" bytes long." ) ,  ( 12 ) ) ) ) ) ) );
    }
    struct Zip_254  temp672 =  into_dash_iter257 ( ( (  zip264 ) ( (  mem3397 ) ,  ( (  from266 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_258  __cond673 =  next259 (&temp672);
        if (  __cond673 .tag == 0 ) {
            break;
        }
        struct Tuple2_251  dref3398 =  __cond673 .stuff .Maybe_258_Just_s .field0;
        ( (  set674 ) ( ( & ( ( * (  bb3392 ) ) .f_buf ) ) ,  (  op_dash_add122 ( (  idx3394 ) , ( (  i32_dash_size207 ) ( ( dref3398 .field1 ) ) ) ) ) ,  ( dref3398 .field0 ) ) );
    }
    return ( Unit_5_Unit );
}

struct envunion676 {
    size_t  (*fun) (  struct env362*  );
    struct env362 env;
};

struct envunion678 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct envunion681 {
    enum Unit_5  (*fun) (  struct env71*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env71 env;
};

struct envunion683 {
    size_t  (*fun) (  struct env362*  );
    struct env362 env;
};

struct envunion685 {
    size_t  (*fun) (  struct env76*  ,    struct ByteBuf_51 *  ,    struct RegImm_365  );
    struct env76 env;
};

static  size_t   je686 (   struct env76* env ,    struct ByteBuf_51 *  bb3513 ,    struct RegImm_365  ri3515 ) {
    struct RegImm_365  dref3516 = (  ri3515 );
    if ( dref3516.tag == RegImm_365_Imm4_t ) {
        struct envunion77  temp687 = ( (struct envunion77){ .fun = (  enum Unit_5  (*) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  ) )write_dash_array528 , .env =  env->envinst56 } );
        struct Array_45  temp688 = ( (struct Array_45) { ._arr = { (  from_dash_integral118 ( 15 ) ) , (  from_dash_integral118 ( 132 ) ) } } );
        ( temp687.fun ( &temp687.env ,  (  bb3513 ) ,  ( (  from_dash_listlike546 ) ( ( &temp688 ) ) ) ) );
        size_t  off3518 = ( (  count_dash_written_dash_bytes507 ) ( (  bb3513 ) ) );
        struct envunion78  temp689 = ( (struct envunion78){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array430 , .env =  env->envinst52 } );
        ( temp689.fun ( &temp689.env ,  (  bb3513 ) ,  ( dref3516 .stuff .RegImm_365_Imm4_s .field0 ) ) );
        return (  off3518 );
    }
    else {
        if ( true ) {
            ( (  todo_prime_447 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"je" ) ,  ( 2 ) ) ) ) );
        }
    }
}

struct envunion691 {
    size_t  (*fun) (  struct env362*  );
    struct env362 env;
};

struct envunion693 {
    enum Unit_5  (*fun) (  struct env9*  ,    struct List_11 *  ,    struct Jump_13  );
    struct env9 env;
};

struct TypeSize_699 {
    size_t  f_size;
};

static  struct TypeSize_699   get_dash_typesize698 (  ) {
    struct Jump_13  temp700;
    return ( (struct TypeSize_699) { .f_size = ( sizeof( ( (  temp700 ) ) ) ) } );
}

static  struct Jump_13 *   cast_dash_ptr701 (    void *  p403 ) {
    return ( (struct Jump_13 * ) (  p403 ) );
}

static  struct Slice_12   allocate697 (    enum CAllocator_7  dref2359 ,    size_t  count2361 ) {
    if (!(  dref2359 == CAllocator_7_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2362 = ( ( ( (  get_dash_typesize698 ) ( ) ) ) .f_size );
    struct Jump_13 *  ptr2363 = ( (  cast_dash_ptr701 ) ( ( ( malloc ) ( (  op_dash_mul206 ( (  size2362 ) , (  count2361 ) ) ) ) ) ) );
    return ( (struct Slice_12) { .f_ptr = (  ptr2363 ) , .f_count = (  count2361 ) } );
}

struct env702 {
    ;
    ;
    struct Slice_12  new_dash_slice2445;
};

struct Tuple2_704 {
    struct Jump_13  field0;
    int32_t  field1;
};

static struct Tuple2_704 Tuple2_704_Tuple2 (  struct Jump_13  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_704 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion703 {
    enum Unit_5  (*fun) (  struct env702*  ,    struct Tuple2_704  );
    struct env702 env;
};

static  struct Jump_13 *   offset_dash_ptr708 (    struct Jump_13 *  x382 ,    int64_t  count384 ) {
    struct Jump_13  temp709;
    return ( (struct Jump_13 * ) ( ( (void*) (  x382 ) ) + (  op_dash_mul94 ( (  count384 ) , ( (int64_t ) ( sizeof( ( (  temp709 ) ) ) ) ) ) ) ) );
}

static  struct Jump_13 *   get_dash_ptr707 (    struct Slice_12  slice2161 ,    size_t  i2163 ) {
    if ( ( (  cmp120 ( (  i2163 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp120 ( (  i2163 ) , ( (  slice2161 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic136 ) ( ( ( StrConcat_132_StrConcat ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2163 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2161 ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Jump_13 *  elem_dash_ptr2164 = ( (  offset_dash_ptr708 ) ( ( (  slice2161 ) .f_ptr ) ,  ( (  size_dash_i64111 ) ( (  i2163 ) ) ) ) );
    return (  elem_dash_ptr2164 );
}

static  enum Unit_5   set706 (    struct Slice_12  slice2178 ,    size_t  i2180 ,    struct Jump_13  x2182 ) {
    struct Jump_13 *  ep2183 = ( (  get_dash_ptr707 ) ( (  slice2178 ) ,  (  i2180 ) ) );
    (*  ep2183 ) = (  x2182 );
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam705 (   struct env702* env ,    struct Tuple2_704  dref2446 ) {
    return ( (  set706 ) ( ( env->new_dash_slice2445 ) ,  ( (  i32_dash_size207 ) ( ( dref2446 .field1 ) ) ) ,  ( dref2446 .field0 ) ) );
}

struct SliceIter_712 {
    struct Slice_12  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_711 {
    struct SliceIter_712  f_left_dash_it;
    struct FromIter_255  f_right_dash_it;
};

static  struct Zip_711   into_dash_iter714 (    struct Zip_711  self934 ) {
    return (  self934 );
}

struct Maybe_715 {
    enum {
        Maybe_715_None_t,
        Maybe_715_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_704  field0;
        } Maybe_715_Just_s;
    } stuff;
};

static struct Maybe_715 Maybe_715_Just (  struct Tuple2_704  field0 ) {
    return ( struct Maybe_715 ) { .tag = Maybe_715_Just_t, .stuff = { .Maybe_715_Just_s = { .field0 = field0 } } };
};

struct Maybe_717 {
    enum {
        Maybe_717_None_t,
        Maybe_717_Just_t,
    } tag;
    union {
        struct {
            struct Jump_13  field0;
        } Maybe_717_Just_s;
    } stuff;
};

static struct Maybe_717 Maybe_717_Just (  struct Jump_13  field0 ) {
    return ( struct Maybe_717 ) { .tag = Maybe_717_Just_t, .stuff = { .Maybe_717_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_717   next718 (    struct SliceIter_712 *  self2247 ) {
    size_t  off2248 = ( ( * (  self2247 ) ) .f_current_dash_offset );
    if ( (  cmp120 ( (  op_dash_add122 ( (  off2248 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2247 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_717) { .tag = Maybe_717_None_t } );
    }
    struct Jump_13  elem2249 = ( * ( (  offset_dash_ptr708 ) ( ( ( ( * (  self2247 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64111 ) ( (  off2248 ) ) ) ) ) );
    (*  self2247 ) .f_current_dash_offset = (  op_dash_add122 ( (  off2248 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_717_Just ) ( (  elem2249 ) ) );
}

static  struct Maybe_715   next716 (    struct Zip_711 *  self937 ) {
    struct Zip_711  copy938 = ( * (  self937 ) );
    while ( ( true ) ) {
        struct Maybe_717  dref939 = ( (  next718 ) ( ( & ( (  copy938 ) .f_left_dash_it ) ) ) );
        if ( dref939.tag == Maybe_717_None_t ) {
            return ( (struct Maybe_715) { .tag = Maybe_715_None_t } );
        }
        else {
            if ( dref939.tag == Maybe_717_Just_t ) {
                struct Maybe_260  dref941 = ( (  next261 ) ( ( & ( (  copy938 ) .f_right_dash_it ) ) ) );
                if ( dref941.tag == Maybe_260_None_t ) {
                    return ( (struct Maybe_715) { .tag = Maybe_715_None_t } );
                }
                else {
                    if ( dref941.tag == Maybe_260_Just_t ) {
                        ( (  next718 ) ( ( & ( ( * (  self937 ) ) .f_left_dash_it ) ) ) );
                        ( (  next261 ) ( ( & ( ( * (  self937 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_715_Just ) ( ( ( Tuple2_704_Tuple2 ) ( ( dref939 .stuff .Maybe_717_Just_s .field0 ) ,  ( dref941 .stuff .Maybe_260_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_5   for_dash_each710 (    struct Zip_711  iterable1097 ,   struct envunion703  fun1099 ) {
    struct Zip_711  temp713 = ( (  into_dash_iter714 ) ( (  iterable1097 ) ) );
    struct Zip_711 *  it1100 = ( &temp713 );
    while ( ( true ) ) {
        struct Maybe_715  dref1101 = ( (  next716 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_715_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_715_Just_t ) {
                struct envunion703  temp719 = (  fun1099 );
                ( temp719.fun ( &temp719.env ,  ( dref1101 .stuff .Maybe_715_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  struct SliceIter_712   into_dash_iter721 (    struct Slice_12  self2241 ) {
    return ( (struct SliceIter_712) { .f_slice = (  self2241 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_711   zip720 (    struct Slice_12  left945 ,    struct FromIter_255  right947 ) {
    struct SliceIter_712  left_dash_it948 = ( (  into_dash_iter721 ) ( (  left945 ) ) );
    struct FromIter_255  right_dash_it949 = ( (  into_dash_iter265 ) ( (  right947 ) ) );
    return ( (struct Zip_711) { .f_left_dash_it = (  left_dash_it948 ) , .f_right_dash_it = (  right_dash_it949 ) } );
}

static  void *   cast_dash_ptr723 (    struct Jump_13 *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  enum Unit_5   free722 (    enum CAllocator_7  dref2365 ,    struct Slice_12  slice2367 ) {
    if (!(  dref2365 == CAllocator_7_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr723 ) ( ( (  slice2367 ) .f_ptr ) ) ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   grow_dash_if_dash_full696 (   struct env2* env ,    struct List_11 *  list2444 ) {
    if ( (  eq248 ( ( ( * (  list2444 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2444 ) .f_elements = ( (  allocate697 ) ( ( ( * (  list2444 ) ) .f_al ) ,  ( env->starting_dash_size2439 ) ) );
    } else {
        if ( (  eq248 ( ( ( * (  list2444 ) ) .f_count ) , ( ( ( * (  list2444 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_12  new_dash_slice2445 = ( (  allocate697 ) ( ( ( * (  list2444 ) ) .f_al ) ,  (  op_dash_mul206 ( ( ( * (  list2444 ) ) .f_count ) , ( env->growth_dash_factor2440 ) ) ) ) );
            struct env702 envinst702 = {
                .new_dash_slice2445 =  new_dash_slice2445 ,
            };
            struct envunion703  fun2449 = ( (struct envunion703){ .fun = (  enum Unit_5  (*) (  struct env702*  ,    struct Tuple2_704  ) )lam705 , .env =  envinst702 } );
            ( (  for_dash_each710 ) ( ( (  zip720 ) ( ( ( * (  list2444 ) ) .f_elements ) ,  ( (  from266 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) ,  (  fun2449 ) ) );
            ( (  free722 ) ( ( ( * (  list2444 ) ) .f_al ) ,  ( ( * (  list2444 ) ) .f_elements ) ) );
            (*  list2444 ) .f_elements = (  new_dash_slice2445 );
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   add694 (   struct env9* env ,    struct List_11 *  list2452 ,    struct Jump_13  elem2454 ) {
    struct envunion10  temp695 = ( (struct envunion10){ .fun = (  enum Unit_5  (*) (  struct env2*  ,    struct List_11 *  ) )grow_dash_if_dash_full696 , .env =  env->envinst2 } );
    ( temp695.fun ( &temp695.env ,  (  list2452 ) ) );
    ( (  set706 ) ( ( ( * (  list2452 ) ) .f_elements ) ,  ( ( * (  list2452 ) ) .f_count ) ,  (  elem2454 ) ) );
    (*  list2452 ) .f_count = (  op_dash_add122 ( ( ( * (  list2452 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_5_Unit );
}

struct envunion725 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct envunion728 {
    enum Unit_5  (*fun) (  struct env71*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env71 env;
};

static  enum Unit_5   print_dash_str732 (    struct StrConcat_401  self1293 ) {
    struct StrConcat_401  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str141 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str141 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str731 (    struct StrConcat_403  self1293 ) {
    struct StrConcat_403  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str732 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic730 (    struct StrView_98  errmsg1334 ) {
    ( (  print_dash_str731 ) ( ( ( StrConcat_403_StrConcat ) ( ( ( StrConcat_401_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1334 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

static  struct Jump_13   undefined733 (  ) {
    struct Jump_13  temp734;
    return (  temp734 );
}

static  struct Jump_13   or_dash_fail729 (    struct Maybe_717  x1344 ,    struct StrView_98  errmsg1346 ) {
    struct Maybe_717  dref1347 = (  x1344 );
    if ( dref1347.tag == Maybe_717_None_t ) {
        ( (  panic730 ) ( (  errmsg1346 ) ) );
        return ( (  undefined733 ) ( ) );
    }
    else {
        if ( dref1347.tag == Maybe_717_Just_t ) {
            return ( dref1347 .stuff .Maybe_717_Just_s .field0 );
        }
    }
}

struct envunion736 {
    struct Maybe_717  (*fun) (  struct env17*  ,    struct List_11 *  );
    struct env17 env;
};

static  struct Jump_13 *   get_dash_ptr740 (    struct List_11 *  list2398 ,    size_t  i2400 ) {
    if ( ( (  cmp120 ( (  i2400 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp120 ( (  i2400 ) , ( ( * (  list2398 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic136 ) ( ( ( StrConcat_132_StrConcat ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2400 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2398 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr707 ) ( ( ( * (  list2398 ) ) .f_elements ) ,  (  i2400 ) ) );
}

static  struct Jump_13   get739 (    struct List_11 *  list2408 ,    size_t  i2410 ) {
    return ( * ( (  get_dash_ptr740 ) ( (  list2408 ) ,  (  i2410 ) ) ) );
}

static  size_t   size741 (    struct List_11 *  l2435 ) {
    return ( ( * (  l2435 ) ) .f_count );
}

static  struct Maybe_717   last738 (    struct List_11 *  list2495 ) {
    if ( (  eq248 ( ( ( * (  list2495 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_717) { .tag = Maybe_717_None_t } );
    } else {
        return ( ( Maybe_717_Just ) ( ( (  get739 ) ( (  list2495 ) ,  (  op_dash_sub97 ( ( (  size741 ) ( (  list2495 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) );
    }
}

struct StrConcat_749 {
    struct StrConcat_135  field0;
    struct Char_104  field1;
};

static struct StrConcat_749 StrConcat_749_StrConcat (  struct StrConcat_135  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_749 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_748 {
    struct StrConcat_749  field0;
    size_t  field1;
};

static struct StrConcat_748 StrConcat_748_StrConcat (  struct StrConcat_749  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_748 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_747 {
    struct StrConcat_748  field0;
    struct Char_104  field1;
};

static struct StrConcat_747 StrConcat_747_StrConcat (  struct StrConcat_748  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_747 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_752 {
    struct StrView_98  field0;
    struct StrConcat_747  field1;
};

static struct StrConcat_752 StrConcat_752_StrConcat (  struct StrView_98  field0 ,  struct StrConcat_747  field1 ) {
    return ( struct StrConcat_752 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_751 {
    struct StrConcat_752  field0;
    struct Char_104  field1;
};

static struct StrConcat_751 StrConcat_751_StrConcat (  struct StrConcat_752  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_751 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_5   print_dash_str756 (    struct StrConcat_749  self1293 ) {
    struct StrConcat_749  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str146 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str755 (    struct StrConcat_748  self1293 ) {
    struct StrConcat_748  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str756 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str147 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str754 (    struct StrConcat_747  self1293 ) {
    struct StrConcat_747  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str755 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str753 (    struct StrConcat_752  self1293 ) {
    struct StrConcat_752  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str141 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str754 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str750 (    struct StrConcat_751  self1293 ) {
    struct StrConcat_751  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str753 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic746 (    struct StrConcat_747  errmsg1334 ) {
    ( (  print_dash_str750 ) ( ( ( StrConcat_751_StrConcat ) ( ( ( StrConcat_752_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1334 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

struct Drop_758 {
    struct Zip_711  field0;
    size_t  field1;
};

static struct Drop_758 Drop_758_Drop (  struct Zip_711  field0 ,  size_t  field1 ) {
    return ( struct Drop_758 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env759 {
    ;
    struct List_11 *  list2465;
    ;
    ;
    size_t  num_dash_elems2470;
};

struct envunion760 {
    enum Unit_5  (*fun) (  struct env759*  ,    struct Tuple2_704  );
    struct env759 env;
};

static  struct Drop_758   into_dash_iter762 (    struct Drop_758  self851 ) {
    return (  self851 );
}

static  struct Maybe_715   next763 (    struct Drop_758 *  dref853 ) {
    while ( (  cmp120 ( ( (* dref853 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next716 ) ( ( & ( (* dref853 ) .field0 ) ) ) );
        (* dref853 ) .field1 = (  op_dash_sub97 ( ( (* dref853 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next716 ) ( ( & ( (* dref853 ) .field0 ) ) ) );
}

static  enum Unit_5   for_dash_each757 (    struct Drop_758  iterable1097 ,   struct envunion760  fun1099 ) {
    struct Drop_758  temp761 = ( (  into_dash_iter762 ) ( (  iterable1097 ) ) );
    struct Drop_758 *  it1100 = ( &temp761 );
    while ( ( true ) ) {
        struct Maybe_715  dref1101 = ( (  next763 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_715_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_715_Just_t ) {
                struct envunion760  temp764 = (  fun1099 );
                ( temp764.fun ( &temp764.env ,  ( dref1101 .stuff .Maybe_715_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  struct Drop_758   drop765 (    struct Zip_711  iterable858 ,    size_t  i860 ) {
    struct Zip_711  it861 = ( (  into_dash_iter714 ) ( (  iterable858 ) ) );
    return ( ( Drop_758_Drop ) ( (  it861 ) ,  (  i860 ) ) );
}

static  struct Slice_12   subslice768 (    struct Slice_12  slice2195 ,    size_t  from2197 ,    size_t  to2199 ) {
    struct Jump_13 *  begin_dash_ptr2200 = ( (  offset_dash_ptr708 ) ( ( (  slice2195 ) .f_ptr ) ,  ( (  size_dash_i64111 ) ( (  from2197 ) ) ) ) );
    if ( ( (  cmp120 ( (  from2197 ) , (  to2199 ) ) != 0 ) || (  cmp120 ( (  from2197 ) , ( (  slice2195 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr2200 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2201 = (  op_dash_sub97 ( ( (  min213 ) ( (  to2199 ) ,  ( (  slice2195 ) .f_count ) ) ) , (  from2197 ) ) );
    return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr2200 ) , .f_count = (  count2201 ) } );
}

static  struct SliceIter_712   into_dash_iter767 (    struct List_11  self2425 ) {
    return ( (  into_dash_iter721 ) ( ( (  subslice768 ) ( ( (  self2425 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2425 ) .f_count ) ) ) ) );
}

static  struct Zip_711   zip766 (    struct List_11  left945 ,    struct FromIter_255  right947 ) {
    struct SliceIter_712  left_dash_it948 = ( (  into_dash_iter767 ) ( (  left945 ) ) );
    struct FromIter_255  right_dash_it949 = ( (  into_dash_iter265 ) ( (  right947 ) ) );
    return ( (struct Zip_711) { .f_left_dash_it = (  left_dash_it948 ) , .f_right_dash_it = (  right_dash_it949 ) } );
}

static  enum Unit_5   set770 (    struct List_11 *  list2418 ,    size_t  i2420 ,    struct Jump_13  elem2422 ) {
    if ( ( (  cmp120 ( (  i2420 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp120 ( (  i2420 ) , ( ( * (  list2418 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic136 ) ( ( ( StrConcat_132_StrConcat ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2420 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2418 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set706 ) ( ( ( * (  list2418 ) ) .f_elements ) ,  (  i2420 ) ,  (  elem2422 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam769 (   struct env759* env ,    struct Tuple2_704  dref2471 ) {
    return ( (  set770 ) ( ( env->list2465 ) ,  (  op_dash_sub97 ( ( (  i32_dash_size207 ) ( ( dref2471 .field1 ) ) ) , ( env->num_dash_elems2470 ) ) ) ,  ( dref2471 .field0 ) ) );
}

struct StrConcat_775 {
    struct StrView_98  field0;
    struct StrConcat_664  field1;
};

static struct StrConcat_775 StrConcat_775_StrConcat (  struct StrView_98  field0 ,  struct StrConcat_664  field1 ) {
    return ( struct StrConcat_775 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_774 {
    struct StrConcat_775  field0;
    struct Char_104  field1;
};

static struct StrConcat_774 StrConcat_774_StrConcat (  struct StrConcat_775  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_774 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_5   print_dash_str776 (    struct StrConcat_775  self1293 ) {
    struct StrConcat_775  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str141 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str671 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str773 (    struct StrConcat_774  self1293 ) {
    struct StrConcat_774  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str776 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic772 (    struct StrConcat_664  errmsg1334 ) {
    ( (  print_dash_str773 ) ( ( ( StrConcat_774_StrConcat ) ( ( ( StrConcat_775_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1334 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

struct env778 {
    ;
    struct Slice_12  dest2272;
    ;
};

struct envunion779 {
    enum Unit_5  (*fun) (  struct env778*  ,    struct Tuple2_704  );
    struct env778 env;
};

static  enum Unit_5   for_dash_each777 (    struct Zip_711  iterable1097 ,   struct envunion779  fun1099 ) {
    struct Zip_711  temp780 = ( (  into_dash_iter714 ) ( (  iterable1097 ) ) );
    struct Zip_711 *  it1100 = ( &temp780 );
    while ( ( true ) ) {
        struct Maybe_715  dref1101 = ( (  next716 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_715_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_715_Just_t ) {
                struct envunion779  temp781 = (  fun1099 );
                ( temp781.fun ( &temp781.env ,  ( dref1101 .stuff .Maybe_715_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam782 (   struct env778* env ,    struct Tuple2_704  dref2273 ) {
    return ( (  set706 ) ( ( env->dest2272 ) ,  ( (  i32_dash_size207 ) ( ( dref2273 .field1 ) ) ) ,  ( dref2273 .field0 ) ) );
}

static  enum Unit_5   copy_dash_to771 (    struct Slice_12  src2270 ,    struct Slice_12  dest2272 ) {
    if ( (  cmp120 ( ( (  src2270 ) .f_count ) , ( (  dest2272 ) .f_count ) ) == 2 ) ) {
        ( (  panic772 ) ( ( ( StrConcat_664_StrConcat ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2270 ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2272 ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env778 envinst778 = {
        .dest2272 =  dest2272 ,
    };
    ( (  for_dash_each777 ) ( ( (  zip720 ) ( (  src2270 ) ,  ( (  from266 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) ,  ( (struct envunion779){ .fun = (  enum Unit_5  (*) (  struct env778*  ,    struct Tuple2_704  ) )lam782 , .env =  envinst778 } ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   remove_dash_range745 (   struct env14* env ,    struct List_11 *  list2465 ,    size_t  from2467 ,    size_t  to_dash_excl2469 ) {
    if ( (  cmp120 ( (  to_dash_excl2469 ) , (  from2467 ) ) == 0 ) ) {
        ( (  panic746 ) ( ( ( StrConcat_747_StrConcat ) ( ( ( StrConcat_748_StrConcat ) ( ( ( StrConcat_749_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2467 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2469 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp120 ( (  from2467 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic136 ) ( ( ( StrConcat_132_StrConcat ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2467 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2465 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp120 ( (  to_dash_excl2469 ) , ( ( * (  list2465 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic136 ) ( ( ( StrConcat_132_StrConcat ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2469 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2465 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2470 = (  op_dash_sub97 ( (  to_dash_excl2469 ) , (  from2467 ) ) );
    struct env759 envinst759 = {
        .list2465 =  list2465 ,
        .num_dash_elems2470 =  num_dash_elems2470 ,
    };
    ( (  for_dash_each757 ) ( ( (  drop765 ) ( ( (  zip766 ) ( ( * (  list2465 ) ) ,  ( (  from266 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) ,  (  op_dash_add122 ( (  from2467 ) , (  num_dash_elems2470 ) ) ) ) ) ,  ( (struct envunion760){ .fun = (  enum Unit_5  (*) (  struct env759*  ,    struct Tuple2_704  ) )lam769 , .env =  envinst759 } ) ) );
    (*  list2465 ) .f_count = (  op_dash_sub97 ( ( ( * (  list2465 ) ) .f_count ) , (  num_dash_elems2470 ) ) );
    size_t  capacity2474 = ( ( ( * (  list2465 ) ) .f_elements ) .f_count );
    if ( (  cmp120 ( (  op_dash_mul206 ( ( ( * (  list2465 ) ) .f_count ) , ( env->shrink_dash_factor2441 ) ) ) , (  capacity2474 ) ) == 0 ) ) {
        if ( (  eq248 ( ( ( * (  list2465 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free722 ) ( ( ( * (  list2465 ) ) .f_al ) ,  ( ( * (  list2465 ) ) .f_elements ) ) );
            (*  list2465 ) .f_elements = ( (  empty554 ) ( ) );
            return ( Unit_5_Unit );
        }
        size_t  new_dash_size2475 = (  op_dash_mul206 ( (  op_dash_add122 ( (  op_dash_div156 ( ( ( * (  list2465 ) ) .f_count ) , ( env->shrink_dash_factor2441 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2441 ) ) );
        struct Slice_12  new_dash_slice2476 = ( (  allocate697 ) ( ( ( * (  list2465 ) ) .f_al ) ,  (  new_dash_size2475 ) ) );
        ( (  copy_dash_to771 ) ( ( (  subslice768 ) ( ( ( * (  list2465 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2465 ) ) .f_count ) ) ) ,  (  new_dash_slice2476 ) ) );
        ( (  free722 ) ( ( ( * (  list2465 ) ) .f_al ) ,  ( ( * (  list2465 ) ) .f_elements ) ) );
        (*  list2465 ) .f_elements = (  new_dash_slice2476 );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   remove743 (   struct env15* env ,    struct List_11 *  list2479 ,    size_t  i2481 ) {
    struct envunion16  temp744 = ( (struct envunion16){ .fun = (  enum Unit_5  (*) (  struct env14*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range745 , .env =  env->envinst14 } );
    ( temp744.fun ( &temp744.env ,  (  list2479 ) ,  (  i2481 ) ,  (  op_dash_add122 ( (  i2481 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_5_Unit );
}

static  struct Maybe_717   pop737 (   struct env17* env ,    struct List_11 *  list2498 ) {
    if ( (  eq248 ( ( ( * (  list2498 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic730 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct Maybe_717  last_dash_elem2499 = ( (  last738 ) ( (  list2498 ) ) );
    struct envunion18  temp742 = ( (struct envunion18){ .fun = (  enum Unit_5  (*) (  struct env15*  ,    struct List_11 *  ,    size_t  ) )remove743 , .env =  env->envinst15 } );
    ( temp742.fun ( &temp742.env ,  (  list2498 ) ,  (  op_dash_sub97 ( ( ( * (  list2498 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return (  last_dash_elem2499 );
}

struct envunion784 {
    size_t  (*fun) (  struct env73*  ,    struct ByteBuf_51 *  ,    struct RegImm_365  );
    struct env73 env;
};

struct envunion786 {
    size_t  (*fun) (  struct env362*  );
    struct env362 env;
};

struct envunion788 {
    size_t  (*fun) (  struct env362*  );
    struct env362 env;
};

static  enum Unit_5   assert789 (    bool  cond1337 ,    struct StrView_98  msg1339 ) {
    if ( ( ! (  cond1337 ) ) ) {
        ( (  print_dash_str731 ) ( ( ( StrConcat_403_StrConcat ) ( ( ( StrConcat_401_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1339 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_5_Unit );
}

static  struct SliceIter_712   into_dash_iter793 (    struct List_11 *  self791 ) {
    return ( (  into_dash_iter767 ) ( ( * (  self791 ) ) ) );
}

static  struct Maybe_717   head791 (    struct List_11 *  it1165 ) {
    struct SliceIter_712  temp792 = ( (  into_dash_iter793 ) ( (  it1165 ) ) );
    return ( (  next718 ) ( ( &temp792 ) ) );
}

static  bool   null790 (    struct List_11 *  it1174 ) {
    struct Maybe_717  dref1175 = ( (  head791 ) ( (  it1174 ) ) );
    if ( dref1175.tag == Maybe_717_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct envunion795 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env64 env;
};

struct envunion797 {
    enum Unit_5  (*fun) (  struct env62*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  );
    struct env62 env;
};

struct envunion799 {
    enum Unit_5  (*fun) (  struct env60*  ,    struct ByteBuf_51 *  );
    struct env60 env;
};

static  struct StrViewIter_309   own803 (    struct StrViewIter_309  x1552 ) {
    return (  x1552 );
}

struct Tuple2_805 {
    struct Maybe_106  field0;
    struct Maybe_106  field1;
};

static struct Tuple2_805 Tuple2_805_Tuple2 (  struct Maybe_106  field0 ,  struct Maybe_106  field1 ) {
    return ( struct Tuple2_805 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   ends_dash_with800 (    struct StrView_98  s1948 ,    struct StrView_98  end1950 ) {
    struct StrViewIter_309  temp801 = ( (  chars419 ) ( (  s1948 ) ) );
    struct StrViewIter_309 *  scs1951 = ( &temp801 );
    while ( ( true ) ) {
        struct StrViewIter_309  temp802 = ( (  own803 ) ( ( * (  scs1951 ) ) ) );
        struct StrViewIter_309 *  cscs1952 = ( &temp802 );
        struct StrViewIter_309  temp804 = ( (  chars419 ) ( (  end1950 ) ) );
        struct StrViewIter_309 *  endcs1953 = ( &temp804 );
        while ( ( true ) ) {
            struct Tuple2_805  dref1954 = ( ( Tuple2_805_Tuple2 ) ( ( (  next313 ) ( (  cscs1952 ) ) ) ,  ( (  next313 ) ( (  endcs1953 ) ) ) ) );
            if ( dref1954 .field0.tag == Maybe_106_Just_t && dref1954 .field1.tag == Maybe_106_Just_t ) {
                if ( ( !  eq563 ( ( dref1954 .field0 .stuff .Maybe_106_Just_s .field0 ) , ( dref1954 .field1 .stuff .Maybe_106_Just_s .field0 ) ) ) ) {
                    break;
                }
            }
            else {
                if ( dref1954 .field0.tag == Maybe_106_None_t && dref1954 .field1.tag == Maybe_106_Just_t ) {
                    return ( false );
                }
                else {
                    if ( dref1954 .field0.tag == Maybe_106_None_t && dref1954 .field1.tag == Maybe_106_None_t ) {
                        return ( true );
                    }
                    else {
                        if ( true ) {
                            break;
                        }
                    }
                }
            }
        }
        ( (  next313 ) ( (  scs1951 ) ) );
    }
}

struct env809 {
    ;
    struct Slice_8  dest2272;
    ;
};

struct envunion810 {
    enum Unit_5  (*fun) (  struct env809*  ,    struct Tuple2_251  );
    struct env809 env;
};

static  enum Unit_5   for_dash_each808 (    struct Zip_254  iterable1097 ,   struct envunion810  fun1099 ) {
    struct Zip_254  temp811 = ( (  into_dash_iter257 ) ( (  iterable1097 ) ) );
    struct Zip_254 *  it1100 = ( &temp811 );
    while ( ( true ) ) {
        struct Maybe_258  dref1101 = ( (  next259 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_258_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_258_Just_t ) {
                struct envunion810  temp812 = (  fun1099 );
                ( temp812.fun ( &temp812.env ,  ( dref1101 .stuff .Maybe_258_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam813 (   struct env809* env ,    struct Tuple2_251  dref2273 ) {
    return ( (  set208 ) ( ( env->dest2272 ) ,  ( (  i32_dash_size207 ) ( ( dref2273 .field1 ) ) ) ,  ( dref2273 .field0 ) ) );
}

static  enum Unit_5   copy_dash_to807 (    struct Slice_8  src2270 ,    struct Slice_8  dest2272 ) {
    if ( (  cmp120 ( ( (  src2270 ) .f_count ) , ( (  dest2272 ) .f_count ) ) == 2 ) ) {
        ( (  panic772 ) ( ( ( StrConcat_664_StrConcat ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2270 ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2272 ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env809 envinst809 = {
        .dest2272 =  dest2272 ,
    };
    ( (  for_dash_each808 ) ( ( (  zip264 ) ( (  src2270 ) ,  ( (  from266 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) ,  ( (struct envunion810){ .fun = (  enum Unit_5  (*) (  struct env809*  ,    struct Tuple2_251  ) )lam813 , .env =  envinst809 } ) ) );
    return ( Unit_5_Unit );
}

static  struct StrView_98   clone_dash_0806 (    struct StrView_98  s2568 ,    enum CAllocator_7  al2570 ) {
    size_t  cnt2571 = ( ( (  s2568 ) .f_contents ) .f_count );
    struct Slice_8  nus2572 = ( (  allocate201 ) ( (  al2570 ) ,  (  op_dash_add122 ( (  cnt2571 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to807 ) ( ( (  s2568 ) .f_contents ) ,  (  nus2572 ) ) );
    ( (  set208 ) ( (  nus2572 ) ,  (  cnt2571 ) ,  ( (  char_dash_u8210 ) ( ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_98) { .f_contents = ( (struct Slice_8) { .f_ptr = ( (  nus2572 ) .f_ptr ) , .f_count = (  cnt2571 ) } ) } );
}

static  struct StrView_98   byte_dash_substr814 (    struct StrView_98  s2599 ,    size_t  from2601 ,    size_t  to2603 ) {
    return ( (struct StrView_98) { .f_contents = ( (  subslice212 ) ( ( (  s2599 ) .f_contents ) ,  (  from2601 ) ,  (  to2603 ) ) ) } );
}

static  size_t   num_dash_bytes815 (    struct StrView_98  self2611 ) {
    return ( ( (  self2611 ) .f_contents ) .f_count );
}

struct envunion817 {
    struct StrView_98  (*fun) (  struct env26*  ,    struct StrConcat_401  ,    enum CAllocator_7  );
    struct env26 env;
};

static  struct StrConcatIter_406   into_dash_iter822 (    struct StrConcatIter_406  self1281 ) {
    return (  self1281 );
}

static  struct Slice_8   as_dash_u8_dash_slice825 (    struct Char_104  c1456 ,    struct Array_39 *  buf1458 ) {
    struct Char_104  cc1459 = ( (  regularize150 ) ( (  c1456 ) ,  (  buf1458 ) ) );
    return ( (struct Slice_8) { .f_ptr = ( (  cc1459 ) .f_ptr ) , .f_count = ( (  cc1459 ) .f_num_dash_bytes ) } );
}

static  struct Slice_8   to_dash_slice827 (    struct List_6  l2533 ) {
    uint8_t *  ptr2534 = ( ( (  l2533 ) .f_elements ) .f_ptr );
    return ( (struct Slice_8) { .f_ptr = (  ptr2534 ) , .f_count = ( (  l2533 ) .f_count ) } );
}

static  struct StrView_98   from_dash_str818 (   struct env26* env ,    struct StrConcat_401  s2553 ,    enum CAllocator_7  al2555 ) {
    struct List_6  temp819 = ( (  mk223 ) ( (  al2555 ) ) );
    struct List_6 *  l2556 = ( &temp819 );
    struct Array_39  temp820 = ( (  uninit_dash_buf565 ) ( ) );
    struct Array_39 *  buf2557 = ( &temp820 );
    struct StrConcatIter_406  temp821 =  into_dash_iter822 ( ( (  chars417 ) ( (  s2553 ) ) ) );
    while (true) {
        struct Maybe_106  __cond823 =  next412 (&temp821);
        if (  __cond823 .tag == 0 ) {
            break;
        }
        struct Char_104  c2559 =  __cond823 .stuff .Maybe_106_Just_s .field0;
        struct envunion27  temp824 = ( (struct envunion27){ .fun = (  enum Unit_5  (*) (  struct env19*  ,    struct List_6 *  ,    struct Slice_8  ) )add_dash_all233 , .env =  env->envinst19 } );
        ( temp824.fun ( &temp824.env ,  (  l2556 ) ,  ( (  as_dash_u8_dash_slice825 ) ( (  c2559 ) ,  (  buf2557 ) ) ) ) );
    }
    struct envunion28  temp826 = ( (struct envunion28){ .fun = (  enum Unit_5  (*) (  struct env3*  ,    struct List_6 *  ,    uint8_t  ) )add245 , .env =  env->envinst3 } );
    ( temp826.fun ( &temp826.env ,  (  l2556 ) ,  ( (  char_dash_u8210 ) ( ( (  nullchar211 ) ( ) ) ) ) ) );
    return ( (struct StrView_98) { .f_contents = ( (  to_dash_slice827 ) ( ( * (  l2556 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr832 (    uint64_t *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

struct TypeSize_835 {
    size_t  f_size;
};

static  struct TypeSize_835   get_dash_typesize834 (  ) {
    uint64_t  temp836;
    return ( (struct TypeSize_835) { .f_size = ( sizeof( ( (  temp836 ) ) ) ) } );
}

static  size_t   ptr_dash_size_dash_of833 (    uint64_t *  x397 ) {
    return ( ( ( (  get_dash_typesize834 ) ( ) ) ) .f_size );
}

static  struct Slice_8   as_dash_mem831 (    uint64_t *  x3383 ) {
    return ( (struct Slice_8) { .f_ptr = ( (  cast_dash_ptr832 ) ( (  x3383 ) ) ) , .f_count = ( (  ptr_dash_size_dash_of833 ) ( (  x3383 ) ) ) } );
}

static  enum Unit_5   patch830 (    struct ByteBuf_51 *  bb3392 ,    size_t  idx3394 ,    uint64_t  x3396 ) {
    struct Slice_8  mem3397 = ( (  as_dash_mem831 ) ( ( & (  x3396 ) ) ) );
    if ( (  cmp120 ( (  op_dash_add122 ( (  idx3394 ) , ( (  mem3397 ) .f_count ) ) ) , ( ( ( * (  bb3392 ) ) .f_buf ) .f_count ) ) == 2 ) ) {
        ( (  panic661 ) ( ( ( StrConcat_662_StrConcat ) ( ( ( StrConcat_663_StrConcat ) ( ( ( StrConcat_664_StrConcat ) ( ( ( StrConcat_133_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"Tried to patch in " ) ,  ( 18 ) ) ) ,  ( (  mem3397 ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)" bytes at " ) ,  ( 10 ) ) ) ) ) ,  (  idx3394 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)", but the buffer is only " ) ,  ( 25 ) ) ) ) ) ,  ( ( ( * (  bb3392 ) ) .f_buf ) .f_count ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)" bytes long." ) ,  ( 12 ) ) ) ) ) ) );
    }
    struct Zip_254  temp837 =  into_dash_iter257 ( ( (  zip264 ) ( (  mem3397 ) ,  ( (  from266 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_258  __cond838 =  next259 (&temp837);
        if (  __cond838 .tag == 0 ) {
            break;
        }
        struct Tuple2_251  dref3398 =  __cond838 .stuff .Maybe_258_Just_s .field0;
        ( (  set674 ) ( ( & ( ( * (  bb3392 ) ) .f_buf ) ) ,  (  op_dash_add122 ( (  idx3394 ) , ( (  i32_dash_size207 ) ( ( dref3398 .field1 ) ) ) ) ) ,  ( dref3398 .field0 ) ) );
    }
    return ( Unit_5_Unit );
}

static  struct Elf64Phdr_282   undefined840 (  ) {
    struct Elf64Phdr_282  temp841;
    return (  temp841 );
}

static  size_t   ptr_dash_to_dash_int842 (    uint64_t *  p659 ) {
    return ( (size_t ) (  p659 ) );
}

static  size_t   ptr_dash_to_dash_int843 (    struct Elf64Phdr_282 *  p659 ) {
    return ( (size_t ) (  p659 ) );
}

static  size_t   filesz_dash_off839 (  ) {
    struct Elf64Phdr_282  header3573 = ( ( (  undefined840 ) ( ) ) );
    return (  op_dash_sub97 ( ( (  ptr_dash_to_dash_int842 ) ( ( & ( (  header3573 ) .f_p_dash_filesz ) ) ) ) , ( (  ptr_dash_to_dash_int843 ) ( ( & (  header3573 ) ) ) ) ) );
}

static  size_t   memsz_dash_off844 (  ) {
    struct Elf64Phdr_282  header3575 = ( ( (  undefined840 ) ( ) ) );
    return (  op_dash_sub97 ( ( (  ptr_dash_to_dash_int842 ) ( ( & ( (  header3575 ) .f_p_dash_memsz ) ) ) ) , ( (  ptr_dash_to_dash_int843 ) ( ( & (  header3575 ) ) ) ) ) );
}

static  enum Unit_5   finalize829 (    struct Elf_216 *  elf3585 ) {
    struct ByteBuf_51 *  bytes3586 = ( & ( ( * (  elf3585 ) ) .f_bytes ) );
    size_t  initial_dash_off3587 = ( ( ( (  get_dash_typesize274 ) ( ) ) ) .f_size );
    uint64_t  filesz3588 = ( (  size_dash_u64347 ) ( ( ( ( * (  bytes3586 ) ) .f_buf ) .f_count ) ) );
    ( (  patch830 ) ( (  bytes3586 ) ,  (  op_dash_add122 ( (  initial_dash_off3587 ) , ( (  filesz_dash_off839 ) ( ) ) ) ) ,  ( (  filesz3588 ) ) ) );
    ( (  patch830 ) ( (  bytes3586 ) ,  (  op_dash_add122 ( (  initial_dash_off3587 ) , ( (  memsz_dash_off844 ) ( ) ) ) ) ,  ( (  filesz3588 ) ) ) );
    return ( Unit_5_Unit );
}

static  struct SliceIter_237   into_dash_iter849 (    struct List_6  self2425 ) {
    return ( (  into_dash_iter239 ) ( ( (  subslice212 ) ( ( (  self2425 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2425 ) .f_count ) ) ) ) );
}

static  struct SliceIter_237   into_dash_iter848 (    struct ByteBuf_51  self3419 ) {
    return ( (  into_dash_iter849 ) ( ( (  self3419 ) .f_buf ) ) );
}

struct StrConcat_853 {
    struct StrView_98  field0;
    struct Char_104  field1;
};

static struct StrConcat_853 StrConcat_853_StrConcat (  struct StrView_98  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_853 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_855 {
    struct StrViewIter_309  f_left;
    struct AppendIter_407  f_right;
};

static  struct StrConcatIter_855   into_dash_iter857 (    struct StrConcatIter_855  self1281 ) {
    return (  self1281 );
}

static  struct Maybe_106   next858 (    struct StrConcatIter_855 *  self1284 ) {
    struct Maybe_106  dref1285 = ( (  next313 ) ( ( & ( ( * (  self1284 ) ) .f_left ) ) ) );
    if ( dref1285.tag == Maybe_106_Just_t ) {
        return ( ( Maybe_106_Just ) ( ( dref1285 .stuff .Maybe_106_Just_s .field0 ) ) );
    }
    else {
        if ( dref1285.tag == Maybe_106_None_t ) {
            return ( (  next413 ) ( ( & ( ( * (  self1284 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_5   for_dash_each854 (    struct StrConcatIter_855  iterable1097 ,    enum Unit_5 (*  fun1099 )(    struct Char_104  ) ) {
    struct StrConcatIter_855  temp856 = ( (  into_dash_iter857 ) ( (  iterable1097 ) ) );
    struct StrConcatIter_855 *  it1100 = ( &temp856 );
    while ( ( true ) ) {
        struct Maybe_106  dref1101 = ( (  next858 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_106_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_106_Just_t ) {
                ( (  fun1099 ) ( ( dref1101 .stuff .Maybe_106_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  struct StrConcatIter_855   into_dash_iter860 (    struct StrConcat_853  dref1288 ) {
    return ( (struct StrConcatIter_855) { .f_left = ( (  chars419 ) ( ( dref1288 .field0 ) ) ) , .f_right = ( (  chars420 ) ( ( dref1288 .field1 ) ) ) } );
}

static  struct StrConcatIter_855   chars859 (    struct StrConcat_853  self1299 ) {
    return ( (  into_dash_iter860 ) ( (  self1299 ) ) );
}

static  enum Unit_5   print852 (    struct StrConcat_853  s1326 ) {
    ( (  for_dash_each854 ) ( ( (  chars859 ) ( (  s1326 ) ) ) ,  (  printf_dash_char149 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   println851 (    struct StrView_98  s1329 ) {
    ( (  print852 ) ( ( ( StrConcat_853_StrConcat ) ( (  s1329 ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_5_Unit );
}

static  bool   undefined861 (  ) {
    bool  temp862;
    return (  temp862 );
}

static  bool   unreachable850 (  ) {
    ( (  println851 ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined861 ) ( ) );
}

static  bool   try_dash_write_dash_bytes846 (    const char*  filename3196 ,    struct ByteBuf_51  contents3198 ) {
    FILE *  file3199 = ( ( fopen ) ( (  filename3196 ) ,  ( (  from_dash_string31 ) ( ( (uint8_t*)"wb" ) ,  ( 2 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null193 ) ( (  file3199 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_237  temp847 = ( (  into_dash_iter848 ) ( (  contents3198 ) ) );
    struct SliceIter_237 *  it3200 = ( &temp847 );
    while ( ( true ) ) {
        struct Maybe_240  dref3201 = ( (  next241 ) ( (  it3200 ) ) );
        if ( dref3201.tag == Maybe_240_None_t ) {
            ( ( fclose ) ( (  file3199 ) ) );
            return ( true );
        }
        else {
            if ( dref3201.tag == Maybe_240_Just_t ) {
                int32_t  chars_dash_written3203 = ( ( fwrite ) ( ( (  cast_dash_ptr268 ) ( ( & ( dref3201 .stuff .Maybe_240_Just_s .field0 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  (  file3199 ) ) );
                if ( (  cmp463 ( (  chars_dash_written3203 ) , (  from_dash_integral30 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable850 ) ( ) );
}

struct StrConcat_866 {
    struct StrView_98  field0;
    struct StrConcat_180  field1;
};

static struct StrConcat_866 StrConcat_866_StrConcat (  struct StrView_98  field0 ,  struct StrConcat_180  field1 ) {
    return ( struct StrConcat_866 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_865 {
    struct StrConcat_866  field0;
    struct Char_104  field1;
};

static struct StrConcat_865 StrConcat_865_StrConcat (  struct StrConcat_866  field0 ,  struct Char_104  field1 ) {
    return ( struct StrConcat_865 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_5   print_dash_str867 (    struct StrConcat_866  self1293 ) {
    struct StrConcat_866  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str141 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str187 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str864 (    struct StrConcat_865  self1293 ) {
    struct StrConcat_865  dref1294 = (  self1293 );
    if ( true ) {
        ( (  print_dash_str867 ) ( ( dref1294 .field0 ) ) );
        ( (  print_dash_str148 ) ( ( dref1294 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic863 (    struct StrConcat_180  errmsg1334 ) {
    ( (  print_dash_str864 ) ( ( ( StrConcat_865_StrConcat ) ( ( ( StrConcat_866_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1334 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_bytes845 (    const char*  filename3206 ,    struct ByteBuf_51  contents3208 ) {
    if ( ( ! ( (  try_dash_write_dash_bytes846 ) ( (  filename3206 ) ,  (  contents3208 ) ) ) ) ) {
        ( (  panic863 ) ( ( ( StrConcat_180_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"could not write to file " ) ,  ( 24 ) ) ) ,  (  filename3206 ) ) ) ) );
    }
    return ( Unit_5_Unit );
}

static  uint32_t   i32_dash_u32868 (    int32_t  x679 ) {
    return ( (uint32_t ) (  x679 ) );
}

struct Array_870 {
    int32_t _arr [3];
};

struct ArrayIter_872 {
    struct Array_870  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_872   into_dash_iter873 (    struct Array_870  self2093 ) {
    return ( (struct ArrayIter_872) { .f_backing = (  self2093 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  int32_t *   cast_dash_ptr877 (    struct Array_870 *  p403 ) {
    return ( (int32_t * ) (  p403 ) );
}

static  int32_t *   offset_dash_ptr878 (    int32_t *  x382 ,    int64_t  count384 ) {
    int32_t  temp879;
    return ( (int32_t * ) ( ( (void*) (  x382 ) ) + (  op_dash_mul94 ( (  count384 ) , ( (int64_t ) ( sizeof( ( (  temp879 ) ) ) ) ) ) ) ) );
}

static  int32_t *   get_dash_ptr876 (    struct Array_870 *  arr2017 ,    size_t  i2020 ) {
    if ( ( (  cmp120 ( (  i2020 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp120 ( (  i2020 ) , ( (size_t ) ( 3 ) ) ) != 0 ) ) ) {
        ( (  panic383 ) ( ( ( StrConcat_384_StrConcat ) ( ( ( StrConcat_385_StrConcat ) ( ( ( StrConcat_134_StrConcat ) ( ( ( StrConcat_135_StrConcat ) ( ( (  from_dash_string170 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2020 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 3 ) ) ) ,  ( (  from_dash_charlike171 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    int32_t *  p2021 = ( ( (  cast_dash_ptr877 ) ( (  arr2017 ) ) ) );
    return ( (  offset_dash_ptr878 ) ( (  p2021 ) ,  ( (int64_t ) (  i2020 ) ) ) );
}

static  int32_t   get875 (    struct Array_870 *  arr2024 ,    size_t  i2027 ) {
    return ( * ( (  get_dash_ptr876 ) ( (  arr2024 ) ,  (  i2027 ) ) ) );
}

static  struct Maybe_260   next874 (    struct ArrayIter_872 *  self2100 ) {
    if ( (  cmp120 ( ( ( * (  self2100 ) ) .f_cur ) , ( (size_t ) ( 3 ) ) ) != 0 ) ) {
        return ( (struct Maybe_260) { .tag = Maybe_260_None_t } );
    }
    int32_t  e2102 = ( (  get875 ) ( ( & ( ( * (  self2100 ) ) .f_backing ) ) ,  ( ( * (  self2100 ) ) .f_cur ) ) );
    (*  self2100 ) .f_cur = (  op_dash_add122 ( ( ( * (  self2100 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_260_Just ) ( (  e2102 ) ) );
}

static  int32_t   reduce871 (    struct Array_870  iterable1116 ,    int32_t  base1118 ,    int32_t (*  fun1120 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1121 = (  base1118 );
    struct ArrayIter_872  it1122 = ( (  into_dash_iter873 ) ( (  iterable1116 ) ) );
    while ( ( true ) ) {
        struct Maybe_260  dref1123 = ( (  next874 ) ( ( & (  it1122 ) ) ) );
        if ( dref1123.tag == Maybe_260_None_t ) {
            return (  x1121 );
        }
        else {
            if ( dref1123.tag == Maybe_260_Just_t ) {
                x1121 = ( (  fun1120 ) ( ( dref1123 .stuff .Maybe_260_Just_s .field0 ) ,  (  x1121 ) ) );
            }
        }
    }
    const char*  temp880 = ( (  from_dash_string31 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp880);
    abort ( );
    ( Unit_5_Unit );
    int32_t  temp881;
    return (  temp881 );
}

static  int32_t   lam882 (    int32_t  elem3113 ,    int32_t  b3115 ) {
    return (  op_dash_add262 ( (  op_dash_mul471 ( (  b3115 ) , (  from_dash_integral30 ( 8 ) ) ) ) , (  elem3113 ) ) );
}

static  int32_t   from_dash_octal869 (    struct Array_870  arr3111 ) {
    return ( (  reduce871 ) ( (  arr3111 ) ,  (  from_dash_integral30 ( 0 ) ) ,  (  lam882 ) ) );
}

static  struct Array_870   from_dash_listlike883 (    struct Array_870 *  self374 ) {
    return ( * (  self374 ) );
}

static  enum Unit_5   write_dash_to_dash_file828 (    struct Elf_216 *  elf3591 ,    const char*  filename3593 ) {
    ( (  finalize829 ) ( (  elf3591 ) ) );
    ( (  write_dash_bytes845 ) ( (  filename3593 ) ,  ( ( * (  elf3591 ) ) .f_bytes ) ) );
    struct Array_870  temp884 = ( (struct Array_870) { ._arr = { (  from_dash_integral30 ( 7 ) ) , (  from_dash_integral30 ( 5 ) ) , (  from_dash_integral30 ( 5 ) ) } } );
    ( ( chmod ) ( (  filename3593 ) ,  ( (  i32_dash_u32868 ) ( ( (  from_dash_octal869 ) ( ( (  from_dash_listlike883 ) ( ( &temp884 ) ) ) ) ) ) ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   free885 (    struct StrView_98  s2583 ,    enum CAllocator_7  al2585 ) {
    ( (  free267 ) ( (  al2585 ) ,  ( (struct Slice_8) { .f_ptr = ( ( (  s2583 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_5_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2439 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2440 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2441 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .growth_dash_factor2440 =  growth_dash_factor2440 ,
        .starting_dash_size2439 =  starting_dash_size2439 ,
    };
    struct env2 envinst2 = {
        .growth_dash_factor2440 =  growth_dash_factor2440 ,
        .starting_dash_size2439 =  starting_dash_size2439 ,
    };
    struct env3 envinst3 = {
        .envinst1 = envinst1 ,
    };
    struct env9 envinst9 = {
        .envinst2 = envinst2 ,
    };
    struct env14 envinst14 = {
        .shrink_dash_factor2441 =  shrink_dash_factor2441 ,
    };
    struct env15 envinst15 = {
        .envinst14 = envinst14 ,
    };
    struct env17 envinst17 = {
        .envinst15 = envinst15 ,
    };
    struct env19 envinst19 = {
        .envinst3 = envinst3 ,
    };
    struct env21 envinst21 = {
        .envinst3 = envinst3 ,
    };
    struct env22 envinst22 = {
        .envinst3 = envinst3 ,
    };
    struct env23 envinst23 = {
        .envinst3 = envinst3 ,
    };
    struct env24 envinst24 = {
        .envinst3 = envinst3 ,
    };
    struct env25 envinst25 = {
        .envinst3 = envinst3 ,
    };
    struct env26 envinst26 = {
        .envinst19 = envinst19 ,
        .envinst3 = envinst3 ,
    };
    ( ( setlocale ) ( ( (  lc_dash_ctype29 ) ( ) ) ,  ( (  from_dash_string31 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
    struct env32 envinst32 = {
        .envinst19 = envinst19 ,
    };
    struct env34 envinst34 = {
        .envinst21 = envinst21 ,
    };
    struct env37 envinst37 = {
        .envinst22 = envinst22 ,
    };
    struct env40 envinst40 = {
        .envinst23 = envinst23 ,
    };
    struct env43 envinst43 = {
        .envinst24 = envinst24 ,
    };
    struct env46 envinst46 = {
        .envinst25 = envinst25 ,
    };
    struct env49 envinst49 = {
        .envinst34 = envinst34 ,
    };
    struct env52 envinst52 = {
        .envinst37 = envinst37 ,
    };
    struct env54 envinst54 = {
        .envinst40 = envinst40 ,
    };
    struct env56 envinst56 = {
        .envinst43 = envinst43 ,
    };
    struct env58 envinst58 = {
        .envinst46 = envinst46 ,
    };
    struct env60 envinst60 = {
        .envinst56 = envinst56 ,
    };
    struct env62 envinst62 = {
        .envinst54 = envinst54 ,
    };
    struct env64 envinst64 = {
        .envinst49 = envinst49 ,
        .envinst52 = envinst52 ,
        .envinst54 = envinst54 ,
    };
    struct env68 envinst68 = {
        .envinst49 = envinst49 ,
        .envinst52 = envinst52 ,
    };
    struct env71 envinst71 = {
        .envinst54 = envinst54 ,
    };
    struct env73 envinst73 = {
        .envinst56 = envinst56 ,
        .envinst52 = envinst52 ,
    };
    struct env76 envinst76 = {
        .envinst56 = envinst56 ,
        .envinst52 = envinst52 ,
    };
    struct env79 envinst79 = {
        .envinst56 = envinst56 ,
        .envinst52 = envinst52 ,
    };
    struct env82 envinst82 = {
        .envinst56 = envinst56 ,
        .envinst52 = envinst52 ,
        .envinst54 = envinst54 ,
    };
    struct env86 envinst86 = {
        .envinst54 = envinst54 ,
    };
    struct env88 envinst88 = {
        .envinst32 = envinst32 ,
    };
    enum CAllocator_7  al3543 = ( (  idc90 ) ( ) );
    struct Slice_91  args3546 = ( (  get92 ) ( ) );
    struct StrView_98  filename3547 = ( (  from_dash_const_dash_str99 ) ( (  elem_dash_get128 ( (  args3546 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
    struct StrView_98  file3548 = ( (  read_dash_contents176 ) ( ( (  as_dash_const_dash_str214 ) ( (  filename3547 ) ) ) ,  (  al3543 ) ) );
    struct envunion219  temp218 = ( (struct envunion219){ .fun = (  struct Elf_216  (*) (  struct env88*  ,    enum CAllocator_7  ) )mk220 , .env =  envinst88 } );
    struct Elf_216  temp217 = ( temp218.fun ( &temp218.env ,  (  al3543 ) ) );
    struct Elf_216 *  elf3600 = ( &temp217 );
    struct ByteBuf_51 *  bb3601 = ( (  bytebuf361 ) ( (  elf3600 ) ) );
    struct env362 envinst362 = {
        .bb3601 =  bb3601 ,
    };
    int32_t  cell_dash_size3608 = (  from_dash_integral30 ( 4 ) );
    uint32_t  cells3609 = (  from_dash_integral161 ( 100 ) );
    struct envunion364  temp363 = ( (struct envunion364){ .fun = (  enum Unit_5  (*) (  struct env68*  ,    struct ByteBuf_51 *  ,    struct RegImm_365  ) )push367 , .env =  envinst68 } );
    ( temp363.fun ( &temp363.env ,  (  bb3601 ) ,  ( (  dword450 ) ( (  from_dash_integral161 ( 0 ) ) ) ) ) );
    struct envunion473  temp472 = ( (struct envunion473){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )mov474 , .env =  envinst64 } );
    ( temp472.fun ( &temp472.env ,  (  bb3601 ) ,  ( Reg_366_RBP ) ,  ( (  reg500 ) ( ( Reg_366_RSP ) ) ) ) );
    struct envunion502  temp501 = ( (struct envunion502){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )mov474 , .env =  envinst64 } );
    ( temp501.fun ( &temp501.env ,  (  bb3601 ) ,  ( Reg_366_RAX ) ,  ( (  dword450 ) ( (  op_dash_div454 ( (  op_dash_sub503 ( (  cells3609 ) , (  from_dash_integral161 ( 1 ) ) ) ) , (  from_dash_integral161 ( 2 ) ) ) ) ) ) ) );
    struct envunion505  temp504 = ( (struct envunion505){ .fun = (  size_t  (*) (  struct env362*  ) )here506 , .env =  envinst362 } );
    size_t  clear_dash_loop_dash_off3610 = ( temp504.fun ( &temp504.env ) );
    struct envunion510  temp509 = ( (struct envunion510){ .fun = (  enum Unit_5  (*) (  struct env86*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ) )dec511 , .env =  envinst86 } );
    ( temp509.fun ( &temp509.env ,  (  bb3601 ) ,  ( Reg_366_RAX ) ) );
    struct envunion518  temp517 = ( (struct envunion518){ .fun = (  enum Unit_5  (*) (  struct env68*  ,    struct ByteBuf_51 *  ,    struct RegImm_365  ) )push367 , .env =  envinst68 } );
    ( temp517.fun ( &temp517.env ,  (  bb3601 ) ,  ( (  dword450 ) ( (  from_dash_integral161 ( 0 ) ) ) ) ) );
    struct envunion520  temp519 = ( (struct envunion520){ .fun = (  enum Unit_5  (*) (  struct env71*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )test521 , .env =  envinst71 } );
    ( temp519.fun ( &temp519.env ,  (  bb3601 ) ,  ( Reg_366_RAX ) ,  ( (  reg500 ) ( ( Reg_366_RAX ) ) ) ) );
    struct envunion525  temp524 = ( (struct envunion525){ .fun = (  size_t  (*) (  struct env73*  ,    struct ByteBuf_51 *  ,    struct RegImm_365  ) )jne526 , .env =  envinst73 } );
    struct envunion551  temp550 = ( (struct envunion551){ .fun = (  size_t  (*) (  struct env362*  ) )here506 , .env =  envinst362 } );
    ( temp524.fun ( &temp524.env ,  (  bb3601 ) ,  ( (  dword450 ) ( ( (  jump_dash_offset549 ) ( ( temp550.fun ( &temp550.env ) ) ,  (  clear_dash_loop_dash_off3610 ) ) ) ) ) ) );
    int32_t  off3611 = (  from_dash_integral30 ( 0 ) );
    struct List_11  temp552 = ( ( (  mk553 ) ( (  al3543 ) ) ) );
    struct List_11 *  jumps3613 = ( &temp552 );
    struct StrViewIter_309  temp560 =  into_dash_iter561 ( ( (  chars419 ) ( (  file3548 ) ) ) );
    while (true) {
        struct Maybe_106  __cond562 =  next313 (&temp560);
        if (  __cond562 .tag == 0 ) {
            break;
        }
        struct Char_104  c3615 =  __cond562 .stuff .Maybe_106_Just_s .field0;
        struct Char_104  dref3616 = (  c3615 );
        if (  eq563 (  dref3616 ,  from_dash_string569 ( (uint8_t*)">" , 1 ) ) ) {
            struct envunion571  temp570 = ( (struct envunion571){ .fun = (  enum Unit_5  (*) (  struct env82*  ,    struct ByteBuf_51 *  ,    struct RegImmOff_572  ) )inc573 , .env =  envinst82 } );
            ( temp570.fun ( &temp570.env ,  (  bb3601 ) ,  ( ( RegImmOff_572_RegImm ) ( ( (  reg500 ) ( ( Reg_366_RBX ) ) ) ) ) ) );
        }
        else {
            if (  eq563 (  dref3616 ,  from_dash_string569 ( (uint8_t*)"<" , 1 ) ) ) {
                struct envunion580  temp579 = ( (struct envunion580){ .fun = (  enum Unit_5  (*) (  struct env86*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ) )dec511 , .env =  envinst86 } );
                ( temp579.fun ( &temp579.env ,  (  bb3601 ) ,  ( Reg_366_RBX ) ) );
            }
            else {
                if (  eq563 (  dref3616 ,  from_dash_string569 ( (uint8_t*)"+" , 1 ) ) ) {
                    struct envunion582  temp581 = ( (struct envunion582){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array480 , .env =  envinst54 } );
                    struct Array_42  temp583 = ( (struct Array_42) { ._arr = { (  from_dash_integral118 ( 255 ) ) , (  from_dash_integral118 ( 4 ) ) , (  from_dash_integral118 ( 156 ) ) } } );
                    ( temp581.fun ( &temp581.env ,  (  bb3601 ) ,  ( (  from_dash_listlike498 ) ( ( &temp583 ) ) ) ) );
                }
                else {
                    if (  eq563 (  dref3616 ,  from_dash_string569 ( (uint8_t*)"-" , 1 ) ) ) {
                        struct envunion585  temp584 = ( (struct envunion585){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array480 , .env =  envinst54 } );
                        struct Array_42  temp586 = ( (struct Array_42) { ._arr = { (  from_dash_integral118 ( 255 ) ) , (  from_dash_integral118 ( 12 ) ) , (  from_dash_integral118 ( 156 ) ) } } );
                        ( temp584.fun ( &temp584.env ,  (  bb3601 ) ,  ( (  from_dash_listlike498 ) ( ( &temp586 ) ) ) ) );
                    }
                    else {
                        if (  eq563 (  dref3616 ,  from_dash_string569 ( (uint8_t*)"." , 1 ) ) ) {
                            struct envunion588  temp587 = ( (struct envunion588){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )mov474 , .env =  envinst64 } );
                            ( temp587.fun ( &temp587.env ,  (  bb3601 ) ,  ( Reg_366_RAX ) ,  ( (  dword450 ) ( (  from_dash_integral161 ( 1 ) ) ) ) ) );
                            struct envunion590  temp589 = ( (struct envunion590){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )mov474 , .env =  envinst64 } );
                            ( temp589.fun ( &temp589.env ,  (  bb3601 ) ,  ( Reg_366_RDI ) ,  ( (  dword450 ) ( (  from_dash_integral161 ( 1 ) ) ) ) ) );
                            struct envunion592  temp591 = ( (struct envunion592){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array430 , .env =  envinst52 } );
                            struct Array_39  temp593 = ( (struct Array_39) { ._arr = { (  from_dash_integral118 ( 72 ) ) , (  from_dash_integral118 ( 141 ) ) , (  from_dash_integral118 ( 52 ) ) , (  from_dash_integral118 ( 156 ) ) } } );
                            ( temp591.fun ( &temp591.env ,  (  bb3601 ) ,  ( (  from_dash_listlike165 ) ( ( &temp593 ) ) ) ) );
                            struct envunion595  temp594 = ( (struct envunion595){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )mov474 , .env =  envinst64 } );
                            ( temp594.fun ( &temp594.env ,  (  bb3601 ) ,  ( Reg_366_RDX ) ,  ( (  dword450 ) ( (  from_dash_integral161 ( 1 ) ) ) ) ) );
                            struct envunion597  temp596 = ( (struct envunion597){ .fun = (  enum Unit_5  (*) (  struct env60*  ,    struct ByteBuf_51 *  ) )syscall598 , .env =  envinst60 } );
                            ( temp596.fun ( &temp596.env ,  (  bb3601 ) ) );
                        }
                        else {
                            if (  eq563 (  dref3616 ,  from_dash_string569 ( (uint8_t*)"," , 1 ) ) ) {
                                struct envunion602  temp601 = ( (struct envunion602){ .fun = (  enum Unit_5  (*) (  struct env58*  ,    struct ByteBuf_51 *  ,    struct Array_48  ) )write_dash_array603 , .env =  envinst58 } );
                                struct Array_48  temp622 = ( (struct Array_48) { ._arr = { (  from_dash_integral118 ( 199 ) ) , (  from_dash_integral118 ( 4 ) ) , (  from_dash_integral118 ( 156 ) ) , (  from_dash_integral118 ( 0 ) ) , (  from_dash_integral118 ( 0 ) ) , (  from_dash_integral118 ( 0 ) ) , (  from_dash_integral118 ( 0 ) ) } } );
                                ( temp601.fun ( &temp601.env ,  (  bb3601 ) ,  ( (  from_dash_listlike621 ) ( ( &temp622 ) ) ) ) );
                                struct envunion624  temp623 = ( (struct envunion624){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )mov474 , .env =  envinst64 } );
                                ( temp623.fun ( &temp623.env ,  (  bb3601 ) ,  ( Reg_366_RAX ) ,  ( (  dword450 ) ( (  from_dash_integral161 ( 0 ) ) ) ) ) );
                                struct envunion626  temp625 = ( (struct envunion626){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )mov474 , .env =  envinst64 } );
                                ( temp625.fun ( &temp625.env ,  (  bb3601 ) ,  ( Reg_366_RDI ) ,  ( (  dword450 ) ( (  from_dash_integral161 ( 0 ) ) ) ) ) );
                                struct envunion628  temp627 = ( (struct envunion628){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array430 , .env =  envinst52 } );
                                struct Array_39  temp629 = ( (struct Array_39) { ._arr = { (  from_dash_integral118 ( 72 ) ) , (  from_dash_integral118 ( 141 ) ) , (  from_dash_integral118 ( 52 ) ) , (  from_dash_integral118 ( 156 ) ) } } );
                                ( temp627.fun ( &temp627.env ,  (  bb3601 ) ,  ( (  from_dash_listlike165 ) ( ( &temp629 ) ) ) ) );
                                struct envunion631  temp630 = ( (struct envunion631){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )mov474 , .env =  envinst64 } );
                                ( temp630.fun ( &temp630.env ,  (  bb3601 ) ,  ( Reg_366_RDX ) ,  ( (  dword450 ) ( (  from_dash_integral161 ( 1 ) ) ) ) ) );
                                struct envunion633  temp632 = ( (struct envunion633){ .fun = (  enum Unit_5  (*) (  struct env60*  ,    struct ByteBuf_51 *  ) )syscall598 , .env =  envinst60 } );
                                ( temp632.fun ( &temp632.env ,  (  bb3601 ) ) );
                                struct envunion635  temp634 = ( (struct envunion635){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array430 , .env =  envinst52 } );
                                struct Array_39  temp636 = ( (struct Array_39) { ._arr = { (  from_dash_integral118 ( 72 ) ) , (  from_dash_integral118 ( 131 ) ) , (  from_dash_integral118 ( 248 ) ) , (  from_dash_integral118 ( 0 ) ) } } );
                                ( temp634.fun ( &temp634.env ,  (  bb3601 ) ,  ( (  from_dash_listlike165 ) ( ( &temp636 ) ) ) ) );
                                struct envunion638  temp637 = ( (struct envunion638){ .fun = (  size_t  (*) (  struct env362*  ) )here506 , .env =  envinst362 } );
                                size_t  from3617 = ( temp637.fun ( &temp637.env ) );
                                struct envunion640  temp639 = ( (struct envunion640){ .fun = (  size_t  (*) (  struct env79*  ,    struct ByteBuf_51 *  ,    struct RegImm_365  ) )jg641 , .env =  envinst79 } );
                                size_t  patch3618 = ( temp639.fun ( &temp639.env ,  (  bb3601 ) ,  ( (  dword450 ) ( (  from_dash_integral161 ( 4210752250 ) ) ) ) ) );
                                struct envunion646  temp645 = ( (struct envunion646){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )mov474 , .env =  envinst64 } );
                                ( temp645.fun ( &temp645.env ,  (  bb3601 ) ,  ( Reg_366_RAX ) ,  ( (  dword450 ) ( (  from_dash_integral161 ( 60 ) ) ) ) ) );
                                struct envunion648  temp647 = ( (struct envunion648){ .fun = (  enum Unit_5  (*) (  struct env62*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )xor649 , .env =  envinst62 } );
                                ( temp647.fun ( &temp647.env ,  (  bb3601 ) ,  ( Reg_366_RDI ) ,  ( (  reg500 ) ( ( Reg_366_RDI ) ) ) ) );
                                struct envunion653  temp652 = ( (struct envunion653){ .fun = (  enum Unit_5  (*) (  struct env60*  ,    struct ByteBuf_51 *  ) )syscall598 , .env =  envinst60 } );
                                ( temp652.fun ( &temp652.env ,  (  bb3601 ) ) );
                                struct envunion676  temp675 = ( (struct envunion676){ .fun = (  size_t  (*) (  struct env362*  ) )here506 , .env =  envinst362 } );
                                ( (  patch654 ) ( (  bb3601 ) ,  (  patch3618 ) ,  ( (  jump_dash_offset549 ) ( (  from3617 ) ,  ( temp675.fun ( &temp675.env ) ) ) ) ) );
                            }
                            else {
                                if (  eq563 (  dref3616 ,  from_dash_string569 ( (uint8_t*)"[" , 1 ) ) ) {
                                    struct envunion678  temp677 = ( (struct envunion678){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array480 , .env =  envinst54 } );
                                    struct Array_42  temp679 = ( (struct Array_42) { ._arr = { (  from_dash_integral118 ( 139 ) ) , (  from_dash_integral118 ( 4 ) ) , (  from_dash_integral118 ( 156 ) ) } } );
                                    ( temp677.fun ( &temp677.env ,  (  bb3601 ) ,  ( (  from_dash_listlike498 ) ( ( &temp679 ) ) ) ) );
                                    struct envunion681  temp680 = ( (struct envunion681){ .fun = (  enum Unit_5  (*) (  struct env71*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )test521 , .env =  envinst71 } );
                                    ( temp680.fun ( &temp680.env ,  (  bb3601 ) ,  ( Reg_366_RAX ) ,  ( (  reg500 ) ( ( Reg_366_RAX ) ) ) ) );
                                    struct envunion683  temp682 = ( (struct envunion683){ .fun = (  size_t  (*) (  struct env362*  ) )here506 , .env =  envinst362 } );
                                    size_t  jump_dash_from3619 = ( temp682.fun ( &temp682.env ) );
                                    struct envunion685  temp684 = ( (struct envunion685){ .fun = (  size_t  (*) (  struct env76*  ,    struct ByteBuf_51 *  ,    struct RegImm_365  ) )je686 , .env =  envinst76 } );
                                    size_t  jmp_dash_off3620 = ( temp684.fun ( &temp684.env ,  (  bb3601 ) ,  ( (  dword450 ) ( (  from_dash_integral161 ( 4210752250 ) ) ) ) ) );
                                    struct envunion691  temp690 = ( (struct envunion691){ .fun = (  size_t  (*) (  struct env362*  ) )here506 , .env =  envinst362 } );
                                    size_t  loop_dash_to_dash_here3621 = ( temp690.fun ( &temp690.env ) );
                                    struct envunion693  temp692 = ( (struct envunion693){ .fun = (  enum Unit_5  (*) (  struct env9*  ,    struct List_11 *  ,    struct Jump_13  ) )add694 , .env =  envinst9 } );
                                    ( temp692.fun ( &temp692.env ,  (  jumps3613 ) ,  ( (struct Jump_13) { .f_jump_dash_addr = (  loop_dash_to_dash_here3621 ) , .f_patch_dash_addr = (  jmp_dash_off3620 ) , .f_jump_dash_from = (  jump_dash_from3619 ) } ) ) );
                                }
                                else {
                                    if (  eq563 (  dref3616 ,  from_dash_string569 ( (uint8_t*)"]" , 1 ) ) ) {
                                        struct envunion725  temp724 = ( (struct envunion725){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array480 , .env =  envinst54 } );
                                        struct Array_42  temp726 = ( (struct Array_42) { ._arr = { (  from_dash_integral118 ( 139 ) ) , (  from_dash_integral118 ( 4 ) ) , (  from_dash_integral118 ( 156 ) ) } } );
                                        ( temp724.fun ( &temp724.env ,  (  bb3601 ) ,  ( (  from_dash_listlike498 ) ( ( &temp726 ) ) ) ) );
                                        struct envunion728  temp727 = ( (struct envunion728){ .fun = (  enum Unit_5  (*) (  struct env71*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )test521 , .env =  envinst71 } );
                                        ( temp727.fun ( &temp727.env ,  (  bb3601 ) ,  ( Reg_366_RAX ) ,  ( (  reg500 ) ( ( Reg_366_RAX ) ) ) ) );
                                        struct envunion736  temp735 = ( (struct envunion736){ .fun = (  struct Maybe_717  (*) (  struct env17*  ,    struct List_11 *  ) )pop737 , .env =  envinst17 } );
                                        struct Jump_13  jmp_dash_addrs3622 = ( (  or_dash_fail729 ) ( ( temp735.fun ( &temp735.env ,  (  jumps3613 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)"no matching \"[\"" ) ,  ( 15 ) ) ) ) );
                                        struct envunion784  temp783 = ( (struct envunion784){ .fun = (  size_t  (*) (  struct env73*  ,    struct ByteBuf_51 *  ,    struct RegImm_365  ) )jne526 , .env =  envinst73 } );
                                        struct envunion786  temp785 = ( (struct envunion786){ .fun = (  size_t  (*) (  struct env362*  ) )here506 , .env =  envinst362 } );
                                        ( temp783.fun ( &temp783.env ,  (  bb3601 ) ,  ( (  dword450 ) ( ( (  jump_dash_offset549 ) ( ( temp785.fun ( &temp785.env ) ) ,  ( (  jmp_dash_addrs3622 ) .f_jump_dash_addr ) ) ) ) ) ) );
                                        struct envunion788  temp787 = ( (struct envunion788){ .fun = (  size_t  (*) (  struct env362*  ) )here506 , .env =  envinst362 } );
                                        ( (  patch654 ) ( (  bb3601 ) ,  ( (  jmp_dash_addrs3622 ) .f_patch_dash_addr ) ,  ( (  jump_dash_offset549 ) ( ( (  jmp_dash_addrs3622 ) .f_jump_dash_from ) ,  ( temp787.fun ( &temp787.env ) ) ) ) ) );
                                    }
                                    else {
                                        if ( true ) {
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    ( (  assert789 ) ( ( (  null790 ) ( (  jumps3613 ) ) ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)"mismatched brackets. (more \"[\")" ) ,  ( 31 ) ) ) ) );
    struct envunion795  temp794 = ( (struct envunion795){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )mov474 , .env =  envinst64 } );
    ( temp794.fun ( &temp794.env ,  (  bb3601 ) ,  ( Reg_366_RAX ) ,  ( (  dword450 ) ( (  from_dash_integral161 ( 60 ) ) ) ) ) );
    struct envunion797  temp796 = ( (struct envunion797){ .fun = (  enum Unit_5  (*) (  struct env62*  ,    struct ByteBuf_51 *  ,    enum Reg_366  ,    struct RegImm_365  ) )xor649 , .env =  envinst62 } );
    ( temp796.fun ( &temp796.env ,  (  bb3601 ) ,  ( Reg_366_RDI ) ,  ( (  reg500 ) ( ( Reg_366_RDI ) ) ) ) );
    struct envunion799  temp798 = ( (struct envunion799){ .fun = (  enum Unit_5  (*) (  struct env60*  ,    struct ByteBuf_51 *  ) )syscall598 , .env =  envinst60 } );
    ( temp798.fun ( &temp798.env ,  (  bb3601 ) ) );
    struct envunion817  temp816 = ( (struct envunion817){ .fun = (  struct StrView_98  (*) (  struct env26*  ,    struct StrConcat_401  ,    enum CAllocator_7  ) )from_dash_str818 , .env =  envinst26 } );
    struct StrView_98  nu_dash_filename3623 = ( ( (  ends_dash_with800 ) ( (  filename3547 ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)".bf" ) ,  ( 3 ) ) ) ) ) ? ( (  clone_dash_0806 ) ( ( (  byte_dash_substr814 ) ( (  filename3547 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub97 ( ( (  num_dash_bytes815 ) ( (  filename3547 ) ) ) , (  from_dash_integral0 ( 3 ) ) ) ) ) ) ,  (  al3543 ) ) ) : ( temp816.fun ( &temp816.env ,  ( ( StrConcat_401_StrConcat ) ( (  filename3547 ) ,  ( (  from_dash_string170 ) ( ( (uint8_t*)".exe" ) ,  ( 4 ) ) ) ) ) ,  (  al3543 ) ) ) );
    ( (  write_dash_to_dash_file828 ) ( (  elf3600 ) ,  ( (  as_dash_const_dash_str214 ) ( (  nu_dash_filename3623 ) ) ) ) );
    ( (  free885 ) ( (  nu_dash_filename3623 ) ,  (  al3543 ) ) );
    ( (  free885 ) ( (  file3548 ) ,  (  al3543 ) ) );
}
