
prefix = /usr/local
exec_prefix = ${prefix}

##########################################################################
#  	the location of data files
datarootdir = ${prefix}/share
DATADIR	= 	${datarootdir}/Ularn
DOCDIR  =   ${datarootdir}/doc/${PACKAGE_TARNAME}/Ularn-1.7.0
distdir = ../Ularn-1.7.0/data
##########################################################################

##########################################################################
#	final location of binary (for 'make install')
BINDIR = 	${exec_prefix}/bin
##########################################################################

##########################################################################
#  	name of program
PROGRAM	= Ularn
##########################################################################

##########################################################################
#	link flags
LDFLAGS= -lncurses -lz  
##########################################################################

##########################################################################
#	compile flags
CFLAGS= -g -O2
##########################################################################

##########################################################################
#	compile defs
DEFS= -DLIBDIR='"${datarootdir}/Ularn"'
##########################################################################

##########################################################################
#	data files
LIBFILES=	Uhelp Umaps Ufortune
##########################################################################

##########################################################################
#	misc files
MISCFILES=	Ularnopts
##########################################################################

##########################################################################
#   build related files
BUILDFILES= Makefile.in
##########################################################################

all:

##########################################################################
install: $(LIBFILES)
	if test ! -d $(DESTDIR)$(DOCDIR) ; then mkdir -p $(DESTDIR)$(DOCDIR) ; fi
	-cp $(MISCFILES) $(DESTDIR)$(DOCDIR)
	-chmod 644 $(DESTDIR)$(DOCDIR)/*
	if test ! -d $(DESTDIR)$(DATADIR) ; then mkdir -p $(DESTDIR)$(DATADIR) ; fi
	-cp Umaps Ufortune Uhelp $(DESTDIR)$(DATADIR)
	-chmod 644 $(DESTDIR)$(DATADIR)/Umaps $(DESTDIR)$(DATADIR)/Ufortune \
		$(DESTDIR)$(DATADIR)/Uhelp

lint:

clean:

distclean: clean
	rm -f Makefile

dist: clean
	mkdir $(distdir)
	cp $(LIBFILES) $(distdir)
	cp $(MISCFILES) $(distdir)
	cp $(BUILDFILES) $(distdir)

tags:

