EXE=test
IDFROMER=IDFromer
OBJ_FILE=$(EXE).o $(IDFROMER).o

$(EXE).exe: $(OBJ_FILE)
	g++ -std=c++11 $(OBJ_FILE) -o $(EXE).exe

$(EXE).o: $(EXE).cpp
	g++ -c $(EXE).cpp

$(IDFROMER).o: $(IDFROMER).cpp
	g++ -c $(IDFROMER).cpp

clean_win:
	del $(EXE).exe *.o

clean_unx:
	rm $(EXE).exe *.o