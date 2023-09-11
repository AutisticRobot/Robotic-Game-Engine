PRE = build/

RGE: RGEVulLin64.o rendering.o
	@g++ $(PRE)RGEVulLin64.o $(PRE)rendering.o -o $(PRE)RGE -lsfml-graphics -lsfml-window -lsfml-system
	@./$(PRE)RGEBuild

RGEVulLin64.o: RGEVulLin64.cpp
	@g++ -c RGEVulLin64.cpp -o $(PRE)RGEVulLin64.o

rendering.o: rendering.cpp
	@g++ -c rendering.cpp -o $(PRE)rendering.o

clean:
	@rm -rf build
	@mkdir build
	@cp -r resources build
