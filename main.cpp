#include <graphics.h>
#include <math.h>
#include <iostream>
#include <dos.h>

const int height = 50;
const int width = 100;
const int cx = 320;
const int cy = 240;

void DrawRectangle(int cx, int cy, int h, int w) {
    int x[4] = {cx - w, cx + w, cx + w, cx - w};
    int y[4] = {cy - h, cy - h, cy + h, cy + h};
    int xr[4] = {}, yr[4] = {};
    int angle = 0;

    while (true) {
        double theta = angle * (M_PI / 180.0);

        for (int i = 0; i < 4; i++) {
            xr[i] = static_cast<int>(cx + ((x[i] - cx) * cos(theta)) - ((y[i] - cy) * sin(theta)));
            yr[i] = static_cast<int>(cy + ((x[i] - cx) * sin(theta)) + ((y[i] - cy) * cos(theta)));
        }

        cleardevice();
        for (int i = 0; i < 4; i++) {
            line(xr[i], yr[i], xr[(i + 1) % 4], yr[(i + 1) % 4]);
        }

        delay(50);
        angle = (angle + 2) % 360;
    }
}
    


int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, (char*)"");

    DrawRectangle(cx, cy, height, width);
   
   getch();
   closegraph();
   return 0;   
}
