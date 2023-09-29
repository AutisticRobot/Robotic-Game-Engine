PRE = build/
PRIM = $(PRE)primitives/
GLI = $(PRE)GLI/

RGE: clean RGE64.o
	@g++ $(PRE)RGE64.o $(PRE)rendering.o $(PRIM)tri.o -o $(PRE)RGE -lsfml-graphics -lsfml-window -lsfml-system
	@./$(PRE)RGE

unitTest: clean unitTest.o 
	@g++ $(PRE)unitTest.o $(PRE)rendering.o $(PRIM)tri.o -o $(PRE)unitTest -lsfml-graphics -lsfml-window -lsfml-system

unitTest.o: unitTests.cpp rendering.o tri.o 
	@g++ -c unitTests.cpp -o $(PRE)unitTest.o

RGE64.o: RGE64.cpp tri.o
	@g++ -c RGE64.cpp -o $(PRE)RGE64.o

rendering.o: rendering.cpp
	@g++ -c rendering.cpp -o $(PRE)rendering.o

tri.o: primitives/tri.cpp
	@g++ -c primitives/tri.cpp -o $(PRIM)tri.o

clean:
	@rm -rf build
	@mkdir build
	@mkdir $(PRIM)
	@mkdir $(GLI)
	@cp -r resources build
