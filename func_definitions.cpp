#pragma once

int validinput(int target_y,int target_x) {
	return (target_x > 8 || target_x < 0 || target_y < 0 || target_y>8);
}