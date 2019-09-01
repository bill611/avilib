/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* Disable x86-32 optimizations in aclib that require text relocations */
/* #undef ACLIB_DISABLE_X86_TEXTRELS */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define if your machine is PPC based */
/* #undef ARCH_PPC */

/* Define if your machine is x86 based */
/* #undef ARCH_X86 */

/* Define if your machine is AMD64 based */
#define ARCH_X86_64 1

/* maximum supported data alignment */
#define ATTRIBUTE_ALIGNED_MAX 64

/* Define if you have weird pthreads. */
/* #undef BROKEN_PTHREADS */

/* Define if your compiler groks C AltiVec extensions. */
/* #undef CAN_COMPILE_C_ALTIVEC */

/* Enable deprecated components */
/* #undef ENABLE_DEPRECATED */

/* Enable experimental components */
/* #undef ENABLE_EXPERIMENTAL */

/* have a52 support */
/* #undef HAVE_A52 */

/* Have ALSA audio */
/* #undef HAVE_ALSA */

/* Define to 1 if you have the <alsa/asoundlib.h> header file. */
/* #undef HAVE_ALSA_ASOUNDLIB_H */

/* Define if your compiler understands 3DNow assembly instructions */
#define HAVE_ASM_3DNOW 1

/* Define if your compiler understands AltiVec inline assembly */
/* #undef HAVE_ASM_ALTIVEC */

/* Define if your compiler understands MMX assembly instructions */
#define HAVE_ASM_MMX 1

/* Define if your compiler understands SSE assembly instructions */
#define HAVE_ASM_SSE 1

/* Define if your compiler understands SSE2 assembly instructions */
#define HAVE_ASM_SSE2 1

/* Have bktr(4) */
/* #undef HAVE_BKTR */

/* "have old wand header" */
/* #undef HAVE_BROKEN_WAND */

/* have bsdav support */
/* #undef HAVE_BSDAV */

/* Define to 1 if you have the <dev/bktr/ioctl_bt848.h> header file. */
/* #undef HAVE_DEV_BKTR_IOCTL_BT848_H */

/* Define to 1 if you have the <dev/ic/bt8xx.h> header file. */
/* #undef HAVE_DEV_IC_BT8XX_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `dlopen' function. */
#define HAVE_DLOPEN 1

/* Define to 1 if you have the `dlsym_prepend_underscore' function. */
/* #undef HAVE_DLSYM_PREPEND_UNDERSCORE */

/* Define to 1 if you have the <encore2.h> header file. */
/* #undef HAVE_ENCORE2_H */

/* Define to 1 if you have the <endian.h> header file. */
#define HAVE_ENDIAN_H 1

/* Define to 1 if you have the <errno.h> include file. */
#define HAVE_ERRNO_H 1

/* have faac support */
/* #undef HAVE_FAAC */

/* Define to 1 if you have the <fcntl.h> include file. */
#define HAVE_FCNTL_H 1

/* Have FFmpeg libraries support */
#define HAVE_FFMPEG 1

/* have freetype2 support */
/* #undef HAVE_FREETYPE2 */

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Compiler understands __attribute__((...)) */
#define HAVE_GCC_ATTRIBUTES 1

/* Define to 1 if you have the `getopt_long_only' function. */
#define HAVE_GETOPT_LONG_ONLY 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* ibp and lors support */
/* #undef HAVE_IBP */

/* have iconv support */
#define HAVE_ICONV 1

/* have imagemagick support */
/* #undef HAVE_IMAGEMAGICK */

/* have lame support */
/* #undef HAVE_LAME */

/* Have Lame includes in separate path */
/* #undef HAVE_LAME_INC */

/* have libavcodec support */
#define HAVE_LIBAVCODEC 1

/* have libavformat support */
#define HAVE_LIBAVFORMAT 1

/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

/* have libdv support */
/* #undef HAVE_LIBDV */

/* have libdvdread support */
/* #undef HAVE_LIBDVDREAD */

/* have libdvdread includes in separate path */
/* #undef HAVE_LIBDVDREAD_INC */

/* Define to 1 if you have the `iconv' library (-liconv). */
/* #undef HAVE_LIBICONV */

/* have libjpeg support */
#define HAVE_LIBJPEG 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* have libmpeg2 support */
/* #undef HAVE_LIBMPEG2 */

/* have libmpeg2convert support */
/* #undef HAVE_LIBMPEG2CONVERT */

