#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>

using namespace std;

int mainish() {
	return 0;
}

int Rdm(int number) {
	return rand() % number;
}

class Player {
	char symbol = '@';
public:
	int xcoord = Rdm(20);
	int ycoord = Rdm(20);
} one;

class Downstairs {
	char symbol = '>';
public:
	int xcoord = Rdm(20);
	int ycoord = Rdm(20);
	void downstairs (Player) {
		;//if ((Player.xcoord == Downstairs.xcoord) && (Player.ycoord == Downstairs.ycoord))
	}
};

class WorldMap {
	int* map[20][20];
	

};
void floorinitgm() {
	;/*	// How many floor tiles have been placed?
	floors_placed = 0;
	// What direction are you facing?
	dir = 1;
	//Randomise The Seed
	randomize();
	// Generate a random position
	rand_x = random_range(64, room_width - 96);
	rand_y = random_range(64, room_height - 160);
	//Attach Values To The Grid

	y = rand_y - (rand_y % 32);
	x = rand_x - (rand_x % 32);
	//Store the top left corner of the map
	x_left = x;
	y_up = y;
	x_right = 0;
	y_down = 0;
	//Make Generation fast
	room_speed = 30;
	*/
}

void floorstepgm() {
	;/*// Place a floor tile
	instance_create(x, y, obj_floor);
	// Count one more floor tiles
	floors_placed++;
	// Pick a random direction
	dir = choose(1, 2, 3, 4, dir, dir, dir, dir);
	//Move forward 1 cell
	switch (dir)
	{
	case 1:
	{
		x += 32;
		if (!place_meeting(x + 32, y, obj_floor)) { instance_create(x + 32, y, obj_floor) };
		if (!place_meeting(x - 32, y, obj_floor)) { instance_create(x - 32, y, obj_floor) };
		if (!place_meeting(x, y + 32, obj_floor)) { instance_create(x, y + 32, obj_floor) };
		if (!place_meeting(x, y - 32, obj_floor)) { instance_create(x, y - 32, obj_floor) };
		break;
	}

	case 2:
		y += 32;
		break;

	case 3:
		x -= 32;
		break;

	case 4:
		y -= 32;
		break;

	}
	// Check for being outside the room
	if (x < 64) { x = 64 };
	if (x > room_width - 96) { x = room_width - 96 };
	if (y < 64) { y = 64 };
	if (y > room_height - 160) { y = room_height - 160 };
	// Store top-left and bottom-right corners of the map
	if (x < x_left) { x_left = x - 32 };
	if (x > x_right) { x_right = x + 32 };
	if (y < y_up) { y_up = y - 32 };
	if (y > y_down) { y_down = y + 32 };

	// Destroy if max floors have been placed
	if (floors_placed == 200)
	{
		x_left = x_left - 64;
		x_right = x_right + 32;
		y_up = y_up - 32;
		y_down = y_down + 32;
		wall_p = instance_create(x_left, y_up, WallHandler);
		wall_p.stop_x = x_right;
		wall_p.stop_y = y_down;
		instance_create(x, y, Button);
		instance_destroy();
	}*/
}

void wallinitgm() {
	;/*// Stop cycling at these co-ords
	stop_x = 0;
	stop_y = 0;
	// Store starting x pos
	start_x = x - 32;*/
}

void wallstepgm() {
	;/*// Store the targets id number
	target = instance_place(x, y, obj_floor);
	// Check for neighbor floors and place walls
	if (instance_exists(target))
	{
		if (!place_meeting(x + 32, y, obj_floor)) { instance_create(x + 32, y, obj_wall) };
		if (!place_meeting(x - 32, y, obj_floor)) { instance_create(x - 32, y, obj_wall) };
		if (!place_meeting(x, y + 32, obj_floor)) { instance_create(x, y + 32, obj_wall) };
		if (!place_meeting(x, y - 32, obj_floor)) { instance_create(x, y - 32, obj_wall) };
	}

	if (x < start_x)
	{
		x = start_x;
	}
	if (x == stop_x)
	{
		y += 32;
		x = 0;
	}
	else
	{
		x += 32;
	}

	if (y > stop_y)
	{
		room_speed = 60;
		instance_destroy();
	}*/
}