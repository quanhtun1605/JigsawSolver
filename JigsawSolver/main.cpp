// main.cpp

#include "std.h"

// tip, edit the next line to //* to see the magic
//*
int main() {
	Game game;
	game.startup();
	game.run();

	//Angle angle(B, A, C);
	//return printf("%f", angle.toRad());
	// see the "/doc/test.png"
}
/*/
int main() {
	Point points[10];

	for (size_t i = 0; i < 10; i++) {
		long a, b;
		scanf("%ld;%ld", &a, &b);
		points[i] = Point(a, b);
	}

	Piece piece(points, 10);

	return printf("%d %d", points[0].x, points[0].y);
	// see the "/doc/test.png"
}
//*/
