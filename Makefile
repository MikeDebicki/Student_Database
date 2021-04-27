sas:	main.o Student.o Course.o Storage.o Control.o View.o List.o
	g++ -o sas main.o Student.o Course.o Storage.o Control.o View.o List.o

main.o:	main.cc Control.h
	g++ -c main.cc

Student.o:	Student.cc Student.h Course.h defs.h List.h
	g++ -c Student.cc

Course.o:	Course.cc Course.h
	g++ -c Course.cc

Storage.o: Storage.cc Storage.h Student.h
	g++ -c Storage.cc

Control.o: Control.cc Control.h View.h Student.h Course.h
	g++ -c Control.cc

View.o: View.cc View.h Storage.h
	g++ -c View.cc

List.o: List.cc List.h Course.h
	g++ -c List.cc

clean:
	rm -f *.o sas
