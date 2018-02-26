#include <iostream>
#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <time.h>

using namespace std;

int main(int argc,char **argv) {
	srand(time(NULL));

	ALLEGRO_DISPLAY *display = NULL;

	float x1 = rand() % 640 + 1;
	float y1 = rand() % 480 + 1;
	float x2 = rand() % 640 + 1;
	float y2 = rand() % 480 + 1;
	float x3 = rand() % 640 + 1;
	float y3 = rand() % 480 + 1;

	int random = rand() % 255 + 1;


	al_init();

	al_init_primitives_addon();

	display = al_create_display(640,480);

	al_clear_to_color(al_map_rgb(0,0,0));



		al_draw_filled_triangle(x1, y1, x2, y2, x3, y3, al_map_rgb(random, random, random));
	
	al_flip_display();

	al_rest(5);

	al_destroy_display(display);
	
}