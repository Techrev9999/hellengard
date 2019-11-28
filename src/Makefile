# -C = Case sensitive labels
# -B = automatic bxx *+3 jmpo $xxxx

# Currently this is set up for windows, but it's not hard to convert to Linux
# I haven't had time to make it cross platform. 

# Location of folder containing the x16emu emulator
EMUDIR = ../../../emulator/x16emu

# Folder containing the compiled vera.lib	
LIBRARIES = ../../lib
# Folder containing the vera.h file from veralib
INCLUDE = ../../header


FILES=\
	hellengard.c


hellengard: $(FILES)
	cc65 -t cx16 -I $(INCLUDE) hellengard.c
	ca65 -t cx16 hellengard.s
	ld65 -t cx16 -L $(LIBRARIES) -o hellengard.prg hellengard.o vera.lib cx16.lib
	cp hellengard.prg $(EMUDIR)
	rm *.s
	rm *.o
	rm *.prg
	$(EMUDIR)/x16emu -run -prg "$(EMUDIR)/hellengard.prg"
	
test: $(FILES)
	cc65 -t cx16 -I $(INCLUDE) hellengard.c
	ca65 -t cx16 hellengard.s
	ld65 -t cx16 -L $(LIBRARIES) -o hellengard.prg hellengard.o vera.lib cx16.lib
	cp hellengard.prg $(EMUDIR)
	rm *.s
	rm *.o
	rm *.prg
	$(EMUDIR)/x16emu -run -debug -prg "$(EMUDIR)/hellengard.prg"