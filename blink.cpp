# 1 "blink.c"
# 1 "/data/nick/i/gitworking/noofac/nim-test//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "blink.c"

# 1 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/io.h" 1 3
# 99 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/io.h" 3
# 1 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/sfr_defs.h" 1 3
# 126 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/sfr_defs.h" 3
# 1 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/inttypes.h" 1 3
# 37 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/inttypes.h" 3
# 1 "/usr/lib/gcc/avr/4.5.3/include/stdint.h" 1 3 4


# 1 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/stdint.h" 1 3 4
# 121 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/stdint.h" 3 4
typedef int int8_t __attribute__((__mode__(__QI__)));
typedef unsigned int uint8_t __attribute__((__mode__(__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int uint16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int uint32_t __attribute__ ((__mode__ (__SI__)));

typedef int int64_t __attribute__((__mode__(__DI__)));
typedef unsigned int uint64_t __attribute__((__mode__(__DI__)));
# 142 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/stdint.h" 3 4
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
# 159 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/stdint.h" 3 4
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
# 213 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/stdint.h" 3 4
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
# 273 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/stdint.h" 3 4
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 4 "/usr/lib/gcc/avr/4.5.3/include/stdint.h" 2 3 4
# 38 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/inttypes.h" 2 3
# 77 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 127 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/sfr_defs.h" 2 3
# 100 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/io.h" 2 3
# 254 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/io.h" 3
# 1 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/iom168.h" 1 3
# 36 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/iom168.h" 3
# 1 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/iomx8.h" 1 3
# 37 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/iom168.h" 2 3
# 255 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/io.h" 2 3
# 432 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/io.h" 3
# 1 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/portpins.h" 1 3
# 433 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/io.h" 2 3

# 1 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/common.h" 1 3
# 435 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/io.h" 2 3

# 1 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/version.h" 1 3
# 437 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/io.h" 2 3


# 1 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/fuse.h" 1 3
# 239 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/fuse.h" 3
typedef struct
{
    unsigned char low;
    unsigned char high;
    unsigned char extended;
} __fuse_t;
# 440 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/io.h" 2 3


# 1 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/lock.h" 1 3
# 443 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/io.h" 2 3
# 3 "blink.c" 2
# 1 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay.h" 1 3
# 43 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay.h" 3
# 1 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay_basic.h" 1 3
# 40 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay_basic.h" 3
static inline void _delay_loop_1(uint8_t __count) __attribute__((always_inline));
static inline void _delay_loop_2(uint16_t __count) __attribute__((always_inline));
# 80 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay_basic.h" 3
void
_delay_loop_1(uint8_t __count)
{
 __asm__ volatile (
  "1: dec %0" "\n\t"
  "brne 1b"
  : "=r" (__count)
  : "0" (__count)
 );
}
# 102 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay_basic.h" 3
void
_delay_loop_2(uint16_t __count)
{
 __asm__ volatile (
  "1: sbiw %0,1" "\n\t"
  "brne 1b"
  : "=w" (__count)
  : "0" (__count)
 );
}
# 44 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay.h" 2 3
# 1 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/math.h" 1 3
# 127 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/math.h" 3
extern double cos(double __x) __attribute__((__const__));





extern double sin(double __x) __attribute__((__const__));





extern double tan(double __x) __attribute__((__const__));






extern double fabs(double __x) __attribute__((__const__));






extern double fmod(double __x, double __y) __attribute__((__const__));
# 168 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/math.h" 3
extern double modf(double __x, double *__iptr);



extern float modff (float __x, float *__iptr);




extern double sqrt(double __x) __attribute__((__const__));





extern double cbrt(double __x) __attribute__((__const__));
# 194 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/math.h" 3
extern double hypot (double __x, double __y) __attribute__((__const__));







extern double square(double __x) __attribute__((__const__));






extern double floor(double __x) __attribute__((__const__));






extern double ceil(double __x) __attribute__((__const__));
# 234 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/math.h" 3
extern double frexp(double __x, int *__pexp);







extern double ldexp(double __x, int __exp) __attribute__((__const__));





extern double exp(double __x) __attribute__((__const__));





extern double cosh(double __x) __attribute__((__const__));





extern double sinh(double __x) __attribute__((__const__));





extern double tanh(double __x) __attribute__((__const__));







extern double acos(double __x) __attribute__((__const__));







extern double asin(double __x) __attribute__((__const__));






extern double atan(double __x) __attribute__((__const__));
# 298 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/math.h" 3
extern double atan2(double __y, double __x) __attribute__((__const__));





extern double log(double __x) __attribute__((__const__));





extern double log10(double __x) __attribute__((__const__));





extern double pow(double __x, double __y) __attribute__((__const__));






extern int isnan(double __x) __attribute__((__const__));
# 333 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/math.h" 3
extern int isinf(double __x) __attribute__((__const__));






__attribute__((__const__)) static inline int isfinite (double __x)
{
    unsigned char __exp;
    __asm__ (
 "mov	%0, %C1		\n\t"
 "lsl	%0		\n\t"
 "mov	%0, %D1		\n\t"
 "rol	%0		"
 : "=r" (__exp)
 : "r" (__x) );
    return __exp != 0xff;
}






__attribute__((__const__)) static inline double copysign (double __x, double __y)
{
    __asm__ (
 "bst	%D2, 7	\n\t"
 "bld	%D0, 7	"
 : "=r" (__x)
 : "0" (__x), "r" (__y) );
    return __x;
}
# 376 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/math.h" 3
extern int signbit (double __x) __attribute__((__const__));






extern double fdim (double __x, double __y) __attribute__((__const__));
# 392 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/math.h" 3
extern double fma (double __x, double __y, double __z) __attribute__((__const__));







extern double fmax (double __x, double __y) __attribute__((__const__));







extern double fmin (double __x, double __y) __attribute__((__const__));






extern double trunc (double __x) __attribute__((__const__));
# 426 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/math.h" 3
extern double round (double __x) __attribute__((__const__));
# 439 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/math.h" 3
extern long lround (double __x) __attribute__((__const__));
# 453 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/math.h" 3
extern long lrint (double __x) __attribute__((__const__));
# 45 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay.h" 2 3
# 84 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay.h" 3
static inline void _delay_us(double __us) __attribute__((always_inline));
static inline void _delay_ms(double __ms) __attribute__((always_inline));
# 132 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay.h" 3
void
_delay_ms(double __ms)
{
 uint16_t __ticks;
 double __tmp ;

 uint32_t __ticks_dc;
 extern void __builtin_avr_delay_cycles(unsigned long);
 __tmp = ((16000000L) / 1e3) * __ms;
# 150 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay.h" 3
  __ticks_dc = (uint32_t)(ceil(fabs(__tmp)));


 __builtin_avr_delay_cycles(__ticks_dc);
# 175 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay.h" 3
}
# 209 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay.h" 3
void
_delay_us(double __us)
{
 uint8_t __ticks;
 double __tmp ;

 uint32_t __ticks_dc;
 extern void __builtin_avr_delay_cycles(unsigned long);
 __tmp = ((16000000L) / 1e6) * __us;
# 227 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay.h" 3
  __ticks_dc = (uint32_t)(ceil(fabs(__tmp)));


 __builtin_avr_delay_cycles(__ticks_dc);
# 245 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/util/delay.h" 3
}
# 4 "blink.c" 2


enum {
 BLINK_DELAY_MS = 1000,
};

int main (void)
{
  int delay;

 (*(volatile uint8_t *)((0x04) + 0x20)) |= (1 << (5));

 while(1) {

  (*(volatile uint8_t *)((0x05) + 0x20)) |= (1 << (5));

  for(delay = 0; delay < 1000; delay++);


  (*(volatile uint8_t *)((0x05) + 0x20)) &= ~(1 << (5));

  for(delay = 0; delay < 1000; delay++);
 }

 return 0;
}
