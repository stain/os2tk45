#===================================================================
#
#   AVCINST.MAK - Avcinst Make file
#   Copyright  IBM Corporation 1992
#
#===================================================================
#===================================================================
# Include the file ibmsamp.inc which defines the various macros
# depending on the target specified.
#
# The following macros are defined in ibmsamp.inc:
#
#       OBJDIR   - Directory where object files are created
#       EXEDIR   - Directory where executable files are created
#       RC       - Resource compiler
#       RCFLAGS  - Resource compiler flags
#       LINK     - Linker
#       LFLAGS   - Linker flags
#       MTLIBS   - Multithreaded versions of the runtime libraries
#       MMLIBS   - Multimedia libraries
#===================================================================

!include ..\..\ibmsamp.inc

HEADERS = avcinst.h
#-------------------------------------------------------------------
#
#   A list of all of the object files
#
#-------------------------------------------------------------------

OBJS = $(OBJDIR)\avcinst.obj

ALL_IPF = avcinst.ipf

#-------------------------------------------------------------------
#   This section lists all files to be built by the make.  The
#   makefile builds the executible as well as its associated help
#   file.
#-------------------------------------------------------------------
all: $(EXEDIR)\avcinst.exe $(EXEDIR)\avcinst.hlp

#-------------------------------------------------------------------
#   This section creates the command file used by the linker.  This
#   command file is recreated automatically every time you change
#   the object file list, linker flags, or library list.
#-------------------------------------------------------------------
#-------------------------------------------------------------------
#   Dependencies
#     This section lists all object files needed to be built for the
#     application, along with the files it is dependent upon (e.g.
#     its source and any header files).
#-------------------------------------------------------------------
$(OBJDIR)\avcinst.res: avcinst.rc $(HEADERS) avcinst.ico avcinst.dlg prodinfo.bmp
                $(RC) $(RCFLAGS) $(@B).rc $@
                @del prodinfo.bmp

$(EXEDIR)\avcinst.hlp: $(ALL_IPF)

$(OBJDIR)\avcinst.obj: avcinst.c $(HEADERS)

prodinfo.bmp :
           copy ..\..\prodinfo.bmp $@

$(EXEDIR)\avcinst.exe: $(OBJS) avcinst.def $(OBJDIR)\avcinst.res
   -$(CREATE_PATH)
   $(LINK) $@ avcinst.def $(MTLIBS) $(MMLIBS) @<<$(OBJDIR)\avcinst.lnk
$(OBJS)
<<
   $(RC) -p -x $(OBJDIR)\$(@B).res $@

clean :
        @if exist *.obj del *.obj
        @if exist *.dll del *.dll
        @if exist *.exe del *.exe
