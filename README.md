# less-ebcdic

less pager enhanced to detect/read EBCDIC files.

This version is less-668.

For whoever needs to deal with EBCDIC files very often, this can be handy.

Note that this is different from the original built-in EBCDIC support.
The built-in EBCDIC support is for platforms which are really of EBCDIC.

This fork is meant to be used on ASCII platforms (mainly Windows and Unices) to read EBCDIC files handily.

Features:
* Detect EBCDIC files with better accuracy.
* Added eless (i.e. less -%) that starts less in EBCDIC mode.
* less +F works for EBCDIC files.
* Visual Studio 2008/2010/2013/2015/2017/2019/2022 build support.
