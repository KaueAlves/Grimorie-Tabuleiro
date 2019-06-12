#LIBARIES := 
#INCLUDES :=
FOLDERS	 :=	src/*.cpp src/*/*.cpp src/*/*/*.cpp
FILES	 := main.cpp
all:
	g++	-g	-std=c++17	-Wall	$(INCLUDES)	$(FOLDERS)	$(FILES)	-o	main