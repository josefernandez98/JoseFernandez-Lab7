Main: Main.o Usuario.o db_administrador.o db_intern.o db_manager.o db_supervisor.o
	g++ Main.o Usuario.o db_administrador.o db_intern.o db_manager.o db_supervisor.o
Main.o: Main.cpp Usuario.h db_administrador.h db_intern.h db_manager.h db_supervisor.h
	g++ -c Main.cpp
Usuario.o: Usuario.h Usuario.cpp
	g++ -c Usuario.cpp
db_administrador.o: Usuario.h db_administrador.h db_administrador.cpp
	g++ -c db_administrador.cpp
Clean:
	rm -f *.o temp 
