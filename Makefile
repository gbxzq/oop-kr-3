run: app
	./app

app: main.o MainMenu.o Game.o
	g++ main.o MainMenu.o Game.o -o app -lsfml-graphics -lsfml-window -lsfml-system

main.o:
	g++ -c src/main.cpp -I /usr/include

MainMenu.o: 
	g++ -c src/MainMenu.cpp

Game.o:
	g++ -c src/Game.cpp

clean: 
	rm -rf app main.o MainMenu.o Game.o