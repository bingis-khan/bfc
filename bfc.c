#include <stddef.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
int _global_argc;
const char** _global_argv;
static  size_t   from_dash_integral0 (    size_t  x68 ) {
    return (  x68 );
}

static  int32_t   from_dash_integral2 (    size_t  x50 ) {
    return ( (int32_t ) (  x50 ) );
}

static  int32_t   lc_dash_ctype1 (  ) {
    return (  from_dash_integral2 ( 0 ) );
}

static  const char*   from_dash_string3 (    uint8_t *  ptr86 ,    size_t  dref87 ) {
    return ( ( (const char* ) (  ptr86 ) ) );
}

enum CAllocator_4 {
    CAllocator_4_CAllocator,
};

static  enum CAllocator_4   idc5 (  ) {
    return ( CAllocator_4_CAllocator );
}

struct Slice_6 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  int64_t   op_dash_mul9 (    int64_t  l218 ,    int64_t  r220 ) {
    return ( (  l218 ) * (  r220 ) );
}

static  const char* *   offset_dash_ptr8 (    const char* *  x382 ,    int64_t  count384 ) {
    const char*  temp10;
    return ( (const char* * ) ( ( (void*) (  x382 ) ) + (  op_dash_mul9 ( (  count384 ) , ( (int64_t ) ( sizeof( ( (  temp10 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral11 (    size_t  x47 ) {
    return ( (int64_t ) (  x47 ) );
}

static  size_t   op_dash_sub12 (    size_t  l299 ,    size_t  r301 ) {
    return ( (  l299 ) - (  r301 ) );
}

static  struct Slice_6   get7 (  ) {
    return ( (struct Slice_6) { .f_ptr = ( (  offset_dash_ptr8 ) ( ( _global_argv ) ,  (  from_dash_integral11 ( 1 ) ) ) ) , .f_count = (  op_dash_sub12 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

struct Slice_14 {
    uint8_t *  f_ptr;
    size_t  f_count;
};

struct StrView_13 {
    struct Slice_14  f_contents;
};

struct Maybe_17 {
    enum {
        Maybe_17_None_t,
        Maybe_17_Just_t,
    } tag;
    union {
        struct {
            struct StrView_13  field0;
        } Maybe_17_Just_s;
    } stuff;
};

static struct Maybe_17 Maybe_17_Just (  struct StrView_13  field0 ) {
    return ( struct Maybe_17 ) { .tag = Maybe_17_Just_t, .stuff = { .Maybe_17_Just_s = { .field0 = field0 } } };
};

struct StrConcat_19 {
    struct StrView_13  field0;
    const char*  field1;
};

static struct StrConcat_19 StrConcat_19_StrConcat (  struct StrView_13  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_19 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Char_20 {
    uint8_t *  f_ptr;
    size_t  f_num_dash_bytes;
};

struct StrConcat_18 {
    struct StrConcat_19  field0;
    struct Char_20  field1;
};

static struct StrConcat_18 StrConcat_18_StrConcat (  struct StrConcat_19  field0 ,  struct Char_20  field1 ) {
    return ( struct StrConcat_18 ) { .field0 = field0 ,  .field1 = field1 };
};

enum Unit_22 {
    Unit_22_Unit,
};

struct StrConcat_25 {
    struct StrView_13  field0;
    struct StrConcat_18  field1;
};

static struct StrConcat_25 StrConcat_25_StrConcat (  struct StrView_13  field0 ,  struct StrConcat_18  field1 ) {
    return ( struct StrConcat_25 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_24 {
    struct StrConcat_25  field0;
    struct Char_20  field1;
};

static struct StrConcat_24 StrConcat_24_StrConcat (  struct StrConcat_25  field0 ,  struct Char_20  field1 ) {
    return ( struct StrConcat_24 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i3228 (    size_t  x708 ) {
    return ( (int32_t ) (  x708 ) );
}

static  enum Unit_22   print_dash_str27 (    struct StrView_13  self1313 ) {
    ( ( printf ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i3228 ) ( ( ( (  self1313 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1313 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str31 (    const char*  self1664 ) {
    ( ( printf ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"%s" ) ,  ( 2 ) ) ) ,  (  self1664 ) ) );
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str30 (    struct StrConcat_19  self1292 ) {
    struct StrConcat_19  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str27 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str31 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

struct Array_35 {
    uint8_t _arr [4];
};

struct Scalar_37 {
    uint32_t  f_value;
};

struct CharDestructured_36 {
    enum {
        CharDestructured_36_Ref_t,
        CharDestructured_36_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_20  field0;
        } CharDestructured_36_Ref_s;
        struct {
            struct Scalar_37  field0;
        } CharDestructured_36_Scalar_s;
    } stuff;
};

static struct CharDestructured_36 CharDestructured_36_Ref (  struct Char_20  field0 ) {
    return ( struct CharDestructured_36 ) { .tag = CharDestructured_36_Ref_t, .stuff = { .CharDestructured_36_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_36 CharDestructured_36_Scalar (  struct Scalar_37  field0 ) {
    return ( struct CharDestructured_36 ) { .tag = CharDestructured_36_Scalar_t, .stuff = { .CharDestructured_36_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq39 (    uint8_t  l130 ,    uint8_t  r132 ) {
    return ( (  l130 ) == (  r132 ) );
}

static  uint8_t   size_dash_u841 (    size_t  x717 ) {
    return ( (uint8_t ) (  x717 ) );
}

static  size_t   op_dash_div42 (    size_t  l309 ,    size_t  r311 ) {
    return ( (  l309 ) / (  r311 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer40 (    uint8_t *  ptr780 ) {
    return ( (  size_dash_u841 ) ( (  op_dash_div42 ( ( ( (size_t ) (  ptr780 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral43 (    size_t  x62 ) {
    return ( (uint8_t ) (  x62 ) );
}

static  uint32_t   size_dash_u3244 (    size_t  x711 ) {
    return ( (uint32_t ) (  x711 ) );
}

static  size_t   cast45 (    uint8_t *  x400 ) {
    return ( (size_t ) (  x400 ) );
}

static  struct CharDestructured_36   destructure38 (    struct Char_20  c1234 ) {
    if ( (  eq39 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer40 ) ( ( (  c1234 ) .f_ptr ) ) ) , (  from_dash_integral43 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_36_Scalar ) ( ( (struct Scalar_37) { .f_value = ( (  size_dash_u3244 ) ( ( ( (  cast45 ) ( ( (  c1234 ) .f_ptr ) ) ) ) ) ) } ) ) );
    } else {
        return ( ( CharDestructured_36_Ref ) ( (  c1234 ) ) );
    }
}

enum Ordering_48 {
    Ordering_48_LT,
    Ordering_48_EQ,
    Ordering_48_GT,
};

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_48   cmp47 (    uint32_t  l178 ,    uint32_t  r180 ) {
    return ( builtin_uint32_tcmp( (  l178 ) , (  r180 ) ) );
}

static  uint32_t   from_dash_integral49 (    size_t  x53 ) {
    return ( (uint32_t ) (  x53 ) );
}

static  uint8_t   cast52 (    uint32_t  x400 ) {
    return ( (uint8_t ) (  x400 ) );
}

static  uint8_t   u32_dash_u851 (    uint32_t  x738 ) {
    return ( (  cast52 ) ( (  x738 ) ) );
}

static  struct Array_35   from_dash_listlike53 (    struct Array_35 *  self374 ) {
    return ( * (  self374 ) );
}

static  struct Array_35   unscalarize46 (    struct Scalar_37  scalar1237 ) {
    if ( (  cmp47 ( ( (  scalar1237 ) .f_value ) , (  from_dash_integral49 ( 128 ) ) ) == 2 ) ) {
        const char*  temp50 = ( (  from_dash_string3 ) ( ( (uint8_t*)"(unscalarize) non-ascii characters not supported for now" ) ,  ( 56 ) ) );
        printf("%s\n", temp50);
        abort ( );
        ( Unit_22_Unit );
    }
    uint8_t  b1238 = ( (  u32_dash_u851 ) ( ( (  scalar1237 ) .f_value ) ) );
    struct Array_35  temp54 = ( (struct Array_35) { ._arr = { (  b1238 ) , (  from_dash_integral43 ( 0 ) ) , (  from_dash_integral43 ( 0 ) ) , (  from_dash_integral43 ( 0 ) ) } } );
    return ( (  from_dash_listlike53 ) ( ( &temp54 ) ) );
}

static  uint8_t *   cast_dash_ptr55 (    struct Array_35 *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  struct Char_20   regularize34 (    struct Char_20  c1241 ,    struct Array_35 *  possible_dash_scalar_dash_mem1243 ) {
    struct CharDestructured_36  dref1244 = ( (  destructure38 ) ( (  c1241 ) ) );
    if ( dref1244.tag == CharDestructured_36_Ref_t ) {
        return ( dref1244 .stuff .CharDestructured_36_Ref_s .field0 );
    }
    else {
        if ( dref1244.tag == CharDestructured_36_Scalar_t ) {
            (*  possible_dash_scalar_dash_mem1243 ) = ( (  unscalarize46 ) ( ( dref1244 .stuff .CharDestructured_36_Scalar_s .field0 ) ) );
            return ( (struct Char_20) { .f_ptr = ( (  cast_dash_ptr55 ) ( (  possible_dash_scalar_dash_mem1243 ) ) ) , .f_num_dash_bytes = ( (  c1241 ) .f_num_dash_bytes ) } );
        }
    }
}

static  enum Unit_22   printf_dash_char33 (    struct Char_20  c1249 ) {
    struct Array_35  temp57;
    struct Array_35  temp56 = (  temp57 );
    struct Char_20  c1250 = ( (  regularize34 ) ( (  c1249 ) ,  ( &temp56 ) ) );
    ( ( printf ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i3228 ) ( ( (  c1250 ) .f_num_dash_bytes ) ) ) ,  ( (  c1250 ) .f_ptr ) ) );
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str32 (    struct Char_20  self1273 ) {
    ( (  printf_dash_char33 ) ( (  self1273 ) ) );
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str29 (    struct StrConcat_18  self1292 ) {
    struct StrConcat_18  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str30 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str32 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str26 (    struct StrConcat_25  self1292 ) {
    struct StrConcat_25  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str27 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str29 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str23 (    struct StrConcat_24  self1292 ) {
    struct StrConcat_24  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str26 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str32 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  struct StrView_13   from_dash_string58 (    uint8_t *  ptr90 ,    size_t  count92 ) {
    return ( (struct StrView_13) { .f_contents = ( (struct Slice_14) { .f_ptr = (  ptr90 ) , .f_count = (  count92 ) } ) } );
}

static  uint8_t *   cast60 (    uint8_t *  x400 ) {
    return ( (uint8_t * ) (  x400 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_48   cmp63 (    uint8_t  l183 ,    uint8_t  r185 ) {
    return ( builtin_uint8_tcmp( (  l183 ) , (  r185 ) ) );
}

static  size_t   next_dash_char62 (    uint8_t *  p1253 ) {
    uint8_t  pb1254 = ( * (  p1253 ) );
    if ( (  cmp63 ( (  pb1254 ) , (  from_dash_integral43 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp63 ( (  pb1254 ) , (  from_dash_integral43 ( 240 ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp63 ( (  pb1254 ) , (  from_dash_integral43 ( 224 ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp63 ( (  pb1254 ) , (  from_dash_integral43 ( 192 ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp64 = ( (  from_dash_string3 ) ( ( (uint8_t*)"(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp64);
                    abort ( );
                    ( Unit_22_Unit );
                }
            }
        }
    }
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_48   cmp65 (    size_t  l198 ,    size_t  r200 ) {
    return ( builtin_size_tcmp( (  l198 ) , (  r200 ) ) );
}

static  struct Char_20   scan_dash_from_dash_mem61 (    uint8_t *  p1257 ) {
    size_t  clen1258 = ( (  next_dash_char62 ) ( (  p1257 ) ) );
    if ( (  cmp65 ( (  clen1258 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp66 = ( (  from_dash_string3 ) ( ( (uint8_t*)"UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp66);
        abort ( );
        ( Unit_22_Unit );
    }
    return ( (struct Char_20) { .f_ptr = (  p1257 ) , .f_num_dash_bytes = (  clen1258 ) } );
}

static  struct Char_20   from_dash_charlike59 (    uint8_t *  ptr1261 ,    size_t  num_dash_bytes1263 ) {
    uint8_t *  ptr1264 = ( ( (  cast60 ) ( (  ptr1261 ) ) ) );
    return ( (  scan_dash_from_dash_mem61 ) ( (  ptr1264 ) ) );
}

static  enum Unit_22   panic21 (    struct StrConcat_18  errmsg1333 ) {
    ( (  print_dash_str23 ) ( ( ( StrConcat_24_StrConcat ) ( ( ( StrConcat_25_StrConcat ) ( ( (  from_dash_string58 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1333 ) ) ) ,  ( (  from_dash_charlike59 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_22_Unit );
}

static  struct StrView_13   undefined67 (  ) {
    struct StrView_13  temp68;
    return (  temp68 );
}

static  struct StrView_13   or_dash_fail16 (    struct Maybe_17  x1343 ,    struct StrConcat_18  errmsg1345 ) {
    struct Maybe_17  dref1346 = (  x1343 );
    if ( dref1346.tag == Maybe_17_None_t ) {
        ( (  panic21 ) ( (  errmsg1345 ) ) );
        return ( (  undefined67 ) ( ) );
    }
    else {
        if ( dref1346.tag == Maybe_17_Just_t ) {
            return ( dref1346 .stuff .Maybe_17_Just_s .field0 );
        }
    }
}

static  const char*   from_dash_charlike70 (    uint8_t *  ptr77 ,    size_t  dref78 ) {
    return ( ( (const char* ) (  ptr77 ) ) );
}

static  void *   cast_dash_ptr75 (    FILE * *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  size_t   size_dash_of76 (    FILE *  x394 ) {
    return ( sizeof( (  x394 ) ) );
}

static  FILE *   zeroed73 (  ) {
    FILE *  temp74;
    FILE *  x645 = (  temp74 );
    ( ( memset ) ( ( (  cast_dash_ptr75 ) ( ( & (  x645 ) ) ) ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  size_dash_of76 ) ( (  x645 ) ) ) ) );
    return (  x645 );
}

static  FILE *   null_dash_ptr72 (  ) {
    return ( (  zeroed73 ) ( ) );
}

static  bool   is_dash_ptr_dash_null71 (    FILE *  p655 ) {
    return ( (  p655 ) == ( (  null_dash_ptr72 ) ( ) ) );
}

static  int32_t   seek_dash_end77 (  ) {
    return (  from_dash_integral2 ( 2 ) );
}

static  int32_t   seek_dash_set78 (  ) {
    return (  from_dash_integral2 ( 0 ) );
}

struct TypeSize_81 {
    size_t  f_size;
};

static  struct TypeSize_81   get_dash_typesize80 (  ) {
    uint8_t  temp82;
    return ( (struct TypeSize_81) { .f_size = ( sizeof( ( (  temp82 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr83 (    void *  p403 ) {
    return ( (uint8_t * ) (  p403 ) );
}

static  size_t   op_dash_mul84 (    size_t  l304 ,    size_t  r306 ) {
    return ( (  l304 ) * (  r306 ) );
}

static  struct Slice_14   allocate79 (    enum CAllocator_4  dref2347 ,    size_t  count2349 ) {
    if (!(  dref2347 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2350 = ( ( ( (  get_dash_typesize80 ) ( ) ) ) .f_size );
    uint8_t *  ptr2351 = ( (  cast_dash_ptr83 ) ( ( ( malloc ) ( (  op_dash_mul84 ( (  size2350 ) , (  count2349 ) ) ) ) ) ) );
    return ( (struct Slice_14) { .f_ptr = (  ptr2351 ) , .f_count = (  count2349 ) } );
}

static  size_t   op_dash_add85 (    size_t  l294 ,    size_t  r296 ) {
    return ( (  l294 ) + (  r296 ) );
}

static  size_t   i32_dash_size86 (    int32_t  x687 ) {
    return ( (size_t ) ( (int64_t ) (  x687 ) ) );
}

struct StrConcat_93 {
    struct StrView_13  field0;
    size_t  field1;
};

static struct StrConcat_93 StrConcat_93_StrConcat (  struct StrView_13  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_93 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_92 {
    struct StrConcat_93  field0;
    struct StrView_13  field1;
};

static struct StrConcat_92 StrConcat_92_StrConcat (  struct StrConcat_93  field0 ,  struct StrView_13  field1 ) {
    return ( struct StrConcat_92 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_91 {
    struct StrConcat_92  field0;
    size_t  field1;
};

static struct StrConcat_91 StrConcat_91_StrConcat (  struct StrConcat_92  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_91 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_90 {
    struct StrConcat_91  field0;
    struct Char_20  field1;
};

static struct StrConcat_90 StrConcat_90_StrConcat (  struct StrConcat_91  field0 ,  struct Char_20  field1 ) {
    return ( struct StrConcat_90 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_96 {
    struct StrView_13  field0;
    struct StrConcat_90  field1;
};

static struct StrConcat_96 StrConcat_96_StrConcat (  struct StrView_13  field0 ,  struct StrConcat_90  field1 ) {
    return ( struct StrConcat_96 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_95 {
    struct StrConcat_96  field0;
    struct Char_20  field1;
};

static struct StrConcat_95 StrConcat_95_StrConcat (  struct StrConcat_96  field0 ,  struct Char_20  field1 ) {
    return ( struct StrConcat_95 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_22   print_dash_str102 (    size_t  self1413 ) {
    ( ( printf ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"%lu" ) ,  ( 3 ) ) ) ,  (  self1413 ) ) );
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str101 (    struct StrConcat_93  self1292 ) {
    struct StrConcat_93  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str27 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str102 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str100 (    struct StrConcat_92  self1292 ) {
    struct StrConcat_92  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str101 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str99 (    struct StrConcat_91  self1292 ) {
    struct StrConcat_91  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str100 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str102 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str98 (    struct StrConcat_90  self1292 ) {
    struct StrConcat_90  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str99 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str32 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str97 (    struct StrConcat_96  self1292 ) {
    struct StrConcat_96  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str27 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str98 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str94 (    struct StrConcat_95  self1292 ) {
    struct StrConcat_95  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str97 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str32 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   panic89 (    struct StrConcat_90  errmsg1333 ) {
    ( (  print_dash_str94 ) ( ( ( StrConcat_95_StrConcat ) ( ( ( StrConcat_96_StrConcat ) ( ( (  from_dash_string58 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1333 ) ) ) ,  ( (  from_dash_charlike59 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_22_Unit );
}

static  uint8_t *   offset_dash_ptr103 (    uint8_t *  x382 ,    int64_t  count384 ) {
    uint8_t  temp104;
    return ( (uint8_t * ) ( ( (void*) (  x382 ) ) + (  op_dash_mul9 ( (  count384 ) , ( (int64_t ) ( sizeof( ( (  temp104 ) ) ) ) ) ) ) ) );
}

static  int64_t   size_dash_i64105 (    size_t  x669 ) {
    return ( (int64_t ) (  x669 ) );
}

static  uint8_t *   get_dash_ptr88 (    struct Slice_14  slice2149 ,    size_t  i2151 ) {
    if ( ( (  cmp65 ( (  i2151 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp65 ( (  i2151 ) , ( (  slice2149 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic89 ) ( ( ( StrConcat_90_StrConcat ) ( ( ( StrConcat_91_StrConcat ) ( ( ( StrConcat_92_StrConcat ) ( ( ( StrConcat_93_StrConcat ) ( ( (  from_dash_string58 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2151 ) ) ) ,  ( (  from_dash_string58 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2149 ) .f_count ) ) ) ,  ( (  from_dash_charlike59 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr2152 = ( (  offset_dash_ptr103 ) ( ( (  slice2149 ) .f_ptr ) ,  ( (  size_dash_i64105 ) ( (  i2151 ) ) ) ) );
    return (  elem_dash_ptr2152 );
}

static  enum Unit_22   set87 (    struct Slice_14  slice2166 ,    size_t  i2168 ,    uint8_t  x2170 ) {
    uint8_t *  ep2171 = ( (  get_dash_ptr88 ) ( (  slice2166 ) ,  (  i2168 ) ) );
    (*  ep2171 ) = (  x2170 );
    return ( Unit_22_Unit );
}

static  uint8_t   char_dash_u8106 (    struct Char_20  c1430 ) {
    struct CharDestructured_36  dref1431 = ( (  destructure38 ) ( (  c1430 ) ) );
    if ( dref1431.tag == CharDestructured_36_Ref_t ) {
        return ( * ( ( dref1431 .stuff .CharDestructured_36_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref1431.tag == CharDestructured_36_Scalar_t ) {
            return ( (  u32_dash_u851 ) ( ( ( dref1431 .stuff .CharDestructured_36_Scalar_s .field0 ) .f_value ) ) );
        }
    }
}

static  struct Char_20   nullchar107 (  ) {
    return ( (  from_dash_charlike59 ) ( ( (uint8_t*)"\x00" ) ,  ( 1 ) ) );
}

static  size_t   min109 (    size_t  l1357 ,    size_t  r1359 ) {
    if ( (  cmp65 ( (  l1357 ) , (  r1359 ) ) == 0 ) ) {
        return (  l1357 );
    } else {
        return (  r1359 );
    }
}

static  struct Slice_14   subslice108 (    struct Slice_14  slice2183 ,    size_t  from2185 ,    size_t  to2187 ) {
    uint8_t *  begin_dash_ptr2188 = ( (  offset_dash_ptr103 ) ( ( (  slice2183 ) .f_ptr ) ,  ( (  size_dash_i64105 ) ( (  from2185 ) ) ) ) );
    if ( ( (  cmp65 ( (  from2185 ) , (  to2187 ) ) != 0 ) || (  cmp65 ( (  from2185 ) , ( (  slice2183 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr2188 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count2189 = (  op_dash_sub12 ( ( (  min109 ) ( (  to2187 ) ,  ( (  slice2183 ) .f_count ) ) ) , (  from2185 ) ) );
    return ( (struct Slice_14) { .f_ptr = (  begin_dash_ptr2188 ) , .f_count = (  count2189 ) } );
}

static  struct Maybe_17   try_dash_read_dash_contents69 (    const char*  filename3138 ,    enum CAllocator_4  al3140 ) {
    FILE *  file3141 = ( ( fopen ) ( (  filename3138 ) ,  ( (  from_dash_charlike70 ) ( ( (uint8_t*)"r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null71 ) ( (  file3141 ) ) ) ) {
        return ( (struct Maybe_17) { .tag = Maybe_17_None_t } );
    }
    ( ( fseek ) ( (  file3141 ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  seek_dash_end77 ) ( ) ) ) );
    int32_t  file_dash_size3142 = ( ( ftell ) ( (  file3141 ) ) );
    ( ( fseek ) ( (  file3141 ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  seek_dash_set78 ) ( ) ) ) );
    struct Slice_14  file_dash_buf3143 = ( ( (  allocate79 ) ( (  al3140 ) ,  (  op_dash_add85 ( ( (  i32_dash_size86 ) ( (  file_dash_size3142 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf3143 ) .f_ptr ) ,  (  file_dash_size3142 ) ,  (  from_dash_integral2 ( 1 ) ) ,  (  file3141 ) ) );
    ( (  set87 ) ( (  file_dash_buf3143 ) ,  ( (  i32_dash_size86 ) ( (  file_dash_size3142 ) ) ) ,  ( (  char_dash_u8106 ) ( ( (  nullchar107 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file3141 ) ) );
    struct StrView_13  str3144 = ( (struct StrView_13) { .f_contents = ( (  subslice108 ) ( (  file_dash_buf3143 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  op_dash_sub12 ( ( (  file_dash_buf3143 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) } );
    return ( ( Maybe_17_Just ) ( (  str3144 ) ) );
}

static  struct StrView_13   read_dash_contents15 (    const char*  filename3147 ,    enum CAllocator_4  al3149 ) {
    return ( (  or_dash_fail16 ) ( ( (  try_dash_read_dash_contents69 ) ( (  filename3147 ) ,  (  al3149 ) ) ) ,  ( ( StrConcat_18_StrConcat ) ( ( ( StrConcat_19_StrConcat ) ( ( (  from_dash_string58 ) ( ( (uint8_t*)"could not open file " ) ,  ( 20 ) ) ) ,  (  filename3147 ) ) ) ,  ( (  from_dash_charlike59 ) ( ( (uint8_t*)"!" ) ,  ( 1 ) ) ) ) ) ) );
}

struct Maybe_113 {
    enum {
        Maybe_113_None_t,
        Maybe_113_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_113_Just_s;
    } stuff;
};

static struct Maybe_113 Maybe_113_Just (  const char*  field0 ) {
    return ( struct Maybe_113 ) { .tag = Maybe_113_Just_t, .stuff = { .Maybe_113_Just_s = { .field0 = field0 } } };
};

static  const char*   undefined114 (  ) {
    const char*  temp115;
    return (  temp115 );
}

static  const char*   or_dash_fail112 (    struct Maybe_113  x1343 ,    struct StrConcat_90  errmsg1345 ) {
    struct Maybe_113  dref1346 = (  x1343 );
    if ( dref1346.tag == Maybe_113_None_t ) {
        ( (  panic89 ) ( (  errmsg1345 ) ) );
        return ( (  undefined114 ) ( ) );
    }
    else {
        if ( dref1346.tag == Maybe_113_Just_t ) {
            return ( dref1346 .stuff .Maybe_113_Just_s .field0 );
        }
    }
}

static  struct Maybe_113   try_dash_get116 (    struct Slice_6  slice2155 ,    size_t  i2157 ) {
    if ( ( (  cmp65 ( (  i2157 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp65 ( (  i2157 ) , ( (  slice2155 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_113) { .tag = Maybe_113_None_t } );
    }
    const char* *  elem_dash_ptr2158 = ( (  offset_dash_ptr8 ) ( ( (  slice2155 ) .f_ptr ) ,  ( (  size_dash_i64105 ) ( (  i2157 ) ) ) ) );
    return ( ( Maybe_113_Just ) ( ( * (  elem_dash_ptr2158 ) ) ) );
}

static  const char*   get111 (    struct Slice_6  slice2161 ,    size_t  i2163 ) {
    return ( (  or_dash_fail112 ) ( ( (  try_dash_get116 ) ( (  slice2161 ) ,  (  i2163 ) ) ) ,  ( ( StrConcat_90_StrConcat ) ( ( ( StrConcat_91_StrConcat ) ( ( ( StrConcat_92_StrConcat ) ( ( ( StrConcat_93_StrConcat ) ( ( (  from_dash_string58 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2163 ) ) ) ,  ( (  from_dash_string58 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2161 ) .f_count ) ) ) ,  ( (  from_dash_charlike59 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  const char*   elem_dash_get110 (    struct Slice_6  self2174 ,    size_t  idx2176 ) {
    return ( (  get111 ) ( (  self2174 ) ,  (  idx2176 ) ) );
}

struct Array_117 {
    int32_t _arr [3000];
};

static  void *   cast_dash_ptr121 (    struct Array_117 *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  size_t   size_dash_of122 (    struct Array_117  x394 ) {
    return ( sizeof( (  x394 ) ) );
}

static  struct Array_117   zeroed119 (  ) {
    struct Array_117  temp120;
    struct Array_117  x645 = (  temp120 );
    ( ( memset ) ( ( (  cast_dash_ptr121 ) ( ( & (  x645 ) ) ) ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  size_dash_of122 ) ( (  x645 ) ) ) ) );
    return (  x645 );
}

struct Tuple2_126 {
    size_t  field0;
    size_t  field1;
};

static struct Tuple2_126 Tuple2_126_Tuple2 (  size_t  field0 ,  size_t  field1 ) {
    return ( struct Tuple2_126 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Bucket_125 {
    enum {
        Bucket_125_Empty_t,
        Bucket_125_Tombstone_t,
        Bucket_125_Taken_t,
    } tag;
    union {
        struct {
            struct Tuple2_126  field0;
        } Bucket_125_Taken_s;
    } stuff;
};

static struct Bucket_125 Bucket_125_Taken (  struct Tuple2_126  field0 ) {
    return ( struct Bucket_125 ) { .tag = Bucket_125_Taken_t, .stuff = { .Bucket_125_Taken_s = { .field0 = field0 } } };
};

struct Slice_124 {
    struct Bucket_125 *  f_ptr;
    size_t  f_count;
};

struct Hash_123 {
    enum CAllocator_4  f_allocator;
    struct Slice_124  f_buckets;
    uint32_t  f_entries;
};

static  void *   cast_dash_ptr133 (    struct Bucket_125 * *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  size_t   size_dash_of134 (    struct Bucket_125 *  x394 ) {
    return ( sizeof( (  x394 ) ) );
}

static  struct Bucket_125 *   zeroed131 (  ) {
    struct Bucket_125 *  temp132;
    struct Bucket_125 *  x645 = (  temp132 );
    ( ( memset ) ( ( (  cast_dash_ptr133 ) ( ( & (  x645 ) ) ) ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  size_dash_of134 ) ( (  x645 ) ) ) ) );
    return (  x645 );
}

static  struct Bucket_125 *   null_dash_ptr130 (  ) {
    return ( (  zeroed131 ) ( ) );
}

static  struct Slice_124   empty129 (  ) {
    return ( (struct Slice_124) { .f_ptr = ( (  null_dash_ptr130 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Hash_123   mk128 (    enum CAllocator_4  al3265 ) {
    return ( (struct Hash_123) { .f_buckets = ( (  empty129 ) ( ) ) , .f_allocator = (  al3265 ) , .f_entries = (  from_dash_integral49 ( 0 ) ) } );
}

static  size_t   num_dash_bytes135 (    struct StrView_13  self2595 ) {
    return ( ( (  self2595 ) .f_contents ) .f_count );
}

struct Maybe_138 {
    enum {
        Maybe_138_None_t,
        Maybe_138_Just_t,
    } tag;
    union {
        struct {
            struct Char_20  field0;
        } Maybe_138_Just_s;
    } stuff;
};

static struct Maybe_138 Maybe_138_Just (  struct Char_20  field0 ) {
    return ( struct Maybe_138 ) { .tag = Maybe_138_Just_t, .stuff = { .Maybe_138_Just_s = { .field0 = field0 } } };
};

struct StrConcat_139 {
    struct StrConcat_93  field0;
    struct Char_20  field1;
};

static struct StrConcat_139 StrConcat_139_StrConcat (  struct StrConcat_93  field0 ,  struct Char_20  field1 ) {
    return ( struct StrConcat_139 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_143 {
    struct StrView_13  field0;
    struct StrConcat_139  field1;
};

static struct StrConcat_143 StrConcat_143_StrConcat (  struct StrView_13  field0 ,  struct StrConcat_139  field1 ) {
    return ( struct StrConcat_143 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_142 {
    struct StrConcat_143  field0;
    struct Char_20  field1;
};

static struct StrConcat_142 StrConcat_142_StrConcat (  struct StrConcat_143  field0 ,  struct Char_20  field1 ) {
    return ( struct StrConcat_142 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_22   print_dash_str145 (    struct StrConcat_139  self1292 ) {
    struct StrConcat_139  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str101 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str32 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str144 (    struct StrConcat_143  self1292 ) {
    struct StrConcat_143  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str27 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str145 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str141 (    struct StrConcat_142  self1292 ) {
    struct StrConcat_142  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str144 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str32 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   panic140 (    struct StrConcat_139  errmsg1333 ) {
    ( (  print_dash_str141 ) ( ( ( StrConcat_142_StrConcat ) ( ( ( StrConcat_143_StrConcat ) ( ( (  from_dash_string58 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1333 ) ) ) ,  ( (  from_dash_charlike59 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_22_Unit );
}

static  struct Char_20   undefined146 (  ) {
    struct Char_20  temp147;
    return (  temp147 );
}

static  struct Char_20   or_dash_fail137 (    struct Maybe_138  x1343 ,    struct StrConcat_139  errmsg1345 ) {
    struct Maybe_138  dref1346 = (  x1343 );
    if ( dref1346.tag == Maybe_138_None_t ) {
        ( (  panic140 ) ( (  errmsg1345 ) ) );
        return ( (  undefined146 ) ( ) );
    }
    else {
        if ( dref1346.tag == Maybe_138_Just_t ) {
            return ( dref1346 .stuff .Maybe_138_Just_s .field0 );
        }
    }
}

struct StrViewIter_149 {
    struct StrView_13  f_ds;
    size_t  f_i;
};

static  struct Maybe_138   next150 (    struct StrViewIter_149 *  self1308 ) {
    if ( (  cmp65 ( ( ( * (  self1308 ) ) .f_i ) , ( ( ( ( * (  self1308 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_138) { .tag = Maybe_138_None_t } );
    }
    uint8_t *  char_dash_ptr1309 = ( ( (  offset_dash_ptr103 ) ( ( (  cast60 ) ( ( ( ( ( * (  self1308 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64105 ) ( ( ( * (  self1308 ) ) .f_i ) ) ) ) ) );
    struct Char_20  char1310 = ( (  scan_dash_from_dash_mem61 ) ( (  char_dash_ptr1309 ) ) );
    (*  self1308 ) .f_i = (  op_dash_add85 ( ( ( * (  self1308 ) ) .f_i ) , ( (  char1310 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_138_Just ) ( (  char1310 ) ) );
}

static  struct StrViewIter_149   into_dash_iter152 (    struct StrViewIter_149  self1305 ) {
    return (  self1305 );
}

static  struct Maybe_138   head148 (    struct StrViewIter_149  it1164 ) {
    struct StrViewIter_149  temp151 = ( (  into_dash_iter152 ) ( (  it1164 ) ) );
    return ( (  next150 ) ( ( &temp151 ) ) );
}

static  struct StrViewIter_149   into_dash_iter154 (    struct StrView_13  self1302 ) {
    return ( (struct StrViewIter_149) { .f_ds = (  self1302 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_149   chars153 (    struct StrView_13  self1316 ) {
    return ( (  into_dash_iter154 ) ( (  self1316 ) ) );
}

static  struct Slice_14   from155 (    struct Slice_14  slice2192 ,    size_t  from2194 ) {
    return ( (  subslice108 ) ( (  slice2192 ) ,  (  from2194 ) ,  ( (  slice2192 ) .f_count ) ) );
}

static  struct Char_20   char_dash_at_dash_offset136 (    struct StrView_13  self2603 ,    size_t  i2605 ) {
    return ( (  or_dash_fail137 ) ( ( (  head148 ) ( ( (  chars153 ) ( ( (struct StrView_13) { .f_contents = ( (  from155 ) ( ( (  self2603 ) .f_contents ) ,  (  i2605 ) ) ) } ) ) ) ) ) ,  ( ( StrConcat_139_StrConcat ) ( ( ( StrConcat_93_StrConcat ) ( ( (  from_dash_string58 ) ( ( (uint8_t*)"(StrView.char-at-offset) off too great for this StrView (" ) ,  ( 57 ) ) ) ,  (  i2605 ) ) ) ,  ( (  from_dash_charlike59 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  bool   eq157 (    size_t  l140 ,    size_t  r142 ) {
    return ( (  l140 ) == (  r142 ) );
}

static  struct Array_35   uninit_dash_buf159 (  ) {
    struct Array_35  temp160;
    return (  temp160 );
}

static  int64_t   op_dash_add162 (    int64_t  l208 ,    int64_t  r210 ) {
    return ( (  l208 ) + (  r210 ) );
}

static  bool   eq156 (    struct Char_20  l1441 ,    struct Char_20  r1443 ) {
    if ( ( !  eq157 ( ( (  l1441 ) .f_num_dash_bytes ) , ( (  r1443 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Array_35  temp158 = ( (  uninit_dash_buf159 ) ( ) );
    struct Char_20  lc1444 = ( (  regularize34 ) ( (  l1441 ) ,  ( &temp158 ) ) );
    struct Array_35  temp161 = ( (  uninit_dash_buf159 ) ( ) );
    struct Char_20  rc1445 = ( (  regularize34 ) ( (  r1443 ) ,  ( &temp161 ) ) );
    int64_t  i1446 = (  from_dash_integral11 ( 0 ) );
    while ( (  cmp65 ( ( (size_t ) (  i1446 ) ) , ( (  lc1444 ) .f_num_dash_bytes ) ) == 0 ) ) {
        if ( ( !  eq39 ( ( * ( (uint8_t * ) ( ( (void*) ( (  lc1444 ) .f_ptr ) ) + (  i1446 ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( (  rc1445 ) .f_ptr ) ) + (  i1446 ) ) ) ) ) ) ) {
            return ( false );
        }
        i1446 = (  op_dash_add162 ( (  i1446 ) , (  from_dash_integral11 ( 1 ) ) ) );
    }
    return ( true );
}

static  struct Char_20   from_dash_string163 (    uint8_t *  ptr95 ,    size_t  count97 ) {
    return ( (struct Char_20) { .f_ptr = (  ptr95 ) , .f_num_dash_bytes = (  count97 ) } );
}

struct StrConcat_168 {
    struct StrConcat_92  field0;
    int32_t  field1;
};

static struct StrConcat_168 StrConcat_168_StrConcat (  struct StrConcat_92  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_168 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_167 {
    struct StrConcat_168  field0;
    struct Char_20  field1;
};

static struct StrConcat_167 StrConcat_167_StrConcat (  struct StrConcat_168  field0 ,  struct Char_20  field1 ) {
    return ( struct StrConcat_167 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_171 {
    struct StrView_13  field0;
    struct StrConcat_167  field1;
};

static struct StrConcat_171 StrConcat_171_StrConcat (  struct StrView_13  field0 ,  struct StrConcat_167  field1 ) {
    return ( struct StrConcat_171 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_170 {
    struct StrConcat_171  field0;
    struct Char_20  field1;
};

static struct StrConcat_170 StrConcat_170_StrConcat (  struct StrConcat_171  field0 ,  struct Char_20  field1 ) {
    return ( struct StrConcat_170 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_22   print_dash_str175 (    int32_t  self1407 ) {
    ( ( printf ) ( ( (  from_dash_string3 ) ( ( (uint8_t*)"%d" ) ,  ( 2 ) ) ) ,  (  self1407 ) ) );
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str174 (    struct StrConcat_168  self1292 ) {
    struct StrConcat_168  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str100 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str175 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str173 (    struct StrConcat_167  self1292 ) {
    struct StrConcat_167  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str174 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str32 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str172 (    struct StrConcat_171  self1292 ) {
    struct StrConcat_171  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str27 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str173 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str169 (    struct StrConcat_170  self1292 ) {
    struct StrConcat_170  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str172 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str32 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   panic166 (    struct StrConcat_167  errmsg1333 ) {
    ( (  print_dash_str169 ) ( ( ( StrConcat_170_StrConcat ) ( ( ( StrConcat_171_StrConcat ) ( ( (  from_dash_string58 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1333 ) ) ) ,  ( (  from_dash_charlike59 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_22_Unit );
}

static  int32_t *   cast_dash_ptr176 (    struct Array_117 *  p403 ) {
    return ( (int32_t * ) (  p403 ) );
}

static  int32_t *   offset_dash_ptr177 (    int32_t *  x382 ,    int64_t  count384 ) {
    int32_t  temp178;
    return ( (int32_t * ) ( ( (void*) (  x382 ) ) + (  op_dash_mul9 ( (  count384 ) , ( (int64_t ) ( sizeof( ( (  temp178 ) ) ) ) ) ) ) ) );
}

static  int32_t *   get_dash_ptr165 (    struct Array_117 *  arr2005 ,    size_t  i2008 ) {
    if ( ( (  cmp65 ( (  i2008 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp65 ( (  i2008 ) , ( (size_t ) ( 3000 ) ) ) != 0 ) ) ) {
        ( (  panic166 ) ( ( ( StrConcat_167_StrConcat ) ( ( ( StrConcat_168_StrConcat ) ( ( ( StrConcat_92_StrConcat ) ( ( ( StrConcat_93_StrConcat ) ( ( (  from_dash_string58 ) ( ( (uint8_t*)"Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2008 ) ) ) ,  ( (  from_dash_string58 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 3000 ) ) ) ,  ( (  from_dash_charlike59 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    int32_t *  p2009 = ( ( (  cast_dash_ptr176 ) ( (  arr2005 ) ) ) );
    return ( (  offset_dash_ptr177 ) ( (  p2009 ) ,  ( (int64_t ) (  i2008 ) ) ) );
}

static  enum Unit_22   set164 (    struct Array_117 *  arr2018 ,    size_t  i2021 ,    int32_t  e2023 ) {
    int32_t *  p2024 = ( (  get_dash_ptr165 ) ( (  arr2018 ) ,  (  i2021 ) ) );
    (*  p2024 ) = (  e2023 );
    return ( Unit_22_Unit );
}

static  int32_t   op_dash_add179 (    int32_t  l231 ,    int32_t  r233 ) {
    return ( (  l231 ) + (  r233 ) );
}

static  int32_t   get180 (    struct Array_117 *  arr2012 ,    size_t  i2015 ) {
    return ( * ( (  get_dash_ptr165 ) ( (  arr2012 ) ,  (  i2015 ) ) ) );
}

static  int32_t   op_dash_sub181 (    int32_t  l236 ,    int32_t  r238 ) {
    return ( (  l236 ) - (  r238 ) );
}

static  void *   cast_dash_ptr190 (    size_t *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  size_t   size_dash_of191 (    size_t  x394 ) {
    return ( sizeof( (  x394 ) ) );
}

static  size_t   zeroed188 (  ) {
    size_t  temp189;
    size_t  x645 = (  temp189 );
    ( ( memset ) ( ( (  cast_dash_ptr190 ) ( ( & (  x645 ) ) ) ) ,  (  from_dash_integral2 ( 0 ) ) ,  ( (  size_dash_of191 ) ( (  x645 ) ) ) ) );
    return (  x645 );
}

static  uint8_t *   cast192 (    size_t *  x400 ) {
    return ( (uint8_t * ) (  x400 ) );
}

static  size_t   cast_dash_on_dash_zeroed186 (    uint8_t  x648 ) {
    size_t  temp187 = ( (  zeroed188 ) ( ) );
    size_t *  y649 = ( &temp187 );
    uint8_t *  yp650 = ( (  cast192 ) ( (  y649 ) ) );
    (*  yp650 ) = (  x648 );
    return ( * (  y649 ) );
}

static  size_t   u8_dash_size185 (    uint8_t  x744 ) {
    return ( (  cast_dash_on_dash_zeroed186 ) ( (  x744 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer184 (    uint8_t *  ptr783 ,    uint8_t  b785 ) {
    size_t  s786 = ( ( (size_t ) (  ptr783 ) ) );
    size_t  exp787 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add85 ( (  op_dash_sub12 ( (  s786 ) , ( (  u8_dash_size185 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer40 ) ( (  ptr783 ) ) ) ) ) ) ) , (  op_dash_mul84 ( (  exp787 ) , ( (  u8_dash_size185 ) ( (  b785 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast193 (    size_t  x400 ) {
    return ( (uint8_t * ) (  x400 ) );
}

static  struct Char_20   char_dash_from_dash_u8183 (    uint8_t  b1267 ) {
    uint8_t *  ptr1268 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer184 ) ( ( ( (  cast193 ) ( ( (  u8_dash_size185 ) ( (  b1267 ) ) ) ) ) ) ,  (  from_dash_integral43 ( 103 ) ) ) );
    return ( (struct Char_20) { .f_ptr = (  ptr1268 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Char_20   from_dash_u8182 (    uint8_t  b1475 ) {
    return ( (  char_dash_from_dash_u8183 ) ( (  b1475 ) ) );
}

static  uint8_t   i32_dash_u8194 (    int32_t  x672 ) {
    return ( (uint8_t ) (  x672 ) );
}

enum EmptyIter_198 {
    EmptyIter_198_EmptyIter,
};

struct AppendIter_197 {
    enum EmptyIter_198  f_it;
    struct Char_20  f_elem;
    bool  f_appended;
};

static  struct AppendIter_197   into_dash_iter200 (    struct AppendIter_197  self1041 ) {
    return (  self1041 );
}

static  struct Maybe_138   next202 (    enum EmptyIter_198 *  dref797 ) {
    return ( (struct Maybe_138) { .tag = Maybe_138_None_t } );
}

static  struct Maybe_138   next201 (    struct AppendIter_197 *  self1044 ) {
    struct Maybe_138  dref1045 = ( (  next202 ) ( ( & ( ( * (  self1044 ) ) .f_it ) ) ) );
    if ( dref1045.tag == Maybe_138_Just_t ) {
        return ( ( Maybe_138_Just ) ( ( dref1045 .stuff .Maybe_138_Just_s .field0 ) ) );
    }
    else {
        if ( dref1045.tag == Maybe_138_None_t ) {
            if ( ( ! ( ( * (  self1044 ) ) .f_appended ) ) ) {
                (*  self1044 ) .f_appended = ( true );
                return ( ( Maybe_138_Just ) ( ( ( * (  self1044 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_138) { .tag = Maybe_138_None_t } );
        }
    }
}

static  enum Unit_22   for_dash_each196 (    struct AppendIter_197  iterable1096 ,    enum Unit_22 (*  fun1098 )(    struct Char_20  ) ) {
    struct AppendIter_197  temp199 = ( (  into_dash_iter200 ) ( (  iterable1096 ) ) );
    struct AppendIter_197 *  it1099 = ( &temp199 );
    while ( ( true ) ) {
        struct Maybe_138  dref1100 = ( (  next201 ) ( (  it1099 ) ) );
        if ( dref1100.tag == Maybe_138_None_t ) {
            return ( Unit_22_Unit );
        }
        else {
            if ( dref1100.tag == Maybe_138_Just_t ) {
                ( (  fun1098 ) ( ( dref1100 .stuff .Maybe_138_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_22_Unit );
}

static  enum EmptyIter_198   into_dash_iter207 (    enum EmptyIter_198  self795 ) {
    return (  self795 );
}

static  struct AppendIter_197   append206 (    enum EmptyIter_198  it1028 ,    struct Char_20  e1030 ) {
    return ( (struct AppendIter_197) { .f_it = ( (  into_dash_iter207 ) ( (  it1028 ) ) ) , .f_elem = (  e1030 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_197   cons205 (    enum EmptyIter_198  it1033 ,    struct Char_20  e1035 ) {
    return ( (  append206 ) ( (  it1033 ) ,  (  e1035 ) ) );
}

static  enum EmptyIter_198   nil208 (  ) {
    return ( EmptyIter_198_EmptyIter );
}

static  struct AppendIter_197   single204 (    struct Char_20  e1038 ) {
    return ( (  cons205 ) ( ( (  nil208 ) ( ) ) ,  (  e1038 ) ) );
}

static  struct AppendIter_197   chars203 (    struct Char_20  self1276 ) {
    return ( (  single204 ) ( (  self1276 ) ) );
}

static  enum Unit_22   print195 (    struct Char_20  s1325 ) {
    ( (  for_dash_each196 ) ( ( (  chars203 ) ( (  s1325 ) ) ) ,  (  printf_dash_char33 ) ) );
    return ( Unit_22_Unit );
}

struct StrConcat_211 {
    struct StrView_13  field0;
    struct Char_20  field1;
};

static struct StrConcat_211 StrConcat_211_StrConcat (  struct StrView_13  field0 ,  struct Char_20  field1 ) {
    return ( struct StrConcat_211 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_213 {
    struct StrConcat_211  field0;
    struct Char_20  field1;
};

static struct StrConcat_213 StrConcat_213_StrConcat (  struct StrConcat_211  field0 ,  struct Char_20  field1 ) {
    return ( struct StrConcat_213 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_216 {
    struct StrViewIter_149  f_left;
    struct AppendIter_197  f_right;
};

struct StrConcatIter_215 {
    struct StrConcatIter_216  f_left;
    struct AppendIter_197  f_right;
};

static  struct StrConcatIter_215   into_dash_iter218 (    struct StrConcatIter_215  self1280 ) {
    return (  self1280 );
}

static  struct Maybe_138   next220 (    struct StrConcatIter_216 *  self1283 ) {
    struct Maybe_138  dref1284 = ( (  next150 ) ( ( & ( ( * (  self1283 ) ) .f_left ) ) ) );
    if ( dref1284.tag == Maybe_138_Just_t ) {
        return ( ( Maybe_138_Just ) ( ( dref1284 .stuff .Maybe_138_Just_s .field0 ) ) );
    }
    else {
        if ( dref1284.tag == Maybe_138_None_t ) {
            return ( (  next201 ) ( ( & ( ( * (  self1283 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_138   next219 (    struct StrConcatIter_215 *  self1283 ) {
    struct Maybe_138  dref1284 = ( (  next220 ) ( ( & ( ( * (  self1283 ) ) .f_left ) ) ) );
    if ( dref1284.tag == Maybe_138_Just_t ) {
        return ( ( Maybe_138_Just ) ( ( dref1284 .stuff .Maybe_138_Just_s .field0 ) ) );
    }
    else {
        if ( dref1284.tag == Maybe_138_None_t ) {
            return ( (  next201 ) ( ( & ( ( * (  self1283 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_22   for_dash_each214 (    struct StrConcatIter_215  iterable1096 ,    enum Unit_22 (*  fun1098 )(    struct Char_20  ) ) {
    struct StrConcatIter_215  temp217 = ( (  into_dash_iter218 ) ( (  iterable1096 ) ) );
    struct StrConcatIter_215 *  it1099 = ( &temp217 );
    while ( ( true ) ) {
        struct Maybe_138  dref1100 = ( (  next219 ) ( (  it1099 ) ) );
        if ( dref1100.tag == Maybe_138_None_t ) {
            return ( Unit_22_Unit );
        }
        else {
            if ( dref1100.tag == Maybe_138_Just_t ) {
                ( (  fun1098 ) ( ( dref1100 .stuff .Maybe_138_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_22_Unit );
}

static  struct StrConcatIter_216   into_dash_iter224 (    struct StrConcat_211  dref1287 ) {
    return ( (struct StrConcatIter_216) { .f_left = ( (  chars153 ) ( ( dref1287 .field0 ) ) ) , .f_right = ( (  chars203 ) ( ( dref1287 .field1 ) ) ) } );
}

static  struct StrConcatIter_216   chars223 (    struct StrConcat_211  self1298 ) {
    return ( (  into_dash_iter224 ) ( (  self1298 ) ) );
}

static  struct StrConcatIter_215   into_dash_iter222 (    struct StrConcat_213  dref1287 ) {
    return ( (struct StrConcatIter_215) { .f_left = ( (  chars223 ) ( ( dref1287 .field0 ) ) ) , .f_right = ( (  chars203 ) ( ( dref1287 .field1 ) ) ) } );
}

static  struct StrConcatIter_215   chars221 (    struct StrConcat_213  self1298 ) {
    return ( (  into_dash_iter222 ) ( (  self1298 ) ) );
}

static  enum Unit_22   print212 (    struct StrConcat_213  s1325 ) {
    ( (  for_dash_each214 ) ( ( (  chars221 ) ( (  s1325 ) ) ) ,  (  printf_dash_char33 ) ) );
    return ( Unit_22_Unit );
}

static  enum Unit_22   println210 (    struct StrConcat_211  s1328 ) {
    ( (  print212 ) ( ( ( StrConcat_213_StrConcat ) ( (  s1328 ) ,  ( (  from_dash_charlike59 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_22_Unit );
}

static  enum Unit_22   undefined225 (  ) {
    enum Unit_22  temp226;
    return (  temp226 );
}

static  enum Unit_22   todo_prime_209 (    struct Char_20  s2125 ) {
    ( (  println210 ) ( ( ( StrConcat_211_StrConcat ) ( ( (  from_dash_string58 ) ( ( (uint8_t*)"todo: " ) ,  ( 6 ) ) ) ,  (  s2125 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined225 ) ( ) );
}

static  bool   eq227 (    int32_t  l120 ,    int32_t  r122 ) {
    return ( (  l120 ) == (  r122 ) );
}

struct Maybe_228 {
    enum {
        Maybe_228_None_t,
        Maybe_228_Just_t,
    } tag;
    union {
        struct {
            size_t  field0;
        } Maybe_228_Just_s;
    } stuff;
};

static struct Maybe_228 Maybe_228_Just (  size_t  field0 ) {
    return ( struct Maybe_228 ) { .tag = Maybe_228_Just_t, .stuff = { .Maybe_228_Just_s = { .field0 = field0 } } };
};

struct Maybe_231 {
    enum {
        Maybe_231_None_t,
        Maybe_231_Just_t,
    } tag;
    union {
        struct {
            size_t *  field0;
        } Maybe_231_Just_s;
    } stuff;
};

static struct Maybe_231 Maybe_231_Just (  size_t *  field0 ) {
    return ( struct Maybe_231 ) { .tag = Maybe_231_Just_t, .stuff = { .Maybe_231_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_228   fmap_dash_maybe230 (    struct Maybe_231  x1575 ,    size_t (*  fun1577 )(    size_t *  ) ) {
    struct Maybe_231  dref1578 = (  x1575 );
    if ( dref1578.tag == Maybe_231_None_t ) {
        return ( (struct Maybe_228) { .tag = Maybe_228_None_t } );
    }
    else {
        if ( dref1578.tag == Maybe_231_Just_t ) {
            return ( ( Maybe_228_Just ) ( ( (  fun1577 ) ( ( dref1578 .stuff .Maybe_231_Just_s .field0 ) ) ) ) );
        }
    }
}

struct Maybe_233 {
    enum {
        Maybe_233_None_t,
        Maybe_233_Just_t,
    } tag;
    union {
        struct {
            struct Bucket_125 *  field0;
        } Maybe_233_Just_s;
    } stuff;
};

static struct Maybe_233 Maybe_233_Just (  struct Bucket_125 *  field0 ) {
    return ( struct Maybe_233 ) { .tag = Maybe_233_Just_t, .stuff = { .Maybe_233_Just_s = { .field0 = field0 } } };
};

static  size_t   hash235 (    size_t  self3246 ) {
    return (  self3246 );
}

static  size_t   mod236 (    size_t  l1534 ,    size_t  d1536 ) {
    size_t  r1537 = (  op_dash_div42 ( (  l1534 ) , (  d1536 ) ) );
    size_t  m1538 = (  op_dash_sub12 ( (  l1534 ) , (  op_dash_mul84 ( (  r1537 ) , (  d1536 ) ) ) ) );
    if ( (  cmp65 ( (  m1538 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add85 ( (  d1536 ) , (  m1538 ) ) );
    } else {
        return (  m1538 );
    }
}

static  struct Bucket_125 *   offset_dash_ptr238 (    struct Bucket_125 *  x382 ,    int64_t  count384 ) {
    struct Bucket_125  temp239;
    return ( (struct Bucket_125 * ) ( ( (void*) (  x382 ) ) + (  op_dash_mul9 ( (  count384 ) , ( (int64_t ) ( sizeof( ( (  temp239 ) ) ) ) ) ) ) ) );
}

static  struct Bucket_125 *   get_dash_ptr237 (    struct Slice_124  slice2149 ,    size_t  i2151 ) {
    if ( ( (  cmp65 ( (  i2151 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp65 ( (  i2151 ) , ( (  slice2149 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic89 ) ( ( ( StrConcat_90_StrConcat ) ( ( ( StrConcat_91_StrConcat ) ( ( ( StrConcat_92_StrConcat ) ( ( ( StrConcat_93_StrConcat ) ( ( (  from_dash_string58 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2151 ) ) ) ,  ( (  from_dash_string58 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2149 ) .f_count ) ) ) ,  ( (  from_dash_charlike59 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Bucket_125 *  elem_dash_ptr2152 = ( (  offset_dash_ptr238 ) ( ( (  slice2149 ) .f_ptr ) ,  ( (  size_dash_i64105 ) ( (  i2151 ) ) ) ) );
    return (  elem_dash_ptr2152 );
}

static  struct Maybe_233   get_dash_bucket_dash_ptr234 (    struct Hash_123 *  self3302 ,    size_t  k3304 ) {
    if ( (  eq157 ( ( ( ( * (  self3302 ) ) .f_buckets ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_233) { .tag = Maybe_233_None_t } );
    }
    size_t  h3305 = ( (  hash235 ) ( (  k3304 ) ) );
    size_t  i3306 = ( (  mod236 ) ( (  h3305 ) ,  ( ( ( * (  self3302 ) ) .f_buckets ) .f_count ) ) );
    while ( ( true ) ) {
        struct Bucket_125 *  bucket_dash_ptr3307 = ( (  get_dash_ptr237 ) ( ( ( * (  self3302 ) ) .f_buckets ) ,  (  i3306 ) ) );
        struct Bucket_125 *  dref3308 = (  bucket_dash_ptr3307 );
        if ( (* dref3308 ).tag == Bucket_125_Taken_t ) {
            if ( (  eq157 ( ( (* dref3308 ) .stuff .Bucket_125_Taken_s .field0 .field0 ) , (  k3304 ) ) ) ) {
                return ( ( Maybe_233_Just ) ( (  bucket_dash_ptr3307 ) ) );
            }
        }
        else {
            if ( (* dref3308 ).tag == Bucket_125_Tombstone_t ) {
            }
            else {
                if ( (* dref3308 ).tag == Bucket_125_Empty_t ) {
                    return ( (struct Maybe_233) { .tag = Maybe_233_None_t } );
                }
            }
        }
        i3306 = ( (  mod236 ) ( (  op_dash_add85 ( (  i3306 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( ( ( * (  self3302 ) ) .f_buckets ) .f_count ) ) );
    }
}

static  struct StrConcatIter_216   into_dash_iter245 (    struct StrConcatIter_216  self1280 ) {
    return (  self1280 );
}

static  enum Unit_22   for_dash_each243 (    struct StrConcatIter_216  iterable1096 ,    enum Unit_22 (*  fun1098 )(    struct Char_20  ) ) {
    struct StrConcatIter_216  temp244 = ( (  into_dash_iter245 ) ( (  iterable1096 ) ) );
    struct StrConcatIter_216 *  it1099 = ( &temp244 );
    while ( ( true ) ) {
        struct Maybe_138  dref1100 = ( (  next220 ) ( (  it1099 ) ) );
        if ( dref1100.tag == Maybe_138_None_t ) {
            return ( Unit_22_Unit );
        }
        else {
            if ( dref1100.tag == Maybe_138_Just_t ) {
                ( (  fun1098 ) ( ( dref1100 .stuff .Maybe_138_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   print242 (    struct StrConcat_211  s1325 ) {
    ( (  for_dash_each243 ) ( ( (  chars223 ) ( (  s1325 ) ) ) ,  (  printf_dash_char33 ) ) );
    return ( Unit_22_Unit );
}

static  enum Unit_22   println241 (    struct StrView_13  s1328 ) {
    ( (  print242 ) ( ( ( StrConcat_211_StrConcat ) ( (  s1328 ) ,  ( (  from_dash_charlike59 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_22_Unit );
}

static  enum Unit_22   unreachable240 (  ) {
    ( (  println241 ) ( ( (  from_dash_string58 ) ( ( (uint8_t*)"unreachable" ) ,  ( 11 ) ) ) ) );
    ( ( abort ) ( ) );
    return ( (  undefined225 ) ( ) );
}

static  struct Maybe_231   lookup_dash_ptr232 (    struct Hash_123 *  self3320 ,    size_t  k3322 ) {
    struct Maybe_233  dref3323 = ( (  get_dash_bucket_dash_ptr234 ) ( (  self3320 ) ,  (  k3322 ) ) );
    if ( dref3323.tag == Maybe_233_Just_t && (* dref3323 .stuff .Maybe_233_Just_s .field0 ).tag == Bucket_125_Taken_t ) {
        return ( ( Maybe_231_Just ) ( ( & ( (* dref3323 .stuff .Maybe_233_Just_s .field0 ) .stuff .Bucket_125_Taken_s .field0 .field1 ) ) ) );
    }
    else {
        if ( dref3323.tag == Maybe_233_None_t ) {
            return ( (struct Maybe_231) { .tag = Maybe_231_None_t } );
        }
        else {
            if ( true ) {
                ( (  unreachable240 ) ( ) );
            }
        }
    }
}

static  size_t   lam246 (    size_t *  x3331 ) {
    return ( * (  x3331 ) );
}

static  struct Maybe_228   lookup229 (    struct Hash_123 *  self3327 ,    size_t  k3329 ) {
    return ( (  fmap_dash_maybe230 ) ( ( (  lookup_dash_ptr232 ) ( (  self3327 ) ,  (  k3329 ) ) ) ,  (  lam246 ) ) );
}

static  uint32_t *   cast253 (    size_t *  x400 ) {
    return ( (uint32_t * ) (  x400 ) );
}

static  size_t   cast_dash_on_dash_zeroed251 (    uint32_t  x648 ) {
    size_t  temp252 = ( (  zeroed188 ) ( ) );
    size_t *  y649 = ( &temp252 );
    uint32_t *  yp650 = ( (  cast253 ) ( (  y649 ) ) );
    (*  yp650 ) = (  x648 );
    return ( * (  y649 ) );
}

static  size_t   u32_dash_size250 (    uint32_t  x729 ) {
    return ( (  cast_dash_on_dash_zeroed251 ) ( (  x729 ) ) );
}

static  size_t   into_dash_uint249 (    uint32_t  self3035 ) {
    return ( (  u32_dash_size250 ) ( (  self3035 ) ) );
}

static  size_t   max254 (    size_t  l1362 ,    size_t  r1364 ) {
    if ( (  cmp65 ( (  l1362 ) , (  r1364 ) ) == 2 ) ) {
        return (  l1362 );
    } else {
        return (  r1364 );
    }
}

struct TypeSize_258 {
    size_t  f_size;
};

static  struct TypeSize_258   get_dash_typesize257 (  ) {
    struct Bucket_125  temp259;
    return ( (struct TypeSize_258) { .f_size = ( sizeof( ( (  temp259 ) ) ) ) } );
}

static  struct Bucket_125 *   cast_dash_ptr260 (    void *  p403 ) {
    return ( (struct Bucket_125 * ) (  p403 ) );
}

static  struct Slice_124   allocate256 (    enum CAllocator_4  dref2347 ,    size_t  count2349 ) {
    if (!(  dref2347 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    size_t  size2350 = ( ( ( (  get_dash_typesize257 ) ( ) ) ) .f_size );
    struct Bucket_125 *  ptr2351 = ( (  cast_dash_ptr260 ) ( ( ( malloc ) ( (  op_dash_mul84 ( (  size2350 ) , (  count2349 ) ) ) ) ) ) );
    return ( (struct Slice_124) { .f_ptr = (  ptr2351 ) , .f_count = (  count2349 ) } );
}

static  void *   cast_dash_ptr262 (    struct Bucket_125 *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  enum Unit_22   zero_dash_initialize261 (    struct Slice_124  s2197 ) {
    size_t  sz2198 = ( ( ( (  get_dash_typesize257 ) ( ) ) ) .f_size );
    ( ( memset ) ( ( (  cast_dash_ptr262 ) ( ( (  s2197 ) .f_ptr ) ) ) ,  (  from_dash_integral2 ( 0 ) ) ,  (  op_dash_mul84 ( (  sz2198 ) , ( (  s2197 ) .f_count ) ) ) ) );
    return ( Unit_22_Unit );
}

struct SliceIter_265 {
    struct Slice_124  f_slice;
    size_t  f_current_dash_offset;
};

struct Maybe_266 {
    enum {
        Maybe_266_None_t,
        Maybe_266_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_126  field0;
        } Maybe_266_Just_s;
    } stuff;
};

static struct Maybe_266 Maybe_266_Just (  struct Tuple2_126  field0 ) {
    return ( struct Maybe_266 ) { .tag = Maybe_266_Just_t, .stuff = { .Maybe_266_Just_s = { .field0 = field0 } } };
};

struct MapMaybe_264 {
    struct SliceIter_265  field0;
    struct Maybe_266 (*  field1 )(    struct Bucket_125  );
};

static struct MapMaybe_264 MapMaybe_264_MapMaybe (  struct SliceIter_265  field0 ,  struct Maybe_266 (*  field1 )(    struct Bucket_125  ) ) {
    return ( struct MapMaybe_264 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env267 {
    struct Hash_123 *  nu_dash_hash3296;
    ;
};

struct envunion268 {
    enum Unit_22  (*fun) (  struct env267*  ,    struct Tuple2_126  );
    struct env267 env;
};

static  struct MapMaybe_264   into_dash_iter270 (    struct MapMaybe_264  self817 ) {
    return (  self817 );
}

struct Maybe_272 {
    enum {
        Maybe_272_None_t,
        Maybe_272_Just_t,
    } tag;
    union {
        struct {
            struct Bucket_125  field0;
        } Maybe_272_Just_s;
    } stuff;
};

static struct Maybe_272 Maybe_272_Just (  struct Bucket_125  field0 ) {
    return ( struct Maybe_272 ) { .tag = Maybe_272_Just_t, .stuff = { .Maybe_272_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_272   next273 (    struct SliceIter_265 *  self2235 ) {
    size_t  off2236 = ( ( * (  self2235 ) ) .f_current_dash_offset );
    if ( (  cmp65 ( (  op_dash_add85 ( (  off2236 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self2235 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    struct Bucket_125  elem2237 = ( * ( (  offset_dash_ptr238 ) ( ( ( ( * (  self2235 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64105 ) ( (  off2236 ) ) ) ) ) );
    (*  self2235 ) .f_current_dash_offset = (  op_dash_add85 ( (  off2236 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_272_Just ) ( (  elem2237 ) ) );
}

static  struct Maybe_266   next271 (    struct MapMaybe_264 *  dref819 ) {
    while ( ( true ) ) {
        struct Maybe_272  dref822 = ( (  next273 ) ( ( & ( (* dref819 ) .field0 ) ) ) );
        if ( dref822.tag == Maybe_272_None_t ) {
            return ( (struct Maybe_266) { .tag = Maybe_266_None_t } );
        }
        else {
            if ( dref822.tag == Maybe_272_Just_t ) {
                struct Maybe_266  dref824 = ( ( (* dref819 ) .field1 ) ( ( dref822 .stuff .Maybe_272_Just_s .field0 ) ) );
                if ( dref824.tag == Maybe_266_None_t ) {
                }
                else {
                    if ( dref824.tag == Maybe_266_Just_t ) {
                        return ( ( Maybe_266_Just ) ( ( dref824 .stuff .Maybe_266_Just_s .field0 ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_22   for_dash_each263 (    struct MapMaybe_264  iterable1096 ,   struct envunion268  fun1098 ) {
    struct MapMaybe_264  temp269 = ( (  into_dash_iter270 ) ( (  iterable1096 ) ) );
    struct MapMaybe_264 *  it1099 = ( &temp269 );
    while ( ( true ) ) {
        struct Maybe_266  dref1100 = ( (  next271 ) ( (  it1099 ) ) );
        if ( dref1100.tag == Maybe_266_None_t ) {
            return ( Unit_22_Unit );
        }
        else {
            if ( dref1100.tag == Maybe_266_Just_t ) {
                struct envunion268  temp274 = (  fun1098 );
                ( temp274.fun ( &temp274.env ,  ( dref1100 .stuff .Maybe_266_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_22_Unit );
}

static  struct SliceIter_265   into_dash_iter277 (    struct Slice_124  self2229 ) {
    return ( (struct SliceIter_265) { .f_slice = (  self2229 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct MapMaybe_264   map_dash_maybe276 (    struct Slice_124  iterable828 ,    struct Maybe_266 (*  fun830 )(    struct Bucket_125  ) ) {
    struct SliceIter_265  it831 = ( (  into_dash_iter277 ) ( (  iterable828 ) ) );
    return ( ( MapMaybe_264_MapMaybe ) ( (  it831 ) ,  (  fun830 ) ) );
}

static  struct Maybe_266   bucket_dash_to_dash_maybe278 (    struct Bucket_125  b3268 ) {
    struct Bucket_125  dref3269 = (  b3268 );
    if ( dref3269.tag == Bucket_125_Taken_t ) {
        return ( ( Maybe_266_Just ) ( ( dref3269 .stuff .Bucket_125_Taken_s .field0 ) ) );
    }
    else {
        if ( true ) {
            return ( (struct Maybe_266) { .tag = Maybe_266_None_t } );
        }
    }
}

static  struct MapMaybe_264   entries275 (    struct Hash_123 *  self3273 ) {
    return ( (  map_dash_maybe276 ) ( ( ( * (  self3273 ) ) .f_buckets ) ,  (  bucket_dash_to_dash_maybe278 ) ) );
}

static  struct Bucket_125   undefined283 (  ) {
    struct Bucket_125  temp284;
    return (  temp284 );
}

static  struct Bucket_125   or_dash_fail282 (    struct Maybe_272  x1343 ,    struct StrConcat_90  errmsg1345 ) {
    struct Maybe_272  dref1346 = (  x1343 );
    if ( dref1346.tag == Maybe_272_None_t ) {
        ( (  panic89 ) ( (  errmsg1345 ) ) );
        return ( (  undefined283 ) ( ) );
    }
    else {
        if ( dref1346.tag == Maybe_272_Just_t ) {
            return ( dref1346 .stuff .Maybe_272_Just_s .field0 );
        }
    }
}

static  struct Maybe_272   try_dash_get285 (    struct Slice_124  slice2155 ,    size_t  i2157 ) {
    if ( ( (  cmp65 ( (  i2157 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp65 ( (  i2157 ) , ( (  slice2155 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_272) { .tag = Maybe_272_None_t } );
    }
    struct Bucket_125 *  elem_dash_ptr2158 = ( (  offset_dash_ptr238 ) ( ( (  slice2155 ) .f_ptr ) ,  ( (  size_dash_i64105 ) ( (  i2157 ) ) ) ) );
    return ( ( Maybe_272_Just ) ( ( * (  elem_dash_ptr2158 ) ) ) );
}

static  struct Bucket_125   get281 (    struct Slice_124  slice2161 ,    size_t  i2163 ) {
    return ( (  or_dash_fail282 ) ( ( (  try_dash_get285 ) ( (  slice2161 ) ,  (  i2163 ) ) ) ,  ( ( StrConcat_90_StrConcat ) ( ( ( StrConcat_91_StrConcat ) ( ( ( StrConcat_92_StrConcat ) ( ( ( StrConcat_93_StrConcat ) ( ( (  from_dash_string58 ) ( ( (uint8_t*)"Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i2163 ) ) ) ,  ( (  from_dash_string58 ) ( ( (uint8_t*)". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice2161 ) .f_count ) ) ) ,  ( (  from_dash_charlike59 ) ( ( (uint8_t*)")" ) ,  ( 1 ) ) ) ) ) ) );
}

struct Tuple2_287 {
    struct Maybe_228  field0;
    struct Maybe_228  field1;
};

static struct Tuple2_287 Tuple2_287_Tuple2 (  struct Maybe_228  field0 ,  struct Maybe_228  field1 ) {
    return ( struct Tuple2_287 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq286 (    struct Maybe_228  l155 ,    struct Maybe_228  r157 ) {
    struct Tuple2_287  dref158 = ( ( Tuple2_287_Tuple2 ) ( (  l155 ) ,  (  r157 ) ) );
    if ( dref158 .field0.tag == Maybe_228_None_t && dref158 .field1.tag == Maybe_228_None_t ) {
        return ( true );
    }
    else {
        if ( dref158 .field0.tag == Maybe_228_Just_t && dref158 .field1.tag == Maybe_228_Just_t ) {
            return (  eq157 ( ( dref158 .field0 .stuff .Maybe_228_Just_s .field0 ) , ( dref158 .field1 .stuff .Maybe_228_Just_s .field0 ) ) );
        }
        else {
            if ( true ) {
                return ( false );
            }
        }
    }
}

struct StrConcat_292 {
    struct StrView_13  field0;
    struct StrView_13  field1;
};

static struct StrConcat_292 StrConcat_292_StrConcat (  struct StrView_13  field0 ,  struct StrView_13  field1 ) {
    return ( struct StrConcat_292 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_291 {
    struct StrConcat_292  field0;
    struct Char_20  field1;
};

static struct StrConcat_291 StrConcat_291_StrConcat (  struct StrConcat_292  field0 ,  struct Char_20  field1 ) {
    return ( struct StrConcat_291 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_22   print_dash_str293 (    struct StrConcat_292  self1292 ) {
    struct StrConcat_292  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str27 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str27 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   print_dash_str290 (    struct StrConcat_291  self1292 ) {
    struct StrConcat_291  dref1293 = (  self1292 );
    if ( true ) {
        ( (  print_dash_str293 ) ( ( dref1293 .field0 ) ) );
        ( (  print_dash_str32 ) ( ( dref1293 .field1 ) ) );
    }
    return ( Unit_22_Unit );
}

static  enum Unit_22   panic289 (    struct StrView_13  errmsg1333 ) {
    ( (  print_dash_str290 ) ( ( ( StrConcat_291_StrConcat ) ( ( ( StrConcat_292_StrConcat ) ( ( (  from_dash_string58 ) ( ( (uint8_t*)"PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1333 ) ) ) ,  ( (  from_dash_charlike59 ) ( ( (uint8_t*)"\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( abort ) ( ) );
    return ( Unit_22_Unit );
}

static  size_t   undefined294 (  ) {
    size_t  temp295;
    return (  temp295 );
}

static  size_t   or_dash_fail288 (    struct Maybe_228  x1343 ,    struct StrView_13  errmsg1345 ) {
    struct Maybe_228  dref1346 = (  x1343 );
    if ( dref1346.tag == Maybe_228_None_t ) {
        ( (  panic289 ) ( (  errmsg1345 ) ) );
        return ( (  undefined294 ) ( ) );
    }
    else {
        if ( dref1346.tag == Maybe_228_Just_t ) {
            return ( dref1346 .stuff .Maybe_228_Just_s .field0 );
        }
    }
}

static  enum Unit_22   set296 (    struct Slice_124  slice2166 ,    size_t  i2168 ,    struct Bucket_125  x2170 ) {
    struct Bucket_125 *  ep2171 = ( (  get_dash_ptr237 ) ( (  slice2166 ) ,  (  i2168 ) ) );
    (*  ep2171 ) = (  x2170 );
    return ( Unit_22_Unit );
}

static  uint32_t   op_dash_add297 (    uint32_t  l254 ,    uint32_t  r256 ) {
    return ( (  l254 ) + (  r256 ) );
}

static  enum Unit_22   insert_dash_no_dash_check280 (    struct Hash_123 *  self3276 ,    size_t  k3278 ,    size_t  v3280 ) {
    size_t  h3281 = ( (  hash235 ) ( (  k3278 ) ) );
    size_t  i3282 = ( (  mod236 ) ( (  h3281 ) ,  ( ( ( * (  self3276 ) ) .f_buckets ) .f_count ) ) );
    struct Maybe_228  first_dash_free3283 = ( (struct Maybe_228) { .tag = Maybe_228_None_t } );
    while ( ( true ) ) {
        struct Bucket_125  dref3284 = ( (  get281 ) ( ( ( * (  self3276 ) ) .f_buckets ) ,  (  i3282 ) ) );
        if ( dref3284.tag == Bucket_125_Taken_t ) {
            if ( (  eq157 ( ( dref3284 .stuff .Bucket_125_Taken_s .field0 .field0 ) , (  k3278 ) ) ) ) {
                first_dash_free3283 = ( ( Maybe_228_Just ) ( (  i3282 ) ) );
                break;
            }
        }
        else {
            if ( dref3284.tag == Bucket_125_Tombstone_t ) {
                if ( (  eq286 ( (  first_dash_free3283 ) , ( (struct Maybe_228) { .tag = Maybe_228_None_t } ) ) ) ) {
                    first_dash_free3283 = ( ( Maybe_228_Just ) ( (  i3282 ) ) );
                }
            }
            else {
                if ( dref3284.tag == Bucket_125_Empty_t ) {
                    if ( (  eq286 ( (  first_dash_free3283 ) , ( (struct Maybe_228) { .tag = Maybe_228_None_t } ) ) ) ) {
                        first_dash_free3283 = ( ( Maybe_228_Just ) ( (  i3282 ) ) );
                    }
                    break;
                }
            }
        }
        i3282 = ( (  mod236 ) ( (  op_dash_add85 ( (  i3282 ) , (  from_dash_integral0 ( 1 ) ) ) ) ,  ( ( ( * (  self3276 ) ) .f_buckets ) .f_count ) ) );
    }
    size_t  insert_dash_i3286 = ( (  or_dash_fail288 ) ( (  first_dash_free3283 ) ,  ( (  from_dash_string58 ) ( ( (uint8_t*)"(insert-no-check): no free slot?" ) ,  ( 32 ) ) ) ) );
    ( (  set296 ) ( ( ( * (  self3276 ) ) .f_buckets ) ,  (  insert_dash_i3286 ) ,  ( ( Bucket_125_Taken ) ( ( ( Tuple2_126_Tuple2 ) ( (  k3278 ) ,  (  v3280 ) ) ) ) ) ) );
    (*  self3276 ) .f_entries = (  op_dash_add297 ( ( ( * (  self3276 ) ) .f_entries ) , (  from_dash_integral49 ( 1 ) ) ) );
    return ( Unit_22_Unit );
}

static  enum Unit_22   lam279 (   struct env267* env ,    struct Tuple2_126  dref3297 ) {
    return ( (  insert_dash_no_dash_check280 ) ( ( env->nu_dash_hash3296 ) ,  ( ( dref3297 .field0 ) ) ,  ( ( dref3297 .field1 ) ) ) );
}

static  enum Unit_22   free298 (    enum CAllocator_4  dref2353 ,    struct Slice_124  slice2355 ) {
    if (!(  dref2353 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr262 ) ( ( (  slice2355 ) .f_ptr ) ) ) ) );
    return ( Unit_22_Unit );
}

static  enum Unit_22   resize_dash_if_dash_needed248 (    struct Hash_123 *  self3289 ) {
    size_t  load_dash_factor3290 = (  op_dash_div42 ( (  op_dash_mul84 ( (  from_dash_integral0 ( 100 ) ) , (  op_dash_add85 ( ( (  into_dash_uint249 ) ( ( ( * (  self3289 ) ) .f_entries ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) , (  op_dash_add85 ( ( ( ( * (  self3289 ) ) .f_buckets ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    size_t  min_dash_size3291 = (  from_dash_integral0 ( 16 ) );
    size_t  min_dash_load_dash_factor3292 = (  from_dash_integral0 ( 5 ) );
    size_t  max_dash_load_dash_factor3293 = (  from_dash_integral0 ( 60 ) );
    if ( ( (  cmp65 ( (  load_dash_factor3290 ) , (  max_dash_load_dash_factor3293 ) ) == 0 ) && ( (  cmp65 ( (  load_dash_factor3290 ) , (  min_dash_load_dash_factor3292 ) ) != 0 ) || (  cmp65 ( ( (  into_dash_uint249 ) ( ( ( * (  self3289 ) ) .f_entries ) ) ) , (  min_dash_size3291 ) ) == 2 ) ) ) ) {
        return ( Unit_22_Unit );
    }
    size_t  new_dash_size3294 = ( (  eq157 ( ( ( ( * (  self3289 ) ) .f_buckets ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ? (  from_dash_integral0 ( 8 ) ) : (  cmp65 ( (  load_dash_factor3290 ) , (  min_dash_load_dash_factor3292 ) ) == 0 ) ? ( (  max254 ) ( (  op_dash_div42 ( ( ( ( * (  self3289 ) ) .f_buckets ) .f_count ) , (  from_dash_integral0 ( 2 ) ) ) ) ,  (  min_dash_size3291 ) ) ) : (  op_dash_mul84 ( ( ( ( * (  self3289 ) ) .f_buckets ) .f_count ) , (  from_dash_integral0 ( 2 ) ) ) ) );
    struct Slice_124  old_dash_bucket_dash_arr3295 = ( ( * (  self3289 ) ) .f_buckets );
    struct Hash_123  temp255 = ( (struct Hash_123) { .f_buckets = ( ( (  allocate256 ) ( ( ( * (  self3289 ) ) .f_allocator ) ,  (  new_dash_size3294 ) ) ) ) , .f_allocator = ( ( * (  self3289 ) ) .f_allocator ) , .f_entries = (  from_dash_integral49 ( 0 ) ) } );
    struct Hash_123 *  nu_dash_hash3296 = ( &temp255 );
    ( (  zero_dash_initialize261 ) ( ( ( * (  nu_dash_hash3296 ) ) .f_buckets ) ) );
    struct env267 envinst267 = {
        .nu_dash_hash3296 =  nu_dash_hash3296 ,
    };
    ( (  for_dash_each263 ) ( ( (  entries275 ) ( (  self3289 ) ) ) ,  ( (struct envunion268){ .fun = (  enum Unit_22  (*) (  struct env267*  ,    struct Tuple2_126  ) )lam279 , .env =  envinst267 } ) ) );
    ( (  free298 ) ( ( ( * (  self3289 ) ) .f_allocator ) ,  (  old_dash_bucket_dash_arr3295 ) ) );
    (*  self3289 ) = ( * (  nu_dash_hash3296 ) );
    return ( Unit_22_Unit );
}

static  enum Unit_22   insert247 (    struct Hash_123 *  self3313 ,    size_t  k3315 ,    size_t  v3317 ) {
    ( (  resize_dash_if_dash_needed248 ) ( (  self3313 ) ) );
    ( (  insert_dash_no_dash_check280 ) ( (  self3313 ) ,  (  k3315 ) ,  (  v3317 ) ) );
    return ( Unit_22_Unit );
}

static  void *   cast_dash_ptr301 (    uint8_t *  p403 ) {
    return ( (void * ) (  p403 ) );
}

static  enum Unit_22   free300 (    enum CAllocator_4  dref2353 ,    struct Slice_14  slice2355 ) {
    if (!(  dref2353 == CAllocator_4_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        abort ( );
    }
    ( ( free ) ( ( (  cast_dash_ptr301 ) ( ( (  slice2355 ) .f_ptr ) ) ) ) );
    return ( Unit_22_Unit );
}

static  enum Unit_22   free299 (    struct StrView_13  s2567 ,    enum CAllocator_4  al2569 ) {
    ( (  free300 ) ( (  al2569 ) ,  ( (struct Slice_14) { .f_ptr = ( ( (  s2567 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_22_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size2421 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor2422 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor2423 = ( (  from_dash_integral0 ( 8 ) ) );
    ( ( setlocale ) ( ( (  lc_dash_ctype1 ) ( ) ) ,  ( (  from_dash_string3 ) ( ( (uint8_t*)"" ) ,  ( 0 ) ) ) ) );
    enum CAllocator_4  al3355 = ( (  idc5 ) ( ) );
    struct Slice_6  args3358 = ( (  get7 ) ( ) );
    struct StrView_13  file3359 = ( (  read_dash_contents15 ) ( (  elem_dash_get110 ( (  args3358 ) , (  from_dash_integral0 ( 0 ) ) ) ) ,  (  al3355 ) ) );
    struct Array_117  temp118 = ( ( (  zeroed119 ) ( ) ) );
    struct Array_117 *  arr3360 = ( &temp118 );
    size_t  ip3361 = (  from_dash_integral0 ( 0 ) );
    size_t  mp3362 = (  from_dash_integral0 ( 0 ) );
    struct Hash_123  temp127 = ( ( (  mk128 ) ( (  al3355 ) ) ) );
    struct Hash_123 *  jumps3363 = ( &temp127 );
    while ( (  cmp65 ( (  ip3361 ) , ( (  num_dash_bytes135 ) ( (  file3359 ) ) ) ) == 0 ) ) {
        struct Char_20  dref3364 = ( (  char_dash_at_dash_offset136 ) ( (  file3359 ) ,  (  ip3361 ) ) );
        if (  eq156 (  dref3364 ,  from_dash_string163 ( (uint8_t*)">" , 1 ) ) ) {
            mp3362 = (  op_dash_add85 ( (  mp3362 ) , (  from_dash_integral0 ( 1 ) ) ) );
        }
        else {
            if (  eq156 (  dref3364 ,  from_dash_string163 ( (uint8_t*)"<" , 1 ) ) ) {
                mp3362 = (  op_dash_sub12 ( (  mp3362 ) , (  from_dash_integral0 ( 1 ) ) ) );
            }
            else {
                if (  eq156 (  dref3364 ,  from_dash_string163 ( (uint8_t*)"+" , 1 ) ) ) {
                    ( (  set164 ) ( (  arr3360 ) ,  (  mp3362 ) ,  (  op_dash_add179 ( ( (  get180 ) ( (  arr3360 ) ,  (  mp3362 ) ) ) , (  from_dash_integral2 ( 1 ) ) ) ) ) );
                }
                else {
                    if (  eq156 (  dref3364 ,  from_dash_string163 ( (uint8_t*)"-" , 1 ) ) ) {
                        ( (  set164 ) ( (  arr3360 ) ,  (  mp3362 ) ,  (  op_dash_sub181 ( ( (  get180 ) ( (  arr3360 ) ,  (  mp3362 ) ) ) , (  from_dash_integral2 ( 1 ) ) ) ) ) );
                    }
                    else {
                        if (  eq156 (  dref3364 ,  from_dash_string163 ( (uint8_t*)"." , 1 ) ) ) {
                            int32_t  x3365 = ( (  get180 ) ( (  arr3360 ) ,  (  mp3362 ) ) );
                            struct Char_20  c3366 = ( (  from_dash_u8182 ) ( ( (  i32_dash_u8194 ) ( (  x3365 ) ) ) ) );
                            ( (  print195 ) ( (  c3366 ) ) );
                        }
                        else {
                            if (  eq156 (  dref3364 ,  from_dash_string163 ( (uint8_t*)"," , 1 ) ) ) {
                                ( (  todo_prime_209 ) ( ( (  from_dash_charlike59 ) ( ( (uint8_t*)"," ) ,  ( 1 ) ) ) ) );
                            }
                            else {
                                if (  eq156 (  dref3364 ,  from_dash_string163 ( (uint8_t*)"[" , 1 ) ) ) {
                                    int32_t  memval3367 = ( (  get180 ) ( (  arr3360 ) ,  (  mp3362 ) ) );
                                    if ( (  eq227 ( (  memval3367 ) , (  from_dash_integral2 ( 0 ) ) ) ) ) {
                                        size_t  from_dash_jump3368 = (  ip3361 );
                                        struct Maybe_228  dref3369 = ( (  lookup229 ) ( (  jumps3363 ) ,  (  from_dash_jump3368 ) ) );
                                        if ( dref3369.tag == Maybe_228_Just_t ) {
                                            ip3361 = ( dref3369 .stuff .Maybe_228_Just_s .field0 );
                                        }
                                        else {
                                            if ( dref3369.tag == Maybe_228_None_t ) {
                                                int32_t  stak3371 = (  from_dash_integral2 ( 0 ) );
                                                while ( ( true ) ) {
                                                    ip3361 = (  op_dash_add85 ( (  ip3361 ) , (  from_dash_integral0 ( 1 ) ) ) );
                                                    struct Char_20  c3372 = ( (  char_dash_at_dash_offset136 ) ( (  file3359 ) ,  (  ip3361 ) ) );
                                                    struct Char_20  dref3373 = (  c3372 );
                                                    if (  eq156 (  dref3373 ,  from_dash_string163 ( (uint8_t*)"[" , 1 ) ) ) {
                                                        stak3371 = (  op_dash_add179 ( (  stak3371 ) , (  from_dash_integral2 ( 1 ) ) ) );
                                                    }
                                                    else {
                                                        if (  eq156 (  dref3373 ,  from_dash_string163 ( (uint8_t*)"]" , 1 ) ) ) {
                                                            if ( (  eq227 ( (  stak3371 ) , (  from_dash_integral2 ( 0 ) ) ) ) ) {
                                                                break;
                                                            }
                                                            stak3371 = (  op_dash_sub181 ( (  stak3371 ) , (  from_dash_integral2 ( 1 ) ) ) );
                                                        }
                                                        else {
                                                            if ( true ) {
                                                            }
                                                        }
                                                    }
                                                }
                                                ( (  insert247 ) ( (  jumps3363 ) ,  (  from_dash_jump3368 ) ,  (  ip3361 ) ) );
                                                ( (  insert247 ) ( (  jumps3363 ) ,  (  ip3361 ) ,  (  from_dash_jump3368 ) ) );
                                            }
                                        }
                                    }
                                }
                                else {
                                    if (  eq156 (  dref3364 ,  from_dash_string163 ( (uint8_t*)"]" , 1 ) ) ) {
                                        int32_t  memval3374 = ( (  get180 ) ( (  arr3360 ) ,  (  mp3362 ) ) );
                                        if ( ( !  eq227 ( (  memval3374 ) , (  from_dash_integral2 ( 0 ) ) ) ) ) {
                                            size_t  from_dash_jump3375 = (  ip3361 );
                                            struct Maybe_228  dref3376 = ( (  lookup229 ) ( (  jumps3363 ) ,  (  from_dash_jump3375 ) ) );
                                            if ( dref3376.tag == Maybe_228_Just_t ) {
                                                ip3361 = ( dref3376 .stuff .Maybe_228_Just_s .field0 );
                                            }
                                            else {
                                                if ( dref3376.tag == Maybe_228_None_t ) {
                                                    int32_t  stak3378 = (  from_dash_integral2 ( 0 ) );
                                                    while ( ( true ) ) {
                                                        ip3361 = (  op_dash_sub12 ( (  ip3361 ) , (  from_dash_integral0 ( 1 ) ) ) );
                                                        struct Char_20  c3379 = ( (  char_dash_at_dash_offset136 ) ( (  file3359 ) ,  (  ip3361 ) ) );
                                                        struct Char_20  dref3380 = (  c3379 );
                                                        if (  eq156 (  dref3380 ,  from_dash_string163 ( (uint8_t*)"[" , 1 ) ) ) {
                                                            if ( (  eq227 ( (  stak3378 ) , (  from_dash_integral2 ( 0 ) ) ) ) ) {
                                                                break;
                                                            }
                                                            stak3378 = (  op_dash_sub181 ( (  stak3378 ) , (  from_dash_integral2 ( 1 ) ) ) );
                                                        }
                                                        else {
                                                            if (  eq156 (  dref3380 ,  from_dash_string163 ( (uint8_t*)"]" , 1 ) ) ) {
                                                                stak3378 = (  op_dash_add179 ( (  stak3378 ) , (  from_dash_integral2 ( 1 ) ) ) );
                                                            }
                                                            else {
                                                                if ( true ) {
                                                                }
                                                            }
                                                        }
                                                    }
                                                    ( (  insert247 ) ( (  jumps3363 ) ,  (  from_dash_jump3375 ) ,  (  ip3361 ) ) );
                                                    ( (  insert247 ) ( (  jumps3363 ) ,  (  ip3361 ) ,  (  from_dash_jump3375 ) ) );
                                                }
                                            }
                                        }
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
        ip3361 = (  op_dash_add85 ( (  ip3361 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    ( (  free299 ) ( (  file3359 ) ,  (  al3355 ) ) );
}
