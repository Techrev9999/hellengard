# -C = Case sensitive labels
# -B = automatic bxx *+3 jmpo $xxxx

EMUDIR = D:\\OneDrive\\X16Dev\\emulator\\x16emu
LIBRARIES = D:\\OneDrive\\X16Dev\\source\\lib
INCLUDE = D:\\OneDrive\\X16Dev\\source\\header


FILES=\
	hellengard.c


hellengard.prg: $(FILES)
	cc65 -t cx16 -I $(INCLUDE) hellengard.c
	ca65 -t cx16 hellengard.s
	ld65 -t cx16 -L $(LIBRARIES) -o hellengard.prg hellengard.o vera.lib cx16.lib
	copy hellengard.prg $(EMUDIR)
	-echo y | del *.s
	-echo y | del *.o
	-echo y | del *.prg
	$(EMUDIR)\\x16emu -run -debug -prg "$(EMUDIR)\\hellengard.prg"