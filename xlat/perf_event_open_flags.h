/* Generated by ./xlat/gen.sh from ./xlat/perf_event_open_flags.in; do not edit. */

static const struct xlat perf_event_open_flags[] = {
#if defined(PERF_FLAG_FD_NO_GROUP) || (defined(HAVE_DECL_PERF_FLAG_FD_NO_GROUP) && HAVE_DECL_PERF_FLAG_FD_NO_GROUP)
 XLAT(PERF_FLAG_FD_NO_GROUP),
#endif
#if defined(PERF_FLAG_FD_OUTPUT) || (defined(HAVE_DECL_PERF_FLAG_FD_OUTPUT) && HAVE_DECL_PERF_FLAG_FD_OUTPUT)
 XLAT(PERF_FLAG_FD_OUTPUT),
#endif
#if defined(PERF_FLAG_PID_CGROUP) || (defined(HAVE_DECL_PERF_FLAG_PID_CGROUP) && HAVE_DECL_PERF_FLAG_PID_CGROUP)
 XLAT(PERF_FLAG_PID_CGROUP),
#endif
 XLAT_END
};