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
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2447;
    ;
    ;
    size_t  starting_dash_size2446;
    ;
};

struct env2 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor2447;
    ;
    ;
    size_t  starting_dash_size2446;
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
    struct env1 envinst1;
    ;
    ;
    ;
    ;
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
    struct env2 envinst2;
    ;
    ;
    ;
    ;
};

struct env14 {
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
    size_t  shrink_dash_factor2448;
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
    struct env14 envinst14;
    ;
    ;
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
    ;
    ;
    struct env15 envinst15;
    ;
};

struct envunion20 {
    enum Unit_5  (*fun) (  struct env3*  ,    struct List_6 *  ,    uint8_t  );
    struct env3 env;
};

struct env19 {
    ;
    ;
    struct env3 envinst3;
    ;
    ;
    ;
};

struct env21 {
    ;
    ;
    struct env3 envinst3;
    ;
    ;
    ;
};

struct env22 {
    ;
    ;
    struct env3 envinst3;
    ;
    ;
    ;
};

struct env23 {
    ;
    ;
    struct env3 envinst3;
    ;
    ;
    ;
};

struct env24 {
    ;
    ;
    struct env3 envinst3;
    ;
    ;
    ;
};

struct env25 {
    ;
    ;
    struct env3 envinst3;
    ;
    ;
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
    struct env19 envinst19;
    ;
    struct env3 envinst3;
    ;
    ;
    ;
    ;
    ;
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
    struct env19 envinst19;
    ;
    ;
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
    struct env21 envinst21;
    ;
    ;
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
    struct env22 envinst22;
    ;
    ;
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
    struct env23 envinst23;
    ;
    ;
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
    struct env24 envinst24;
    ;
    ;
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
    struct env25 envinst25;
    ;
    ;
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
    struct env34 envinst34;
    ;
    ;
};

struct envunion53 {
    enum Unit_5  (*fun) (  struct env37*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env37 env;
};

struct env52 {
    struct env37 envinst37;
    ;
    ;
};

struct envunion55 {
    enum Unit_5  (*fun) (  struct env40*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env40 env;
};

struct env54 {
    struct env40 envinst40;
    ;
    ;
};

struct envunion57 {
    enum Unit_5  (*fun) (  struct env43*  ,    struct ByteBuf_51 *  ,    struct Array_45  );
    struct env43 env;
};

struct env56 {
    struct env43 envinst43;
    ;
    ;
};

struct envunion59 {
    enum Unit_5  (*fun) (  struct env46*  ,    struct ByteBuf_51 *  ,    struct Array_48  );
    struct env46 env;
};

struct env58 {
    struct env46 envinst46;
    ;
    ;
};

struct envunion61 {
    enum Unit_5  (*fun) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  );
    struct env56 env;
};

struct env60 {
    ;
    ;
    ;
    struct env56 envinst56;
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
    ;
    struct env54 envinst54;
};

struct envunion65 {
    enum Unit_5  (*fun) (  struct env49*  ,    struct ByteBuf_51 *  ,    struct Array_36  );
    struct env49 env;
};

struct envunion66 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct envunion67 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct env64 {
    ;
    ;
    ;
    struct env49 envinst49;
    struct env54 envinst54;
    struct env52 envinst52;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct envunion69 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct envunion70 {
    enum Unit_5  (*fun) (  struct env49*  ,    struct ByteBuf_51 *  ,    struct Array_36  );
    struct env49 env;
};

struct env68 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env52 envinst52;
    struct env49 envinst49;
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
    ;
    struct env54 envinst54;
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
    ;
    struct env56 envinst56;
    struct env52 envinst52;
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
    ;
    struct env56 envinst56;
    struct env52 envinst52;
};

struct envunion80 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct envunion81 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct envunion82 {
    enum Unit_5  (*fun) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  );
    struct env56 env;
};

struct env79 {
    struct env52 envinst52;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env54 envinst54;
    struct env56 envinst56;
};

struct envunion84 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct env83 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env54 envinst54;
};

struct envunion86 {
    enum Unit_5  (*fun) (  struct env32*  ,    struct ByteBuf_51 *  ,    struct Slice_8  );
    struct env32 env;
};

