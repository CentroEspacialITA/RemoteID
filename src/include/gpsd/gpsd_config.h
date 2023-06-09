/* gpsd_config.h generated by scons, do not hand-hack. */

#ifndef GPSD_CONFIG_H

#define VERSION "3.24.1~dev"
#define REVISION "release-3.24-148-g938fb983c"
#define GPSD_PROTO_VERSION_MAJOR 3
#define GPSD_PROTO_VERSION_MINOR 15
#define GPSD_URL "https://gpsd.io/"

#if !defined(_POSIX_C_SOURCE)
#define _POSIX_C_SOURCE 200809L
#endif

#if !defined(_DEFAULT_SOURCE)
#define _DEFAULT_SOURCE
#endif

#if !defined(_BSD_SOURCE)
#define _BSD_SOURCE
#endif

#if !defined(_GNU_SOURCE)
#define _GNU_SOURCE 1
#endif

/* #undef HAVE_LIBUSB */

#define HAVE_LIBRT 1

#define HAVE_LIBNSL

/* #undef HAVE_LIBNSOCKET */

/* #undef HAVE_LIBTHR */

/* #undef HAVE_DBUS */

/* #undef ENABLE_BLUEZ */

#define HAVE_LINUX_CAN_H 1

#define HAVE_STDATOMIC_H 1

#define HAVE_BUILTIN_ENDIANNESS 1

/* #undef HAVE_ENDIAN_H */

/* #undef HAVE_SYS_ENDIAN_H */

#define HAVE_ARPA_INET_H 1

#define HAVE_LINUX_SERIAL_H 1

#define HAVE_NETDB_H 1

#define HAVE_NETINET_IN_H 1

#define HAVE_NETINET_IP_H 1

#define HAVE_SYS_SYSMACROS_H 1

#define HAVE_SYS_SOCKET_H 1

#define HAVE_SYS_UN_H 1

#define HAVE_SYSLOG_H 1

#define HAVE_TERMIOS_H 1

/* #undef HAVE_WINSOCK2_H */

#define STRERROR_R_STR

#define SIZEOF_TIME_T 8

#define HAVE_CFMAKERAW 1

#define HAVE_CLOCK_GETTIME 1

#define HAVE_DAEMON 1

#define HAVE_FCNTL 1

#define HAVE_FORK 1

#define HAVE_GETOPT_LONG 1

#define HAVE_GMTIME_R 1

#define HAVE_INET_NTOP 1

/* #undef HAVE_STRLCAT */

/* #undef HAVE_STRLCPY */

#define HAVE_STRNLEN 1

#define HAVE_STRPTIME 1

/* AIVDM support */
/* #undef AIVDM_ENABLE */

/* alias for NMEA0183 support, deprecated */
/* #undef ASHTECH_ENABLE */

/* application binaries directory */
#define BINDIR "bin"

/* BlueZ support for Bluetooth devices */
/* #undef BLUEZ_ENABLE */

/* client debugging support */
/* #undef CLIENTDEBUG_ENABLE */

/* control socket for hotplug notifications */
/* #undef CONTROL_SOCKET_ENABLE */

/* build with code coveraging enabled */
/* #undef COVERAGING_ENABLE */

/* enable DBUS export support */
/* #undef DBUS_EXPORT_ENABLE */

/* add debug information to build, unoptimized */
/* #undef DEBUG_ENABLE */

/* add debug information to build, optimized */
/* #undef DEBUG_OPT_ENABLE */

/* documents directory */
#define DOCDIR "share/gpsd/doc"

/* DeLorme EarthMate Zodiac support */
/* #undef EARTHMATE_ENABLE */

/* EverMore binary support */
/* #undef EVERMORE_ENABLE */

/* Jackson Labs Fury and Firefly support */
/* #undef FURY_ENABLE */

/* San Jose Navigation FV-18 support */
/* #undef FV18_ENABLE */

/* Garmin kernel driver support */
/* #undef GARMIN_ENABLE */

/* Garmin Simple Text support */
/* #undef GARMINTXT_ENABLE */

/* Geostar Protocol support */
/* #undef GEOSTAR_ENABLE */

/* Furuno GPSClock support */
/* #undef GPSCLOCK_ENABLE */

/* gpsd itself */
/* #undef GPSD_ENABLE */

/* privilege revocation group */
#define GPSD_GROUP "dialout"

/* privilege revocation user */
#define GPSD_USER "nobody"

/* gspd client programs */
/* #undef GPSDCLIENTS_ENABLE */

/* Javad GREIS support */
/* #undef GREIS_ENABLE */

/* icon directory */
#define ICONDIR "share/gpsd/icons"

/* implicit linkage is supported in shared libs */
/* #undef IMPLICIT_LINK_ENABLE */

