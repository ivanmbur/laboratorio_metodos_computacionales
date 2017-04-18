rand.png : random_walks.txt
	python random_walk.py

random_walks.txt : random_walk.x
	./random_walk.x

random_walk.x : random_walk.c
	cc random_walk.c -lm -o random_walk.x
