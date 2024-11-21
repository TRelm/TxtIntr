# Усложненный make-file.  Введены переменные для параметров компиляции и исполняемых файлов

.PHONY: all debug release clean

RELEASE_FLAGS = -O2 -Wall -DNDEBUG
DEBUG_FLAGS   = -g -O0 -Wall
RELEASE_EXEC  = main1
DEBUG_EXEC    = main1-dbg
SOURCE        = main1.cpp

all: debug release

debug: $(DEBUG_EXEC)

$(DEBUG_EXEC): main1.cpp
	g++ $(DEBUG_FLAGS) main1.cpp -o $(DEBUG_EXEC) 

release: $(RELEASE_EXEC)

$(RELEASE_EXEC): main1.cpp
	g++ $(RELEASE_FLAGS) main1.cpp -o $(RELEASE_EXEC)

clean:
	rm -f $(RELEASE_EXEC) $(DEBUG_EXEC)
