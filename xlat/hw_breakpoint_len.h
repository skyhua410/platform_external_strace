/* Generated by ./xlat/gen.sh from ./xlat/hw_breakpoint_len.in; do not edit. */
#if !(defined(HW_BREAKPOINT_LEN_1) || (defined(HAVE_DECL_HW_BREAKPOINT_LEN_1) && HAVE_DECL_HW_BREAKPOINT_LEN_1))
# define HW_BREAKPOINT_LEN_1 1
#endif
#if !(defined(HW_BREAKPOINT_LEN_2) || (defined(HAVE_DECL_HW_BREAKPOINT_LEN_2) && HAVE_DECL_HW_BREAKPOINT_LEN_2))
# define HW_BREAKPOINT_LEN_2 2
#endif
#if !(defined(HW_BREAKPOINT_LEN_4) || (defined(HAVE_DECL_HW_BREAKPOINT_LEN_4) && HAVE_DECL_HW_BREAKPOINT_LEN_4))
# define HW_BREAKPOINT_LEN_4 4
#endif
#if !(defined(HW_BREAKPOINT_LEN_8) || (defined(HAVE_DECL_HW_BREAKPOINT_LEN_8) && HAVE_DECL_HW_BREAKPOINT_LEN_8))
# define HW_BREAKPOINT_LEN_8 8
#endif

#ifdef IN_MPERS

# error static const struct xlat hw_breakpoint_len in mpers mode

#else

static
const struct xlat hw_breakpoint_len[] = {
 XLAT(HW_BREAKPOINT_LEN_1),
 XLAT(HW_BREAKPOINT_LEN_2),
 XLAT(HW_BREAKPOINT_LEN_4),
 XLAT(HW_BREAKPOINT_LEN_8),
 XLAT_END
};

#endif /* !IN_MPERS */
