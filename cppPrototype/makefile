PRE = build/

RGE: clean RGEVulLin64.o rendering.o
	@g++ $(PRE)RGEVulLin64.o $(PRE)rendering.o $(PRE)primitives/tri.o -o $(PRE)RGE -lsfml-graphics -lsfml-window -lsfml-system
	@./$(PRE)RGE

RGEVulLin64.o: tri.o RGEVulLin64.cpp
	@g++ -c RGEVulLin64.cpp -o $(PRE)RGEVulLin64.o

rendering.o: rendering.cpp
	@g++ -c rendering.cpp -o $(PRE)rendering.o

tri.o: primitives/tri.cpp
	@g++ -c primitives/tri.cpp -o $(PRE)primitives/tri.o

clean:
	@rm -rf build
	@mkdir build
	@mkdir build/primitives
	@cp -r resources build
