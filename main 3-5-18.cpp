#include <iostream>
#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>

using namespace std;

class Spot {
public:
	Spot();
	void initSpot(int x, int y,int r);
	void drawSpot();
private:
	int xpos;
	int ypos;
	int radius;
	
};

int main() {

	ALLEGRO_DISPLAY *display = NULL;

	Spot spot1;
	Spot spot2;
	Spot spot3;
	Spot spot4;
	Spot spot5;

	spot1.initSpot(50,50,55);
	spot2.initSpot(220, 150,100);
	spot3.initSpot(400, 0, 67);
	spot4.initSpot(600, 200, 50);
	spot5.initSpot(20,300,80);

	al_init();

	al_init_primitives_addon();

	display = al_create_display(640,480);

	al_clear_to_color(al_map_rgb(0,0,0));

	

		spot1.drawSpot();

		spot2.drawSpot();

		spot3.drawSpot();

		spot4.drawSpot();

		spot5.drawSpot();

		
	
		al_flip_display();

		al_rest(5);

	al_destroy_display(display);


}

Spot::Spot() {
	xpos = 0;
	ypos = 0;
	radius = 0;
}

void Spot::initSpot(int x,int y,int r) {
	xpos = x;
	ypos = y;
	radius = r;
}

void Spot::drawSpot() {

	al_draw_filled_circle(xpos, ypos,radius,al_map_rgb(255,50,120));
}