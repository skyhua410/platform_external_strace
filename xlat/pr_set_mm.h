/* Generated by ./xlat/gen.sh from ./xlat/pr_set_mm.in; do not edit. */
#if !(defined(PR_SET_MM_START_CODE) || (defined(HAVE_DECL_PR_SET_MM_START_CODE) && HAVE_DECL_PR_SET_MM_START_CODE))
# define PR_SET_MM_START_CODE 1
#endif
#if !(defined(PR_SET_MM_END_CODE) || (defined(HAVE_DECL_PR_SET_MM_END_CODE) && HAVE_DECL_PR_SET_MM_END_CODE))
# define PR_SET_MM_END_CODE 2
#endif
#if !(defined(PR_SET_MM_START_DATA) || (defined(HAVE_DECL_PR_SET_MM_START_DATA) && HAVE_DECL_PR_SET_MM_START_DATA))
# define PR_SET_MM_START_DATA 3
#endif
#if !(defined(PR_SET_MM_END_DATA) || (defined(HAVE_DECL_PR_SET_MM_END_DATA) && HAVE_DECL_PR_SET_MM_END_DATA))
# define PR_SET_MM_END_DATA 4
#endif
#if !(defined(PR_SET_MM_START_STACK) || (defined(HAVE_DECL_PR_SET_MM_START_STACK) && HAVE_DECL_PR_SET_MM_START_STACK))
# define PR_SET_MM_START_STACK 5
#endif
#if !(defined(PR_SET_MM_START_BRK) || (defined(HAVE_DECL_PR_SET_MM_START_BRK) && HAVE_DECL_PR_SET_MM_START_BRK))
# define PR_SET_MM_START_BRK 6
#endif
#if !(defined(PR_SET_MM_BRK) || (defined(HAVE_DECL_PR_SET_MM_BRK) && HAVE_DECL_PR_SET_MM_BRK))
# define PR_SET_MM_BRK 7
#endif
#if !(defined(PR_SET_MM_ARG_START) || (defined(HAVE_DECL_PR_SET_MM_ARG_START) && HAVE_DECL_PR_SET_MM_ARG_START))
# define PR_SET_MM_ARG_START 8
#endif
#if !(defined(PR_SET_MM_ARG_END) || (defined(HAVE_DECL_PR_SET_MM_ARG_END) && HAVE_DECL_PR_SET_MM_ARG_END))
# define PR_SET_MM_ARG_END 9
#endif
#if !(defined(PR_SET_MM_ENV_START) || (defined(HAVE_DECL_PR_SET_MM_ENV_START) && HAVE_DECL_PR_SET_MM_ENV_START))
# define PR_SET_MM_ENV_START 10
#endif
#if !(defined(PR_SET_MM_ENV_END) || (defined(HAVE_DECL_PR_SET_MM_ENV_END) && HAVE_DECL_PR_SET_MM_ENV_END))
# define PR_SET_MM_ENV_END 11
#endif
#if !(defined(PR_SET_MM_AUXV) || (defined(HAVE_DECL_PR_SET_MM_AUXV) && HAVE_DECL_PR_SET_MM_AUXV))
# define PR_SET_MM_AUXV 12
#endif
#if !(defined(PR_SET_MM_EXE_FILE) || (defined(HAVE_DECL_PR_SET_MM_EXE_FILE) && HAVE_DECL_PR_SET_MM_EXE_FILE))
# define PR_SET_MM_EXE_FILE 13
#endif
#if !(defined(PR_SET_MM_MAP) || (defined(HAVE_DECL_PR_SET_MM_MAP) && HAVE_DECL_PR_SET_MM_MAP))
# define PR_SET_MM_MAP 14
#endif
#if !(defined(PR_SET_MM_MAP_SIZE) || (defined(HAVE_DECL_PR_SET_MM_MAP_SIZE) && HAVE_DECL_PR_SET_MM_MAP_SIZE))
# define PR_SET_MM_MAP_SIZE 15
#endif

#ifdef IN_MPERS

# error static const struct xlat pr_set_mm in mpers mode

#else

static
const struct xlat pr_set_mm[] = {
 XLAT(PR_SET_MM_START_CODE),
 XLAT(PR_SET_MM_END_CODE),
 XLAT(PR_SET_MM_START_DATA),
 XLAT(PR_SET_MM_END_DATA),
 XLAT(PR_SET_MM_START_STACK),
 XLAT(PR_SET_MM_START_BRK),
 XLAT(PR_SET_MM_BRK),
 XLAT(PR_SET_MM_ARG_START),
 XLAT(PR_SET_MM_ARG_END),
 XLAT(PR_SET_MM_ENV_START),
 XLAT(PR_SET_MM_ENV_END),
 XLAT(PR_SET_MM_AUXV),
 XLAT(PR_SET_MM_EXE_FILE),
 XLAT(PR_SET_MM_MAP),
 XLAT(PR_SET_MM_MAP_SIZE),
 XLAT_END
};

#endif /* !IN_MPERS */