/* have libpostproc support */
/* #undef HAVE_LIBPOSTPROC */

/* have libquicktime support */
/* #undef HAVE_LIBQUICKTIME */

/* have libv4l2 support */
/* #undef HAVE_LIBV4L2 */

/* have libv4lconvert support */
/* #undef HAVE_LIBV4LCONVERT */

/* have libxml2 support */
/* #undef HAVE_LIBXML2 */

/* Have libXpm support */
/* #undef HAVE_LIBXPM */

/* Have libxv support */
#define HAVE_LIBXV 1

/* Define to 1 if you have the `z' library (-lz). */
#define HAVE_LIBZ 1

/* Define to 1 if you have the <limits.h> include file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <linux/videodev2.h> header file. */
/* #undef HAVE_LINUX_VIDEODEV2_H */

/* Define to 1 if you have the <linux/videodev.h> header file. */
/* #undef HAVE_LINUX_VIDEODEV_H */

/* have lzo support */
/* #undef HAVE_LZO */

/* Define to 1 if you have the <machine/ioctl_bt848.h> header file. */
/* #undef HAVE_MACHINE_IOCTL_BT848_H */

/* Define to 1 if your system has a GNU libc compatible `malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* have mjpegtools support */
/* #undef HAVE_MJPEGTOOLS */

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* have ogg support */
/* #undef HAVE_OGG */

/* Have OSS audio */
/* #undef HAVE_OSS */

/* have pvm3 support */
/* #undef HAVE_PVM3 */

/* have sdl support */
/* #undef HAVE_SDL */

/* Define to 1 if you have the <soundcard.h> header file. */
/* #undef HAVE_SOUNDCARD_H */

/* Define to 1 if you have the <stdarg.h> include file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stddef.h> include file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> include file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> include file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <string.h> include file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the `strtof' function. */
#define HAVE_STRTOF 1

/* define if your videodev2 header has struct v4l2_buffer */
/* #undef HAVE_STRUCT_V4L2_BUFFER */

/* Have Sun style audio(4) */
/* #undef HAVE_SUNAU */

/* Define to 1 if you have sysconf(_SC_PAGESIZE). */
#define HAVE_SYSCONF_WITH_SC_PAGESIZE 1

/* Define to 1 if you have the <sys/audioio.h> header file. */
/* #undef HAVE_SYS_AUDIOIO_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/soundcard.h> header file. */
/* #undef HAVE_SYS_SOUNDCARD_H */

/* Define to 1 if you have the <sys/stat.h> include file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> include file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> include file. */
#define HAVE_SYS_TYPES_H 1

/* have theora support */
/* #undef HAVE_THEORA */

/* Define to 1 if you have the <time.h> include file. */
#define HAVE_TIME_H 1

/* Have video4linux(2) */
/* #undef HAVE_V4L */

/* have vorbis support */
/* #undef HAVE_VORBIS */

/* Define to 1 if you have the `vsscanf' function. */
#define HAVE_VSSCANF 1

/* Have X11 support */
#define HAVE_X11 1

/* Have Xshm support */
#define HAVE_X11_SHM 1

/* Define to 1 if you have the <X11/Xaw/Simple.h> header file. */
/* #undef HAVE_X11_XAW_SIMPLE_H */

/* have x264 support */
/* #undef HAVE_X264 */

/* Have the Xaw Simple.h file support */
/* #undef HAVE_XAW_SIMPLE */

/* have xvid support */
/* #undef HAVE_XVID */

/* Have libquicktime 1.0.0 or newer */
/* #undef LIBQUICKTIME_000904 */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Define if your system is modern BSD */
/* #undef OS_BSD */

/* Define if this is a Darwin / MacOS X system. */
/* #undef OS_DARWIN */

/* Define if your system is Linux */
#define OS_LINUX 1

/* Name of package */
#define PACKAGE "transcode"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "transcode"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "transcode 1.1.7"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "transcode"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.1.7"

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Use the static buffers */
#define STATBUFFER 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* using mjpegtools post Mar 31 2004 */
/* #undef USE_NEW_MJPEGTOOLS_CODE */

/* Version number of package */
#define VERSION "1.1.7"

/* Define if your CPU is big-endian. */
/* #undef WORDS_BIGENDIAN */

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to rpl_malloc if the replacement function should be used. */
/* #undef malloc */