/* header file directory */
#define INCLUDEDIR "include"

/* Spectratime iSync LNRClok/GRCLOK support */
/* #undef ISYNC_ENABLE */

/* iTrax hardware support */
/* #undef ITRAX_ENABLE */

/* system libraries */
#define LIBDIR "lib"

/* build C++ bindings */
/* #undef LIBGPSMM_ENABLE */

/* special Linux PPS hack for Raspberry Pi et al */
/* #undef MAGIC_HAT_ENABLE */

/* build help in man and HTML formats.  No/Auto/Yes. */
#define MANBUILD "auto"

/* manual pages directory */
#define MANDIR "share/man"

/* maximum allowed clients */
#define MAX_CLIENTS 64

/* maximum allowed devices */
#define MAX_DEVICES 6

/* turn off every option not set on the command line */
#define MINIMAL_ENABLE 1

/* Navcom NCT support */
/* #undef NAVCOM_ENABLE */

/* build with ncurses */
/* #undef NCURSES_ENABLE */

/* NMEA2000/CAN support */
/* #undef NMEA2000_ENABLE */

/* don't symbol-strip binaries at link time */
/* #undef NOSTRIP_ENABLE */

/* OceanServer support */
/* #undef OCEANSERVER_ENABLE */

/* Motorola OnCore chipset support */
/* #undef ONCORE_ENABLE */

/* Disciplined oscillator support */
/* #undef OSCILLATOR_ENABLE */

/* pkgconfig file directory */
#define PKGCONFIG "lib/pkgconfig"

/* installation directory prefix */
#define PREFIX "/usr/local"

/* build with profiling enabled */
/* #undef PROFILING_ENABLE */

/* build Python support and modules. */
/* #undef PYTHON_ENABLE */

/* coverage command for Python progs */
#define PYTHON_COVERAGE "coverage run"

/* Python module directory prefix */
/* #undef PYTHON_LIBDIR */

/* Python shebang */
#define PYTHON_SHEBANG "/usr/bin/env python"

/* build Qt bindings */
/* #undef QT_ENABLE */

/* version for versioned Qt */
/* #undef QT_VERSIONED */

/* Suffix for gpsd version */
/* #undef RELEASE */

/* rtcm104v2 support */
/* #undef RTCM104V2_ENABLE */

/* rtcm104v3 support */
/* #undef RTCM104V3_ENABLE */

/* Directory for run-time variable data */
#define RUNDIR "/run"

/* system binaries directory */
#define SBINDIR "sbin"

/* build shared libraries, not static */
#define SHARED_ENABLE 1

/* share directory */
#define SHAREDIR "share/gpsd"

/* export via shared memory */
/* #undef SHM_EXPORT_ENABLE */

/* SiRF chipset support */
/* #undef SIRF_ENABLE */

/* Skytraq chipset support */
/* #undef SKYTRAQ_ENABLE */

/* run tests with realistic (slow) delays */
/* #undef SLOW_ENABLE */

/* data export over sockets */
#define SOCKET_EXPORT_ENABLE 1

/* squelch gpsd_log/gpsd_hexdump to save cpu */
/* #undef SQUELCH_ENABLE */

/* Novatel SuperStarII chipset support */
/* #undef SUPERSTAR2_ENABLE */

/* system configuration directory */
#define SYSCONFDIR "etc"

/* Logical root directory for headers and libraries.
For cross-compiling, or building with multiple local toolchains.
See gcc and ld man pages for more details. */
/* #undef SYSROOT */

/* systemd socket activation */
/* #undef SYSTEMD_ENABLE */

/* Prefix to the binary tools to use (gcc, ld, etc.)
For cross-compiling, or building with multiple local toolchains.
 */
/* #undef TARGET */

/* target platform for cross-compiling (linux, darwin, etc.) */
#define TARGET_PLATFORM "linux"

/* target Python version as command */
#define TARGET_PYTHON "python"

/* time-service configuration */
/* #undef TIMESERVICE_ENABLE */

/* True North Technologies support */
/* #undef TNT_ENABLE */

/* DeLorme TripMate support */
/* #undef TRIPMATE_ENABLE */

/* Trimble TSIP support */
/* #undef TSIP_ENABLE */

/* u-blox Protocol support */
/* #undef UBLOX_ENABLE */

/* udev rules directory */
#define UDEVDIR "/lib/udev"

/* Directory for systemd unit files */
#define UNITDIR "/lib/systemd/system"

/* libusb support for USB devices */
/* #undef USB_ENABLE */

/* include xgps and xgpsspeed. */
/* #undef XGPS_ENABLE */


#define GPSD_CONFIG_H
#endif /* GPSD_CONFIG_H */