struct env85 {
    struct env32 envinst32;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  enum CAllocator_7   idc87 (  ) {
    return ( CAllocator_7_CAllocator );
}

struct Slice_88 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  int64_t   op_dash_mul91 (    int64_t  l218 ,    int64_t  r220 ) {
    return ( (  l218 ) * (  r220 ) );
}

static  const char* *   offset_dash_ptr90 (    const char* *  x382 ,    int64_t  count384 ) {
    const char*  temp92;
    return ( (const char* * ) ( ( (void*) (  x382 ) ) + (  op_dash_mul91 ( (  count384 ) , ( (int64_t ) ( sizeof( ( (  temp92 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral93 (    size_t  x47 ) {
    return ( (int64_t ) (  x47 ) );
}

static  size_t   op_dash_sub94 (    size_t  l299 ,    size_t  r301 ) {
    return ( (  l299 ) - (  r301 ) );
}

static  struct Slice_88   get89 (  ) {
    return ( (struct Slice_88) { .f_ptr = ( (  offset_dash_ptr90 ) ( ( _global_argv ) ,  (  from_dash_integral93 ( 1 ) ) ) ) , .f_count = (  op_dash_sub94 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct StrView_95 {
    struct Slice_8  f_contents;
};

struct ConstStrIter_99 {
    const char*  f_ogstr;
    size_t  f_i;
};

struct Char_101 {
    uint8_t *  f_ptr;
    size_t  f_num_dash_bytes;
};

static  struct ConstStrIter_99   into_dash_iter102 (    struct ConstStrIter_99  self1663 ) {
    return (  self1663 );
}

struct Maybe_103 {
    enum {
        Maybe_103_None_t,
        Maybe_103_Just_t,
    } tag;
    union {
        struct {
            struct Char_101  field0;
        } Maybe_103_Just_s;
    } stuff;
};

static struct Maybe_103 Maybe_103_Just (  struct Char_101  field0 ) {
    return ( struct Maybe_103 ) { .tag = Maybe_103_Just_t, .stuff = { .Maybe_103_Just_s = { .field0 = field0 } } };
};

static  uint8_t *   cast105 (    const char*  x400 ) {
    return ( (uint8_t * ) (  x400 ) );
}

static  uint8_t *   offset_dash_ptr106 (    uint8_t *  x382 ,    int64_t  count384 ) {
    uint8_t  temp107;
    return ( (uint8_t * ) ( ( (void*) (  x382 ) ) + (  op_dash_mul91 ( (  count384 ) , ( (int64_t ) ( sizeof( ( (  temp107 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i64108 (    size_t  x670 ) {
    return ( (int64_t ) (  x670 ) );
}

static  bool   eq109 (    uint8_t  l130 ,    uint8_t  r132 ) {
    return ( (  l130 ) == (  r132 ) );
}

static  uint8_t   cast110 (    int32_t  x400 ) {
    return ( (uint8_t ) (  x400 ) );
}

enum Ordering_114 {
    Ordering_114_LT,
    Ordering_114_EQ,
    Ordering_114_GT,
};

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_114   cmp113 (    uint8_t  l183 ,    uint8_t  r185 ) {
    return ( builtin_uint8_tcmp( (  l183 ) , (  r185 ) ) );
}

static  uint8_t   from_dash_integral115 (    size_t  x62 ) {
    return ( (uint8_t ) (  x62 ) );
}

static  size_t   next_dash_char112 (    uint8_t *  p1261 ) {
    uint8_t  pb1262 = ( * (  p1261 ) );
    if ( (  cmp113 ( (  pb1262 ) , (  from_dash_integral115 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp113 ( (  pb1262 ) , (  from_dash_integral115 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp113 ( (  pb1262 ) , (  from_dash_integral115 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp113 ( (  pb1262 ) , (  from_dash_integral115 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp116 = ( (  from_dash_string31 ) ( ( (uint8_t*)"(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp116);
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

static  enum Ordering_114   cmp117 (    size_t  l198 ,    size_t  r200 ) {
    return ( builtin_size_tcmp( (  l198 ) , (  r200 ) ) );
}

static  struct Char_101   scan_dash_from_dash_mem111 (    uint8_t *  p1265 ) {
    size_t  clen1266 = ( (  next_dash_char112 ) ( (  p1265 ) ) );
    if ( (  cmp117 ( (  clen1266 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp118 = ( (  from_dash_string31 ) ( ( (uint8_t*)"UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp118);
        abort ( );
        ( Unit_5_Unit );
    }
    return ( (struct Char_101) { .f_ptr = (  p1265 ) , .f_num_dash_bytes = (  clen1266 ) } );
}

static  size_t   op_dash_add119 (    size_t  l294 ,    size_t  r296 ) {
    return ( (  l294 ) + (  r296 ) );
}

static  struct Maybe_103   next104 (    struct ConstStrIter_99 *  self1666 ) {
    uint8_t *  char_dash_ptr1667 = ( ( (  cast105 ) ( ( ( * (  self1666 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1668 = ( (  offset_dash_ptr106 ) ( (  char_dash_ptr1667 ) ,  ( (  size_dash_i64108 ) ( ( ( * (  self1666 ) ) .f_i ) ) ) ) );
    if ( (  eq109 ( ( * (  optr1668 ) ) , ( (  cast110 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_103) { .tag = Maybe_103_None_t } );
    }
    struct Char_101  char1669 = ( (  scan_dash_from_dash_mem111 ) ( (  optr1668 ) ) );
    (*  self1666 ) .f_i = (  op_dash_add119 ( ( ( * (  self1666 ) ) .f_i ) , ( (  char1669 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_103_Just ) ( (  char1669 ) ) );
}

static  size_t   reduce100 (    struct ConstStrIter_99  iterable1116 ,    size_t  base1118 ,    size_t (*  fun1120 )(    struct Char_101  ,    size_t  ) ) {
    size_t  x1121 = (  base1118 );
    struct ConstStrIter_99  it1122 = ( (  into_dash_iter102 ) ( (  iterable1116 ) ) );
    while ( ( true ) ) {
        struct Maybe_103  dref1123 = ( (  next104 ) ( ( & (  it1122 ) ) ) );
        if ( dref1123.tag == Maybe_103_None_t ) {
            return (  x1121 );
        }
        else {
            if ( dref1123.tag == Maybe_103_Just_t ) {
                x1121 = ( (  fun1120 ) ( ( dref1123 .stuff .Maybe_103_Just_s .field0 ) ,  (  x1121 ) ) );
            }
        }
    }
    const char*  temp120 = ( (  from_dash_string31 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp120);
    abort ( );
    ( Unit_5_Unit );
    size_t  temp121;
    return (  temp121 );
}

static  size_t   lam122 (    struct Char_101  dref1128 ,    size_t  x1130 ) {
    return (  op_dash_add119 ( (  x1130 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count98 (    struct ConstStrIter_99  it1127 ) {
    return ( (  reduce100 ) ( (  it1127 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam122 ) ) );
}

static  struct ConstStrIter_99   into_dash_iter124 (    const char*  self1660 ) {
    return ( (struct ConstStrIter_99) { .f_ogstr = (  self1660 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_99   chars123 (    const char*  self1675 ) {
    return ( (  into_dash_iter124 ) ( (  self1675 ) ) );
}

static  size_t   const_dash_str_dash_len97 (    const char*  s1924 ) {
    return ( (  count98 ) ( ( (  chars123 ) ( (  s1924 ) ) ) ) );
}

static  struct StrView_95   from_dash_const_dash_str96 (    const char*  s2556 ) {
    size_t  len2557 = ( (  const_dash_str_dash_len97 ) ( (  s2556 ) ) );
    return ( (struct StrView_95) { .f_contents = ( (struct Slice_8) { .f_ptr = ( (  cast105 ) ( (  s2556 ) ) ) , .f_count = (  len2557 ) } ) } );
}

struct Maybe_128 {
    enum {
        Maybe_128_None_t,
        Maybe_128_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_128_Just_s;
    } stuff;
};

static struct Maybe_128 Maybe_128_Just (  const char*  field0 ) {
    return ( struct Maybe_128 ) { .tag = Maybe_128_Just_t, .stuff = { .Maybe_128_Just_s = { .field0 = field0 } } };
};

struct StrConcat_132 {
    struct StrView_95  field0;
    size_t  field1;
};

static struct StrConcat_132 StrConcat_132_StrConcat (  struct StrView_95  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_132 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_131 {
    struct StrConcat_132  field0;
    struct StrView_95  field1;
};

static struct StrConcat_131 StrConcat_131_StrConcat (  struct StrConcat_132  field0 ,  struct StrView_95  field1 ) {
    return ( struct StrConcat_131 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_130 {
    struct StrConcat_131  field0;
    size_t  field1;
};

static struct StrConcat_130 StrConcat_130_StrConcat (  struct StrConcat_131  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_130 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_129 {
    struct StrConcat_130  field0;
    struct Char_101  field1;
};

static struct StrConcat_129 StrConcat_129_StrConcat (  struct StrConcat_130  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_129 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_136 {
    struct StrView_95  field0;
    struct StrConcat_129  field1;
};

static struct StrConcat_136 StrConcat_136_StrConcat (  struct StrView_95  field0 ,  struct StrConcat_129  field1 ) {
    return ( struct StrConcat_136 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_135 {
    struct StrConcat_136  field0;
    struct Char_101  field1;
};

static struct StrConcat_135 StrConcat_135_StrConcat (  struct StrConcat_136  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_135 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i32139 (    size_t  x709 ) {
    return ( (int32_t ) (  x709 ) );
}

static  enum Unit_5   print_dash_str138 (    struct StrView_95  self1321 ) {
    ( ( printf ) ( ( (  from_dash_string31 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32139 ) ( ( ( (  self1321 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1321 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str144 (    size_t  self1421 ) {
    ( ( printf ) ( ( (  from_dash_string31 ) ( ( (uint8_t*)"%lu" ) ,  ( 3 ) ) ) ,  (  self1421 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str143 (    struct StrConcat_132  self1300 ) {
    struct StrConcat_132  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str138 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str144 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str142 (    struct StrConcat_131  self1300 ) {
    struct StrConcat_131  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str143 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str138 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str141 (    struct StrConcat_130  self1300 ) {
    struct StrConcat_130  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str142 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str144 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

struct Scalar_149 {
    uint32_t  f_value;
};

struct CharDestructured_148 {
    enum {
        CharDestructured_148_Ref_t,
        CharDestructured_148_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_101  field0;
        } CharDestructured_148_Ref_s;
        struct {
            struct Scalar_149  field0;
        } CharDestructured_148_Scalar_s;
    } stuff;
};

static struct CharDestructured_148 CharDestructured_148_Ref (  struct Char_101  field0 ) {
    return ( struct CharDestructured_148 ) { .tag = CharDestructured_148_Ref_t, .stuff = { .CharDestructured_148_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_148 CharDestructured_148_Scalar (  struct Scalar_149  field0 ) {
    return ( struct CharDestructured_148 ) { .tag = CharDestructured_148_Scalar_t, .stuff = { .CharDestructured_148_Scalar_s = { .field0 = field0 } } };
};

static  uint8_t   size_dash_u8152 (    size_t  x718 ) {
    return ( (uint8_t ) (  x718 ) );
}

static  size_t   op_dash_div153 (    size_t  l309 ,    size_t  r311 ) {
    return ( (  l309 ) / (  r311 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer151 (    uint8_t *  ptr781 ) {
    return ( (  size_dash_u8152 ) ( (  op_dash_div153 ( ( ( (size_t ) (  ptr781 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint32_t   size_dash_u32154 (    size_t  x712 ) {
    return ( (uint32_t ) (  x712 ) );
}

static  size_t   cast155 (    uint8_t *  x400 ) {
    return ( (size_t ) (  x400 ) );
}

static  struct CharDestructured_148   destructure150 (    struct Char_101  c1242 ) {
    if ( (  eq109 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer151 ) ( ( (  c1242 ) .f_ptr ) ) ) , (  from_dash_integral115 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_148_Scalar ) ( ( (struct Scalar_149) { .f_value = ( (  size_dash_u32154 ) ( ( ( (  cast155 ) ( ( (  c1242 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_148_Ref ) ( (  c1242 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_114   cmp157 (    uint32_t  l178 ,    uint32_t  r180 ) {
    return ( builtin_uint32_tcmp( (  l178 ) , (  r180 ) ) );
}

static  uint32_t   from_dash_integral158 (    size_t  x53 ) {
    return ( (uint32_t ) (  x53 ) );
}

static  uint8_t   cast161 (    uint32_t  x400 ) {
    return ( (uint8_t ) (  x400 ) );
}

static  uint8_t   u32_dash_u8160 (    uint32_t  x739 ) {
    return ( (  cast161 ) ( (  x739 ) ) );
}

static  struct Array_39   from_dash_listlike162 (    struct Array_39 *  self374 ) {
    return ( * (  self374 ) );
}

static  struct Array_39   unscalarize156 (    struct Scalar_149  scalar1245 ) {
    if ( (  cmp157 ( ( (  scalar1245 ) .f_value ) , (  from_dash_integral158 ( 128 ) ) ) == 2 ) ) {
        const char*  temp159 = ( (  from_dash_string31 ) ( ( (uint8_t*)"(unscalarize) non-ascii characters not supported for now" ) ,  ( 56 ) ) );
        printf("%s\n", temp159);
        abort ( );
        ( Unit_5_Unit );
    }
    uint8_t  b1246 = ( (  u32_dash_u8160 ) ( ( (  scalar1245 ) .f_value ) ) );
    struct Array_39  temp163 = ( (struct Array_39) { ._arr = { (  b1246 ) , (  from_dash_integral115 ( 0 ) ) , (  from_dash_integral115 ( 0 ) ) , (  from_dash_integral115 ( 0 ) ) } } );
    return ( (  from_dash_listlike162 ) ( ( &temp163 ) ) );
}

static  uint8_t *   cast_dash_ptr164 (    struct Array_39 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  struct Char_101   regularize147 (    struct Char_101  c1249 ,    struct Array_39 *  possible_dash_scalar_dash_mem1251 ) {
    struct CharDestructured_148  dref1252 = ( (  destructure150 ) ( (  c1249 ) ) );
    if ( dref1252.tag == CharDestructured_148_Ref_t ) {
        return ( dref1252 .stuff .CharDestructured_148_Ref_s .field0 );
    }
    else {
        if ( dref1252.tag == CharDestructured_148_Scalar_t ) {
            (*  possible_dash_scalar_dash_mem1251 ) = ( (  unscalarize156 ) ( ( dref1252 .stuff .CharDestructured_148_Scalar_s .field0 ) ) );
            return ( (struct Char_101) { .f_ptr = ( (  cast_dash_ptr164 ) ( (  possible_dash_scalar_dash_mem1251 ) ) ) , .f_num_dash_bytes = ( (  c1249 ) .f_num_dash_bytes ) } );
        }
    }
}

static  enum Unit_5   printf_dash_char146 (    struct Char_101  c1257 ) {
    struct Array_39  temp166;
    struct Array_39  temp165 = (  temp166 );
    struct Char_101  c1258 = ( (  regularize147 ) ( (  c1257 ) ,  ( &temp165 ) ) );
    ( ( printf ) ( ( (  from_dash_string31 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i32139 ) ( ( (  c1258 ) .f_num_dash_bytes ) ) ) ,  ( (  c1258 ) .f_ptr ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str145 (    struct Char_101  self1281 ) {
    ( (  printf_dash_char146 ) ( (  self1281 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str140 (    struct StrConcat_129  self1300 ) {
    struct StrConcat_129  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str141 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str137 (    struct StrConcat_136  self1300 ) {
    struct StrConcat_136  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str138 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str140 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str134 (    struct StrConcat_135  self1300 ) {
    struct StrConcat_135  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str137 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  struct StrView_95   from_dash_string167 (    uint8_t *  ptr90 ,    size_t  count92 ) {
    return ( (struct StrView_95) { .f_contents = ( (struct Slice_8) { .f_ptr = (  ptr90 ) , .f_count = (  count92 ) } ) } );
}

static  uint8_t *   cast169 (    uint8_t *  x400 ) {
    return ( (uint8_t * ) (  x400 ) );
}

static  struct Char_101   from_dash_charlike168 (    uint8_t *  ptr1269 ,    size_t  num_dash_bytes1271 ) {
    uint8_t *  ptr1272 = ( ( (  cast169 ) ( (  ptr1269 ) ) ) );
    return ( (  scan_dash_from_dash_mem111 ) ( (  ptr1272 ) ) );
}

static  enum Unit_5   panic133 (    struct StrConcat_129  errmsg1341 ) {
    ( (  print_dash_str134 ) ( ( ( StrConcat_135_StrConcat ) ( ( ( StrConcat_136_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1341 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

static  const char*   undefined170 (  ) {
    const char*  temp171;
    return (  temp171 );
}

static  const char*   or_dash_fail127 (    struct Maybe_128  x1351 ,    struct StrConcat_129  errmsg1353 ) {
    struct Maybe_128  dref1354 = (  x1351 );
    if ( dref1354.tag == Maybe_128_None_t ) {
        ( (  panic133 ) ( (  errmsg1353 ) ) );
        return ( (  undefined170 ) ( ) );
    }
    else {
        if ( dref1354.tag == Maybe_128_Just_t ) {
            return ( dref1354 .stuff .Maybe_128_Just_s .field0 );
        }
    }
}

static  struct Maybe_128   try_dash_get172 (    struct Slice_88  slice2174 ,    size_t  i2176 ) {
    if ( ( (  cmp117 ( (  i2176 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp117 ( (  i2176 ) , ( (  slice2174 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_128) { .tag = Maybe_128_None_t } );
    }
    const char* *  elem_dash_ptr2177 = ( (  offset_dash_ptr90 ) ( ( (  slice2174 ) .f_ptr ) ,  ( (  size_dash_i64108 ) ( (  i2176 ) ) ) ) );
    return ( ( Maybe_128_Just ) ( ( * (  elem_dash_ptr2177 ) ) ) );
}

static  const char*   get126 (    struct Slice_88  slice2180 ,    size_t  i2182 ) {
    return ( (  or_dash_fail127 ) ( ( (  try_dash_get172 ) ( (  slice2180 ) ,  (  i2182 ) ) ) ,  ( ( StrConcat_129_StrConcat ) ( ( ( StrConcat_130_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2182 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2180 ) .f_count ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get125 (    struct Slice_88  self2193 ,    size_t  idx2195 ) {
    return ( (  get126 ) ( (  self2193 ) ,  (  idx2195 ) ) );
}

struct Maybe_175 {
    enum {
        Maybe_175_None_t,
        Maybe_175_Just_t,
    } tag;
    union {
        struct {
            struct StrView_95  field0;
        } Maybe_175_Just_s;
    } stuff;
};

static struct Maybe_175 Maybe_175_Just (  struct StrView_95  field0 ) {
    return ( struct Maybe_175 ) { .tag = Maybe_175_Just_t, .stuff = { .Maybe_175_Just_s = { .field0 = field0 } } };
};

struct StrConcat_177 {
    struct StrView_95  field0;
    const char*  field1;
};

static struct StrConcat_177 StrConcat_177_StrConcat (  struct StrView_95  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_177 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_176 {
    struct StrConcat_177  field0;
    struct Char_101  field1;
};

static struct StrConcat_176 StrConcat_176_StrConcat (  struct StrConcat_177  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_176 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_181 {
    struct StrView_95  field0;
    struct StrConcat_176  field1;
};

static struct StrConcat_181 StrConcat_181_StrConcat (  struct StrView_95  field0 ,  struct StrConcat_176  field1 ) {
    return ( struct StrConcat_181 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_180 {
    struct StrConcat_181  field0;
    struct Char_101  field1;
};

static struct StrConcat_180 StrConcat_180_StrConcat (  struct StrConcat_181  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_180 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_5   print_dash_str185 (    const char*  self1672 ) {
    ( ( printf ) ( ( (  from_dash_string31 ) ( ( (uint8_t*)"%s" ) ,  ( 2 ) ) ) ,  (  self1672 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str184 (    struct StrConcat_177  self1300 ) {
    struct StrConcat_177  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str138 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str185 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str183 (    struct StrConcat_176  self1300 ) {
    struct StrConcat_176  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str184 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str182 (    struct StrConcat_181  self1300 ) {
    struct StrConcat_181  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str138 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str183 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str179 (    struct StrConcat_180  self1300 ) {
    struct StrConcat_180  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str182 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic178 (    struct StrConcat_176  errmsg1341 ) {
    ( (  print_dash_str179 ) ( ( ( StrConcat_180_StrConcat ) ( ( ( StrConcat_181_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1341 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

static  struct StrView_95   undefined186 (  ) {
    struct StrView_95  temp187;
    return (  temp187 );
}

static  struct StrView_95   or_dash_fail174 (    struct Maybe_175  x1351 ,    struct StrConcat_176  errmsg1353 ) {
    struct Maybe_175  dref1354 = (  x1351 );
    if ( dref1354.tag == Maybe_175_None_t ) {
        ( (  panic178 ) ( (  errmsg1353 ) ) );
        return ( (  undefined186 ) ( ) );
    }
    else {
        if ( dref1354.tag == Maybe_175_Just_t ) {
            return ( dref1354 .stuff .Maybe_175_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike189 (    uint8_t *  ptr77 ,    size_t  dref78 ) {
    return ( ( (const char* ) (  ptr77 ) ) );
}

static  void *   cast_dash_ptr194 (    FILE * *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  size_t   size_dash_of195 (    FILE *  x394 ) {
    return ( sizeof( (  x394 ) ) );
}

static  FILE *   zeroed192 (  ) {
    FILE *  temp193;
    FILE *  x646 = (  temp193 );
    ( ( memset ) ( ( (  cast_dash_ptr194 ) ( ( & (  x646 ) ) ) ) ,  (  from_dash_integral30 ( 0 ) ) ,  ( (  size_dash_of195 ) ( (  x646 ) ) ) ) );
    return (  x646 );
}

static  FILE *   null_dash_ptr191 (  ) {
    return ( (  zeroed192 ) ( ) );
}

static  bool   is_dash_ptr_dash_null190 (    FILE *  p656 ) {
    return ( (  p656 ) == ( (  null_dash_ptr191 ) ( ) ) );
}

static  int32_t   seek_dash_end196 (  ) {
    return (  from_dash_integral30 ( 2 ) );
}

static  int32_t   seek_dash_set197 (  ) {
    return (  from_dash_integral30 ( 0 ) );
}

struct TypeSize_200 {
    size_t  f_size;
};

static  struct TypeSize_200   get_dash_typesize199 (  ) {
    uint8_t  temp201;
    return ( (struct TypeSize_200) { .f_size = ( sizeof( ( (  temp201 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr202 (    void *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  size_t   op_dash_mul203 (    size_t  l304 ,    size_t  r306 ) {
    return ( (  l304 ) * (  r306 ) );
}

static  struct Slice_8   allocate198 (    enum CAllocator_7  dref2366 ,    size_t  count2368 ) {
    if (!(  dref2366 == CAllocator_7_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2369 = ( ( ( (  get_dash_typesize199 ) ( ) ) ) .f_size );
    uint8_t *  ptr2370 = ( (  cast_dash_ptr202 ) ( ( ( malloc ) ( (  op_dash_mul203 ( (  size2369 ) , (  count2368 ) ) ) ) ) ) );
    return ( (struct Slice_8) { .f_ptr = (  ptr2370 ) , .f_count = (  count2368 ) } );
}

static  size_t   i32_dash_size204 (    int32_t  x688 ) {
    return ( (size_t ) ( (int64_t ) (  x688 ) ) );
}

static  uint8_t *   get_dash_ptr206 (    struct Slice_8  slice2168 ,    size_t  i2170 ) {
    if ( ( (  cmp117 ( (  i2170 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp117 ( (  i2170 ) , ( (  slice2168 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic133 ) ( ( ( StrConcat_129_StrConcat ) ( ( ( StrConcat_130_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2170 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2168 ) .f_count ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr2171 = ( (  offset_dash_ptr106 ) ( ( (  slice2168 ) .f_ptr ) ,  ( (  size_dash_i64108 ) ( (  i2170 ) ) ) ) );
    return (  elem_dash_ptr2171 );
}

static  enum Unit_5   set205 (    struct Slice_8  slice2185 ,    size_t  i2187 ,    uint8_t  x2189 ) {
    uint8_t *  ep2190 = ( (  get_dash_ptr206 ) ( (  slice2185 ) ,  (  i2187 ) ) );
    (*  ep2190 ) = (  x2189 );
    return ( Unit_5_Unit );
}

static  uint8_t   char_dash_u8207 (    struct Char_101  c1438 ) {
    struct CharDestructured_148  dref1439 = ( (  destructure150 ) ( (  c1438 ) ) );
    if ( dref1439.tag == CharDestructured_148_Ref_t ) {
        return ( * ( ( dref1439 .stuff .CharDestructured_148_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref1439.tag == CharDestructured_148_Scalar_t ) {
            return ( (  u32_dash_u8160 ) ( ( ( dref1439 .stuff .CharDestructured_148_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct Char_101   nullchar208 (  ) {
    return ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) );
}

static  size_t   min210 (    size_t  l1365 ,    size_t  r1367 ) {
    if ( (  cmp117 ( (  l1365 ) , (  r1367 ) ) == 0 ) ) {
        return (  l1365 );
    } else {
        return (  r1367 );
    }
}

static  struct Slice_8   subslice209 (    struct Slice_8  slice2202 ,    size_t  from2204 ,    size_t  to2206 ) {
    uint8_t *  begin_dash_ptr2207 = ( (  offset_dash_ptr106 ) ( ( (  slice2202 ) .f_ptr ) ,  ( (  size_dash_i64108 ) ( (  from2204 ) ) ) ) );
    if ( ( (  cmp117 ( (  from2204 ) , (  to2206 ) ) != 0 ) || (  cmp117 ( (  from2204 ) , ( (  slice2202 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_8) { .f_ptr = (  begin_dash_ptr2207 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2208 = (  op_dash_sub94 ( ( (  min210 ) ( (  to2206 ) ,  ( (  slice2202 ) .f_count ) ) ) , (  from2204 ) ) );
    return ( (struct Slice_8) { .f_ptr = (  begin_dash_ptr2207 ) , .f_count = (  count2208 ) } );
}

static  struct Maybe_175   try_dash_read_dash_contents188 (    const char*  filename3161 ,    enum CAllocator_7  al3163 ) {
    FILE *  file3164 = ( ( fopen ) ( (  filename3161 ) ,  ( (  from_dash_charlike189 ) ( ( (uint8_t*)"r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null190 ) ( (  file3164 ) ) ) ) {
        return ( (struct Maybe_175) { .tag = Maybe_175_None_t } );
    }
    ( ( fseek ) ( (  file3164 ) ,  (  from_dash_integral30 ( 0 ) ) ,  ( (  seek_dash_end196 ) ( ) ) ) );
    int32_t  file_dash_size3165 = ( ( ftell ) ( (  file3164 ) ) );
    ( ( fseek ) ( (  file3164 ) ,  (  from_dash_integral30 ( 0 ) ) ,  ( (  seek_dash_set197 ) ( ) ) ) );
    struct Slice_8  file_dash_buf3166 = ( ( (  allocate198 ) ( (  al3163 ) ,  (  op_dash_add119 ( ( (  i32_dash_size204 ) ( (  file_dash_size3165 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3166 ) .f_ptr ) ,  (  file_dash_size3165 ) ,  (  from_dash_integral30 ( 1 ) ) ,  (  file3164 ) ) );
    ( (  set205 ) ( (  file_dash_buf3166 ) ,  ( (  i32_dash_size204 ) ( (  file_dash_size3165 ) ) ) ,  ( (  char_dash_u8207 ) ( ( (  nullchar208 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file3164 ) ) );
    struct StrView_95  str3167 = ( (struct StrView_95) { .f_contents = ( (  subslice209 ) ( (  file_dash_buf3166 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub94 ( ( (  file_dash_buf3166 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_175_Just ) ( (  str3167 ) ) );
}

static  struct StrView_95   read_dash_contents173 (    const char*  filename3170 ,    enum CAllocator_7  al3172 ) {
    return ( (  or_dash_fail174 ) ( ( (  try_dash_read_dash_contents188 ) ( (  filename3170 ) ,  (  al3172 ) ) ) ,  ( ( StrConcat_176_StrConcat ) ( ( ( StrConcat_177_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"could not open file " ) ,  ( 20 ) ) ) ,  (  filename3170 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)"!" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   cast212 (    uint8_t *  x400 ) {
    return ( (const char* ) (  x400 ) );
}

static  const char*   as_dash_const_dash_str211 (    struct StrView_95  s2582 ) {
    return ( (  cast212 ) ( ( ( (  s2582 ) .f_contents ) .f_ptr ) ) );
}

struct Elf_213 {
    struct ByteBuf_51  f_bytes;
    bool  f_finished;
};

struct envunion216 {
    struct Elf_213  (*fun) (  struct env85*  ,    enum CAllocator_7  );
    struct env85 env;
};

static  void *   cast_dash_ptr225 (    uint8_t * *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  size_t   size_dash_of226 (    uint8_t *  x394 ) {
    return ( sizeof( (  x394 ) ) );
}

static  uint8_t *   zeroed223 (  ) {
    uint8_t *  temp224;
    uint8_t *  x646 = (  temp224 );
    ( ( memset ) ( ( (  cast_dash_ptr225 ) ( ( & (  x646 ) ) ) ) ,  (  from_dash_integral30 ( 0 ) ) ,  ( (  size_dash_of226 ) ( (  x646 ) ) ) ) );
    return (  x646 );
}

static  uint8_t *   null_dash_ptr222 (  ) {
    return ( (  zeroed223 ) ( ) );
}

static  struct Slice_8   empty221 (  ) {
    return ( (struct Slice_8) { .f_ptr = ( (  null_dash_ptr222 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_6   mk220 (    enum CAllocator_7  al2435 ) {
    struct Slice_8  elements2436 = ( (  empty221 ) ( ) );
    return ( (struct List_6) { .f_al = (  al2435 ) , .f_elements = (  elements2436 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ByteBuf_51   mk219 (    enum CAllocator_7  al3381 ) {
    return ( (struct ByteBuf_51) { .f_buf = ( (  mk220 ) ( (  al3381 ) ) ) } );
}

struct env232 {
    struct List_6 *  list2512;
    struct env3 envinst3;
};

struct envunion233 {
    enum Unit_5  (*fun) (  struct env232*  ,    uint8_t  );
    struct env232 env;
};

struct SliceIter_234 {
    struct Slice_8  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_234   into_dash_iter236 (    struct Slice_8  self2248 ) {
    return ( (struct SliceIter_234) { .f_slice = (  self2248 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_237 {
    enum {
        Maybe_237_None_t,
        Maybe_237_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_237_Just_s;
    } stuff;
};

static struct Maybe_237 Maybe_237_Just (  uint8_t  field0 ) {
    return ( struct Maybe_237 ) { .tag = Maybe_237_Just_t, .stuff = { .Maybe_237_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_237   next238 (    struct SliceIter_234 *  self2254 ) {
    size_t  off2255 = ( ( * (  self2254 ) ) .f_current_dash_offset );
    if ( (  cmp117 ( (  op_dash_add119 ( (  off2255 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2254 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    uint8_t  elem2256 = ( * ( (  offset_dash_ptr106 ) ( ( ( ( * (  self2254 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64108 ) ( (  off2255 ) ) ) ) ) );
    (*  self2254 ) .f_current_dash_offset = (  op_dash_add119 ( (  off2255 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_237_Just ) ( (  elem2256 ) ) );
}

static  enum Unit_5   for_dash_each231 (    struct Slice_8  iterable1097 ,   struct envunion233  fun1099 ) {
    struct SliceIter_234  temp235 = ( (  into_dash_iter236 ) ( (  iterable1097 ) ) );
    struct SliceIter_234 *  it1100 = ( &temp235 );
    while ( ( true ) ) {
        struct Maybe_237  dref1101 = ( (  next238 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_237_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_237_Just_t ) {
                struct envunion233  temp239 = (  fun1099 );
                ( temp239.fun ( &temp239.env ,  ( dref1101 .stuff .Maybe_237_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  bool   eq245 (    size_t  l140 ,    size_t  r142 ) {
    return ( (  l140 ) == (  r142 ) );
}

struct env246 {
    ;
    struct Slice_8  new_dash_slice2452;
    ;
};

struct Tuple2_248 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_248 Tuple2_248_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_248 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion247 {
    enum Unit_5  (*fun) (  struct env246*  ,    struct Tuple2_248  );
    struct env246 env;
};

static  enum Unit_5   lam249 (   struct env246* env ,    struct Tuple2_248  dref2453 ) {
    return ( (  set205 ) ( ( env->new_dash_slice2452 ) ,  ( (  i32_dash_size204 ) ( ( dref2453 .field1 ) ) ) ,  ( dref2453 .field0 ) ) );
}

struct FromIter_252 {
    int32_t  f_from;
};

struct Zip_251 {
    struct SliceIter_234  f_left_dash_it;
    struct FromIter_252  f_right_dash_it;
};

static  struct Zip_251   into_dash_iter254 (    struct Zip_251  self934 ) {
    return (  self934 );
}

struct Maybe_255 {
    enum {
        Maybe_255_None_t,
        Maybe_255_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_248  field0;
        } Maybe_255_Just_s;
    } stuff;
};

static struct Maybe_255 Maybe_255_Just (  struct Tuple2_248  field0 ) {
    return ( struct Maybe_255 ) { .tag = Maybe_255_Just_t, .stuff = { .Maybe_255_Just_s = { .field0 = field0 } } };
};

struct Maybe_257 {
    enum {
        Maybe_257_None_t,
        Maybe_257_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_257_Just_s;
    } stuff;
};

static struct Maybe_257 Maybe_257_Just (  int32_t  field0 ) {
    return ( struct Maybe_257 ) { .tag = Maybe_257_Just_t, .stuff = { .Maybe_257_Just_s = { .field0 = field0 } } };
};

static  int32_t   op_dash_add259 (    int32_t  l231 ,    int32_t  r233 ) {
    return ( (  l231 ) + (  r233 ) );
}

static  struct Maybe_257   next258 (    struct FromIter_252 *  dref911 ) {
    int32_t  v913 = ( ( (* dref911 ) ) .f_from );
    (* dref911 ) .f_from = (  op_dash_add259 ( ( ( (* dref911 ) ) .f_from ) , (  from_dash_integral30 ( 1 ) ) ) );
    return ( ( Maybe_257_Just ) ( (  v913 ) ) );
}

static  struct Maybe_255   next256 (    struct Zip_251 *  self937 ) {
    struct Zip_251  copy938 = ( * (  self937 ) );
    while ( ( true ) ) {
        struct Maybe_237  dref939 = ( (  next238 ) ( ( & ( (  copy938 ) .f_left_dash_it ) ) ) );
        if ( dref939.tag == Maybe_237_None_t ) {
            return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
        }
        else {
            if ( dref939.tag == Maybe_237_Just_t ) {
                struct Maybe_257  dref941 = ( (  next258 ) ( ( & ( (  copy938 ) .f_right_dash_it ) ) ) );
                if ( dref941.tag == Maybe_257_None_t ) {
                    return ( (struct Maybe_255) { .tag = Maybe_255_None_t } );
                }
                else {
                    if ( dref941.tag == Maybe_257_Just_t ) {
                        ( (  next238 ) ( ( & ( ( * (  self937 ) ) .f_left_dash_it ) ) ) );
                        ( (  next258 ) ( ( & ( ( * (  self937 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_255_Just ) ( ( ( Tuple2_248_Tuple2 ) ( ( dref939 .stuff .Maybe_237_Just_s .field0 ) ,  ( dref941 .stuff .Maybe_257_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_5   for_dash_each250 (    struct Zip_251  iterable1097 ,   struct envunion247  fun1099 ) {
    struct Zip_251  temp253 = ( (  into_dash_iter254 ) ( (  iterable1097 ) ) );
    struct Zip_251 *  it1100 = ( &temp253 );
    while ( ( true ) ) {
        struct Maybe_255  dref1101 = ( (  next256 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_255_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_255_Just_t ) {
                struct envunion247  temp260 = (  fun1099 );
                ( temp260.fun ( &temp260.env ,  ( dref1101 .stuff .Maybe_255_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  struct FromIter_252   into_dash_iter262 (    struct FromIter_252  it909 ) {
    return (  it909 );
}

static  struct Zip_251   zip261 (    struct Slice_8  left945 ,    struct FromIter_252  right947 ) {
    struct SliceIter_234  left_dash_it948 = ( (  into_dash_iter236 ) ( (  left945 ) ) );
    struct FromIter_252  right_dash_it949 = ( (  into_dash_iter262 ) ( (  right947 ) ) );
    return ( (struct Zip_251) { .f_left_dash_it = (  left_dash_it948 ) , .f_right_dash_it = (  right_dash_it949 ) } );
}

static  struct FromIter_252   from263 (    int32_t  f906 ) {
    return ( (struct FromIter_252) { .f_from = (  f906 ) } );
}

static  void *   cast_dash_ptr265 (    uint8_t *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  enum Unit_5   free264 (    enum CAllocator_7  dref2372 ,    struct Slice_8  slice2374 ) {
    if (!(  dref2372 == CAllocator_7_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr265 ) ( ( (  slice2374 ) .f_ptr ) ) ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   grow_dash_if_dash_full244 (   struct env1* env ,    struct List_6 *  list2451 ) {
    if ( (  eq245 ( ( ( * (  list2451 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2451 ) .f_elements = ( (  allocate198 ) ( ( ( * (  list2451 ) ) .f_al ) ,  ( env->starting_dash_size2446 ) ) );
    } else {
        if ( (  eq245 ( ( ( * (  list2451 ) ) .f_count ) , ( ( ( * (  list2451 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_8  new_dash_slice2452 = ( (  allocate198 ) ( ( ( * (  list2451 ) ) .f_al ) ,  (  op_dash_mul203 ( ( ( * (  list2451 ) ) .f_count ) , ( env->growth_dash_factor2447 ) ) ) ) );
            struct env246 envinst246 = {
                .new_dash_slice2452 =  new_dash_slice2452 ,
            };
            struct envunion247  fun2456 = ( (struct envunion247){ .fun = (  enum Unit_5  (*) (  struct env246*  ,    struct Tuple2_248  ) )lam249 , .env =  envinst246 } );
            ( (  for_dash_each250 ) ( ( (  zip261 ) ( ( ( * (  list2451 ) ) .f_elements ) ,  ( (  from263 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) ,  (  fun2456 ) ) );
            ( (  free264 ) ( ( ( * (  list2451 ) ) .f_al ) ,  ( ( * (  list2451 ) ) .f_elements ) ) );
            (*  list2451 ) .f_elements = (  new_dash_slice2452 );
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   add242 (   struct env3* env ,    struct List_6 *  list2459 ,    uint8_t  elem2461 ) {
    struct envunion4  temp243 = ( (struct envunion4){ .fun = (  enum Unit_5  (*) (  struct env1*  ,    struct List_6 *  ) )grow_dash_if_dash_full244 , .env =  env->envinst1 } );
    ( temp243.fun ( &temp243.env ,  (  list2459 ) ) );
    ( (  set205 ) ( ( ( * (  list2459 ) ) .f_elements ) ,  ( ( * (  list2459 ) ) .f_count ) ,  (  elem2461 ) ) );
    (*  list2459 ) .f_count = (  op_dash_add119 ( ( ( * (  list2459 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam240 (   struct env232* env ,    uint8_t  x2516 ) {
    struct envunion20  temp241 = ( (struct envunion20){ .fun = (  enum Unit_5  (*) (  struct env3*  ,    struct List_6 *  ,    uint8_t  ) )add242 , .env =  env->envinst3 } );
    return ( temp241.fun ( &temp241.env ,  ( env->list2512 ) ,  (  x2516 ) ) );
}

static  enum Unit_5   add_dash_all230 (   struct env19* env ,    struct List_6 *  list2512 ,    struct Slice_8  it2514 ) {
    struct env232 envinst232 = {
        .list2512 =  list2512 ,
        .envinst3 = env->envinst3 ,
    };
    ( (  for_dash_each231 ) ( (  it2514 ) ,  ( (struct envunion233){ .fun = (  enum Unit_5  (*) (  struct env232*  ,    uint8_t  ) )lam240 , .env =  envinst232 } ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_bytes228 (   struct env32* env ,    struct ByteBuf_51 *  bb3410 ,    struct Slice_8  xs3412 ) {
    struct envunion33  temp229 = ( (struct envunion33){ .fun = (  enum Unit_5  (*) (  struct env19*  ,    struct List_6 *  ,    struct Slice_8  ) )add_dash_all230 , .env =  env->envinst19 } );
    ( temp229.fun ( &temp229.env ,  ( & ( ( * (  bb3410 ) ) .f_buf ) ) ,  (  xs3412 ) ) );
    return ( Unit_5_Unit );
}

struct Array_268 {
    uint8_t _arr [16];
};

struct Elf64Ehdr_267 {
    struct Array_268  f_e_dash_ident;
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

static  uint8_t *   cast_dash_ptr269 (    struct Elf64Ehdr_267 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

struct TypeSize_272 {
    size_t  f_size;
};

static  struct TypeSize_272   get_dash_typesize271 (  ) {
    struct Elf64Ehdr_267  temp273;
    return ( (struct TypeSize_272) { .f_size = ( sizeof( ( (  temp273 ) ) ) ) } );
}

static  size_t   ptr_dash_size_dash_of270 (    struct Elf64Ehdr_267 *  x397 ) {
    return ( ( ( (  get_dash_typesize271 ) ( ) ) ) .f_size );
}

static  struct Slice_8   as_dash_mem266 (    struct Elf64Ehdr_267 *  x3585 ) {
    return ( (struct Slice_8) { .f_ptr = ( (  cast_dash_ptr269 ) ( (  x3585 ) ) ) , .f_count = ( (  ptr_dash_size_dash_of270 ) ( (  x3585 ) ) ) } );
}

struct TypeSize_277 {
    size_t  f_size;
};

struct Elf64Phdr_279 {
    uint32_t  f_p_dash_type;
    uint32_t  f_p_dash_flags;
    uint64_t  f_p_dash_offset;
    uint64_t  f_p_dash_vaddr;
    uint64_t  f_p_dash_paddr;
    uint64_t  f_p_dash_filesz;
    uint64_t  f_p_dash_memsz;
    uint64_t  f_p_dash_align;
};

static  struct TypeSize_277   get_dash_typesize276 (  ) {
    struct Elf64Phdr_279  temp278;
    return ( (struct TypeSize_277) { .f_size = ( sizeof( ( (  temp278 ) ) ) ) } );
}

struct Array_281 {
    uint8_t _arr [8];
};

static  void *   cast_dash_ptr285 (    struct Array_268 *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  size_t   size_dash_of286 (    struct Array_268  x394 ) {
    return ( sizeof( (  x394 ) ) );
}

static  struct Array_268   zeroed283 (  ) {
    struct Array_268  temp284;
    struct Array_268  x646 = (  temp284 );
    ( ( memset ) ( ( (  cast_dash_ptr285 ) ( ( & (  x646 ) ) ) ) ,  (  from_dash_integral30 ( 0 ) ) ,  ( (  size_dash_of286 ) ( (  x646 ) ) ) ) );
    return (  x646 );
}

static  struct Array_281 *   cast287 (    struct Array_268 *  x400 ) {
    return ( (struct Array_281 * ) (  x400 ) );
}

static  struct Array_268   cast_dash_on_dash_zeroed280 (    struct Array_281  x649 ) {
    struct Array_268  temp282 = ( (  zeroed283 ) ( ) );
    struct Array_268 *  y650 = ( &temp282 );
    struct Array_281 *  yp651 = ( (  cast287 ) ( (  y650 ) ) );
    (*  yp651 ) = (  x649 );
    return ( * (  y650 ) );
}

static  struct Array_281   from_dash_listlike288 (    struct Array_281 *  self374 ) {
    return ( * (  self374 ) );
}

static  uint8_t   elf_dash_mag0290 (  ) {
    return (  from_dash_integral115 ( 127 ) );
}

static  uint8_t   elf_dash_mag1291 (  ) {
    return (  from_dash_integral115 ( 69 ) );
}

static  uint8_t   elf_dash_mag2292 (  ) {
    return (  from_dash_integral115 ( 76 ) );
}

static  uint8_t   elf_dash_mag3293 (  ) {
    return (  from_dash_integral115 ( 70 ) );
}

static  uint8_t   elf_dash_class64294 (  ) {
    return (  from_dash_integral115 ( 2 ) );
}

static  uint8_t   elfdata2lsb295 (  ) {
    return (  from_dash_integral115 ( 1 ) );
}

static  uint8_t   ev_dash_current296 (  ) {
    return (  from_dash_integral115 ( 1 ) );
}

static  uint8_t   elfosabi_dash_none297 (  ) {
    return (  from_dash_integral115 ( 0 ) );
}

static  uint16_t   from_dash_integral299 (    size_t  x56 ) {
    return ( (uint16_t ) (  x56 ) );
}

static  uint16_t   et_dash_exec298 (  ) {
    return (  from_dash_integral299 ( 2 ) );
}

static  uint16_t   em_dash_x86_dash_64300 (  ) {
    return (  from_dash_integral299 ( 62 ) );
}

static  uint32_t   ev_dash_current_dash_u32301 (  ) {
    return (  from_dash_integral158 ( 1 ) );
}

static  uint64_t   op_dash_add302 (    uint64_t  l314 ,    uint64_t  r316 ) {
    return ( (  l314 ) + (  r316 ) );
}

struct StrViewIter_306 {
    struct StrView_95  f_ds;
    size_t  f_i;
};

struct Map_305 {
    struct StrViewIter_306  field0;
    uint64_t (*  field1 )(    struct Char_101  );
};

static struct Map_305 Map_305_Map (  struct StrViewIter_306  field0 ,  uint64_t (*  field1 )(    struct Char_101  ) ) {
    return ( struct Map_305 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_305   into_dash_iter307 (    struct Map_305  self802 ) {
    return (  self802 );
}

struct Maybe_308 {
    enum {
        Maybe_308_None_t,
        Maybe_308_Just_t,
    } tag;
    union {
        struct {
            uint64_t  field0;
        } Maybe_308_Just_s;
    } stuff;
};

static struct Maybe_308 Maybe_308_Just (  uint64_t  field0 ) {
    return ( struct Maybe_308 ) { .tag = Maybe_308_Just_t, .stuff = { .Maybe_308_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_103   next310 (    struct StrViewIter_306 *  self1316 ) {
    if ( (  cmp117 ( ( ( * (  self1316 ) ) .f_i ) , ( ( ( ( * (  self1316 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_103) { .tag = Maybe_103_None_t } );
    }
    uint8_t *  char_dash_ptr1317 = ( ( (  offset_dash_ptr106 ) ( ( (  cast169 ) ( ( ( ( ( * (  self1316 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64108 ) ( ( ( * (  self1316 ) ) .f_i ) ) ) ) ) );
    struct Char_101  char1318 = ( (  scan_dash_from_dash_mem111 ) ( (  char_dash_ptr1317 ) ) );
    (*  self1316 ) .f_i = (  op_dash_add119 ( ( ( * (  self1316 ) ) .f_i ) , ( (  char1318 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_103_Just ) ( (  char1318 ) ) );
}

static  struct Maybe_308   next309 (    struct Map_305 *  dref804 ) {
    struct Maybe_103  dref807 = ( (  next310 ) ( ( & ( (* dref804 ) .field0 ) ) ) );
    if ( dref807.tag == Maybe_103_None_t ) {
        return ( (struct Maybe_308) { .tag = Maybe_308_None_t } );
    }
    else {
        if ( dref807.tag == Maybe_103_Just_t ) {
            return ( ( Maybe_308_Just ) ( ( ( (* dref804 ) .field1 ) ( ( dref807 .stuff .Maybe_103_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint64_t   reduce304 (    struct Map_305  iterable1116 ,    uint64_t  base1118 ,    uint64_t (*  fun1120 )(    uint64_t  ,    uint64_t  ) ) {
    uint64_t  x1121 = (  base1118 );
    struct Map_305  it1122 = ( (  into_dash_iter307 ) ( (  iterable1116 ) ) );
    while ( ( true ) ) {
        struct Maybe_308  dref1123 = ( (  next309 ) ( ( & (  it1122 ) ) ) );
        if ( dref1123.tag == Maybe_308_None_t ) {
            return (  x1121 );
        }
        else {
            if ( dref1123.tag == Maybe_308_Just_t ) {
                x1121 = ( (  fun1120 ) ( ( dref1123 .stuff .Maybe_308_Just_s .field0 ) ,  (  x1121 ) ) );
            }
        }
    }
    const char*  temp311 = ( (  from_dash_string31 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp311);
    abort ( );
    ( Unit_5_Unit );
    uint64_t  temp312;
    return (  temp312 );
}

static  struct StrViewIter_306   into_dash_iter314 (    struct StrView_95  self1310 ) {
    return ( (struct StrViewIter_306) { .f_ds = (  self1310 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Map_305   map313 (    struct StrView_95  iterable811 ,    uint64_t (*  fun813 )(    struct Char_101  ) ) {
    struct StrViewIter_306  it814 = ( (  into_dash_iter314 ) ( (  iterable811 ) ) );
    return ( ( Map_305_Map ) ( (  it814 ) ,  (  fun813 ) ) );
}

static  uint64_t   from_dash_integral316 (    size_t  x65 ) {
    return ( (uint64_t ) (  x65 ) );
}

static  void *   cast_dash_ptr322 (    size_t *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  size_t   size_dash_of323 (    size_t  x394 ) {
    return ( sizeof( (  x394 ) ) );
}

static  size_t   zeroed320 (  ) {
    size_t  temp321;
    size_t  x646 = (  temp321 );
    ( ( memset ) ( ( (  cast_dash_ptr322 ) ( ( & (  x646 ) ) ) ) ,  (  from_dash_integral30 ( 0 ) ) ,  ( (  size_dash_of323 ) ( (  x646 ) ) ) ) );
    return (  x646 );
}

static  uint8_t *   cast324 (    size_t *  x400 ) {
    return ( (uint8_t * ) (  x400 ) );
}

static  size_t   cast_dash_on_dash_zeroed318 (    uint8_t  x649 ) {
    size_t  temp319 = ( (  zeroed320 ) ( ) );
    size_t *  y650 = ( &temp319 );
    uint8_t *  yp651 = ( (  cast324 ) ( (  y650 ) ) );
    (*  yp651 ) = (  x649 );
    return ( * (  y650 ) );
}

static  size_t   u8_dash_size317 (    uint8_t  x745 ) {
    return ( (  cast_dash_on_dash_zeroed318 ) ( (  x745 ) ) );
}

struct StrConcat_327 {
    struct Char_101  field0;
    struct Char_101  field1;
};

static struct StrConcat_327 StrConcat_327_StrConcat (  struct Char_101  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_327 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_326 {
    struct StrConcat_327  field0;
    struct StrView_95  field1;
};

static struct StrConcat_326 StrConcat_326_StrConcat (  struct StrConcat_327  field0 ,  struct StrView_95  field1 ) {
    return ( struct StrConcat_326 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_331 {
    struct StrView_95  field0;
    struct StrConcat_326  field1;
};

static struct StrConcat_331 StrConcat_331_StrConcat (  struct StrView_95  field0 ,  struct StrConcat_326  field1 ) {
    return ( struct StrConcat_331 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_330 {
    struct StrConcat_331  field0;
    struct Char_101  field1;
};

static struct StrConcat_330 StrConcat_330_StrConcat (  struct StrConcat_331  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_330 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_5   print_dash_str334 (    struct StrConcat_327  self1300 ) {
    struct StrConcat_327  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str145 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str333 (    struct StrConcat_326  self1300 ) {
    struct StrConcat_326  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str334 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str138 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str332 (    struct StrConcat_331  self1300 ) {
    struct StrConcat_331  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str138 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str333 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str329 (    struct StrConcat_330  self1300 ) {
    struct StrConcat_330  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str332 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic328 (    struct StrConcat_326  errmsg1341 ) {
    ( (  print_dash_str329 ) ( ( ( StrConcat_330_StrConcat ) ( ( ( StrConcat_331_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1341 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

static  uint8_t   undefined335 (  ) {
    uint8_t  temp336;
    return (  temp336 );
}

static  uint8_t   or_dash_fail325 (    struct Maybe_237  x1351 ,    struct StrConcat_326  errmsg1353 ) {
    struct Maybe_237  dref1354 = (  x1351 );
    if ( dref1354.tag == Maybe_237_None_t ) {
        ( (  panic328 ) ( (  errmsg1353 ) ) );
        return ( (  undefined335 ) ( ) );
    }
    else {
        if ( dref1354.tag == Maybe_237_Just_t ) {
            return ( dref1354 .stuff .Maybe_237_Just_s .field0 );
        }
    }
}

static  enum Ordering_114   cmp338 (    struct Char_101  l1457 ,    struct Char_101  r1459 ) {
    if ( ( ( !  eq245 ( ( (  l1457 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq245 ( ( (  r1459 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp339 = ( (  from_dash_string31 ) ( ( (uint8_t*)"(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp339);
        abort ( );
        ( Unit_5_Unit );
    }
    return ( (  cmp113 ) ( ( (  char_dash_u8207 ) ( (  l1457 ) ) ) ,  ( (  char_dash_u8207 ) ( (  r1459 ) ) ) ) );
}

static  uint8_t   op_dash_sub340 (    uint8_t  l279 ,    uint8_t  r281 ) {
    return ( (  l279 ) - (  r281 ) );
}

static  uint8_t   op_dash_add341 (    uint8_t  l274 ,    uint8_t  r276 ) {
    return ( (  l274 ) + (  r276 ) );
}

static  struct Maybe_237   hex_dash_digit337 (    struct Char_101  c3125 ) {
    if ( ( (  cmp338 ( (  c3125 ) , ( (  from_dash_charlike168 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp338 ( (  c3125 ) , ( (  from_dash_charlike168 ) ( ( (uint8_t*)"9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_237_Just ) ( (  op_dash_sub340 ( ( (  char_dash_u8207 ) ( (  c3125 ) ) ) , ( (  char_dash_u8207 ) ( ( (  from_dash_charlike168 ) ( ( (uint8_t*)"0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp338 ( (  c3125 ) , ( (  from_dash_charlike168 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp338 ( (  c3125 ) , ( (  from_dash_charlike168 ) ( ( (uint8_t*)"f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_237_Just ) ( (  op_dash_add341 ( (  op_dash_sub340 ( ( (  char_dash_u8207 ) ( (  c3125 ) ) ) , ( (  char_dash_u8207 ) ( ( (  from_dash_charlike168 ) ( ( (uint8_t*)"a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral115 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp338 ( (  c3125 ) , ( (  from_dash_charlike168 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp338 ( (  c3125 ) , ( (  from_dash_charlike168 ) ( ( (uint8_t*)"F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_237_Just ) ( (  op_dash_add341 ( (  op_dash_sub340 ( ( (  char_dash_u8207 ) ( (  c3125 ) ) ) , ( (  char_dash_u8207 ) ( ( (  from_dash_charlike168 ) ( ( (uint8_t*)"A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral115 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
}

static  uint64_t   lam315 (    struct Char_101  c3130 ) {
    return ( (  from_dash_integral316 ) ( ( (  u8_dash_size317 ) ( ( (  or_dash_fail325 ) ( ( (  hex_dash_digit337 ) ( (  c3130 ) ) ) ,  ( ( StrConcat_326_StrConcat ) ( ( ( StrConcat_327_StrConcat ) ( ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\"" ) ,  ( 1 ) ) ) ,  (  c3130 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)"\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint64_t   op_dash_mul343 (    uint64_t  l324 ,    uint64_t  r326 ) {
    return ( (  l324 ) * (  r326 ) );
}

static  uint64_t   lam342 (    uint64_t  elem3132 ,    uint64_t  b3134 ) {
    return (  op_dash_add302 ( (  op_dash_mul343 ( (  b3134 ) , (  from_dash_integral316 ( 16 ) ) ) ) , (  elem3132 ) ) );
}

static  uint64_t   from_dash_hex303 (    struct StrView_95  arr3128 ) {
    return ( (  reduce304 ) ( ( (  map313 ) ( (  arr3128 ) ,  (  lam315 ) ) ) ,  (  from_dash_integral316 ( 0 ) ) ,  (  lam342 ) ) );
}

static  uint64_t   size_dash_u64344 (    size_t  x706 ) {
    return ( (uint64_t ) (  x706 ) );
}

static  uint16_t   size_dash_u16345 (    size_t  x715 ) {
    return ( (uint16_t ) (  x715 ) );
}

static  uint16_t   shn_dash_undef346 (  ) {
    return (  from_dash_integral299 ( 0 ) );
}

static  struct Elf64Ehdr_267   elf_dash_header275 (  ) {
    size_t  ehdr_dash_size3575 = ( ( ( (  get_dash_typesize271 ) ( ) ) ) .f_size );
    size_t  phdr_dash_size3576 = ( ( ( (  get_dash_typesize276 ) ( ) ) ) .f_size );
    struct Array_281  temp289 = ( (struct Array_281) { ._arr = { ( (  elf_dash_mag0290 ) ( ) ) , ( (  elf_dash_mag1291 ) ( ) ) , ( (  elf_dash_mag2292 ) ( ) ) , ( (  elf_dash_mag3293 ) ( ) ) , ( (  elf_dash_class64294 ) ( ) ) , ( (  elfdata2lsb295 ) ( ) ) , ( (  ev_dash_current296 ) ( ) ) , ( (  elfosabi_dash_none297 ) ( ) ) } } );
    return ( (struct Elf64Ehdr_267) { .f_e_dash_ident = ( (  cast_dash_on_dash_zeroed280 ) ( ( (  from_dash_listlike288 ) ( ( &temp289 ) ) ) ) ) , .f_e_dash_type = ( (  et_dash_exec298 ) ( ) ) , .f_e_dash_machine = ( (  em_dash_x86_dash_64300 ) ( ) ) , .f_e_dash_version = ( (  ev_dash_current_dash_u32301 ) ( ) ) , .f_e_dash_entry = (  op_dash_add302 ( (  op_dash_add302 ( ( (  from_dash_hex303 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"400000" ) ,  ( 6 ) ) ) ) ) , ( (  size_dash_u64344 ) ( (  ehdr_dash_size3575 ) ) ) ) ) , ( (  size_dash_u64344 ) ( (  phdr_dash_size3576 ) ) ) ) ) , .f_e_dash_phoff = ( (  size_dash_u64344 ) ( (  ehdr_dash_size3575 ) ) ) , .f_e_dash_shoff = (  from_dash_integral316 ( 0 ) ) , .f_e_dash_flags = (  from_dash_integral158 ( 0 ) ) , .f_e_dash_ehsize = ( (  size_dash_u16345 ) ( (  ehdr_dash_size3575 ) ) ) , .f_e_dash_phentsize = ( (  size_dash_u16345 ) ( (  phdr_dash_size3576 ) ) ) , .f_e_dash_phnum = (  from_dash_integral299 ( 1 ) ) , .f_e_dash_shentsize = (  from_dash_integral299 ( 0 ) ) , .f_e_dash_shnum = (  from_dash_integral299 ( 0 ) ) , .f_e_dash_shstrndx = ( (  shn_dash_undef346 ) ( ) ) } );
}

struct envunion348 {
    enum Unit_5  (*fun) (  struct env32*  ,    struct ByteBuf_51 *  ,    struct Slice_8  );
    struct env32 env;
};

static  uint8_t *   cast_dash_ptr350 (    struct Elf64Phdr_279 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  size_t   ptr_dash_size_dash_of351 (    struct Elf64Phdr_279 *  x397 ) {
    return ( ( ( (  get_dash_typesize276 ) ( ) ) ) .f_size );
}

static  struct Slice_8   as_dash_mem349 (    struct Elf64Phdr_279 *  x3585 ) {
    return ( (struct Slice_8) { .f_ptr = ( (  cast_dash_ptr350 ) ( (  x3585 ) ) ) , .f_count = ( (  ptr_dash_size_dash_of351 ) ( (  x3585 ) ) ) } );
}

static  uint32_t   pt_dash_load354 (  ) {
    return (  from_dash_integral158 ( 1 ) );
}

static  uint32_t   u32_dash_or355 (    uint32_t  l2949 ,    uint32_t  r2951 ) {
    return ( (  l2949 ) | (  r2951 ) );
}

static  uint32_t   pf_dash_r356 (  ) {
    return (  from_dash_integral158 ( 4 ) );
}

static  uint32_t   pf_dash_x357 (  ) {
    return (  from_dash_integral158 ( 1 ) );
}

static  struct Elf64Phdr_279   program_dash_header353 (  ) {
    return ( (struct Elf64Phdr_279) { .f_p_dash_type = ( (  pt_dash_load354 ) ( ) ) , .f_p_dash_flags = ( (  u32_dash_or355 ) ( ( (  pf_dash_r356 ) ( ) ) ,  ( (  pf_dash_x357 ) ( ) ) ) ) , .f_p_dash_offset = (  from_dash_integral316 ( 0 ) ) , .f_p_dash_vaddr = ( (  from_dash_hex303 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"400000" ) ,  ( 6 ) ) ) ) ) , .f_p_dash_paddr = ( (  from_dash_hex303 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"400000" ) ,  ( 6 ) ) ) ) ) , .f_p_dash_filesz = (  from_dash_integral316 ( 0 ) ) , .f_p_dash_memsz = (  from_dash_integral316 ( 0 ) ) , .f_p_dash_align = ( (  from_dash_hex303 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"200000" ) ,  ( 6 ) ) ) ) ) } );
}

static  struct Elf_213   mk217 (   struct env85* env ,    enum CAllocator_7  al3588 ) {
    struct ByteBuf_51  temp218 = ( (  mk219 ) ( (  al3588 ) ) );
    struct ByteBuf_51 *  bytes3589 = ( &temp218 );
    struct envunion86  temp227 = ( (struct envunion86){ .fun = (  enum Unit_5  (*) (  struct env32*  ,    struct ByteBuf_51 *  ,    struct Slice_8  ) )write_dash_bytes228 , .env =  env->envinst32 } );
    struct Elf64Ehdr_267  temp274 = ( (  elf_dash_header275 ) ( ) );
    ( temp227.fun ( &temp227.env ,  (  bytes3589 ) ,  ( (  as_dash_mem266 ) ( ( &temp274 ) ) ) ) );
    struct envunion348  temp347 = ( (struct envunion348){ .fun = (  enum Unit_5  (*) (  struct env32*  ,    struct ByteBuf_51 *  ,    struct Slice_8  ) )write_dash_bytes228 , .env =  env->envinst32 } );
    struct Elf64Phdr_279  temp352 = ( (  program_dash_header353 ) ( ) );
    ( temp347.fun ( &temp347.env ,  (  bytes3589 ) ,  ( (  as_dash_mem349 ) ( ( &temp352 ) ) ) ) );
    return ( (struct Elf_213) { .f_bytes = ( * (  bytes3589 ) ) , .f_finished = ( false ) } );
}

static  struct ByteBuf_51 *   bytebuf358 (    struct Elf_213 *  elf3603 ) {
    return ( & ( ( * (  elf3603 ) ) .f_bytes ) );
}

struct env359 {
    struct ByteBuf_51 *  bb3608;
    ;
};

enum Reg_363 {
    Reg_363_RAX,
    Reg_363_RBX,
    Reg_363_RCX,
    Reg_363_RDX,
    Reg_363_RDI,
    Reg_363_RSI,
    Reg_363_RSP,
    Reg_363_RBP,
    Reg_363_RIP,
};

struct RegImm_362 {
    enum {
        RegImm_362_Reg_t,
        RegImm_362_Imm4_t,
        RegImm_362_Imm8_t,
    } tag;
    union {
        struct {
            enum Reg_363  field0;
        } RegImm_362_Reg_s;
        struct {
            struct Array_39  field0;
        } RegImm_362_Imm4_s;
        struct {
            struct Array_39  field0;
        } RegImm_362_Imm8_s;
    } stuff;
};

static struct RegImm_362 RegImm_362_Reg (  enum Reg_363  field0 ) {
    return ( struct RegImm_362 ) { .tag = RegImm_362_Reg_t, .stuff = { .RegImm_362_Reg_s = { .field0 = field0 } } };
};

static struct RegImm_362 RegImm_362_Imm4 (  struct Array_39  field0 ) {
    return ( struct RegImm_362 ) { .tag = RegImm_362_Imm4_t, .stuff = { .RegImm_362_Imm4_s = { .field0 = field0 } } };
};

static struct RegImm_362 RegImm_362_Imm8 (  struct Array_39  field0 ) {
    return ( struct RegImm_362 ) { .tag = RegImm_362_Imm8_t, .stuff = { .RegImm_362_Imm8_s = { .field0 = field0 } } };
};

struct envunion361 {
    enum Unit_5  (*fun) (  struct env68*  ,    struct ByteBuf_51 *  ,    struct RegImm_362  );
    struct env68 env;
};

struct envunion366 {
    enum Unit_5  (*fun) (  struct env49*  ,    struct ByteBuf_51 *  ,    struct Array_36  );
    struct env49 env;
};

struct env373 {
    struct List_6 *  list2512;
    struct env3 envinst3;
};

struct envunion374 {
    enum Unit_5  (*fun) (  struct env373*  ,    uint8_t  );
    struct env373 env;
};

struct ArrayIter_375 {
    struct Array_36  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_375   into_dash_iter377 (    struct Array_36  self2100 ) {
    return ( (struct ArrayIter_375) { .f_backing = (  self2100 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct StrConcat_383 {
    struct StrConcat_131  field0;
    int32_t  field1;
};

static struct StrConcat_383 StrConcat_383_StrConcat (  struct StrConcat_131  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_383 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_382 {
    struct StrConcat_383  field0;
    struct Char_101  field1;
};

static struct StrConcat_382 StrConcat_382_StrConcat (  struct StrConcat_383  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_382 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_386 {
    struct StrView_95  field0;
    struct StrConcat_382  field1;
};

static struct StrConcat_386 StrConcat_386_StrConcat (  struct StrView_95  field0 ,  struct StrConcat_382  field1 ) {
    return ( struct StrConcat_386 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_385 {
    struct StrConcat_386  field0;
    struct Char_101  field1;
};

static struct StrConcat_385 StrConcat_385_StrConcat (  struct StrConcat_386  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_385 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_5   print_dash_str390 (    int32_t  self1415 ) {
    ( ( printf ) ( ( (  from_dash_string31 ) ( ( (uint8_t*)"%d" ) ,  ( 2 ) ) ) ,  (  self1415 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str389 (    struct StrConcat_383  self1300 ) {
    struct StrConcat_383  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str142 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str390 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str388 (    struct StrConcat_382  self1300 ) {
    struct StrConcat_382  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str389 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str387 (    struct StrConcat_386  self1300 ) {
    struct StrConcat_386  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str138 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str388 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str384 (    struct StrConcat_385  self1300 ) {
    struct StrConcat_385  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str387 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic381 (    struct StrConcat_382  errmsg1341 ) {
    ( (  print_dash_str384 ) ( ( ( StrConcat_385_StrConcat ) ( ( ( StrConcat_386_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1341 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

static  uint8_t *   cast_dash_ptr391 (    struct Array_36 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  uint8_t *   get_dash_ptr380 (    struct Array_36 *  arr2024 ,    size_t  i2027 ) {
    if ( ( (  cmp117 ( (  i2027 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp117 ( (  i2027 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic381 ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_383_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2027 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2028 = ( ( (  cast_dash_ptr391 ) ( (  arr2024 ) ) ) );
    return ( (  offset_dash_ptr106 ) ( (  p2028 ) ,  ( (int64_t ) (  i2027 ) ) ) );
}

static  uint8_t   get379 (    struct Array_36 *  arr2031 ,    size_t  i2034 ) {
    return ( * ( (  get_dash_ptr380 ) ( (  arr2031 ) ,  (  i2034 ) ) ) );
}

static  struct Maybe_237   next378 (    struct ArrayIter_375 *  self2107 ) {
    if ( (  cmp117 ( ( ( * (  self2107 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    uint8_t  e2109 = ( (  get379 ) ( ( & ( ( * (  self2107 ) ) .f_backing ) ) ,  ( ( * (  self2107 ) ) .f_cur ) ) );
    (*  self2107 ) .f_cur = (  op_dash_add119 ( ( ( * (  self2107 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_237_Just ) ( (  e2109 ) ) );
}

static  enum Unit_5   for_dash_each372 (    struct Array_36  iterable1097 ,   struct envunion374  fun1099 ) {
    struct ArrayIter_375  temp376 = ( (  into_dash_iter377 ) ( (  iterable1097 ) ) );
    struct ArrayIter_375 *  it1100 = ( &temp376 );
    while ( ( true ) ) {
        struct Maybe_237  dref1101 = ( (  next378 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_237_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_237_Just_t ) {
                struct envunion374  temp392 = (  fun1099 );
                ( temp392.fun ( &temp392.env ,  ( dref1101 .stuff .Maybe_237_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam393 (   struct env373* env ,    uint8_t  x2516 ) {
    struct envunion20  temp394 = ( (struct envunion20){ .fun = (  enum Unit_5  (*) (  struct env3*  ,    struct List_6 *  ,    uint8_t  ) )add242 , .env =  env->envinst3 } );
    return ( temp394.fun ( &temp394.env ,  ( env->list2512 ) ,  (  x2516 ) ) );
}

static  enum Unit_5   add_dash_all371 (   struct env21* env ,    struct List_6 *  list2512 ,    struct Array_36  it2514 ) {
    struct env373 envinst373 = {
        .list2512 =  list2512 ,
        .envinst3 = env->envinst3 ,
    };
    ( (  for_dash_each372 ) ( (  it2514 ) ,  ( (struct envunion374){ .fun = (  enum Unit_5  (*) (  struct env373*  ,    uint8_t  ) )lam393 , .env =  envinst373 } ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_bytes369 (   struct env34* env ,    struct ByteBuf_51 *  bb3410 ,    struct Array_36  xs3412 ) {
    struct envunion35  temp370 = ( (struct envunion35){ .fun = (  enum Unit_5  (*) (  struct env21*  ,    struct List_6 *  ,    struct Array_36  ) )add_dash_all371 , .env =  env->envinst21 } );
    ( temp370.fun ( &temp370.env ,  ( & ( ( * (  bb3410 ) ) .f_buf ) ) ,  (  xs3412 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_array367 (   struct env49* env ,    struct ByteBuf_51 *  bb3420 ,    struct Array_36  xs3422 ) {
    struct envunion50  temp368 = ( (struct envunion50){ .fun = (  enum Unit_5  (*) (  struct env34*  ,    struct ByteBuf_51 *  ,    struct Array_36  ) )write_dash_bytes369 , .env =  env->envinst34 } );
    ( temp368.fun ( &temp368.env ,  (  bb3420 ) ,  (  xs3422 ) ) );
    return ( Unit_5_Unit );
}

static  struct Array_36   from_dash_listlike395 (    struct Array_36 *  self374 ) {
    return ( * (  self374 ) );
}

struct StrConcat_399 {
    struct StrView_95  field0;
    struct StrView_95  field1;
};

static struct StrConcat_399 StrConcat_399_StrConcat (  struct StrView_95  field0 ,  struct StrView_95  field1 ) {
    return ( struct StrConcat_399 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_401 {
    struct StrConcat_399  field0;
    struct Char_101  field1;
};

static struct StrConcat_401 StrConcat_401_StrConcat (  struct StrConcat_399  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_401 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_404 {
    struct StrViewIter_306  f_left;
    struct StrViewIter_306  f_right;
};

enum EmptyIter_406 {
    EmptyIter_406_EmptyIter,
};

struct AppendIter_405 {
    enum EmptyIter_406  f_it;
    struct Char_101  f_elem;
    bool  f_appended;
};

struct StrConcatIter_403 {
    struct StrConcatIter_404  f_left;
    struct AppendIter_405  f_right;
};

static  struct StrConcatIter_403   into_dash_iter408 (    struct StrConcatIter_403  self1288 ) {
    return (  self1288 );
}

static  struct Maybe_103   next410 (    struct StrConcatIter_404 *  self1291 ) {
    struct Maybe_103  dref1292 = ( (  next310 ) ( ( & ( ( * (  self1291 ) ) .f_left ) ) ) );
    if ( dref1292.tag == Maybe_103_Just_t ) {
        return ( ( Maybe_103_Just ) ( ( dref1292 .stuff .Maybe_103_Just_s .field0 ) ) );
    }
    else {
        if ( dref1292.tag == Maybe_103_None_t ) {
            return ( (  next310 ) ( ( & ( ( * (  self1291 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_103   next412 (    enum EmptyIter_406 *  dref798 ) {
    return ( (struct Maybe_103) { .tag = Maybe_103_None_t } );
}

static  struct Maybe_103   next411 (    struct AppendIter_405 *  self1045 ) {
    struct Maybe_103  dref1046 = ( (  next412 ) ( ( & ( ( * (  self1045 ) ) .f_it ) ) ) );
    if ( dref1046.tag == Maybe_103_Just_t ) {
        return ( ( Maybe_103_Just ) ( ( dref1046 .stuff .Maybe_103_Just_s .field0 ) ) );
    }
    else {
        if ( dref1046.tag == Maybe_103_None_t ) {
            if ( ( ! ( ( * (  self1045 ) ) .f_appended ) ) ) {
                (*  self1045 ) .f_appended = ( true );
                return ( ( Maybe_103_Just ) ( ( ( * (  self1045 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_103) { .tag = Maybe_103_None_t } );
        }
    }
}

static  struct Maybe_103   next409 (    struct StrConcatIter_403 *  self1291 ) {
    struct Maybe_103  dref1292 = ( (  next410 ) ( ( & ( ( * (  self1291 ) ) .f_left ) ) ) );
    if ( dref1292.tag == Maybe_103_Just_t ) {
        return ( ( Maybe_103_Just ) ( ( dref1292 .stuff .Maybe_103_Just_s .field0 ) ) );
    }
    else {
        if ( dref1292.tag == Maybe_103_None_t ) {
            return ( (  next411 ) ( ( & ( ( * (  self1291 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_5   for_dash_each402 (    struct StrConcatIter_403  iterable1097 ,    enum Unit_5 (*  fun1099 )(    struct Char_101  ) ) {
    struct StrConcatIter_403  temp407 = ( (  into_dash_iter408 ) ( (  iterable1097 ) ) );
    struct StrConcatIter_403 *  it1100 = ( &temp407 );
    while ( ( true ) ) {
        struct Maybe_103  dref1101 = ( (  next409 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_103_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_103_Just_t ) {
                ( (  fun1099 ) ( ( dref1101 .stuff .Maybe_103_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  struct StrViewIter_306   chars417 (    struct StrView_95  self1324 ) {
    return ( (  into_dash_iter314 ) ( (  self1324 ) ) );
}

static  struct StrConcatIter_404   into_dash_iter416 (    struct StrConcat_399  dref1295 ) {
    return ( (struct StrConcatIter_404) { .f_left = ( (  chars417 ) ( ( dref1295 .field0 ) ) ) , .f_right = ( (  chars417 ) ( ( dref1295 .field1 ) ) ) } );
}

static  struct StrConcatIter_404   chars415 (    struct StrConcat_399  self1306 ) {
    return ( (  into_dash_iter416 ) ( (  self1306 ) ) );
}

static  enum EmptyIter_406   into_dash_iter422 (    enum EmptyIter_406  self796 ) {
    return (  self796 );
}

static  struct AppendIter_405   append421 (    enum EmptyIter_406  it1029 ,    struct Char_101  e1031 ) {
    return ( (struct AppendIter_405) { .f_it = ( (  into_dash_iter422 ) ( (  it1029 ) ) ) , .f_elem = (  e1031 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_405   cons420 (    enum EmptyIter_406  it1034 ,    struct Char_101  e1036 ) {
    return ( (  append421 ) ( (  it1034 ) ,  (  e1036 ) ) );
}

static  enum EmptyIter_406   nil423 (  ) {
    return ( EmptyIter_406_EmptyIter );
}

static  struct AppendIter_405   single419 (    struct Char_101  e1039 ) {
    return ( (  cons420 ) ( ( (  nil423 ) ( ) ) ,  (  e1039 ) ) );
}

static  struct AppendIter_405   chars418 (    struct Char_101  self1284 ) {
    return ( (  single419 ) ( (  self1284 ) ) );
}

static  struct StrConcatIter_403   into_dash_iter414 (    struct StrConcat_401  dref1295 ) {
    return ( (struct StrConcatIter_403) { .f_left = ( (  chars415 ) ( ( dref1295 .field0 ) ) ) , .f_right = ( (  chars418 ) ( ( dref1295 .field1 ) ) ) } );
}

static  struct StrConcatIter_403   chars413 (    struct StrConcat_401  self1306 ) {
    return ( (  into_dash_iter414 ) ( (  self1306 ) ) );
}

static  enum Unit_5   print400 (    struct StrConcat_401  s1333 ) {
    ( (  for_dash_each402 ) ( ( (  chars413 ) ( (  s1333 ) ) ) ,  (  printf_dash_char146 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   println398 (    struct StrConcat_399  s1336 ) {
    ( (  print400 ) ( ( ( StrConcat_401_StrConcat ) ( (  s1336 ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_5_Unit );
}

static  uint8_t   todo_prime_397 (    struct StrView_95  s2144 ) {
    ( (  println398 ) ( ( ( StrConcat_399_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"todo: " ) ,  ( 6 ) ) ) ,  (  s2144 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined335 ) ( ) );
}

struct env433 {
    struct List_6 *  list2512;
    struct env3 envinst3;
};

struct envunion434 {
    enum Unit_5  (*fun) (  struct env433*  ,    uint8_t  );
    struct env433 env;
};

struct ArrayIter_435 {
    struct Array_39  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_435   into_dash_iter437 (    struct Array_39  self2100 ) {
    return ( (struct ArrayIter_435) { .f_backing = (  self2100 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   get_dash_ptr440 (    struct Array_39 *  arr2024 ,    size_t  i2027 ) {
    if ( ( (  cmp117 ( (  i2027 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp117 ( (  i2027 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic381 ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_383_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2027 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2028 = ( ( (  cast_dash_ptr164 ) ( (  arr2024 ) ) ) );
    return ( (  offset_dash_ptr106 ) ( (  p2028 ) ,  ( (int64_t ) (  i2027 ) ) ) );
}

static  uint8_t   get439 (    struct Array_39 *  arr2031 ,    size_t  i2034 ) {
    return ( * ( (  get_dash_ptr440 ) ( (  arr2031 ) ,  (  i2034 ) ) ) );
}

static  struct Maybe_237   next438 (    struct ArrayIter_435 *  self2107 ) {
    if ( (  cmp117 ( ( ( * (  self2107 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    uint8_t  e2109 = ( (  get439 ) ( ( & ( ( * (  self2107 ) ) .f_backing ) ) ,  ( ( * (  self2107 ) ) .f_cur ) ) );
    (*  self2107 ) .f_cur = (  op_dash_add119 ( ( ( * (  self2107 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_237_Just ) ( (  e2109 ) ) );
}

static  enum Unit_5   for_dash_each432 (    struct Array_39  iterable1097 ,   struct envunion434  fun1099 ) {
    struct ArrayIter_435  temp436 = ( (  into_dash_iter437 ) ( (  iterable1097 ) ) );
    struct ArrayIter_435 *  it1100 = ( &temp436 );
    while ( ( true ) ) {
        struct Maybe_237  dref1101 = ( (  next438 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_237_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_237_Just_t ) {
                struct envunion434  temp441 = (  fun1099 );
                ( temp441.fun ( &temp441.env ,  ( dref1101 .stuff .Maybe_237_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam442 (   struct env433* env ,    uint8_t  x2516 ) {
    struct envunion20  temp443 = ( (struct envunion20){ .fun = (  enum Unit_5  (*) (  struct env3*  ,    struct List_6 *  ,    uint8_t  ) )add242 , .env =  env->envinst3 } );
    return ( temp443.fun ( &temp443.env ,  ( env->list2512 ) ,  (  x2516 ) ) );
}

static  enum Unit_5   add_dash_all431 (   struct env22* env ,    struct List_6 *  list2512 ,    struct Array_39  it2514 ) {
    struct env433 envinst433 = {
        .list2512 =  list2512 ,
        .envinst3 = env->envinst3 ,
    };
    ( (  for_dash_each432 ) ( (  it2514 ) ,  ( (struct envunion434){ .fun = (  enum Unit_5  (*) (  struct env433*  ,    uint8_t  ) )lam442 , .env =  envinst433 } ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_bytes429 (   struct env37* env ,    struct ByteBuf_51 *  bb3410 ,    struct Array_39  xs3412 ) {
    struct envunion38  temp430 = ( (struct envunion38){ .fun = (  enum Unit_5  (*) (  struct env22*  ,    struct List_6 *  ,    struct Array_39  ) )add_dash_all431 , .env =  env->envinst22 } );
    ( temp430.fun ( &temp430.env ,  ( & ( ( * (  bb3410 ) ) .f_buf ) ) ,  (  xs3412 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_array427 (   struct env52* env ,    struct ByteBuf_51 *  bb3420 ,    struct Array_39  xs3422 ) {
    struct envunion53  temp428 = ( (struct envunion53){ .fun = (  enum Unit_5  (*) (  struct env37*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_bytes429 , .env =  env->envinst37 } );
    ( temp428.fun ( &temp428.env ,  (  bb3420 ) ,  (  xs3422 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   undefined445 (  ) {
    enum Unit_5  temp446;
    return (  temp446 );
}

static  enum Unit_5   todo_prime_444 (    struct StrView_95  s2144 ) {
    ( (  println398 ) ( ( ( StrConcat_399_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"todo: " ) ,  ( 6 ) ) ) ,  (  s2144 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined445 ) ( ) );
}

static  enum Unit_5   push364 (   struct env68* env ,    struct ByteBuf_51 *  bb3485 ,    struct RegImm_362  ri3487 ) {
    struct RegImm_362  dref3488 = (  ri3487 );
    if ( dref3488.tag == RegImm_362_Reg_t ) {
        struct envunion366  temp365 = ( (struct envunion366){ .fun = (  enum Unit_5  (*) (  struct env49*  ,    struct ByteBuf_51 *  ,    struct Array_36  ) )write_dash_array367 , .env =  env->envinst49 } );
        struct Array_36  temp396 = ( (struct Array_36) { ._arr = { ( {  enum Reg_363  dref3490 = ( dref3488 .stuff .RegImm_362_Reg_s .field0 ) ;  dref3490 == Reg_363_RAX ? (  from_dash_integral115 ( 80 ) ) :  dref3490 == Reg_363_RBX ? (  from_dash_integral115 ( 83 ) ) : ( (  todo_prime_397 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"push [reg]" ) ,  ( 10 ) ) ) ) ) ; } ) } } );
        ( temp365.fun ( &temp365.env ,  (  bb3485 ) ,  ( (  from_dash_listlike395 ) ( ( &temp396 ) ) ) ) );
    }
    else {
        if ( dref3488.tag == RegImm_362_Imm4_t ) {
            struct envunion70  temp424 = ( (struct envunion70){ .fun = (  enum Unit_5  (*) (  struct env49*  ,    struct ByteBuf_51 *  ,    struct Array_36  ) )write_dash_array367 , .env =  env->envinst49 } );
            struct Array_36  temp425 = ( (struct Array_36) { ._arr = { (  from_dash_integral115 ( 104 ) ) } } );
            ( temp424.fun ( &temp424.env ,  (  bb3485 ) ,  ( (  from_dash_listlike395 ) ( ( &temp425 ) ) ) ) );
            struct envunion69  temp426 = ( (struct envunion69){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array427 , .env =  env->envinst52 } );
            ( temp426.fun ( &temp426.env ,  (  bb3485 ) ,  ( dref3488 .stuff .RegImm_362_Imm4_s .field0 ) ) );
        }
        else {
            if ( true ) {
                ( (  todo_prime_444 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"push" ) ,  ( 4 ) ) ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  uint32_t   op_dash_div451 (    uint32_t  l269 ,    uint32_t  r271 ) {
    return ( (  l269 ) / (  r271 ) );
}

struct Range_454 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_454 Range_454_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_454 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env455 {
    uint32_t  base1384;
    ;
};

struct envunion456 {
    uint32_t  (*fun) (  struct env455*  ,    int32_t  ,    uint32_t  );
    struct env455 env;
};

struct RangeIter_457 {
    struct Range_454  field0;
    int32_t  field1;
};

static struct RangeIter_457 RangeIter_457_RangeIter (  struct Range_454  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_457 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_457   into_dash_iter458 (    struct Range_454  dref889 ) {
    return ( ( RangeIter_457_RangeIter ) ( ( ( Range_454_Range ) ( ( dref889 .field0 ) ,  ( dref889 .field1 ) ) ) ,  ( dref889 .field0 ) ) );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_114   cmp460 (    int32_t  l173 ,    int32_t  r175 ) {
    return ( builtin_int32_tcmp( (  l173 ) , (  r175 ) ) );
}

static  struct Maybe_257   next459 (    struct RangeIter_457 *  self897 ) {
    struct RangeIter_457  dref898 = ( * (  self897 ) );
    if ( true ) {
        if ( (  cmp460 ( ( dref898 .field1 ) , ( dref898 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_257) { .tag = Maybe_257_None_t } );
        }
        struct Maybe_257  x902 = ( ( Maybe_257_Just ) ( ( dref898 .field1 ) ) );
        (*  self897 ) = ( ( RangeIter_457_RangeIter ) ( ( ( Range_454_Range ) ( ( dref898 .field0 .field0 ) ,  ( dref898 .field0 .field1 ) ) ) ,  (  op_dash_add259 ( ( dref898 .field1 ) , (  from_dash_integral30 ( 1 ) ) ) ) ) );
        return (  x902 );
    }
}

static  uint32_t   reduce453 (    struct Range_454  iterable1116 ,    uint32_t  base1118 ,   struct envunion456  fun1120 ) {
    uint32_t  x1121 = (  base1118 );
    struct RangeIter_457  it1122 = ( (  into_dash_iter458 ) ( (  iterable1116 ) ) );
    while ( ( true ) ) {
        struct Maybe_257  dref1123 = ( (  next459 ) ( ( & (  it1122 ) ) ) );
        if ( dref1123.tag == Maybe_257_None_t ) {
            return (  x1121 );
        }
        else {
            if ( dref1123.tag == Maybe_257_Just_t ) {
                struct envunion456  temp461 = (  fun1120 );
                x1121 = ( temp461.fun ( &temp461.env ,  ( dref1123 .stuff .Maybe_257_Just_s .field0 ) ,  (  x1121 ) ) );
            }
        }
    }
    const char*  temp462 = ( (  from_dash_string31 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp462);
    abort ( );
    ( Unit_5_Unit );
    uint32_t  temp463;
    return (  temp463 );
}

static  struct Range_454   to464 (    int32_t  from880 ,    int32_t  to882 ) {
    return ( ( Range_454_Range ) ( (  from880 ) ,  (  to882 ) ) );
}

static  int32_t   op_dash_sub465 (    int32_t  l236 ,    int32_t  r238 ) {
    return ( (  l236 ) - (  r238 ) );
}

static  uint32_t   op_dash_mul467 (    uint32_t  l264 ,    uint32_t  r266 ) {
    return ( (  l264 ) * (  r266 ) );
}

static  uint32_t   lam466 (   struct env455* env ,    int32_t  item1388 ,    uint32_t  x1390 ) {
    return (  op_dash_mul467 ( (  x1390 ) , ( env->base1384 ) ) );
}

static  uint32_t   pow452 (    uint32_t  base1384 ,    int32_t  p1386 ) {
    struct env455 envinst455 = {
        .base1384 =  base1384 ,
    };
    return ( (  reduce453 ) ( ( (  to464 ) ( (  from_dash_integral30 ( 0 ) ) ,  (  op_dash_sub465 ( (  p1386 ) , (  from_dash_integral30 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral158 ( 1 ) ) ,  ( (struct envunion456){ .fun = (  uint32_t  (*) (  struct env455*  ,    int32_t  ,    uint32_t  ) )lam466 , .env =  envinst455 } ) ) );
}

static  uint32_t   rshift450 (    uint32_t  x1537 ,    int32_t  am1539 ) {
    return (  op_dash_div451 ( (  x1537 ) , ( (  pow452 ) ( (  from_dash_integral158 ( 2 ) ) ,  (  am1539 ) ) ) ) );
}

static  int32_t   op_dash_mul468 (    int32_t  l241 ,    int32_t  r243 ) {
    return ( (  l241 ) * (  r243 ) );
}

static  uint8_t   nth_dash_byte449 (    uint32_t  x3438 ,    int32_t  n3440 ) {
    return ( ( (uint8_t ) ( (  rshift450 ) ( (  x3438 ) ,  (  op_dash_mul468 ( (  from_dash_integral30 ( 8 ) ) , (  n3440 ) ) ) ) ) ) );
}

static  struct RegImm_362   dword447 (    uint32_t  x3443 ) {
    struct Array_39  temp448 = ( (struct Array_39) { ._arr = { ( (  nth_dash_byte449 ) ( (  x3443 ) ,  (  from_dash_integral30 ( 0 ) ) ) ) , ( (  nth_dash_byte449 ) ( (  x3443 ) ,  (  from_dash_integral30 ( 1 ) ) ) ) , ( (  nth_dash_byte449 ) ( (  x3443 ) ,  (  from_dash_integral30 ( 2 ) ) ) ) , ( (  nth_dash_byte449 ) ( (  x3443 ) ,  (  from_dash_integral30 ( 3 ) ) ) ) } } );
    return ( ( RegImm_362_Imm4 ) ( ( (  from_dash_listlike162 ) ( ( &temp448 ) ) ) ) );
}

struct envunion470 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  );
    struct env64 env;
};

static  uint8_t   panic_prime_474 (    struct StrView_95  errmsg2147 ) {
    ( (  println398 ) ( ( ( StrConcat_399_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg2147 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined335 ) ( ) );
}

struct env483 {
    struct List_6 *  list2512;
    struct env3 envinst3;
};

struct envunion484 {
    enum Unit_5  (*fun) (  struct env483*  ,    uint8_t  );
    struct env483 env;
};

struct ArrayIter_485 {
    struct Array_42  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_485   into_dash_iter487 (    struct Array_42  self2100 ) {
    return ( (struct ArrayIter_485) { .f_backing = (  self2100 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   cast_dash_ptr491 (    struct Array_42 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  uint8_t *   get_dash_ptr490 (    struct Array_42 *  arr2024 ,    size_t  i2027 ) {
    if ( ( (  cmp117 ( (  i2027 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp117 ( (  i2027 ) , ( (size_t ) ( 3 ) ) ) != 0 ) ) ) {
        ( (  panic381 ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_383_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2027 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 3 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2028 = ( ( (  cast_dash_ptr491 ) ( (  arr2024 ) ) ) );
    return ( (  offset_dash_ptr106 ) ( (  p2028 ) ,  ( (int64_t ) (  i2027 ) ) ) );
}

static  uint8_t   get489 (    struct Array_42 *  arr2031 ,    size_t  i2034 ) {
    return ( * ( (  get_dash_ptr490 ) ( (  arr2031 ) ,  (  i2034 ) ) ) );
}

static  struct Maybe_237   next488 (    struct ArrayIter_485 *  self2107 ) {
    if ( (  cmp117 ( ( ( * (  self2107 ) ) .f_cur ) , ( (size_t ) ( 3 ) ) ) != 0 ) ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    uint8_t  e2109 = ( (  get489 ) ( ( & ( ( * (  self2107 ) ) .f_backing ) ) ,  ( ( * (  self2107 ) ) .f_cur ) ) );
    (*  self2107 ) .f_cur = (  op_dash_add119 ( ( ( * (  self2107 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_237_Just ) ( (  e2109 ) ) );
}

static  enum Unit_5   for_dash_each482 (    struct Array_42  iterable1097 ,   struct envunion484  fun1099 ) {
    struct ArrayIter_485  temp486 = ( (  into_dash_iter487 ) ( (  iterable1097 ) ) );
    struct ArrayIter_485 *  it1100 = ( &temp486 );
    while ( ( true ) ) {
        struct Maybe_237  dref1101 = ( (  next488 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_237_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_237_Just_t ) {
                struct envunion484  temp492 = (  fun1099 );
                ( temp492.fun ( &temp492.env ,  ( dref1101 .stuff .Maybe_237_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam493 (   struct env483* env ,    uint8_t  x2516 ) {
    struct envunion20  temp494 = ( (struct envunion20){ .fun = (  enum Unit_5  (*) (  struct env3*  ,    struct List_6 *  ,    uint8_t  ) )add242 , .env =  env->envinst3 } );
    return ( temp494.fun ( &temp494.env ,  ( env->list2512 ) ,  (  x2516 ) ) );
}

static  enum Unit_5   add_dash_all481 (   struct env23* env ,    struct List_6 *  list2512 ,    struct Array_42  it2514 ) {
    struct env483 envinst483 = {
        .list2512 =  list2512 ,
        .envinst3 = env->envinst3 ,
    };
    ( (  for_dash_each482 ) ( (  it2514 ) ,  ( (struct envunion484){ .fun = (  enum Unit_5  (*) (  struct env483*  ,    uint8_t  ) )lam493 , .env =  envinst483 } ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_bytes479 (   struct env40* env ,    struct ByteBuf_51 *  bb3410 ,    struct Array_42  xs3412 ) {
    struct envunion41  temp480 = ( (struct envunion41){ .fun = (  enum Unit_5  (*) (  struct env23*  ,    struct List_6 *  ,    struct Array_42  ) )add_dash_all481 , .env =  env->envinst23 } );
    ( temp480.fun ( &temp480.env ,  ( & ( ( * (  bb3410 ) ) .f_buf ) ) ,  (  xs3412 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_array477 (   struct env54* env ,    struct ByteBuf_51 *  bb3420 ,    struct Array_42  xs3422 ) {
    struct envunion55  temp478 = ( (struct envunion55){ .fun = (  enum Unit_5  (*) (  struct env40*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_bytes479 , .env =  env->envinst40 } );
    ( temp478.fun ( &temp478.env ,  (  bb3420 ) ,  (  xs3422 ) ) );
    return ( Unit_5_Unit );
}

static  struct Array_42   from_dash_listlike495 (    struct Array_42 *  self374 ) {
    return ( * (  self374 ) );
}

static  enum Unit_5   mov471 (   struct env64* env ,    struct ByteBuf_51 *  bb3468 ,    enum Reg_363  r3470 ,    struct RegImm_362  ri3472 ) {
    struct RegImm_362  dref3473 = (  ri3472 );
    if ( dref3473.tag == RegImm_362_Imm4_t ) {
        struct envunion65  temp472 = ( (struct envunion65){ .fun = (  enum Unit_5  (*) (  struct env49*  ,    struct ByteBuf_51 *  ,    struct Array_36  ) )write_dash_array367 , .env =  env->envinst49 } );
        struct Array_36  temp473 = ( (struct Array_36) { ._arr = { ( {  enum Reg_363  dref3475 = (  r3470 ) ;  dref3475 == Reg_363_RAX ? (  from_dash_integral115 ( 184 ) ) :  dref3475 == Reg_363_RBX ? (  from_dash_integral115 ( 187 ) ) :  dref3475 == Reg_363_RBP ? (  from_dash_integral115 ( 189 ) ) :  dref3475 == Reg_363_RDI ? (  from_dash_integral115 ( 191 ) ) :  dref3475 == Reg_363_RDX ? (  from_dash_integral115 ( 186 ) ) :  dref3475 == Reg_363_RIP ? ( (  panic_prime_474 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"mov rip, ... is not defined." ) ,  ( 28 ) ) ) ) ) : ( (  todo_prime_397 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"mov _, imm4" ) ,  ( 11 ) ) ) ) ) ; } ) } } );
        ( temp472.fun ( &temp472.env ,  (  bb3468 ) ,  ( (  from_dash_listlike395 ) ( ( &temp473 ) ) ) ) );
        struct envunion67  temp475 = ( (struct envunion67){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array427 , .env =  env->envinst52 } );
        ( temp475.fun ( &temp475.env ,  (  bb3468 ) ,  ( dref3473 .stuff .RegImm_362_Imm4_s .field0 ) ) );
    }
    else {
        if ( dref3473.tag == RegImm_362_Reg_t &&  dref3473 .stuff .RegImm_362_Reg_s .field0 == Reg_363_RSP ) {
            struct envunion66  temp476 = ( (struct envunion66){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array477 , .env =  env->envinst54 } );
            struct Array_42  temp496 = ( (struct Array_42) { ._arr = { (  from_dash_integral115 ( 72 ) ) , (  from_dash_integral115 ( 137 ) ) , (  from_dash_integral115 ( 229 ) ) } } );
            ( temp476.fun ( &temp476.env ,  (  bb3468 ) ,  ( (  from_dash_listlike495 ) ( ( &temp496 ) ) ) ) );
        }
        else {
            if ( true ) {
                ( (  todo_prime_444 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"mov" ) ,  ( 3 ) ) ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  struct RegImm_362   reg497 (    enum Reg_363  reg3453 ) {
    return ( ( RegImm_362_Reg ) ( (  reg3453 ) ) );
}

struct envunion499 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  );
    struct env64 env;
};

static  uint32_t   op_dash_sub500 (    uint32_t  l259 ,    uint32_t  r261 ) {
    return ( (  l259 ) - (  r261 ) );
}

struct envunion502 {
    size_t  (*fun) (  struct env359*  );
    struct env359 env;
};

static  size_t   size505 (    struct List_6 *  l2442 ) {
    return ( ( * (  l2442 ) ) .f_count );
}

static  size_t   count_dash_written_dash_bytes504 (    struct ByteBuf_51 *  bb3387 ) {
    return ( (  size505 ) ( ( & ( ( * (  bb3387 ) ) .f_buf ) ) ) );
}

static  size_t   here503 (   struct env359* env ) {
    return ( (  count_dash_written_dash_bytes504 ) ( ( env->bb3608 ) ) );
}

struct envunion507 {
    enum Unit_5  (*fun) (  struct env83*  ,    struct ByteBuf_51 *  ,    enum Reg_363  );
    struct env83 env;
};

struct envunion512 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

static  enum Unit_5   dec508 (   struct env83* env ,    struct ByteBuf_51 *  bb3546 ,    enum Reg_363  r3548 ) {
    enum Reg_363  dref3549 = (  r3548 );
    switch (  dref3549 ) {
        case Reg_363_RAX : {
            struct envunion84  temp509 = ( (struct envunion84){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array477 , .env =  env->envinst54 } );
            struct Array_42  temp510 = ( (struct Array_42) { ._arr = { (  from_dash_integral115 ( 72 ) ) , (  from_dash_integral115 ( 255 ) ) , (  from_dash_integral115 ( 200 ) ) } } );
            ( temp509.fun ( &temp509.env ,  (  bb3546 ) ,  ( (  from_dash_listlike495 ) ( ( &temp510 ) ) ) ) );
            break;
        }
        case Reg_363_RBX : {
            struct envunion512  temp511 = ( (struct envunion512){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array477 , .env =  env->envinst54 } );
            struct Array_42  temp513 = ( (struct Array_42) { ._arr = { (  from_dash_integral115 ( 72 ) ) , (  from_dash_integral115 ( 255 ) ) , (  from_dash_integral115 ( 203 ) ) } } );
            ( temp511.fun ( &temp511.env ,  (  bb3546 ) ,  ( (  from_dash_listlike495 ) ( ( &temp513 ) ) ) ) );
            break;
        }
        default: {
            ( (  todo_prime_444 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"dec" ) ,  ( 3 ) ) ) ) );
            break;
        }
    }
    return ( Unit_5_Unit );
}

struct envunion515 {
    enum Unit_5  (*fun) (  struct env68*  ,    struct ByteBuf_51 *  ,    struct RegImm_362  );
    struct env68 env;
};

struct envunion517 {
    enum Unit_5  (*fun) (  struct env71*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  );
    struct env71 env;
};

static  enum Unit_5   test518 (   struct env71* env ,    struct ByteBuf_51 *  bb3503 ,    enum Reg_363  r3505 ,    struct RegImm_362  ri3507 ) {
    struct RegImm_362  dref3508 = (  ri3507 );
    if ( dref3508.tag == RegImm_362_Reg_t &&  dref3508 .stuff .RegImm_362_Reg_s .field0 == Reg_363_RAX ) {
        enum Reg_363  dref3509 = (  r3505 );
        switch (  dref3509 ) {
            case Reg_363_RAX : {
                struct envunion72  temp519 = ( (struct envunion72){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array477 , .env =  env->envinst54 } );
                struct Array_42  temp520 = ( (struct Array_42) { ._arr = { (  from_dash_integral115 ( 72 ) ) , (  from_dash_integral115 ( 133 ) ) , (  from_dash_integral115 ( 192 ) ) } } );
                ( temp519.fun ( &temp519.env ,  (  bb3503 ) ,  ( (  from_dash_listlike495 ) ( ( &temp520 ) ) ) ) );
                break;
            }
            default: {
                ( (  todo_prime_444 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"test ..., rax" ) ,  ( 13 ) ) ) ) );
                break;
            }
        }
    }
    else {
        if ( true ) {
            ( (  todo_prime_444 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"test" ) ,  ( 4 ) ) ) ) );
        }
    }
    return ( Unit_5_Unit );
}

struct envunion522 {
    size_t  (*fun) (  struct env73*  ,    struct ByteBuf_51 *  ,    struct RegImm_362  );
    struct env73 env;
};

struct env531 {
    struct List_6 *  list2512;
    struct env3 envinst3;
};

struct envunion532 {
    enum Unit_5  (*fun) (  struct env531*  ,    uint8_t  );
    struct env531 env;
};

struct ArrayIter_533 {
    struct Array_45  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_533   into_dash_iter535 (    struct Array_45  self2100 ) {
    return ( (struct ArrayIter_533) { .f_backing = (  self2100 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   cast_dash_ptr539 (    struct Array_45 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  uint8_t *   get_dash_ptr538 (    struct Array_45 *  arr2024 ,    size_t  i2027 ) {
    if ( ( (  cmp117 ( (  i2027 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp117 ( (  i2027 ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) ) {
        ( (  panic381 ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_383_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2027 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 2 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2028 = ( ( (  cast_dash_ptr539 ) ( (  arr2024 ) ) ) );
    return ( (  offset_dash_ptr106 ) ( (  p2028 ) ,  ( (int64_t ) (  i2027 ) ) ) );
}

static  uint8_t   get537 (    struct Array_45 *  arr2031 ,    size_t  i2034 ) {
    return ( * ( (  get_dash_ptr538 ) ( (  arr2031 ) ,  (  i2034 ) ) ) );
}

static  struct Maybe_237   next536 (    struct ArrayIter_533 *  self2107 ) {
    if ( (  cmp117 ( ( ( * (  self2107 ) ) .f_cur ) , ( (size_t ) ( 2 ) ) ) != 0 ) ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    uint8_t  e2109 = ( (  get537 ) ( ( & ( ( * (  self2107 ) ) .f_backing ) ) ,  ( ( * (  self2107 ) ) .f_cur ) ) );
    (*  self2107 ) .f_cur = (  op_dash_add119 ( ( ( * (  self2107 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_237_Just ) ( (  e2109 ) ) );
}

static  enum Unit_5   for_dash_each530 (    struct Array_45  iterable1097 ,   struct envunion532  fun1099 ) {
    struct ArrayIter_533  temp534 = ( (  into_dash_iter535 ) ( (  iterable1097 ) ) );
    struct ArrayIter_533 *  it1100 = ( &temp534 );
    while ( ( true ) ) {
        struct Maybe_237  dref1101 = ( (  next536 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_237_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_237_Just_t ) {
                struct envunion532  temp540 = (  fun1099 );
                ( temp540.fun ( &temp540.env ,  ( dref1101 .stuff .Maybe_237_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam541 (   struct env531* env ,    uint8_t  x2516 ) {
    struct envunion20  temp542 = ( (struct envunion20){ .fun = (  enum Unit_5  (*) (  struct env3*  ,    struct List_6 *  ,    uint8_t  ) )add242 , .env =  env->envinst3 } );
    return ( temp542.fun ( &temp542.env ,  ( env->list2512 ) ,  (  x2516 ) ) );
}

static  enum Unit_5   add_dash_all529 (   struct env24* env ,    struct List_6 *  list2512 ,    struct Array_45  it2514 ) {
    struct env531 envinst531 = {
        .list2512 =  list2512 ,
        .envinst3 = env->envinst3 ,
    };
    ( (  for_dash_each530 ) ( (  it2514 ) ,  ( (struct envunion532){ .fun = (  enum Unit_5  (*) (  struct env531*  ,    uint8_t  ) )lam541 , .env =  envinst531 } ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_bytes527 (   struct env43* env ,    struct ByteBuf_51 *  bb3410 ,    struct Array_45  xs3412 ) {
    struct envunion44  temp528 = ( (struct envunion44){ .fun = (  enum Unit_5  (*) (  struct env24*  ,    struct List_6 *  ,    struct Array_45  ) )add_dash_all529 , .env =  env->envinst24 } );
    ( temp528.fun ( &temp528.env ,  ( & ( ( * (  bb3410 ) ) .f_buf ) ) ,  (  xs3412 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_array525 (   struct env56* env ,    struct ByteBuf_51 *  bb3420 ,    struct Array_45  xs3422 ) {
    struct envunion57  temp526 = ( (struct envunion57){ .fun = (  enum Unit_5  (*) (  struct env43*  ,    struct ByteBuf_51 *  ,    struct Array_45  ) )write_dash_bytes527 , .env =  env->envinst43 } );
    ( temp526.fun ( &temp526.env ,  (  bb3420 ) ,  (  xs3422 ) ) );
    return ( Unit_5_Unit );
}

static  struct Array_45   from_dash_listlike543 (    struct Array_45 *  self374 ) {
    return ( * (  self374 ) );
}

static  size_t   jne523 (   struct env73* env ,    struct ByteBuf_51 *  bb3512 ,    struct RegImm_362  ri3514 ) {
    struct RegImm_362  dref3515 = (  ri3514 );
    if ( dref3515.tag == RegImm_362_Imm4_t ) {
        struct envunion74  temp524 = ( (struct envunion74){ .fun = (  enum Unit_5  (*) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  ) )write_dash_array525 , .env =  env->envinst56 } );
        struct Array_45  temp544 = ( (struct Array_45) { ._arr = { (  from_dash_integral115 ( 15 ) ) , (  from_dash_integral115 ( 133 ) ) } } );
        ( temp524.fun ( &temp524.env ,  (  bb3512 ) ,  ( (  from_dash_listlike543 ) ( ( &temp544 ) ) ) ) );
        size_t  off3517 = ( (  count_dash_written_dash_bytes504 ) ( (  bb3512 ) ) );
        struct envunion75  temp545 = ( (struct envunion75){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array427 , .env =  env->envinst52 } );
        ( temp545.fun ( &temp545.env ,  (  bb3512 ) ,  ( dref3515 .stuff .RegImm_362_Imm4_s .field0 ) ) );
        return (  off3517 );
    }
    else {
        if ( true ) {
            ( (  todo_prime_444 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"jne" ) ,  ( 3 ) ) ) ) );
        }
    }
}

static  uint32_t   jump_dash_offset546 (    size_t  from3611 ,    size_t  to3613 ) {
    return (  op_dash_sub500 ( (  op_dash_sub500 ( ( (  size_dash_u32154 ) ( (  to3613 ) ) ) , ( (  size_dash_u32154 ) ( (  from3611 ) ) ) ) ) , (  from_dash_integral158 ( 6 ) ) ) );
}

struct envunion548 {
    size_t  (*fun) (  struct env359*  );
    struct env359 env;
};

static  void *   cast_dash_ptr555 (    struct Jump_13 * *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  size_t   size_dash_of556 (    struct Jump_13 *  x394 ) {
    return ( sizeof( (  x394 ) ) );
}

static  struct Jump_13 *   zeroed553 (  ) {
    struct Jump_13 *  temp554;
    struct Jump_13 *  x646 = (  temp554 );
    ( ( memset ) ( ( (  cast_dash_ptr555 ) ( ( & (  x646 ) ) ) ) ,  (  from_dash_integral30 ( 0 ) ) ,  ( (  size_dash_of556 ) ( (  x646 ) ) ) ) );
    return (  x646 );
}

static  struct Jump_13 *   null_dash_ptr552 (  ) {
    return ( (  zeroed553 ) ( ) );
}

static  struct Slice_12   empty551 (  ) {
    return ( (struct Slice_12) { .f_ptr = ( (  null_dash_ptr552 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_11   mk550 (    enum CAllocator_7  al2435 ) {
    struct Slice_12  elements2436 = ( (  empty551 ) ( ) );
    return ( (struct List_11) { .f_al = (  al2435 ) , .f_elements = (  elements2436 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_306   into_dash_iter558 (    struct StrViewIter_306  self1313 ) {
    return (  self1313 );
}

static  struct Array_39   uninit_dash_buf562 (  ) {
    struct Array_39  temp563;
    return (  temp563 );
}

static  int64_t   op_dash_add565 (    int64_t  l208 ,    int64_t  r210 ) {
    return ( (  l208 ) + (  r210 ) );
}

static  bool   eq560 (    struct Char_101  l1449 ,    struct Char_101  r1451 ) {
    if ( ( !  eq245 ( ( (  l1449 ) .f_num_dash_bytes ) , ( (  r1451 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Array_39  temp561 = ( (  uninit_dash_buf562 ) ( ) );
    struct Char_101  lc1452 = ( (  regularize147 ) ( (  l1449 ) ,  ( &temp561 ) ) );
    struct Array_39  temp564 = ( (  uninit_dash_buf562 ) ( ) );
    struct Char_101  rc1453 = ( (  regularize147 ) ( (  r1451 ) ,  ( &temp564 ) ) );
    int64_t  i1454 = (  from_dash_integral93 ( 0 ) );
    while ( (  cmp117 ( ( (size_t ) (  i1454 ) ) , ( (  lc1452 ) .f_num_dash_bytes ) ) == 0 ) ) {
        if ( ( !  eq109 ( ( * ( (uint8_t * ) ( ( (void*) ( (  lc1452 ) .f_ptr ) ) + (  i1454 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( (  rc1453 ) .f_ptr ) ) + (  i1454 ) ) ) ) ) ) ) {
            return ( false );
        }
        i1454 = (  op_dash_add565 ( (  i1454 ) , (  from_dash_integral93 ( 1 ) ) ) );
    }
    return ( true );
}

static  struct Char_101   from_dash_string566 (    uint8_t *  ptr95 ,    size_t  count97 ) {
    return ( (struct Char_101) { .f_ptr = (  ptr95 ) , .f_num_dash_bytes = (  count97 ) } );
}

struct RegImmOff_569 {
    enum {
        RegImmOff_569_RegImm_t,
        RegImmOff_569_RegOff4_t,
    } tag;
    union {
        struct {
            struct RegImm_362  field0;
        } RegImmOff_569_RegImm_s;
        struct {
            enum Reg_363  field0;
            struct Array_39  field1;
        } RegImmOff_569_RegOff4_s;
    } stuff;
};

static struct RegImmOff_569 RegImmOff_569_RegImm (  struct RegImm_362  field0 ) {
    return ( struct RegImmOff_569 ) { .tag = RegImmOff_569_RegImm_t, .stuff = { .RegImmOff_569_RegImm_s = { .field0 = field0 } } };
};

static struct RegImmOff_569 RegImmOff_569_RegOff4 (  enum Reg_363  field0 ,  struct Array_39  field1 ) {
    return ( struct RegImmOff_569 ) { .tag = RegImmOff_569_RegOff4_t, .stuff = { .RegImmOff_569_RegOff4_s = { .field0 = field0 ,  .field1 = field1 } } };
};

struct envunion568 {
    enum Unit_5  (*fun) (  struct env79*  ,    struct ByteBuf_51 *  ,    struct RegImmOff_569  );
    struct env79 env;
};

static  enum Unit_5   inc570 (   struct env79* env ,    struct ByteBuf_51 *  bb3536 ,    struct RegImmOff_569  rio3538 ) {
    struct RegImmOff_569  dref3539 = (  rio3538 );
    if ( dref3539.tag == RegImmOff_569_RegOff4_t ) {
        struct envunion82  temp571 = ( (struct envunion82){ .fun = (  enum Unit_5  (*) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  ) )write_dash_array525 , .env =  env->envinst56 } );
        struct Array_45  temp572 = ( (struct Array_45) { ._arr = { (  from_dash_integral115 ( 255 ) ) , (  from_dash_integral115 ( 133 ) ) } } );
        ( temp571.fun ( &temp571.env ,  (  bb3536 ) ,  ( (  from_dash_listlike543 ) ( ( &temp572 ) ) ) ) );
        struct envunion80  temp573 = ( (struct envunion80){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array427 , .env =  env->envinst52 } );
        ( temp573.fun ( &temp573.env ,  (  bb3536 ) ,  ( dref3539 .stuff .RegImmOff_569_RegOff4_s .field1 ) ) );
    }
    else {
        if ( dref3539.tag == RegImmOff_569_RegImm_t ) {
            struct RegImm_362  dref3543 = ( dref3539 .stuff .RegImmOff_569_RegImm_s .field0 );
            if ( dref3543.tag == RegImm_362_Reg_t &&  dref3543 .stuff .RegImm_362_Reg_s .field0 == Reg_363_RBX ) {
                struct envunion81  temp574 = ( (struct envunion81){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array477 , .env =  env->envinst54 } );
                struct Array_42  temp575 = ( (struct Array_42) { ._arr = { (  from_dash_integral115 ( 72 ) ) , (  from_dash_integral115 ( 255 ) ) , (  from_dash_integral115 ( 195 ) ) } } );
                ( temp574.fun ( &temp574.env ,  (  bb3536 ) ,  ( (  from_dash_listlike495 ) ( ( &temp575 ) ) ) ) );
            }
            else {
                if ( true ) {
                    ( (  todo_prime_444 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"inc" ) ,  ( 3 ) ) ) ) );
                }
            }
        }
    }
    return ( Unit_5_Unit );
}

struct envunion577 {
    enum Unit_5  (*fun) (  struct env83*  ,    struct ByteBuf_51 *  ,    enum Reg_363  );
    struct env83 env;
};

struct envunion579 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct envunion582 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct envunion585 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  );
    struct env64 env;
};

struct envunion587 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  );
    struct env64 env;
};

struct envunion589 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct envunion592 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  );
    struct env64 env;
};

struct envunion594 {
    enum Unit_5  (*fun) (  struct env60*  ,    struct ByteBuf_51 *  );
    struct env60 env;
};

static  enum Unit_5   syscall595 (   struct env60* env ,    struct ByteBuf_51 *  bb3456 ) {
    struct envunion61  temp596 = ( (struct envunion61){ .fun = (  enum Unit_5  (*) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  ) )write_dash_array525 , .env =  env->envinst56 } );
    struct Array_45  temp597 = ( (struct Array_45) { ._arr = { (  from_dash_integral115 ( 15 ) ) , (  from_dash_integral115 ( 5 ) ) } } );
    ( temp596.fun ( &temp596.env ,  (  bb3456 ) ,  ( (  from_dash_listlike543 ) ( ( &temp597 ) ) ) ) );
    return ( Unit_5_Unit );
}

struct envunion599 {
    enum Unit_5  (*fun) (  struct env58*  ,    struct ByteBuf_51 *  ,    struct Array_48  );
    struct env58 env;
};

struct env606 {
    struct List_6 *  list2512;
    struct env3 envinst3;
};

struct envunion607 {
    enum Unit_5  (*fun) (  struct env606*  ,    uint8_t  );
    struct env606 env;
};

struct ArrayIter_608 {
    struct Array_48  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_608   into_dash_iter610 (    struct Array_48  self2100 ) {
    return ( (struct ArrayIter_608) { .f_backing = (  self2100 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint8_t *   cast_dash_ptr614 (    struct Array_48 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  uint8_t *   get_dash_ptr613 (    struct Array_48 *  arr2024 ,    size_t  i2027 ) {
    if ( ( (  cmp117 ( (  i2027 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp117 ( (  i2027 ) , ( (size_t ) ( 7 ) ) ) != 0 ) ) ) {
        ( (  panic381 ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_383_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2027 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 7 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2028 = ( ( (  cast_dash_ptr614 ) ( (  arr2024 ) ) ) );
    return ( (  offset_dash_ptr106 ) ( (  p2028 ) ,  ( (int64_t ) (  i2027 ) ) ) );
}

static  uint8_t   get612 (    struct Array_48 *  arr2031 ,    size_t  i2034 ) {
    return ( * ( (  get_dash_ptr613 ) ( (  arr2031 ) ,  (  i2034 ) ) ) );
}

static  struct Maybe_237   next611 (    struct ArrayIter_608 *  self2107 ) {
    if ( (  cmp117 ( ( ( * (  self2107 ) ) .f_cur ) , ( (size_t ) ( 7 ) ) ) != 0 ) ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    uint8_t  e2109 = ( (  get612 ) ( ( & ( ( * (  self2107 ) ) .f_backing ) ) ,  ( ( * (  self2107 ) ) .f_cur ) ) );
    (*  self2107 ) .f_cur = (  op_dash_add119 ( ( ( * (  self2107 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_237_Just ) ( (  e2109 ) ) );
}

static  enum Unit_5   for_dash_each605 (    struct Array_48  iterable1097 ,   struct envunion607  fun1099 ) {
    struct ArrayIter_608  temp609 = ( (  into_dash_iter610 ) ( (  iterable1097 ) ) );
    struct ArrayIter_608 *  it1100 = ( &temp609 );
    while ( ( true ) ) {
        struct Maybe_237  dref1101 = ( (  next611 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_237_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_237_Just_t ) {
                struct envunion607  temp615 = (  fun1099 );
                ( temp615.fun ( &temp615.env ,  ( dref1101 .stuff .Maybe_237_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam616 (   struct env606* env ,    uint8_t  x2516 ) {
    struct envunion20  temp617 = ( (struct envunion20){ .fun = (  enum Unit_5  (*) (  struct env3*  ,    struct List_6 *  ,    uint8_t  ) )add242 , .env =  env->envinst3 } );
    return ( temp617.fun ( &temp617.env ,  ( env->list2512 ) ,  (  x2516 ) ) );
}

static  enum Unit_5   add_dash_all604 (   struct env25* env ,    struct List_6 *  list2512 ,    struct Array_48  it2514 ) {
    struct env606 envinst606 = {
        .list2512 =  list2512 ,
        .envinst3 = env->envinst3 ,
    };
    ( (  for_dash_each605 ) ( (  it2514 ) ,  ( (struct envunion607){ .fun = (  enum Unit_5  (*) (  struct env606*  ,    uint8_t  ) )lam616 , .env =  envinst606 } ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_bytes602 (   struct env46* env ,    struct ByteBuf_51 *  bb3410 ,    struct Array_48  xs3412 ) {
    struct envunion47  temp603 = ( (struct envunion47){ .fun = (  enum Unit_5  (*) (  struct env25*  ,    struct List_6 *  ,    struct Array_48  ) )add_dash_all604 , .env =  env->envinst25 } );
    ( temp603.fun ( &temp603.env ,  ( & ( ( * (  bb3410 ) ) .f_buf ) ) ,  (  xs3412 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_array600 (   struct env58* env ,    struct ByteBuf_51 *  bb3420 ,    struct Array_48  xs3422 ) {
    struct envunion59  temp601 = ( (struct envunion59){ .fun = (  enum Unit_5  (*) (  struct env46*  ,    struct ByteBuf_51 *  ,    struct Array_48  ) )write_dash_bytes602 , .env =  env->envinst46 } );
    ( temp601.fun ( &temp601.env ,  (  bb3420 ) ,  (  xs3422 ) ) );
    return ( Unit_5_Unit );
}

static  struct Array_48   from_dash_listlike618 (    struct Array_48 *  self374 ) {
    return ( * (  self374 ) );
}

struct envunion621 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  );
    struct env64 env;
};

struct envunion623 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  );
    struct env64 env;
};

struct envunion625 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct envunion628 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  );
    struct env64 env;
};

struct envunion630 {
    enum Unit_5  (*fun) (  struct env60*  ,    struct ByteBuf_51 *  );
    struct env60 env;
};

struct envunion632 {
    enum Unit_5  (*fun) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  );
    struct env52 env;
};

struct envunion635 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct envunion638 {
    enum Unit_5  (*fun) (  struct env71*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  );
    struct env71 env;
};

struct envunion640 {
    size_t  (*fun) (  struct env359*  );
    struct env359 env;
};

struct envunion642 {
    size_t  (*fun) (  struct env76*  ,    struct ByteBuf_51 *  ,    struct RegImm_362  );
    struct env76 env;
};

static  size_t   je643 (   struct env76* env ,    struct ByteBuf_51 *  bb3520 ,    struct RegImm_362  ri3522 ) {
    struct RegImm_362  dref3523 = (  ri3522 );
    if ( dref3523.tag == RegImm_362_Imm4_t ) {
        struct envunion77  temp644 = ( (struct envunion77){ .fun = (  enum Unit_5  (*) (  struct env56*  ,    struct ByteBuf_51 *  ,    struct Array_45  ) )write_dash_array525 , .env =  env->envinst56 } );
        struct Array_45  temp645 = ( (struct Array_45) { ._arr = { (  from_dash_integral115 ( 15 ) ) , (  from_dash_integral115 ( 132 ) ) } } );
        ( temp644.fun ( &temp644.env ,  (  bb3520 ) ,  ( (  from_dash_listlike543 ) ( ( &temp645 ) ) ) ) );
        size_t  off3525 = ( (  count_dash_written_dash_bytes504 ) ( (  bb3520 ) ) );
        struct envunion78  temp646 = ( (struct envunion78){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array427 , .env =  env->envinst52 } );
        ( temp646.fun ( &temp646.env ,  (  bb3520 ) ,  ( dref3523 .stuff .RegImm_362_Imm4_s .field0 ) ) );
        return (  off3525 );
    }
    else {
        if ( true ) {
            ( (  todo_prime_444 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"je" ) ,  ( 2 ) ) ) ) );
        }
    }
}

struct envunion648 {
    size_t  (*fun) (  struct env359*  );
    struct env359 env;
};

struct envunion650 {
    enum Unit_5  (*fun) (  struct env9*  ,    struct List_11 *  ,    struct Jump_13  );
    struct env9 env;
};

struct TypeSize_656 {
    size_t  f_size;
};

static  struct TypeSize_656   get_dash_typesize655 (  ) {
    struct Jump_13  temp657;
    return ( (struct TypeSize_656) { .f_size = ( sizeof( ( (  temp657 ) ) ) ) } );
}

static  struct Jump_13 *   cast_dash_ptr658 (    void *  p403 ) {
    return ( (struct Jump_13 * ) (  p403 ) );
}

static  struct Slice_12   allocate654 (    enum CAllocator_7  dref2366 ,    size_t  count2368 ) {
    if (!(  dref2366 == CAllocator_7_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2369 = ( ( ( (  get_dash_typesize655 ) ( ) ) ) .f_size );
    struct Jump_13 *  ptr2370 = ( (  cast_dash_ptr658 ) ( ( ( malloc ) ( (  op_dash_mul203 ( (  size2369 ) , (  count2368 ) ) ) ) ) ) );
    return ( (struct Slice_12) { .f_ptr = (  ptr2370 ) , .f_count = (  count2368 ) } );
}

struct env659 {
    ;
    struct Slice_12  new_dash_slice2452;
    ;
};

struct Tuple2_661 {
    struct Jump_13  field0;
    int32_t  field1;
};

static struct Tuple2_661 Tuple2_661_Tuple2 (  struct Jump_13  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_661 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion660 {
    enum Unit_5  (*fun) (  struct env659*  ,    struct Tuple2_661  );
    struct env659 env;
};

static  struct Jump_13 *   offset_dash_ptr665 (    struct Jump_13 *  x382 ,    int64_t  count384 ) {
    struct Jump_13  temp666;
    return ( (struct Jump_13 * ) ( ( (void*) (  x382 ) ) + (  op_dash_mul91 ( (  count384 ) , ( (int64_t ) ( sizeof( ( (  temp666 ) ) ) ) ) ) ) ) );
}

static  struct Jump_13 *   get_dash_ptr664 (    struct Slice_12  slice2168 ,    size_t  i2170 ) {
    if ( ( (  cmp117 ( (  i2170 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp117 ( (  i2170 ) , ( (  slice2168 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic133 ) ( ( ( StrConcat_129_StrConcat ) ( ( ( StrConcat_130_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2170 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2168 ) .f_count ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Jump_13 *  elem_dash_ptr2171 = ( (  offset_dash_ptr665 ) ( ( (  slice2168 ) .f_ptr ) ,  ( (  size_dash_i64108 ) ( (  i2170 ) ) ) ) );
    return (  elem_dash_ptr2171 );
}

static  enum Unit_5   set663 (    struct Slice_12  slice2185 ,    size_t  i2187 ,    struct Jump_13  x2189 ) {
    struct Jump_13 *  ep2190 = ( (  get_dash_ptr664 ) ( (  slice2185 ) ,  (  i2187 ) ) );
    (*  ep2190 ) = (  x2189 );
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam662 (   struct env659* env ,    struct Tuple2_661  dref2453 ) {
    return ( (  set663 ) ( ( env->new_dash_slice2452 ) ,  ( (  i32_dash_size204 ) ( ( dref2453 .field1 ) ) ) ,  ( dref2453 .field0 ) ) );
}

struct SliceIter_669 {
    struct Slice_12  f_slice;
    size_t  f_current_dash_offset;
};

struct Zip_668 {
    struct SliceIter_669  f_left_dash_it;
    struct FromIter_252  f_right_dash_it;
};

static  struct Zip_668   into_dash_iter671 (    struct Zip_668  self934 ) {
    return (  self934 );
}

struct Maybe_672 {
    enum {
        Maybe_672_None_t,
        Maybe_672_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_661  field0;
        } Maybe_672_Just_s;
    } stuff;
};

static struct Maybe_672 Maybe_672_Just (  struct Tuple2_661  field0 ) {
    return ( struct Maybe_672 ) { .tag = Maybe_672_Just_t, .stuff = { .Maybe_672_Just_s = { .field0 = field0 } } };
};

struct Maybe_674 {
    enum {
        Maybe_674_None_t,
        Maybe_674_Just_t,
    } tag;
    union {
        struct {
            struct Jump_13  field0;
        } Maybe_674_Just_s;
    } stuff;
};

static struct Maybe_674 Maybe_674_Just (  struct Jump_13  field0 ) {
    return ( struct Maybe_674 ) { .tag = Maybe_674_Just_t, .stuff = { .Maybe_674_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_674   next675 (    struct SliceIter_669 *  self2254 ) {
    size_t  off2255 = ( ( * (  self2254 ) ) .f_current_dash_offset );
    if ( (  cmp117 ( (  op_dash_add119 ( (  off2255 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2254 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_674) { .tag = Maybe_674_None_t } );
    }
    struct Jump_13  elem2256 = ( * ( (  offset_dash_ptr665 ) ( ( ( ( * (  self2254 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64108 ) ( (  off2255 ) ) ) ) ) );
    (*  self2254 ) .f_current_dash_offset = (  op_dash_add119 ( (  off2255 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_674_Just ) ( (  elem2256 ) ) );
}

static  struct Maybe_672   next673 (    struct Zip_668 *  self937 ) {
    struct Zip_668  copy938 = ( * (  self937 ) );
    while ( ( true ) ) {
        struct Maybe_674  dref939 = ( (  next675 ) ( ( & ( (  copy938 ) .f_left_dash_it ) ) ) );
        if ( dref939.tag == Maybe_674_None_t ) {
            return ( (struct Maybe_672) { .tag = Maybe_672_None_t } );
        }
        else {
            if ( dref939.tag == Maybe_674_Just_t ) {
                struct Maybe_257  dref941 = ( (  next258 ) ( ( & ( (  copy938 ) .f_right_dash_it ) ) ) );
                if ( dref941.tag == Maybe_257_None_t ) {
                    return ( (struct Maybe_672) { .tag = Maybe_672_None_t } );
                }
                else {
                    if ( dref941.tag == Maybe_257_Just_t ) {
                        ( (  next675 ) ( ( & ( ( * (  self937 ) ) .f_left_dash_it ) ) ) );
                        ( (  next258 ) ( ( & ( ( * (  self937 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_672_Just ) ( ( ( Tuple2_661_Tuple2 ) ( ( dref939 .stuff .Maybe_674_Just_s .field0 ) ,  ( dref941 .stuff .Maybe_257_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_5   for_dash_each667 (    struct Zip_668  iterable1097 ,   struct envunion660  fun1099 ) {
    struct Zip_668  temp670 = ( (  into_dash_iter671 ) ( (  iterable1097 ) ) );
    struct Zip_668 *  it1100 = ( &temp670 );
    while ( ( true ) ) {
        struct Maybe_672  dref1101 = ( (  next673 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_672_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_672_Just_t ) {
                struct envunion660  temp676 = (  fun1099 );
                ( temp676.fun ( &temp676.env ,  ( dref1101 .stuff .Maybe_672_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  struct SliceIter_669   into_dash_iter678 (    struct Slice_12  self2248 ) {
    return ( (struct SliceIter_669) { .f_slice = (  self2248 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Zip_668   zip677 (    struct Slice_12  left945 ,    struct FromIter_252  right947 ) {
    struct SliceIter_669  left_dash_it948 = ( (  into_dash_iter678 ) ( (  left945 ) ) );
    struct FromIter_252  right_dash_it949 = ( (  into_dash_iter262 ) ( (  right947 ) ) );
    return ( (struct Zip_668) { .f_left_dash_it = (  left_dash_it948 ) , .f_right_dash_it = (  right_dash_it949 ) } );
}

static  void *   cast_dash_ptr680 (    struct Jump_13 *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  enum Unit_5   free679 (    enum CAllocator_7  dref2372 ,    struct Slice_12  slice2374 ) {
    if (!(  dref2372 == CAllocator_7_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr680 ) ( ( (  slice2374 ) .f_ptr ) ) ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   grow_dash_if_dash_full653 (   struct env2* env ,    struct List_11 *  list2451 ) {
    if ( (  eq245 ( ( ( * (  list2451 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list2451 ) .f_elements = ( (  allocate654 ) ( ( ( * (  list2451 ) ) .f_al ) ,  ( env->starting_dash_size2446 ) ) );
    } else {
        if ( (  eq245 ( ( ( * (  list2451 ) ) .f_count ) , ( ( ( * (  list2451 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_12  new_dash_slice2452 = ( (  allocate654 ) ( ( ( * (  list2451 ) ) .f_al ) ,  (  op_dash_mul203 ( ( ( * (  list2451 ) ) .f_count ) , ( env->growth_dash_factor2447 ) ) ) ) );
            struct env659 envinst659 = {
                .new_dash_slice2452 =  new_dash_slice2452 ,
            };
            struct envunion660  fun2456 = ( (struct envunion660){ .fun = (  enum Unit_5  (*) (  struct env659*  ,    struct Tuple2_661  ) )lam662 , .env =  envinst659 } );
            ( (  for_dash_each667 ) ( ( (  zip677 ) ( ( ( * (  list2451 ) ) .f_elements ) ,  ( (  from263 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) ,  (  fun2456 ) ) );
            ( (  free679 ) ( ( ( * (  list2451 ) ) .f_al ) ,  ( ( * (  list2451 ) ) .f_elements ) ) );
            (*  list2451 ) .f_elements = (  new_dash_slice2452 );
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   add651 (   struct env9* env ,    struct List_11 *  list2459 ,    struct Jump_13  elem2461 ) {
    struct envunion10  temp652 = ( (struct envunion10){ .fun = (  enum Unit_5  (*) (  struct env2*  ,    struct List_11 *  ) )grow_dash_if_dash_full653 , .env =  env->envinst2 } );
    ( temp652.fun ( &temp652.env ,  (  list2459 ) ) );
    ( (  set663 ) ( ( ( * (  list2459 ) ) .f_elements ) ,  ( ( * (  list2459 ) ) .f_count ) ,  (  elem2461 ) ) );
    (*  list2459 ) .f_count = (  op_dash_add119 ( ( ( * (  list2459 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_5_Unit );
}

struct envunion682 {
    enum Unit_5  (*fun) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  );
    struct env54 env;
};

struct envunion685 {
    enum Unit_5  (*fun) (  struct env71*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  );
    struct env71 env;
};

static  enum Unit_5   print_dash_str689 (    struct StrConcat_399  self1300 ) {
    struct StrConcat_399  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str138 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str138 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str688 (    struct StrConcat_401  self1300 ) {
    struct StrConcat_401  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str689 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic687 (    struct StrView_95  errmsg1341 ) {
    ( (  print_dash_str688 ) ( ( ( StrConcat_401_StrConcat ) ( ( ( StrConcat_399_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1341 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

static  struct Jump_13   undefined690 (  ) {
    struct Jump_13  temp691;
    return (  temp691 );
}

static  struct Jump_13   or_dash_fail686 (    struct Maybe_674  x1351 ,    struct StrView_95  errmsg1353 ) {
    struct Maybe_674  dref1354 = (  x1351 );
    if ( dref1354.tag == Maybe_674_None_t ) {
        ( (  panic687 ) ( (  errmsg1353 ) ) );
        return ( (  undefined690 ) ( ) );
    }
    else {
        if ( dref1354.tag == Maybe_674_Just_t ) {
            return ( dref1354 .stuff .Maybe_674_Just_s .field0 );
        }
    }
}

struct envunion693 {
    struct Maybe_674  (*fun) (  struct env17*  ,    struct List_11 *  );
    struct env17 env;
};

static  struct Jump_13 *   get_dash_ptr697 (    struct List_11 *  list2405 ,    size_t  i2407 ) {
    if ( ( (  cmp117 ( (  i2407 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp117 ( (  i2407 ) , ( ( * (  list2405 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic133 ) ( ( ( StrConcat_129_StrConcat ) ( ( ( StrConcat_130_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Access to list at index " ) ,  ( 24 ) ) ) ,  (  i2407 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2405 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    return ( (  get_dash_ptr664 ) ( ( ( * (  list2405 ) ) .f_elements ) ,  (  i2407 ) ) );
}

static  struct Jump_13   get696 (    struct List_11 *  list2415 ,    size_t  i2417 ) {
    return ( * ( (  get_dash_ptr697 ) ( (  list2415 ) ,  (  i2417 ) ) ) );
}

static  size_t   size698 (    struct List_11 *  l2442 ) {
    return ( ( * (  l2442 ) ) .f_count );
}

static  struct Maybe_674   last695 (    struct List_11 *  list2502 ) {
    if ( (  eq245 ( ( ( * (  list2502 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_674) { .tag = Maybe_674_None_t } );
    } else {
        return ( ( Maybe_674_Just ) ( ( (  get696 ) ( (  list2502 ) ,  (  op_dash_sub94 ( ( (  size698 ) ( (  list2502 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) );
    }
}

struct StrConcat_706 {
    struct StrConcat_132  field0;
    struct Char_101  field1;
};

static struct StrConcat_706 StrConcat_706_StrConcat (  struct StrConcat_132  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_706 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_705 {
    struct StrConcat_706  field0;
    size_t  field1;
};

static struct StrConcat_705 StrConcat_705_StrConcat (  struct StrConcat_706  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_705 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_704 {
    struct StrConcat_705  field0;
    struct Char_101  field1;
};

static struct StrConcat_704 StrConcat_704_StrConcat (  struct StrConcat_705  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_704 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_709 {
    struct StrView_95  field0;
    struct StrConcat_704  field1;
};

static struct StrConcat_709 StrConcat_709_StrConcat (  struct StrView_95  field0 ,  struct StrConcat_704  field1 ) {
    return ( struct StrConcat_709 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_708 {
    struct StrConcat_709  field0;
    struct Char_101  field1;
};

static struct StrConcat_708 StrConcat_708_StrConcat (  struct StrConcat_709  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_708 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_5   print_dash_str713 (    struct StrConcat_706  self1300 ) {
    struct StrConcat_706  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str143 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str712 (    struct StrConcat_705  self1300 ) {
    struct StrConcat_705  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str713 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str144 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str711 (    struct StrConcat_704  self1300 ) {
    struct StrConcat_704  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str712 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str710 (    struct StrConcat_709  self1300 ) {
    struct StrConcat_709  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str138 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str711 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str707 (    struct StrConcat_708  self1300 ) {
    struct StrConcat_708  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str710 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic703 (    struct StrConcat_704  errmsg1341 ) {
    ( (  print_dash_str707 ) ( ( ( StrConcat_708_StrConcat ) ( ( ( StrConcat_709_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1341 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

struct Drop_715 {
    struct Zip_668  field0;
    size_t  field1;
};

static struct Drop_715 Drop_715_Drop (  struct Zip_668  field0 ,  size_t  field1 ) {
    return ( struct Drop_715 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env716 {
    struct List_11 *  list2472;
    ;
    ;
    ;
    size_t  num_dash_elems2477;
};

struct envunion717 {
    enum Unit_5  (*fun) (  struct env716*  ,    struct Tuple2_661  );
    struct env716 env;
};

static  struct Drop_715   into_dash_iter719 (    struct Drop_715  self851 ) {
    return (  self851 );
}

static  struct Maybe_672   next720 (    struct Drop_715 *  dref853 ) {
    while ( (  cmp117 ( ( (* dref853 ) .field1 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        ( (  next673 ) ( ( & ( (* dref853 ) .field0 ) ) ) );
        (* dref853 ) .field1 = (  op_dash_sub94 ( ( (* dref853 ) .field1 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    return ( (  next673 ) ( ( & ( (* dref853 ) .field0 ) ) ) );
}

static  enum Unit_5   for_dash_each714 (    struct Drop_715  iterable1097 ,   struct envunion717  fun1099 ) {
    struct Drop_715  temp718 = ( (  into_dash_iter719 ) ( (  iterable1097 ) ) );
    struct Drop_715 *  it1100 = ( &temp718 );
    while ( ( true ) ) {
        struct Maybe_672  dref1101 = ( (  next720 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_672_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_672_Just_t ) {
                struct envunion717  temp721 = (  fun1099 );
                ( temp721.fun ( &temp721.env ,  ( dref1101 .stuff .Maybe_672_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  struct Drop_715   drop722 (    struct Zip_668  iterable858 ,    size_t  i860 ) {
    struct Zip_668  it861 = ( (  into_dash_iter671 ) ( (  iterable858 ) ) );
    return ( ( Drop_715_Drop ) ( (  it861 ) ,  (  i860 ) ) );
}

static  struct Slice_12   subslice725 (    struct Slice_12  slice2202 ,    size_t  from2204 ,    size_t  to2206 ) {
    struct Jump_13 *  begin_dash_ptr2207 = ( (  offset_dash_ptr665 ) ( ( (  slice2202 ) .f_ptr ) ,  ( (  size_dash_i64108 ) ( (  from2204 ) ) ) ) );
    if ( ( (  cmp117 ( (  from2204 ) , (  to2206 ) ) != 0 ) || (  cmp117 ( (  from2204 ) , ( (  slice2202 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr2207 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2208 = (  op_dash_sub94 ( ( (  min210 ) ( (  to2206 ) ,  ( (  slice2202 ) .f_count ) ) ) , (  from2204 ) ) );
    return ( (struct Slice_12) { .f_ptr = (  begin_dash_ptr2207 ) , .f_count = (  count2208 ) } );
}

static  struct SliceIter_669   into_dash_iter724 (    struct List_11  self2432 ) {
    return ( (  into_dash_iter678 ) ( ( (  subslice725 ) ( ( (  self2432 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2432 ) .f_count ) ) ) ) );
}

static  struct Zip_668   zip723 (    struct List_11  left945 ,    struct FromIter_252  right947 ) {
    struct SliceIter_669  left_dash_it948 = ( (  into_dash_iter724 ) ( (  left945 ) ) );
    struct FromIter_252  right_dash_it949 = ( (  into_dash_iter262 ) ( (  right947 ) ) );
    return ( (struct Zip_668) { .f_left_dash_it = (  left_dash_it948 ) , .f_right_dash_it = (  right_dash_it949 ) } );
}

static  enum Unit_5   set727 (    struct List_11 *  list2425 ,    size_t  i2427 ,    struct Jump_13  elem2429 ) {
    if ( ( (  cmp117 ( (  i2427 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp117 ( (  i2427 ) , ( ( * (  list2425 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic133 ) ( ( ( StrConcat_129_StrConcat ) ( ( ( StrConcat_130_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2427 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2425 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set663 ) ( ( ( * (  list2425 ) ) .f_elements ) ,  (  i2427 ) ,  (  elem2429 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam726 (   struct env716* env ,    struct Tuple2_661  dref2478 ) {
    return ( (  set727 ) ( ( env->list2472 ) ,  (  op_dash_sub94 ( ( (  i32_dash_size204 ) ( ( dref2478 .field1 ) ) ) , ( env->num_dash_elems2477 ) ) ) ,  ( dref2478 .field0 ) ) );
}

struct StrConcat_730 {
    struct StrConcat_130  field0;
    struct StrView_95  field1;
};

static struct StrConcat_730 StrConcat_730_StrConcat (  struct StrConcat_130  field0 ,  struct StrView_95  field1 ) {
    return ( struct StrConcat_730 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_733 {
    struct StrView_95  field0;
    struct StrConcat_730  field1;
};

static struct StrConcat_733 StrConcat_733_StrConcat (  struct StrView_95  field0 ,  struct StrConcat_730  field1 ) {
    return ( struct StrConcat_733 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_732 {
    struct StrConcat_733  field0;
    struct Char_101  field1;
};

static struct StrConcat_732 StrConcat_732_StrConcat (  struct StrConcat_733  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_732 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_5   print_dash_str735 (    struct StrConcat_730  self1300 ) {
    struct StrConcat_730  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str141 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str138 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str734 (    struct StrConcat_733  self1300 ) {
    struct StrConcat_733  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str138 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str735 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str731 (    struct StrConcat_732  self1300 ) {
    struct StrConcat_732  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str734 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic729 (    struct StrConcat_730  errmsg1341 ) {
    ( (  print_dash_str731 ) ( ( ( StrConcat_732_StrConcat ) ( ( ( StrConcat_733_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1341 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

struct env737 {
    ;
    ;
    struct Slice_12  dest2279;
};

struct envunion738 {
    enum Unit_5  (*fun) (  struct env737*  ,    struct Tuple2_661  );
    struct env737 env;
};

static  enum Unit_5   for_dash_each736 (    struct Zip_668  iterable1097 ,   struct envunion738  fun1099 ) {
    struct Zip_668  temp739 = ( (  into_dash_iter671 ) ( (  iterable1097 ) ) );
    struct Zip_668 *  it1100 = ( &temp739 );
    while ( ( true ) ) {
        struct Maybe_672  dref1101 = ( (  next673 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_672_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_672_Just_t ) {
                struct envunion738  temp740 = (  fun1099 );
                ( temp740.fun ( &temp740.env ,  ( dref1101 .stuff .Maybe_672_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam741 (   struct env737* env ,    struct Tuple2_661  dref2280 ) {
    return ( (  set663 ) ( ( env->dest2279 ) ,  ( (  i32_dash_size204 ) ( ( dref2280 .field1 ) ) ) ,  ( dref2280 .field0 ) ) );
}

static  enum Unit_5   copy_dash_to728 (    struct Slice_12  src2277 ,    struct Slice_12  dest2279 ) {
    if ( (  cmp117 ( ( (  src2277 ) .f_count ) , ( (  dest2279 ) .f_count ) ) == 2 ) ) {
        ( (  panic729 ) ( ( ( StrConcat_730_StrConcat ) ( ( ( StrConcat_130_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2277 ) .f_count ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2279 ) .f_count ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env737 envinst737 = {
        .dest2279 =  dest2279 ,
    };
    ( (  for_dash_each736 ) ( ( (  zip677 ) ( (  src2277 ) ,  ( (  from263 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) ,  ( (struct envunion738){ .fun = (  enum Unit_5  (*) (  struct env737*  ,    struct Tuple2_661  ) )lam741 , .env =  envinst737 } ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   remove_dash_range702 (   struct env14* env ,    struct List_11 *  list2472 ,    size_t  from2474 ,    size_t  to_dash_excl2476 ) {
    if ( (  cmp117 ( (  to_dash_excl2476 ) , (  from2474 ) ) == 0 ) ) {
        ( (  panic703 ) ( ( ( StrConcat_704_StrConcat ) ( ( ( StrConcat_705_StrConcat ) ( ( ( StrConcat_706_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"(List.remove-range) Negative range " ) ,  ( 35 ) ) ) ,  (  from2474 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)":" ) ,  ( 1 ) ) ) ) ) ,  (  to_dash_excl2476 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp117 ( (  from2474 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        ( (  panic133 ) ( ( ( StrConcat_129_StrConcat ) ( ( ( StrConcat_130_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"(List.remove-range) Index too small (" ) ,  ( 37 ) ) ) ,  (  from2474 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2472 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    if ( (  cmp117 ( (  to_dash_excl2476 ) , ( ( * (  list2472 ) ) .f_count ) ) == 2 ) ) {
        ( (  panic133 ) ( ( ( StrConcat_129_StrConcat ) ( ( ( StrConcat_130_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"(List.remove-range) Index too large (" ) ,  ( 37 ) ) ) ,  (  to_dash_excl2476 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)") (count: " ) ,  ( 10 ) ) ) ) ) ,  ( ( * (  list2472 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    size_t  num_dash_elems2477 = (  op_dash_sub94 ( (  to_dash_excl2476 ) , (  from2474 ) ) );
    struct env716 envinst716 = {
        .list2472 =  list2472 ,
        .num_dash_elems2477 =  num_dash_elems2477 ,
    };
    ( (  for_dash_each714 ) ( ( (  drop722 ) ( ( (  zip723 ) ( ( * (  list2472 ) ) ,  ( (  from263 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) ,  (  op_dash_add119 ( (  from2474 ) , (  num_dash_elems2477 ) ) ) ) ) ,  ( (struct envunion717){ .fun = (  enum Unit_5  (*) (  struct env716*  ,    struct Tuple2_661  ) )lam726 , .env =  envinst716 } ) ) );
    (*  list2472 ) .f_count = (  op_dash_sub94 ( ( ( * (  list2472 ) ) .f_count ) , (  num_dash_elems2477 ) ) );
    size_t  capacity2481 = ( ( ( * (  list2472 ) ) .f_elements ) .f_count );
    if ( (  cmp117 ( (  op_dash_mul203 ( ( ( * (  list2472 ) ) .f_count ) , ( env->shrink_dash_factor2448 ) ) ) , (  capacity2481 ) ) == 0 ) ) {
        if ( (  eq245 ( ( ( * (  list2472 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
            ( (  free679 ) ( ( ( * (  list2472 ) ) .f_al ) ,  ( ( * (  list2472 ) ) .f_elements ) ) );
            (*  list2472 ) .f_elements = ( (  empty551 ) ( ) );
            return ( Unit_5_Unit );
        }
        size_t  new_dash_size2482 = (  op_dash_mul203 ( (  op_dash_add119 ( (  op_dash_div153 ( ( ( * (  list2472 ) ) .f_count ) , ( env->shrink_dash_factor2448 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( env->shrink_dash_factor2448 ) ) );
        struct Slice_12  new_dash_slice2483 = ( (  allocate654 ) ( ( ( * (  list2472 ) ) .f_al ) ,  (  new_dash_size2482 ) ) );
        ( (  copy_dash_to728 ) ( ( (  subslice725 ) ( ( ( * (  list2472 ) ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( * (  list2472 ) ) .f_count ) ) ) ,  (  new_dash_slice2483 ) ) );
        ( (  free679 ) ( ( ( * (  list2472 ) ) .f_al ) ,  ( ( * (  list2472 ) ) .f_elements ) ) );
        (*  list2472 ) .f_elements = (  new_dash_slice2483 );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   remove700 (   struct env15* env ,    struct List_11 *  list2486 ,    size_t  i2488 ) {
    struct envunion16  temp701 = ( (struct envunion16){ .fun = (  enum Unit_5  (*) (  struct env14*  ,    struct List_11 *  ,    size_t  ,    size_t  ) )remove_dash_range702 , .env =  env->envinst14 } );
    ( temp701.fun ( &temp701.env ,  (  list2486 ) ,  (  i2488 ) ,  (  op_dash_add119 ( (  i2488 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return ( Unit_5_Unit );
}

static  struct Maybe_674   pop694 (   struct env17* env ,    struct List_11 *  list2505 ) {
    if ( (  eq245 ( ( ( * (  list2505 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        ( (  panic687 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"List.pop() called on empty list." ) ,  ( 32 ) ) ) ) );
    }
    struct Maybe_674  last_dash_elem2506 = ( (  last695 ) ( (  list2505 ) ) );
    struct envunion18  temp699 = ( (struct envunion18){ .fun = (  enum Unit_5  (*) (  struct env15*  ,    struct List_11 *  ,    size_t  ) )remove700 , .env =  env->envinst15 } );
    ( temp699.fun ( &temp699.env ,  (  list2505 ) ,  (  op_dash_sub94 ( ( ( * (  list2505 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    return (  last_dash_elem2506 );
}

struct envunion743 {
    size_t  (*fun) (  struct env73*  ,    struct ByteBuf_51 *  ,    struct RegImm_362  );
    struct env73 env;
};

struct envunion745 {
    size_t  (*fun) (  struct env359*  );
    struct env359 env;
};

static  uint8_t *   cast_dash_ptr748 (    uint32_t *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

struct TypeSize_751 {
    size_t  f_size;
};

static  struct TypeSize_751   get_dash_typesize750 (  ) {
    uint32_t  temp752;
    return ( (struct TypeSize_751) { .f_size = ( sizeof( ( (  temp752 ) ) ) ) } );
}

static  size_t   ptr_dash_size_dash_of749 (    uint32_t *  x397 ) {
    return ( ( ( (  get_dash_typesize750 ) ( ) ) ) .f_size );
}

static  struct Slice_8   as_dash_mem747 (    uint32_t *  x3390 ) {
    return ( (struct Slice_8) { .f_ptr = ( (  cast_dash_ptr748 ) ( (  x3390 ) ) ) , .f_count = ( (  ptr_dash_size_dash_of749 ) ( (  x3390 ) ) ) } );
}

struct StrConcat_755 {
    struct StrConcat_730  field0;
    size_t  field1;
};

static struct StrConcat_755 StrConcat_755_StrConcat (  struct StrConcat_730  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_755 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_754 {
    struct StrConcat_755  field0;
    struct StrView_95  field1;
};

static struct StrConcat_754 StrConcat_754_StrConcat (  struct StrConcat_755  field0 ,  struct StrView_95  field1 ) {
    return ( struct StrConcat_754 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_758 {
    struct StrView_95  field0;
    struct StrConcat_754  field1;
};

static struct StrConcat_758 StrConcat_758_StrConcat (  struct StrView_95  field0 ,  struct StrConcat_754  field1 ) {
    return ( struct StrConcat_758 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_757 {
    struct StrConcat_758  field0;
    struct Char_101  field1;
};

static struct StrConcat_757 StrConcat_757_StrConcat (  struct StrConcat_758  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_757 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_5   print_dash_str761 (    struct StrConcat_755  self1300 ) {
    struct StrConcat_755  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str735 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str144 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str760 (    struct StrConcat_754  self1300 ) {
    struct StrConcat_754  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str761 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str138 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str759 (    struct StrConcat_758  self1300 ) {
    struct StrConcat_758  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str138 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str760 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str756 (    struct StrConcat_757  self1300 ) {
    struct StrConcat_757  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str759 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic753 (    struct StrConcat_754  errmsg1341 ) {
    ( (  print_dash_str756 ) ( ( ( StrConcat_757_StrConcat ) ( ( ( StrConcat_758_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1341 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   set764 (    struct List_6 *  list2425 ,    size_t  i2427 ,    uint8_t  elem2429 ) {
    if ( ( (  cmp117 ( (  i2427 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp117 ( (  i2427 ) , ( ( * (  list2425 ) ) .f_count ) ) != 0 ) ) ) {
        ( (  panic133 ) ( ( ( StrConcat_129_StrConcat ) ( ( ( StrConcat_130_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Tried setting a list element at index " ) ,  ( 38 ) ) ) ,  (  i2427 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)" (count: " ) ,  ( 9 ) ) ) ) ) ,  ( ( * (  list2425 ) ) .f_count ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    ( (  set205 ) ( ( ( * (  list2425 ) ) .f_elements ) ,  (  i2427 ) ,  (  elem2429 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   patch746 (    struct ByteBuf_51 *  bb3399 ,    size_t  idx3401 ,    uint32_t  x3403 ) {
    struct Slice_8  mem3404 = ( (  as_dash_mem747 ) ( ( & (  x3403 ) ) ) );
    if ( (  cmp117 ( (  op_dash_add119 ( (  idx3401 ) , ( (  mem3404 ) .f_count ) ) ) , ( ( ( * (  bb3399 ) ) .f_buf ) .f_count ) ) == 2 ) ) {
        ( (  panic753 ) ( ( ( StrConcat_754_StrConcat ) ( ( ( StrConcat_755_StrConcat ) ( ( ( StrConcat_730_StrConcat ) ( ( ( StrConcat_130_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Tried to patch in " ) ,  ( 18 ) ) ) ,  ( (  mem3404 ) .f_count ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)" bytes at " ) ,  ( 10 ) ) ) ) ) ,  (  idx3401 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)", but the buffer is only " ) ,  ( 25 ) ) ) ) ) ,  ( ( ( * (  bb3399 ) ) .f_buf ) .f_count ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)" bytes long." ) ,  ( 12 ) ) ) ) ) ) );
    }
    struct Zip_251  temp762 =  into_dash_iter254 ( ( (  zip261 ) ( (  mem3404 ) ,  ( (  from263 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_255  __cond763 =  next256 (&temp762);
        if (  __cond763 .tag == 0 ) {
            break;
        }
        struct Tuple2_248  dref3405 =  __cond763 .stuff .Maybe_255_Just_s .field0;
        ( (  set764 ) ( ( & ( ( * (  bb3399 ) ) .f_buf ) ) ,  (  op_dash_add119 ( (  idx3401 ) , ( (  i32_dash_size204 ) ( ( dref3405 .field1 ) ) ) ) ) ,  ( dref3405 .field0 ) ) );
    }
    return ( Unit_5_Unit );
}

struct envunion766 {
    size_t  (*fun) (  struct env359*  );
    struct env359 env;
};

static  enum Unit_5   assert767 (    bool  cond1344 ,    struct StrView_95  msg1346 ) {
    if ( ( ! (  cond1344 ) ) ) {
        ( (  print_dash_str688 ) ( ( ( StrConcat_401_StrConcat ) ( ( ( StrConcat_399_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"ASSERTION FAILED: " ) ,  ( 18 ) ) ) ,  (  msg1346 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
        ( ( abort ) ( ) );
    }
    return ( Unit_5_Unit );
}

static  struct SliceIter_669   into_dash_iter771 (    struct List_11 *  self791 ) {
    return ( (  into_dash_iter724 ) ( ( * (  self791 ) ) ) );
}

static  struct Maybe_674   head769 (    struct List_11 *  it1165 ) {
    struct SliceIter_669  temp770 = ( (  into_dash_iter771 ) ( (  it1165 ) ) );
    return ( (  next675 ) ( ( &temp770 ) ) );
}

static  bool   null768 (    struct List_11 *  it1174 ) {
    struct Maybe_674  dref1175 = ( (  head769 ) ( (  it1174 ) ) );
    if ( dref1175.tag == Maybe_674_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct envunion773 {
    enum Unit_5  (*fun) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  );
    struct env64 env;
};

struct envunion775 {
    enum Unit_5  (*fun) (  struct env62*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  );
    struct env62 env;
};

static  enum Unit_5   xor776 (   struct env62* env ,    struct ByteBuf_51 *  bb3459 ,    enum Reg_363  r3461 ,    struct RegImm_362  ri3463 ) {
    enum Reg_363  dref3464 = (  r3461 );
    switch (  dref3464 ) {
        case Reg_363_RDI : {
            struct RegImm_362  dref3465 = (  ri3463 );
            if ( dref3465.tag == RegImm_362_Reg_t &&  dref3465 .stuff .RegImm_362_Reg_s .field0 == Reg_363_RDI ) {
                struct envunion63  temp777 = ( (struct envunion63){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array477 , .env =  env->envinst54 } );
                struct Array_42  temp778 = ( (struct Array_42) { ._arr = { (  from_dash_integral115 ( 72 ) ) , (  from_dash_integral115 ( 49 ) ) , (  from_dash_integral115 ( 255 ) ) } } );
                ( temp777.fun ( &temp777.env ,  (  bb3459 ) ,  ( (  from_dash_listlike495 ) ( ( &temp778 ) ) ) ) );
            }
            else {
                if ( true ) {
                    ( (  todo_prime_444 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"xor rdi" ) ,  ( 7 ) ) ) ) );
                }
            }
            break;
        }
        default: {
            ( (  todo_prime_444 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"xor" ) ,  ( 3 ) ) ) ) );
            break;
        }
    }
    return ( Unit_5_Unit );
}

struct envunion780 {
    enum Unit_5  (*fun) (  struct env60*  ,    struct ByteBuf_51 *  );
    struct env60 env;
};

static  struct Slice_8   from786 (    struct Slice_8  slice2211 ,    size_t  from2213 ) {
    return ( (  subslice209 ) ( (  slice2211 ) ,  (  from2213 ) ,  ( (  slice2211 ) .f_count ) ) );
}

static  struct StrView_95   byte_dash_substr_dash_from785 (    struct StrView_95  s2613 ,    size_t  from2615 ) {
    return ( (struct StrView_95) { .f_contents = ( (  from786 ) ( ( (  s2613 ) .f_contents ) ,  (  from2615 ) ) ) } );
}

static  struct StrView_95   drop_dash_while782 (    struct StrView_95  sv2642 ,    bool (*  fun2644 )(    struct Char_101  ) ) {
    size_t  from2645 = (  from_dash_integral0 ( 0 ) );
    struct StrViewIter_306  temp783 =  into_dash_iter558 ( ( (  chars417 ) ( (  sv2642 ) ) ) );
    while (true) {
        struct Maybe_103  __cond784 =  next310 (&temp783);
        if (  __cond784 .tag == 0 ) {
            break;
        }
        struct Char_101  c2647 =  __cond784 .stuff .Maybe_103_Just_s .field0;
        if ( ( ! ( (  fun2644 ) ( (  c2647 ) ) ) ) ) {
            break;
        }
        from2645 = (  op_dash_add119 ( (  from2645 ) , ( (  c2647 ) .f_num_dash_bytes ) ) );
    }
    return ( (  byte_dash_substr_dash_from785 ) ( (  sv2642 ) ,  (  from2645 ) ) );
}

static  bool   lam787 (    struct Char_101  c3632 ) {
    return (  eq560 ( (  c3632 ) , ( (  from_dash_charlike168 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) );
}

static  uint8_t   or_dash_fail790 (    struct Maybe_237  x1351 ,    struct StrConcat_129  errmsg1353 ) {
    struct Maybe_237  dref1354 = (  x1351 );
    if ( dref1354.tag == Maybe_237_None_t ) {
        ( (  panic133 ) ( (  errmsg1353 ) ) );
        return ( (  undefined335 ) ( ) );
    }
    else {
        if ( dref1354.tag == Maybe_237_Just_t ) {
            return ( dref1354 .stuff .Maybe_237_Just_s .field0 );
        }
    }
}

static  struct Maybe_237   try_dash_get791 (    struct Slice_8  slice2174 ,    size_t  i2176 ) {
    if ( ( (  cmp117 ( (  i2176 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp117 ( (  i2176 ) , ( (  slice2174 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    uint8_t *  elem_dash_ptr2177 = ( (  offset_dash_ptr106 ) ( ( (  slice2174 ) .f_ptr ) ,  ( (  size_dash_i64108 ) ( (  i2176 ) ) ) ) );
    return ( ( Maybe_237_Just ) ( ( * (  elem_dash_ptr2177 ) ) ) );
}

static  uint8_t   get789 (    struct Slice_8  slice2180 ,    size_t  i2182 ) {
    return ( (  or_dash_fail790 ) ( ( (  try_dash_get791 ) ( (  slice2180 ) ,  (  i2182 ) ) ) ,  ( ( StrConcat_129_StrConcat ) ( ( ( StrConcat_130_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2182 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2180 ) .f_count ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   elem_dash_get788 (    struct Slice_8  self2193 ,    size_t  idx2195 ) {
    return ( (  get789 ) ( (  self2193 ) ,  (  idx2195 ) ) );
}

static  uint8_t   ascii_dash_u8792 (    char  c1486 ) {
    return ( ( (uint8_t ) (  c1486 ) ) );
}

static  char   from_dash_charlike793 (    uint8_t *  ptr415 ,    size_t  num_dash_bytes417 ) {
    if ( ( !  eq245 ( (  num_dash_bytes417 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp794 = ( (  from_dash_string31 ) ( ( (uint8_t*)"(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp794);
        abort ( );
        ( Unit_5_Unit );
    }
    return ( ( (char ) ( * (  ptr415 ) ) ) );
}

static  struct StrView_95   byte_dash_substr795 (    struct StrView_95  s2606 ,    size_t  from2608 ,    size_t  to2610 ) {
    return ( (struct StrView_95) { .f_contents = ( (  subslice209 ) ( ( (  s2606 ) .f_contents ) ,  (  from2608 ) ,  (  to2610 ) ) ) } );
}

static  struct Maybe_175   extension781 (    struct StrView_95  path3630 ) {
    struct StrView_95  path3633 = ( (  drop_dash_while782 ) ( (  path3630 ) ,  (  lam787 ) ) );
    size_t  i3634 = ( ( (  path3633 ) .f_contents ) .f_count );
    while ( (  cmp117 ( (  i3634 ) , (  from_dash_integral0 ( 0 ) ) ) == 2 ) ) {
        i3634 = (  op_dash_sub94 ( (  i3634 ) , (  from_dash_integral0 ( 1 ) ) ) );
        if ( (  eq109 ( (  elem_dash_get788 ( ( (  path3633 ) .f_contents ) , (  i3634 ) ) ) , ( (  ascii_dash_u8792 ) ( ( (  from_dash_charlike793 ) ( ( (uint8_t*)"." ) ,  ( 1 ) ) ) ) ) ) ) ) {
            break;
        }
    }
    if ( (  eq245 ( (  i3634 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_175) { .tag = Maybe_175_None_t } );
    }
    struct StrView_95  ext3635 = ( (  byte_dash_substr795 ) ( (  path3633 ) ,  (  op_dash_add119 ( (  i3634 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( ( (  path3633 ) .f_contents ) .f_count ) ) );
    return ( ( Maybe_175_Just ) ( (  ext3635 ) ) );
}

struct Zip_799 {
    struct SliceIter_234  f_left_dash_it;
    struct SliceIter_234  f_right_dash_it;
};

struct Tuple2_800 {
    uint8_t  field0;
    uint8_t  field1;
};

static struct Tuple2_800 Tuple2_800_Tuple2 (  uint8_t  field0 ,  uint8_t  field1 ) {
    return ( struct Tuple2_800 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env802 {
    bool (*  fun1149 )(    struct Tuple2_800  );
};

struct envunion803 {
    bool  (*fun) (  struct env802*  ,    struct Tuple2_800  ,    bool  );
    struct env802 env;
};

static  struct Zip_799   into_dash_iter804 (    struct Zip_799  self934 ) {
    return (  self934 );
}

struct Maybe_805 {
    enum {
        Maybe_805_None_t,
        Maybe_805_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_800  field0;
        } Maybe_805_Just_s;
    } stuff;
};

static struct Maybe_805 Maybe_805_Just (  struct Tuple2_800  field0 ) {
    return ( struct Maybe_805 ) { .tag = Maybe_805_Just_t, .stuff = { .Maybe_805_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_805   next806 (    struct Zip_799 *  self937 ) {
    struct Zip_799  copy938 = ( * (  self937 ) );
    while ( ( true ) ) {
        struct Maybe_237  dref939 = ( (  next238 ) ( ( & ( (  copy938 ) .f_left_dash_it ) ) ) );
        if ( dref939.tag == Maybe_237_None_t ) {
            return ( (struct Maybe_805) { .tag = Maybe_805_None_t } );
        }
        else {
            if ( dref939.tag == Maybe_237_Just_t ) {
                struct Maybe_237  dref941 = ( (  next238 ) ( ( & ( (  copy938 ) .f_right_dash_it ) ) ) );
                if ( dref941.tag == Maybe_237_None_t ) {
                    return ( (struct Maybe_805) { .tag = Maybe_805_None_t } );
                }
                else {
                    if ( dref941.tag == Maybe_237_Just_t ) {
                        ( (  next238 ) ( ( & ( ( * (  self937 ) ) .f_left_dash_it ) ) ) );
                        ( (  next238 ) ( ( & ( ( * (  self937 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_805_Just ) ( ( ( Tuple2_800_Tuple2 ) ( ( dref939 .stuff .Maybe_237_Just_s .field0 ) ,  ( dref941 .stuff .Maybe_237_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   reduce801 (    struct Zip_799  iterable1116 ,    bool  base1118 ,   struct envunion803  fun1120 ) {
    bool  x1121 = (  base1118 );
    struct Zip_799  it1122 = ( (  into_dash_iter804 ) ( (  iterable1116 ) ) );
    while ( ( true ) ) {
        struct Maybe_805  dref1123 = ( (  next806 ) ( ( & (  it1122 ) ) ) );
        if ( dref1123.tag == Maybe_805_None_t ) {
            return (  x1121 );
        }
        else {
            if ( dref1123.tag == Maybe_805_Just_t ) {
                struct envunion803  temp807 = (  fun1120 );
                x1121 = ( temp807.fun ( &temp807.env ,  ( dref1123 .stuff .Maybe_805_Just_s .field0 ) ,  (  x1121 ) ) );
            }
        }
    }
    const char*  temp808 = ( (  from_dash_string31 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp808);
    abort ( );
    ( Unit_5_Unit );
    bool  temp809;
    return (  temp809 );
}

static  bool   lam810 (   struct env802* env ,    struct Tuple2_800  e1151 ,    bool  x1153 ) {
    return ( ( ( env->fun1149 ) ( (  e1151 ) ) ) && (  x1153 ) );
}

static  bool   all798 (    struct Zip_799  it1147 ,    bool (*  fun1149 )(    struct Tuple2_800  ) ) {
    struct env802 envinst802 = {
        .fun1149 =  fun1149 ,
    };
    return ( (  reduce801 ) ( (  it1147 ) ,  ( true ) ,  ( (struct envunion803){ .fun = (  bool  (*) (  struct env802*  ,    struct Tuple2_800  ,    bool  ) )lam810 , .env =  envinst802 } ) ) );
}

static  struct Zip_799   zip811 (    struct Slice_8  left945 ,    struct Slice_8  right947 ) {
    struct SliceIter_234  left_dash_it948 = ( (  into_dash_iter236 ) ( (  left945 ) ) );
    struct SliceIter_234  right_dash_it949 = ( (  into_dash_iter236 ) ( (  right947 ) ) );
    return ( (struct Zip_799) { .f_left_dash_it = (  left_dash_it948 ) , .f_right_dash_it = (  right_dash_it949 ) } );
}

static  bool   lam812 (    struct Tuple2_800  dref2288 ) {
    return (  eq109 ( ( dref2288 .field0 ) , ( dref2288 .field1 ) ) );
}

static  bool   eq797 (    struct Slice_8  l2285 ,    struct Slice_8  r2287 ) {
    if ( ( !  eq245 ( ( (  l2285 ) .f_count ) , ( (  r2287 ) .f_count ) ) ) ) {
        return ( false );
    }
    return ( (  all798 ) ( ( (  zip811 ) ( (  l2285 ) ,  (  r2287 ) ) ) ,  (  lam812 ) ) );
}

static  bool   eq796 (    struct StrView_95  l2650 ,    struct StrView_95  r2652 ) {
    return (  eq797 ( ( (  l2650 ) .f_contents ) , ( (  r2652 ) .f_contents ) ) );
}

struct env816 {
    ;
    ;
    struct Slice_8  dest2279;
};

struct envunion817 {
    enum Unit_5  (*fun) (  struct env816*  ,    struct Tuple2_248  );
    struct env816 env;
};

static  enum Unit_5   for_dash_each815 (    struct Zip_251  iterable1097 ,   struct envunion817  fun1099 ) {
    struct Zip_251  temp818 = ( (  into_dash_iter254 ) ( (  iterable1097 ) ) );
    struct Zip_251 *  it1100 = ( &temp818 );
    while ( ( true ) ) {
        struct Maybe_255  dref1101 = ( (  next256 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_255_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_255_Just_t ) {
                struct envunion817  temp819 = (  fun1099 );
                ( temp819.fun ( &temp819.env ,  ( dref1101 .stuff .Maybe_255_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   lam820 (   struct env816* env ,    struct Tuple2_248  dref2280 ) {
    return ( (  set205 ) ( ( env->dest2279 ) ,  ( (  i32_dash_size204 ) ( ( dref2280 .field1 ) ) ) ,  ( dref2280 .field0 ) ) );
}

static  enum Unit_5   copy_dash_to814 (    struct Slice_8  src2277 ,    struct Slice_8  dest2279 ) {
    if ( (  cmp117 ( ( (  src2277 ) .f_count ) , ( (  dest2279 ) .f_count ) ) == 2 ) ) {
        ( (  panic729 ) ( ( ( StrConcat_730_StrConcat ) ( ( ( StrConcat_130_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"cannot copy to a slice that is smaller! (copying from " ) ,  ( 54 ) ) ) ,  ( (  src2277 ) .f_count ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)"-element slice to " ) ,  ( 18 ) ) ) ) ) ,  ( (  dest2279 ) .f_count ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)"-element slice)" ) ,  ( 15 ) ) ) ) ) ) );
    }
    struct env816 envinst816 = {
        .dest2279 =  dest2279 ,
    };
    ( (  for_dash_each815 ) ( ( (  zip261 ) ( (  src2277 ) ,  ( (  from263 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) ,  ( (struct envunion817){ .fun = (  enum Unit_5  (*) (  struct env816*  ,    struct Tuple2_248  ) )lam820 , .env =  envinst816 } ) ) );
    return ( Unit_5_Unit );
}

static  struct StrView_95   clone_dash_0813 (    struct StrView_95  s2575 ,    enum CAllocator_7  al2577 ) {
    size_t  cnt2578 = ( ( (  s2575 ) .f_contents ) .f_count );
    struct Slice_8  nus2579 = ( (  allocate198 ) ( (  al2577 ) ,  (  op_dash_add119 ( (  cnt2578 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    ( (  copy_dash_to814 ) ( ( (  s2575 ) .f_contents ) ,  (  nus2579 ) ) );
    ( (  set205 ) ( (  nus2579 ) ,  (  cnt2578 ) ,  ( (  char_dash_u8207 ) ( ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) ) ) ) ) );
    return ( (struct StrView_95) { .f_contents = ( (struct Slice_8) { .f_ptr = ( (  nus2579 ) .f_ptr ) , .f_count = (  cnt2578 ) } ) } );
}

static  size_t   num_dash_bytes821 (    struct StrView_95  self2618 ) {
    return ( ( (  self2618 ) .f_contents ) .f_count );
}

struct envunion823 {
    struct StrView_95  (*fun) (  struct env26*  ,    struct StrConcat_399  ,    enum CAllocator_7  );
    struct env26 env;
};

static  struct StrConcatIter_404   into_dash_iter828 (    struct StrConcatIter_404  self1288 ) {
    return (  self1288 );
}

static  struct Slice_8   as_dash_u8_dash_slice831 (    struct Char_101  c1463 ,    struct Array_39 *  buf1465 ) {
    struct Char_101  cc1466 = ( (  regularize147 ) ( (  c1463 ) ,  (  buf1465 ) ) );
    return ( (struct Slice_8) { .f_ptr = ( (  cc1466 ) .f_ptr ) , .f_count = ( (  cc1466 ) .f_num_dash_bytes ) } );
}

static  struct Slice_8   to_dash_slice833 (    struct List_6  l2540 ) {
    uint8_t *  ptr2541 = ( ( (  l2540 ) .f_elements ) .f_ptr );
    return ( (struct Slice_8) { .f_ptr = (  ptr2541 ) , .f_count = ( (  l2540 ) .f_count ) } );
}

static  struct StrView_95   from_dash_str824 (   struct env26* env ,    struct StrConcat_399  s2560 ,    enum CAllocator_7  al2562 ) {
    struct List_6  temp825 = ( (  mk220 ) ( (  al2562 ) ) );
    struct List_6 *  l2563 = ( &temp825 );
    struct Array_39  temp826 = ( (  uninit_dash_buf562 ) ( ) );
    struct Array_39 *  buf2564 = ( &temp826 );
    struct StrConcatIter_404  temp827 =  into_dash_iter828 ( ( (  chars415 ) ( (  s2560 ) ) ) );
    while (true) {
        struct Maybe_103  __cond829 =  next410 (&temp827);
        if (  __cond829 .tag == 0 ) {
            break;
        }
        struct Char_101  c2566 =  __cond829 .stuff .Maybe_103_Just_s .field0;
        struct envunion27  temp830 = ( (struct envunion27){ .fun = (  enum Unit_5  (*) (  struct env19*  ,    struct List_6 *  ,    struct Slice_8  ) )add_dash_all230 , .env =  env->envinst19 } );
        ( temp830.fun ( &temp830.env ,  (  l2563 ) ,  ( (  as_dash_u8_dash_slice831 ) ( (  c2566 ) ,  (  buf2564 ) ) ) ) );
    }
    struct envunion28  temp832 = ( (struct envunion28){ .fun = (  enum Unit_5  (*) (  struct env3*  ,    struct List_6 *  ,    uint8_t  ) )add242 , .env =  env->envinst3 } );
    ( temp832.fun ( &temp832.env ,  (  l2563 ) ,  ( (  char_dash_u8207 ) ( ( (  nullchar208 ) ( ) ) ) ) ) );
    return ( (struct StrView_95) { .f_contents = ( (  to_dash_slice833 ) ( ( * (  l2563 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr838 (    uint64_t *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

struct TypeSize_841 {
    size_t  f_size;
};

static  struct TypeSize_841   get_dash_typesize840 (  ) {
    uint64_t  temp842;
    return ( (struct TypeSize_841) { .f_size = ( sizeof( ( (  temp842 ) ) ) ) } );
}

static  size_t   ptr_dash_size_dash_of839 (    uint64_t *  x397 ) {
    return ( ( ( (  get_dash_typesize840 ) ( ) ) ) .f_size );
}

static  struct Slice_8   as_dash_mem837 (    uint64_t *  x3390 ) {
    return ( (struct Slice_8) { .f_ptr = ( (  cast_dash_ptr838 ) ( (  x3390 ) ) ) , .f_count = ( (  ptr_dash_size_dash_of839 ) ( (  x3390 ) ) ) } );
}

static  enum Unit_5   patch836 (    struct ByteBuf_51 *  bb3399 ,    size_t  idx3401 ,    uint64_t  x3403 ) {
    struct Slice_8  mem3404 = ( (  as_dash_mem837 ) ( ( & (  x3403 ) ) ) );
    if ( (  cmp117 ( (  op_dash_add119 ( (  idx3401 ) , ( (  mem3404 ) .f_count ) ) ) , ( ( ( * (  bb3399 ) ) .f_buf ) .f_count ) ) == 2 ) ) {
        ( (  panic753 ) ( ( ( StrConcat_754_StrConcat ) ( ( ( StrConcat_755_StrConcat ) ( ( ( StrConcat_730_StrConcat ) ( ( ( StrConcat_130_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Tried to patch in " ) ,  ( 18 ) ) ) ,  ( (  mem3404 ) .f_count ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)" bytes at " ) ,  ( 10 ) ) ) ) ) ,  (  idx3401 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)", but the buffer is only " ) ,  ( 25 ) ) ) ) ) ,  ( ( ( * (  bb3399 ) ) .f_buf ) .f_count ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)" bytes long." ) ,  ( 12 ) ) ) ) ) ) );
    }
    struct Zip_251  temp843 =  into_dash_iter254 ( ( (  zip261 ) ( (  mem3404 ) ,  ( (  from263 ) ( (  from_dash_integral30 ( 0 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_255  __cond844 =  next256 (&temp843);
        if (  __cond844 .tag == 0 ) {
            break;
        }
        struct Tuple2_248  dref3405 =  __cond844 .stuff .Maybe_255_Just_s .field0;
        ( (  set764 ) ( ( & ( ( * (  bb3399 ) ) .f_buf ) ) ,  (  op_dash_add119 ( (  idx3401 ) , ( (  i32_dash_size204 ) ( ( dref3405 .field1 ) ) ) ) ) ,  ( dref3405 .field0 ) ) );
    }
    return ( Unit_5_Unit );
}

static  struct Elf64Phdr_279   undefined846 (  ) {
    struct Elf64Phdr_279  temp847;
    return (  temp847 );
}

static  size_t   ptr_dash_to_dash_int848 (    uint64_t *  p659 ) {
    return ( (size_t ) (  p659 ) );
}

static  size_t   ptr_dash_to_dash_int849 (    struct Elf64Phdr_279 *  p659 ) {
    return ( (size_t ) (  p659 ) );
}

static  size_t   filesz_dash_off845 (  ) {
    struct Elf64Phdr_279  header3580 = ( ( (  undefined846 ) ( ) ) );
    return (  op_dash_sub94 ( ( (  ptr_dash_to_dash_int848 ) ( ( & ( (  header3580 ) .f_p_dash_filesz ) ) ) ) , ( (  ptr_dash_to_dash_int849 ) ( ( & (  header3580 ) ) ) ) ) );
}

static  size_t   memsz_dash_off850 (  ) {
    struct Elf64Phdr_279  header3582 = ( ( (  undefined846 ) ( ) ) );
    return (  op_dash_sub94 ( ( (  ptr_dash_to_dash_int848 ) ( ( & ( (  header3582 ) .f_p_dash_memsz ) ) ) ) , ( (  ptr_dash_to_dash_int849 ) ( ( & (  header3582 ) ) ) ) ) );
}

static  enum Unit_5   finalize835 (    struct Elf_213 *  elf3592 ) {
    struct ByteBuf_51 *  bytes3593 = ( & ( ( * (  elf3592 ) ) .f_bytes ) );
    size_t  initial_dash_off3594 = ( ( ( (  get_dash_typesize271 ) ( ) ) ) .f_size );
    uint64_t  filesz3595 = ( (  size_dash_u64344 ) ( ( ( ( * (  bytes3593 ) ) .f_buf ) .f_count ) ) );
    ( (  patch836 ) ( (  bytes3593 ) ,  (  op_dash_add119 ( (  initial_dash_off3594 ) , ( (  filesz_dash_off845 ) ( ) ) ) ) ,  ( (  filesz3595 ) ) ) );
    ( (  patch836 ) ( (  bytes3593 ) ,  (  op_dash_add119 ( (  initial_dash_off3594 ) , ( (  memsz_dash_off850 ) ( ) ) ) ) ,  ( (  filesz3595 ) ) ) );
    return ( Unit_5_Unit );
}

static  struct SliceIter_234   into_dash_iter855 (    struct List_6  self2432 ) {
    return ( (  into_dash_iter236 ) ( ( (  subslice209 ) ( ( (  self2432 ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  self2432 ) .f_count ) ) ) ) );
}

static  struct SliceIter_234   into_dash_iter854 (    struct ByteBuf_51  self3426 ) {
    return ( (  into_dash_iter855 ) ( ( (  self3426 ) .f_buf ) ) );
}

struct StrConcat_859 {
    struct StrView_95  field0;
    struct Char_101  field1;
};

static struct StrConcat_859 StrConcat_859_StrConcat (  struct StrView_95  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_859 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_861 {
    struct StrViewIter_306  f_left;
    struct AppendIter_405  f_right;
};

static  struct StrConcatIter_861   into_dash_iter863 (    struct StrConcatIter_861  self1288 ) {
    return (  self1288 );
}

static  struct Maybe_103   next864 (    struct StrConcatIter_861 *  self1291 ) {
    struct Maybe_103  dref1292 = ( (  next310 ) ( ( & ( ( * (  self1291 ) ) .f_left ) ) ) );
    if ( dref1292.tag == Maybe_103_Just_t ) {
        return ( ( Maybe_103_Just ) ( ( dref1292 .stuff .Maybe_103_Just_s .field0 ) ) );
    }
    else {
        if ( dref1292.tag == Maybe_103_None_t ) {
            return ( (  next411 ) ( ( & ( ( * (  self1291 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_5   for_dash_each860 (    struct StrConcatIter_861  iterable1097 ,    enum Unit_5 (*  fun1099 )(    struct Char_101  ) ) {
    struct StrConcatIter_861  temp862 = ( (  into_dash_iter863 ) ( (  iterable1097 ) ) );
    struct StrConcatIter_861 *  it1100 = ( &temp862 );
    while ( ( true ) ) {
        struct Maybe_103  dref1101 = ( (  next864 ) ( (  it1100 ) ) );
        if ( dref1101.tag == Maybe_103_None_t ) {
            return ( Unit_5_Unit );
        }
        else {
            if ( dref1101.tag == Maybe_103_Just_t ) {
                ( (  fun1099 ) ( ( dref1101 .stuff .Maybe_103_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_5_Unit );
}

static  struct StrConcatIter_861   into_dash_iter866 (    struct StrConcat_859  dref1295 ) {
    return ( (struct StrConcatIter_861) { .f_left = ( (  chars417 ) ( ( dref1295 .field0 ) ) ) , .f_right = ( (  chars418 ) ( ( dref1295 .field1 ) ) ) } );
}

static  struct StrConcatIter_861   chars865 (    struct StrConcat_859  self1306 ) {
    return ( (  into_dash_iter866 ) ( (  self1306 ) ) );
}

static  enum Unit_5   print858 (    struct StrConcat_859  s1333 ) {
    ( (  for_dash_each860 ) ( ( (  chars865 ) ( (  s1333 ) ) ) ,  (  printf_dash_char146 ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   println857 (    struct StrView_95  s1336 ) {
    ( (  print858 ) ( ( ( StrConcat_859_StrConcat ) ( (  s1336 ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_5_Unit );
}

static  bool   undefined867 (  ) {
    bool  temp868;
    return (  temp868 );
}

static  bool   unreachable856 (  ) {
    ( (  println857 ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined867 ) ( ) );
}

static  bool   try_dash_write_dash_bytes852 (    const char*  filename3203 ,    struct ByteBuf_51  contents3205 ) {
    FILE *  file3206 = ( ( fopen ) ( (  filename3203 ) ,  ( (  from_dash_string31 ) ( ( (uint8_t*)"wb" ) ,  ( 2 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null190 ) ( (  file3206 ) ) ) ) {
        return ( false );
    }
    struct SliceIter_234  temp853 = ( (  into_dash_iter854 ) ( (  contents3205 ) ) );
    struct SliceIter_234 *  it3207 = ( &temp853 );
    while ( ( true ) ) {
        struct Maybe_237  dref3208 = ( (  next238 ) ( (  it3207 ) ) );
        if ( dref3208.tag == Maybe_237_None_t ) {
            ( ( fclose ) ( (  file3206 ) ) );
            return ( true );
        }
        else {
            if ( dref3208.tag == Maybe_237_Just_t ) {
                int32_t  chars_dash_written3210 = ( ( fwrite ) ( ( (  cast_dash_ptr265 ) ( ( & ( dref3208 .stuff .Maybe_237_Just_s .field0 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  (  file3206 ) ) );
                if ( (  cmp460 ( (  chars_dash_written3210 ) , (  from_dash_integral30 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable856 ) ( ) );
}

struct StrConcat_872 {
    struct StrView_95  field0;
    struct StrConcat_177  field1;
};

static struct StrConcat_872 StrConcat_872_StrConcat (  struct StrView_95  field0 ,  struct StrConcat_177  field1 ) {
    return ( struct StrConcat_872 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_871 {
    struct StrConcat_872  field0;
    struct Char_101  field1;
};

static struct StrConcat_871 StrConcat_871_StrConcat (  struct StrConcat_872  field0 ,  struct Char_101  field1 ) {
    return ( struct StrConcat_871 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_5   print_dash_str873 (    struct StrConcat_872  self1300 ) {
    struct StrConcat_872  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str138 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str184 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   print_dash_str870 (    struct StrConcat_871  self1300 ) {
    struct StrConcat_871  dref1301 = (  self1300 );
    if ( true ) {
        ( (  print_dash_str873 ) ( ( dref1301 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1301 .field1 ) ) );
    }
    return ( Unit_5_Unit );
}

static  enum Unit_5   panic869 (    struct StrConcat_177  errmsg1341 ) {
    ( (  print_dash_str870 ) ( ( ( StrConcat_871_StrConcat ) ( ( ( StrConcat_872_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1341 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   write_dash_bytes851 (    const char*  filename3213 ,    struct ByteBuf_51  contents3215 ) {
    if ( ( ! ( (  try_dash_write_dash_bytes852 ) ( (  filename3213 ) ,  (  contents3215 ) ) ) ) ) {
        ( (  panic869 ) ( ( ( StrConcat_177_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"could not write to file " ) ,  ( 24 ) ) ) ,  (  filename3213 ) ) ) ) );
    }
    return ( Unit_5_Unit );
}

static  uint32_t   i32_dash_u32874 (    int32_t  x679 ) {
    return ( (uint32_t ) (  x679 ) );
}

struct Array_876 {
    int32_t _arr [3];
};

struct ArrayIter_878 {
    struct Array_876  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_878   into_dash_iter879 (    struct Array_876  self2100 ) {
    return ( (struct ArrayIter_878) { .f_backing = (  self2100 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  int32_t *   cast_dash_ptr883 (    struct Array_876 *  p403 ) {
    return ( (int32_t * ) (  p403 ) );
}

static  int32_t *   offset_dash_ptr884 (    int32_t *  x382 ,    int64_t  count384 ) {
    int32_t  temp885;
    return ( (int32_t * ) ( ( (void*) (  x382 ) ) + (  op_dash_mul91 ( (  count384 ) , ( (int64_t ) ( sizeof( ( (  temp885 ) ) ) ) ) ) ) ) );
}

static  int32_t *   get_dash_ptr882 (    struct Array_876 *  arr2024 ,    size_t  i2027 ) {
    if ( ( (  cmp117 ( (  i2027 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp117 ( (  i2027 ) , ( (size_t ) ( 3 ) ) ) != 0 ) ) ) {
        ( (  panic381 ) ( ( ( StrConcat_382_StrConcat ) ( ( ( StrConcat_383_StrConcat ) ( ( ( StrConcat_131_StrConcat ) ( ( ( StrConcat_132_StrConcat ) ( ( (  from_dash_string167 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2027 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 3 ) ) ) ,  ( (  from_dash_charlike168 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    int32_t *  p2028 = ( ( (  cast_dash_ptr883 ) ( (  arr2024 ) ) ) );
    return ( (  offset_dash_ptr884 ) ( (  p2028 ) ,  ( (int64_t ) (  i2027 ) ) ) );
}

static  int32_t   get881 (    struct Array_876 *  arr2031 ,    size_t  i2034 ) {
    return ( * ( (  get_dash_ptr882 ) ( (  arr2031 ) ,  (  i2034 ) ) ) );
}

static  struct Maybe_257   next880 (    struct ArrayIter_878 *  self2107 ) {
    if ( (  cmp117 ( ( ( * (  self2107 ) ) .f_cur ) , ( (size_t ) ( 3 ) ) ) != 0 ) ) {
        return ( (struct Maybe_257) { .tag = Maybe_257_None_t } );
    }
    int32_t  e2109 = ( (  get881 ) ( ( & ( ( * (  self2107 ) ) .f_backing ) ) ,  ( ( * (  self2107 ) ) .f_cur ) ) );
    (*  self2107 ) .f_cur = (  op_dash_add119 ( ( ( * (  self2107 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_257_Just ) ( (  e2109 ) ) );
}

static  int32_t   reduce877 (    struct Array_876  iterable1116 ,    int32_t  base1118 ,    int32_t (*  fun1120 )(    int32_t  ,    int32_t  ) ) {
    int32_t  x1121 = (  base1118 );
    struct ArrayIter_878  it1122 = ( (  into_dash_iter879 ) ( (  iterable1116 ) ) );
    while ( ( true ) ) {
        struct Maybe_257  dref1123 = ( (  next880 ) ( ( & (  it1122 ) ) ) );
        if ( dref1123.tag == Maybe_257_None_t ) {
            return (  x1121 );
        }
        else {
            if ( dref1123.tag == Maybe_257_Just_t ) {
                x1121 = ( (  fun1120 ) ( ( dref1123 .stuff .Maybe_257_Just_s .field0 ) ,  (  x1121 ) ) );
            }
        }
    }
    const char*  temp886 = ( (  from_dash_string31 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) );
    printf("%s\n", temp886);
    abort ( );
    ( Unit_5_Unit );
    int32_t  temp887;
    return (  temp887 );
}

static  int32_t   lam888 (    int32_t  elem3120 ,    int32_t  b3122 ) {
    return (  op_dash_add259 ( (  op_dash_mul468 ( (  b3122 ) , (  from_dash_integral30 ( 8 ) ) ) ) , (  elem3120 ) ) );
}

static  int32_t   from_dash_octal875 (    struct Array_876  arr3118 ) {
    return ( (  reduce877 ) ( (  arr3118 ) ,  (  from_dash_integral30 ( 0 ) ) ,  (  lam888 ) ) );
}

static  struct Array_876   from_dash_listlike889 (    struct Array_876 *  self374 ) {
    return ( * (  self374 ) );
}

static  enum Unit_5   write_dash_to_dash_file834 (    struct Elf_213 *  elf3598 ,    const char*  filename3600 ) {
    ( (  finalize835 ) ( (  elf3598 ) ) );
    ( (  write_dash_bytes851 ) ( (  filename3600 ) ,  ( ( * (  elf3598 ) ) .f_bytes ) ) );
    struct Array_876  temp890 = ( (struct Array_876) { ._arr = { (  from_dash_integral30 ( 7 ) ) , (  from_dash_integral30 ( 5 ) ) , (  from_dash_integral30 ( 5 ) ) } } );
    ( ( chmod ) ( (  filename3600 ) ,  ( (  i32_dash_u32874 ) ( ( (  from_dash_octal875 ) ( ( (  from_dash_listlike889 ) ( ( &temp890 ) ) ) ) ) ) ) ) );
    return ( Unit_5_Unit );
}

static  enum Unit_5   free891 (    struct StrView_95  s2590 ,    enum CAllocator_7  al2592 ) {
    ( (  free264 ) ( (  al2592 ) ,  ( (struct Slice_8) { .f_ptr = ( ( (  s2590 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_5_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2446 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2447 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2448 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .growth_dash_factor2447 =  growth_dash_factor2447 ,
        .starting_dash_size2446 =  starting_dash_size2446 ,
    };
    struct env2 envinst2 = {
        .growth_dash_factor2447 =  growth_dash_factor2447 ,
        .starting_dash_size2446 =  starting_dash_size2446 ,
    };
    struct env3 envinst3 = {
        .envinst1 = envinst1 ,
    };
    struct env9 envinst9 = {
        .envinst2 = envinst2 ,
    };
    struct env14 envinst14 = {
        .shrink_dash_factor2448 =  shrink_dash_factor2448 ,
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
        .envinst54 = envinst54 ,
        .envinst52 = envinst52 ,
    };
    struct env68 envinst68 = {
        .envinst52 = envinst52 ,
        .envinst49 = envinst49 ,
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
        .envinst52 = envinst52 ,
        .envinst54 = envinst54 ,
        .envinst56 = envinst56 ,
    };
    struct env83 envinst83 = {
        .envinst54 = envinst54 ,
    };
    struct env85 envinst85 = {
        .envinst32 = envinst32 ,
    };
    enum CAllocator_7  al3550 = ( (  idc87 ) ( ) );
    struct Slice_88  args3553 = ( (  get89 ) ( ) );
    struct StrView_95  filename3554 = ( (  from_dash_const_dash_str96 ) ( (  elem_dash_get125 ( (  args3553 ) , (  from_dash_integral0 ( 0 ) ) ) ) ) );
    struct StrView_95  file3555 = ( (  read_dash_contents173 ) ( ( (  as_dash_const_dash_str211 ) ( (  filename3554 ) ) ) ,  (  al3550 ) ) );
    struct envunion216  temp215 = ( (struct envunion216){ .fun = (  struct Elf_213  (*) (  struct env85*  ,    enum CAllocator_7  ) )mk217 , .env =  envinst85 } );
    struct Elf_213  temp214 = ( temp215.fun ( &temp215.env ,  (  al3550 ) ) );
    struct Elf_213 *  elf3607 = ( &temp214 );
    struct ByteBuf_51 *  bb3608 = ( (  bytebuf358 ) ( (  elf3607 ) ) );
    struct env359 envinst359 = {
        .bb3608 =  bb3608 ,
    };
    int32_t  cell_dash_size3615 = (  from_dash_integral30 ( 4 ) );
    uint32_t  cells3616 = (  from_dash_integral158 ( 30000 ) );
    struct envunion361  temp360 = ( (struct envunion361){ .fun = (  enum Unit_5  (*) (  struct env68*  ,    struct ByteBuf_51 *  ,    struct RegImm_362  ) )push364 , .env =  envinst68 } );
    ( temp360.fun ( &temp360.env ,  (  bb3608 ) ,  ( (  dword447 ) ( (  from_dash_integral158 ( 0 ) ) ) ) ) );
    struct envunion470  temp469 = ( (struct envunion470){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  ) )mov471 , .env =  envinst64 } );
    ( temp469.fun ( &temp469.env ,  (  bb3608 ) ,  ( Reg_363_RBP ) ,  ( (  reg497 ) ( ( Reg_363_RSP ) ) ) ) );
    struct envunion499  temp498 = ( (struct envunion499){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  ) )mov471 , .env =  envinst64 } );
    ( temp498.fun ( &temp498.env ,  (  bb3608 ) ,  ( Reg_363_RAX ) ,  ( (  dword447 ) ( (  op_dash_div451 ( (  op_dash_sub500 ( (  cells3616 ) , (  from_dash_integral158 ( 1 ) ) ) ) , (  from_dash_integral158 ( 2 ) ) ) ) ) ) ) );
    struct envunion502  temp501 = ( (struct envunion502){ .fun = (  size_t  (*) (  struct env359*  ) )here503 , .env =  envinst359 } );
    size_t  clear_dash_loop_dash_off3617 = ( temp501.fun ( &temp501.env ) );
    struct envunion507  temp506 = ( (struct envunion507){ .fun = (  enum Unit_5  (*) (  struct env83*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ) )dec508 , .env =  envinst83 } );
    ( temp506.fun ( &temp506.env ,  (  bb3608 ) ,  ( Reg_363_RAX ) ) );
    struct envunion515  temp514 = ( (struct envunion515){ .fun = (  enum Unit_5  (*) (  struct env68*  ,    struct ByteBuf_51 *  ,    struct RegImm_362  ) )push364 , .env =  envinst68 } );
    ( temp514.fun ( &temp514.env ,  (  bb3608 ) ,  ( (  dword447 ) ( (  from_dash_integral158 ( 0 ) ) ) ) ) );
    struct envunion517  temp516 = ( (struct envunion517){ .fun = (  enum Unit_5  (*) (  struct env71*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  ) )test518 , .env =  envinst71 } );
    ( temp516.fun ( &temp516.env ,  (  bb3608 ) ,  ( Reg_363_RAX ) ,  ( (  reg497 ) ( ( Reg_363_RAX ) ) ) ) );
    struct envunion522  temp521 = ( (struct envunion522){ .fun = (  size_t  (*) (  struct env73*  ,    struct ByteBuf_51 *  ,    struct RegImm_362  ) )jne523 , .env =  envinst73 } );
    struct envunion548  temp547 = ( (struct envunion548){ .fun = (  size_t  (*) (  struct env359*  ) )here503 , .env =  envinst359 } );
    ( temp521.fun ( &temp521.env ,  (  bb3608 ) ,  ( (  dword447 ) ( ( (  jump_dash_offset546 ) ( ( temp547.fun ( &temp547.env ) ) ,  (  clear_dash_loop_dash_off3617 ) ) ) ) ) ) );
    int32_t  off3618 = (  from_dash_integral30 ( 0 ) );
    struct List_11  temp549 = ( ( (  mk550 ) ( (  al3550 ) ) ) );
    struct List_11 *  jumps3620 = ( &temp549 );
    struct StrViewIter_306  temp557 =  into_dash_iter558 ( ( (  chars417 ) ( (  file3555 ) ) ) );
    while (true) {
        struct Maybe_103  __cond559 =  next310 (&temp557);
        if (  __cond559 .tag == 0 ) {
            break;
        }
        struct Char_101  c3622 =  __cond559 .stuff .Maybe_103_Just_s .field0;
        struct Char_101  dref3623 = (  c3622 );
        if (  eq560 (  dref3623 ,  from_dash_string566 ( (uint8_t*)">" , 1 ) ) ) {
            struct envunion568  temp567 = ( (struct envunion568){ .fun = (  enum Unit_5  (*) (  struct env79*  ,    struct ByteBuf_51 *  ,    struct RegImmOff_569  ) )inc570 , .env =  envinst79 } );
            ( temp567.fun ( &temp567.env ,  (  bb3608 ) ,  ( ( RegImmOff_569_RegImm ) ( ( (  reg497 ) ( ( Reg_363_RBX ) ) ) ) ) ) );
        }
        else {
            if (  eq560 (  dref3623 ,  from_dash_string566 ( (uint8_t*)"<" , 1 ) ) ) {
                struct envunion577  temp576 = ( (struct envunion577){ .fun = (  enum Unit_5  (*) (  struct env83*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ) )dec508 , .env =  envinst83 } );
                ( temp576.fun ( &temp576.env ,  (  bb3608 ) ,  ( Reg_363_RBX ) ) );
            }
            else {
                if (  eq560 (  dref3623 ,  from_dash_string566 ( (uint8_t*)"+" , 1 ) ) ) {
                    struct envunion579  temp578 = ( (struct envunion579){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array477 , .env =  envinst54 } );
                    struct Array_42  temp580 = ( (struct Array_42) { ._arr = { (  from_dash_integral115 ( 255 ) ) , (  from_dash_integral115 ( 4 ) ) , (  from_dash_integral115 ( 156 ) ) } } );
                    ( temp578.fun ( &temp578.env ,  (  bb3608 ) ,  ( (  from_dash_listlike495 ) ( ( &temp580 ) ) ) ) );
                }
                else {
                    if (  eq560 (  dref3623 ,  from_dash_string566 ( (uint8_t*)"-" , 1 ) ) ) {
                        struct envunion582  temp581 = ( (struct envunion582){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array477 , .env =  envinst54 } );
                        struct Array_42  temp583 = ( (struct Array_42) { ._arr = { (  from_dash_integral115 ( 255 ) ) , (  from_dash_integral115 ( 12 ) ) , (  from_dash_integral115 ( 156 ) ) } } );
                        ( temp581.fun ( &temp581.env ,  (  bb3608 ) ,  ( (  from_dash_listlike495 ) ( ( &temp583 ) ) ) ) );
                    }
                    else {
                        if (  eq560 (  dref3623 ,  from_dash_string566 ( (uint8_t*)"." , 1 ) ) ) {
                            struct envunion585  temp584 = ( (struct envunion585){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  ) )mov471 , .env =  envinst64 } );
                            ( temp584.fun ( &temp584.env ,  (  bb3608 ) ,  ( Reg_363_RAX ) ,  ( (  dword447 ) ( (  from_dash_integral158 ( 1 ) ) ) ) ) );
                            struct envunion587  temp586 = ( (struct envunion587){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  ) )mov471 , .env =  envinst64 } );
                            ( temp586.fun ( &temp586.env ,  (  bb3608 ) ,  ( Reg_363_RDI ) ,  ( (  dword447 ) ( (  from_dash_integral158 ( 1 ) ) ) ) ) );
                            struct envunion589  temp588 = ( (struct envunion589){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array427 , .env =  envinst52 } );
                            struct Array_39  temp590 = ( (struct Array_39) { ._arr = { (  from_dash_integral115 ( 72 ) ) , (  from_dash_integral115 ( 141 ) ) , (  from_dash_integral115 ( 52 ) ) , (  from_dash_integral115 ( 156 ) ) } } );
                            ( temp588.fun ( &temp588.env ,  (  bb3608 ) ,  ( (  from_dash_listlike162 ) ( ( &temp590 ) ) ) ) );
                            struct envunion592  temp591 = ( (struct envunion592){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  ) )mov471 , .env =  envinst64 } );
                            ( temp591.fun ( &temp591.env ,  (  bb3608 ) ,  ( Reg_363_RDX ) ,  ( (  dword447 ) ( (  from_dash_integral158 ( 1 ) ) ) ) ) );
                            struct envunion594  temp593 = ( (struct envunion594){ .fun = (  enum Unit_5  (*) (  struct env60*  ,    struct ByteBuf_51 *  ) )syscall595 , .env =  envinst60 } );
                            ( temp593.fun ( &temp593.env ,  (  bb3608 ) ) );
                        }
                        else {
                            if (  eq560 (  dref3623 ,  from_dash_string566 ( (uint8_t*)"," , 1 ) ) ) {
                                struct envunion599  temp598 = ( (struct envunion599){ .fun = (  enum Unit_5  (*) (  struct env58*  ,    struct ByteBuf_51 *  ,    struct Array_48  ) )write_dash_array600 , .env =  envinst58 } );
                                struct Array_48  temp619 = ( (struct Array_48) { ._arr = { (  from_dash_integral115 ( 199 ) ) , (  from_dash_integral115 ( 4 ) ) , (  from_dash_integral115 ( 156 ) ) , (  from_dash_integral115 ( 0 ) ) , (  from_dash_integral115 ( 0 ) ) , (  from_dash_integral115 ( 0 ) ) , (  from_dash_integral115 ( 0 ) ) } } );
                                ( temp598.fun ( &temp598.env ,  (  bb3608 ) ,  ( (  from_dash_listlike618 ) ( ( &temp619 ) ) ) ) );
                                struct envunion621  temp620 = ( (struct envunion621){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  ) )mov471 , .env =  envinst64 } );
                                ( temp620.fun ( &temp620.env ,  (  bb3608 ) ,  ( Reg_363_RAX ) ,  ( (  dword447 ) ( (  from_dash_integral158 ( 0 ) ) ) ) ) );
                                struct envunion623  temp622 = ( (struct envunion623){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  ) )mov471 , .env =  envinst64 } );
                                ( temp622.fun ( &temp622.env ,  (  bb3608 ) ,  ( Reg_363_RDI ) ,  ( (  dword447 ) ( (  from_dash_integral158 ( 0 ) ) ) ) ) );
                                struct envunion625  temp624 = ( (struct envunion625){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array427 , .env =  envinst52 } );
                                struct Array_39  temp626 = ( (struct Array_39) { ._arr = { (  from_dash_integral115 ( 72 ) ) , (  from_dash_integral115 ( 141 ) ) , (  from_dash_integral115 ( 52 ) ) , (  from_dash_integral115 ( 156 ) ) } } );
                                ( temp624.fun ( &temp624.env ,  (  bb3608 ) ,  ( (  from_dash_listlike162 ) ( ( &temp626 ) ) ) ) );
                                struct envunion628  temp627 = ( (struct envunion628){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  ) )mov471 , .env =  envinst64 } );
                                ( temp627.fun ( &temp627.env ,  (  bb3608 ) ,  ( Reg_363_RDX ) ,  ( (  dword447 ) ( (  from_dash_integral158 ( 1 ) ) ) ) ) );
                                struct envunion630  temp629 = ( (struct envunion630){ .fun = (  enum Unit_5  (*) (  struct env60*  ,    struct ByteBuf_51 *  ) )syscall595 , .env =  envinst60 } );
                                ( temp629.fun ( &temp629.env ,  (  bb3608 ) ) );
                                struct envunion632  temp631 = ( (struct envunion632){ .fun = (  enum Unit_5  (*) (  struct env52*  ,    struct ByteBuf_51 *  ,    struct Array_39  ) )write_dash_array427 , .env =  envinst52 } );
                                struct Array_39  temp633 = ( (struct Array_39) { ._arr = { (  from_dash_integral115 ( 72 ) ) , (  from_dash_integral115 ( 131 ) ) , (  from_dash_integral115 ( 248 ) ) , (  from_dash_integral115 ( 0 ) ) } } );
                                ( temp631.fun ( &temp631.env ,  (  bb3608 ) ,  ( (  from_dash_listlike162 ) ( ( &temp633 ) ) ) ) );
                            }
                            else {
                                if (  eq560 (  dref3623 ,  from_dash_string566 ( (uint8_t*)"[" , 1 ) ) ) {
                                    struct envunion635  temp634 = ( (struct envunion635){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array477 , .env =  envinst54 } );
                                    struct Array_42  temp636 = ( (struct Array_42) { ._arr = { (  from_dash_integral115 ( 139 ) ) , (  from_dash_integral115 ( 4 ) ) , (  from_dash_integral115 ( 156 ) ) } } );
                                    ( temp634.fun ( &temp634.env ,  (  bb3608 ) ,  ( (  from_dash_listlike495 ) ( ( &temp636 ) ) ) ) );
                                    struct envunion638  temp637 = ( (struct envunion638){ .fun = (  enum Unit_5  (*) (  struct env71*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  ) )test518 , .env =  envinst71 } );
                                    ( temp637.fun ( &temp637.env ,  (  bb3608 ) ,  ( Reg_363_RAX ) ,  ( (  reg497 ) ( ( Reg_363_RAX ) ) ) ) );
                                    struct envunion640  temp639 = ( (struct envunion640){ .fun = (  size_t  (*) (  struct env359*  ) )here503 , .env =  envinst359 } );
                                    size_t  jump_dash_from3624 = ( temp639.fun ( &temp639.env ) );
                                    struct envunion642  temp641 = ( (struct envunion642){ .fun = (  size_t  (*) (  struct env76*  ,    struct ByteBuf_51 *  ,    struct RegImm_362  ) )je643 , .env =  envinst76 } );
                                    size_t  jmp_dash_off3625 = ( temp641.fun ( &temp641.env ,  (  bb3608 ) ,  ( (  dword447 ) ( (  from_dash_integral158 ( 4210752250 ) ) ) ) ) );
                                    struct envunion648  temp647 = ( (struct envunion648){ .fun = (  size_t  (*) (  struct env359*  ) )here503 , .env =  envinst359 } );
                                    size_t  loop_dash_to_dash_here3626 = ( temp647.fun ( &temp647.env ) );
                                    struct envunion650  temp649 = ( (struct envunion650){ .fun = (  enum Unit_5  (*) (  struct env9*  ,    struct List_11 *  ,    struct Jump_13  ) )add651 , .env =  envinst9 } );
                                    ( temp649.fun ( &temp649.env ,  (  jumps3620 ) ,  ( (struct Jump_13) { .f_jump_dash_addr = (  loop_dash_to_dash_here3626 ) , .f_patch_dash_addr = (  jmp_dash_off3625 ) , .f_jump_dash_from = (  jump_dash_from3624 ) } ) ) );
                                }
                                else {
                                    if (  eq560 (  dref3623 ,  from_dash_string566 ( (uint8_t*)"]" , 1 ) ) ) {
                                        struct envunion682  temp681 = ( (struct envunion682){ .fun = (  enum Unit_5  (*) (  struct env54*  ,    struct ByteBuf_51 *  ,    struct Array_42  ) )write_dash_array477 , .env =  envinst54 } );
                                        struct Array_42  temp683 = ( (struct Array_42) { ._arr = { (  from_dash_integral115 ( 139 ) ) , (  from_dash_integral115 ( 4 ) ) , (  from_dash_integral115 ( 156 ) ) } } );
                                        ( temp681.fun ( &temp681.env ,  (  bb3608 ) ,  ( (  from_dash_listlike495 ) ( ( &temp683 ) ) ) ) );
                                        struct envunion685  temp684 = ( (struct envunion685){ .fun = (  enum Unit_5  (*) (  struct env71*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  ) )test518 , .env =  envinst71 } );
                                        ( temp684.fun ( &temp684.env ,  (  bb3608 ) ,  ( Reg_363_RAX ) ,  ( (  reg497 ) ( ( Reg_363_RAX ) ) ) ) );
                                        struct envunion693  temp692 = ( (struct envunion693){ .fun = (  struct Maybe_674  (*) (  struct env17*  ,    struct List_11 *  ) )pop694 , .env =  envinst17 } );
                                        struct Jump_13  jmp_dash_addrs3627 = ( (  or_dash_fail686 ) ( ( temp692.fun ( &temp692.env ,  (  jumps3620 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)"no matching \"[\"" ) ,  ( 15 ) ) ) ) );
                                        struct envunion743  temp742 = ( (struct envunion743){ .fun = (  size_t  (*) (  struct env73*  ,    struct ByteBuf_51 *  ,    struct RegImm_362  ) )jne523 , .env =  envinst73 } );
                                        struct envunion745  temp744 = ( (struct envunion745){ .fun = (  size_t  (*) (  struct env359*  ) )here503 , .env =  envinst359 } );
                                        ( temp742.fun ( &temp742.env ,  (  bb3608 ) ,  ( (  dword447 ) ( ( (  jump_dash_offset546 ) ( ( temp744.fun ( &temp744.env ) ) ,  ( (  jmp_dash_addrs3627 ) .f_jump_dash_addr ) ) ) ) ) ) );
                                        struct envunion766  temp765 = ( (struct envunion766){ .fun = (  size_t  (*) (  struct env359*  ) )here503 , .env =  envinst359 } );
                                        ( (  patch746 ) ( (  bb3608 ) ,  ( (  jmp_dash_addrs3627 ) .f_patch_dash_addr ) ,  ( (  jump_dash_offset546 ) ( ( (  jmp_dash_addrs3627 ) .f_jump_dash_from ) ,  ( temp765.fun ( &temp765.env ) ) ) ) ) );
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
    ( (  assert767 ) ( ( (  null768 ) ( (  jumps3620 ) ) ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)"mismatched brackets. (more \"[\")" ) ,  ( 31 ) ) ) ) );
    struct envunion773  temp772 = ( (struct envunion773){ .fun = (  enum Unit_5  (*) (  struct env64*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  ) )mov471 , .env =  envinst64 } );
    ( temp772.fun ( &temp772.env ,  (  bb3608 ) ,  ( Reg_363_RAX ) ,  ( (  dword447 ) ( (  from_dash_integral158 ( 60 ) ) ) ) ) );
    struct envunion775  temp774 = ( (struct envunion775){ .fun = (  enum Unit_5  (*) (  struct env62*  ,    struct ByteBuf_51 *  ,    enum Reg_363  ,    struct RegImm_362  ) )xor776 , .env =  envinst62 } );
    ( temp774.fun ( &temp774.env ,  (  bb3608 ) ,  ( Reg_363_RDI ) ,  ( (  reg497 ) ( ( Reg_363_RDI ) ) ) ) );
    struct envunion780  temp779 = ( (struct envunion780){ .fun = (  enum Unit_5  (*) (  struct env60*  ,    struct ByteBuf_51 *  ) )syscall595 , .env =  envinst60 } );
    ( temp779.fun ( &temp779.env ,  (  bb3608 ) ) );
    struct Maybe_175  ext3636 = ( (  extension781 ) ( (  filename3554 ) ) );
    struct envunion823  temp822 = ( (struct envunion823){ .fun = (  struct StrView_95  (*) (  struct env26*  ,    struct StrConcat_399  ,    enum CAllocator_7  ) )from_dash_str824 , .env =  envinst26 } );
    struct StrView_95  nu_dash_filename3638 = ( {  struct Maybe_175  dref3637 = (  ext3636 ) ; dref3637.tag == Maybe_175_Just_t &&  eq796 (  dref3637 .stuff .Maybe_175_Just_s .field0 ,  from_dash_string167 ( (uint8_t*)"bf" , 2 ) ) ? ( (  clone_dash_0813 ) ( ( (  byte_dash_substr795 ) ( (  filename3554 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub94 ( ( (  num_dash_bytes821 ) ( (  filename3554 ) ) ) , (  from_dash_integral0 ( 3 ) ) ) ) ) ) ,  (  al3550 ) ) ) : dref3637.tag == Maybe_175_Just_t &&  eq796 (  dref3637 .stuff .Maybe_175_Just_s .field0 ,  from_dash_string167 ( (uint8_t*)"b" , 1 ) ) ? ( (  clone_dash_0813 ) ( ( (  byte_dash_substr795 ) ( (  filename3554 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub94 ( ( (  num_dash_bytes821 ) ( (  filename3554 ) ) ) , (  from_dash_integral0 ( 2 ) ) ) ) ) ) ,  (  al3550 ) ) ) : ( temp822.fun ( &temp822.env ,  ( ( StrConcat_399_StrConcat ) ( (  filename3554 ) ,  ( (  from_dash_string167 ) ( ( (uint8_t*)".exe" ) ,  ( 4 ) ) ) ) ) ,  (  al3550 ) ) ) ; } );
    ( (  write_dash_to_dash_file834 ) ( (  elf3607 ) ,  ( (  as_dash_const_dash_str211 ) ( (  nu_dash_filename3638 ) ) ) ) );
    ( (  free891 ) ( (  nu_dash_filename3638 ) ,  (  al3550 ) ) );
    ( (  free891 ) ( (  file3555 ) ,  (  al3550 ) ) );
}
