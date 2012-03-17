#define HAVE_STDINT_H 1

#define HAVE_SYS_TYPES_H 1

#define HAVE_LONG_LONG_INT 1

#define HAVE_UNSIGNED_LONG_LONG_INT 1

#define inline __inline

#ifdef _WIN64
# error "Define BITSIZEOF_PTRDIFF_T and friends for win64 please"
#else
# define BITSIZEOF_PTRDIFF_T 32
# define ZERO_PTRDIFF_T 0
# define BITSIZEOF_SIZE_T 32
# define ZERO_SIZE_T 0u
# define BITSIZEOF_WCHAR_T 16
# define ZERO_WCHAR_T 0u
# define BITSIZEOF_WINT_T 16
# define ZERO_WINT_T 0u
#endif

#define APPLE_UNIVERSAL_BUILD 0

#define HAVE_SIGNED_SIG_ATOMIC_T 0

#define HAVE_SIGNED_WCHAR_T 0

#define HAVE_SIGNED_WINT_T 0

#define LIBDIR LIBDIR_DEFINE_SHOULD_NOT_EVER_BE_USED
