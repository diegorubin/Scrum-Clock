## Process this file with automake to produce Makefile.in

## Created by Anjuta

uidir = $(datadir)/scrum_clock/ui
ui_DATA = scrum_clock.ui

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	$(SCRUM_CLOCK_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = scrum_clock

scrum_clock_SOURCES = \
	main.cc      \
	win-main.h      \
	win-main.cc

scrum_clock_LDFLAGS = 

scrum_clock_LDADD = $(SCRUM_CLOCK_LIBS)

EXTRA_DIST = $(ui_DATA)

# Remove ui directory on uninstall
uninstall-local:
	-rm -r $(uidir)
	-rm -r $(datadir)/scrum_clock
