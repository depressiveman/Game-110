#include <iostream>
#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <allegro5\allegro_image.h>

using namespace std;

class Invader{
public:
	Invader();
	void invaderinit(int x, int y, int health);
	void drawInvader();
	void print();

private:
	int xpos;
	int ypos;
	int hp;
};
ALLEGRO_BITMAP *invader = NULL;



int main() {
	ALLEGRO_DISPLAY *display = NULL;

	Invader invader1;

	invader1.invaderinit(120,480,200);

	al_init();

	al_init_primitives_addon();

	al_init_image_addon();

	invader = al_load_bitmap("donkeykong.png");

	display = al_create_display(1920,1080);
al_convert_mask_to_alpha(invader, al_map_rgb(255, 255, 255));
	al_clear_to_color(al_map_rgb(0,0,0));

	invader1.drawInvader();

	invader1.print();

	al_flip_display();

	al_rest(8);

	al_destroy_display(display);



}

Invader::Invader() {
	xpos = 0;
	ypos = 0;
	hp = 0;
}

void Invader::invaderinit(int x, int y,int health) {
	xpos = x;
	ypos = y;
	hp = health;
}

void Invader::drawInvader() {
	al_draw_bitmap(invader,xpos,ypos,0);
}

void Invader::print() {
	cout << hp << endl;
}