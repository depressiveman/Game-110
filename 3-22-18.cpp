#include <iostream>
#include <allegro5\allegro.h>
#include <allegro5\allegro_image.h>
#include <allegro5\allegro_primitives.h>
#include <vector>

using namespace std;

class FACE {
public:
	FACE();
	void Init(int x, int y, float xv, float yv, ALLEGRO_BITMAP *thing);
	void draw();
	double move();

private:
	int xpos;
	int ypos;
	float xvel;
	float yvel;
	ALLEGRO_BITMAP *face = NULL;
};

int main() {

	
	ALLEGRO_BITMAP *face1Image = NULL;
		
	ALLEGRO_BITMAP *face2Image = NULL;
	


	cout << "flag";
	FACE face1;
	FACE face2;

	cout << "flag2";

	ALLEGRO_DISPLAY *display = NULL;
	al_init();

	al_init_primitives_addon();

	al_init_image_addon();

	display = al_create_display(1920,1080);

	face1Image = al_load_bitmap("CaptainFalcon.png");

	face2Image = al_load_bitmap("donkey_kong.png");

	al_clear_to_color(al_map_rgb(0,0,0));
	
	face1.Init(200,400,6,6,face1Image);
	face2.Init(500, 100, 6, 6, face2Image);
	
	
	

	al_convert_mask_to_alpha(face1Image, al_map_rgb(255, 255, 255));
	cout << "flag3";
	al_convert_mask_to_alpha(face2Image, al_map_rgb(255, 255, 255));

	while (1) {
		al_clear_to_color(al_map_rgb(0, 0, 0));
		face1.draw();


	face2.draw();
	
		face1.move();
		face2.move();


		al_flip_display();
		cout << "flag" << endl;

	}
	
	al_rest(1);
	
	

	al_destroy_display(display);

	al_destroy_bitmap(face1Image);

	al_destroy_bitmap(face2Image);

}

FACE::FACE() {
	xpos = 0;
	ypos = 0;
	xvel = 0;
	yvel = 0;
	face = NULL;

}

void FACE::Init(int x, int y, float xv, float yv, ALLEGRO_BITMAP *thing) {
	xpos = x;
	ypos = y; 
	xvel = xv;
	yvel = yv;
	face = thing;
		cout << "Falg5";
}

void FACE::draw() {
	al_draw_bitmap(face,xpos,ypos,0);
	cout << "flag6" << endl;

}

double FACE::move() {
	cout << "flag7" << endl;
	
	xpos = (xvel + xpos);
	ypos = (yvel + ypos);

	if (xpos < 0 || xpos > 1920)
		xvel *= -1;
	if (ypos < 0 || ypos > 1080)
		yvel *= -1;
	cout << xpos << ", " << ypos;
	return xvel;
	return yvel;

}