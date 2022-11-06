run: app
	./app

app: main.o MainMenu.o
	g++ main.o MainMenu.o -o app -lsfml-graphics -lsfml-window -lsfml-system

main.o:
	g++ -c src/main.cpp -I /usr/include

MainMenu.o: 
	g++ -c src/MainMenu.cpp

clean: 
	rm -rf app main.o MainMenu.o