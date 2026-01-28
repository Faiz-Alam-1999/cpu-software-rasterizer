#include "display.h"
#include <SDL2/SDL.h>
#include <stdlib.h>

static SDL_Window* win;
static SDL_Renderer* ren;
static SDL_Texture* tex;
static uint32_t* fb;

bool create_window(void) {
    SDL_Init(SDL_INIT_VIDEO);

    win = SDL_CreateWindow("Rasterizer",
           SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
           SCREEN_WIDTH * 6, SCREEN_HEIGHT * 6, 0);

    ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_PRESENTVSYNC);

    fb = malloc(SCREEN_WIDTH * SCREEN_HEIGHT * 4);

    tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_RGBA32,
                            SDL_TEXTUREACCESS_STREAMING,
                            SCREEN_WIDTH, SCREEN_HEIGHT);

    return win && ren && tex && fb;
}

void draw_pixel(uint16_t x, uint16_t y, uint32_t c) {
    if (x < SCREEN_WIDTH && y < SCREEN_HEIGHT)
        fb[y * SCREEN_WIDTH + x] = c;
}

void clear_framebuffer(uint32_t c) {
    for (int i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; i++)
        fb[i] = c;
}

void render_framebuffer(void) {
    SDL_UpdateTexture(tex, NULL, fb, SCREEN_WIDTH * 4);
    SDL_RenderCopy(ren, tex, NULL, NULL);
    SDL_RenderPresent(ren);
}

void fix_framerate(void) {
    static int last = 0;
    int dt = SDL_GetTicks() - last;
    int wait = MILLISECS_PER_FRAME - dt;
    if (wait > 0) SDL_Delay(wait);
    last = SDL_GetTicks();
}

void destroy_window(void) {
    free(fb);
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
}
