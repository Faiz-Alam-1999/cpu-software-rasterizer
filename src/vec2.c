#include <math.h>
#include "vec2.h"

vec2_t vec2_new(float x, float y) {
    vec2_t result = {x, y};
    return result;
}

vec2_t vec2_add(vec2_t* a, vec2_t* b) {
    vec2_t result = {
        .x = a->x + b->x, 
        .y = a->y + b->y
    };
    return result;
}

vec2_t vec2_sub(vec2_t* a, vec2_t* b) {
    vec2_t result = {
        .x = a->x - b->x, 
        .y = a->y - b->y
    };
    return result;
}

vec2_t vec2_mul(vec2_t* v, float factor) {
    vec2_t result = {
        .x = v->x * factor, 
        .y = v->y * factor
    };
    return result;
}

vec2_t vec2_div(vec2_t* v, float factor) {
    vec2_t result = {
        .x = v->x / factor, 
        .y = v->y / factor
    };
    return result;
}

void vec2_normalize(vec2_t* v) {
    float length = vec2_length(v);
    v->x /= length;
    v->y /= length;
}

float vec2_length(vec2_t* v) {
    float result = sqrt( (v->x * v->x) + (v->y * v->y));
    return result;
}

float vec2_dot(vec2_t* a, vec2_t* b) {
    float result = (a->x * b->x) + (a->y * b->y);
    return result;
}

float vec2_cross(vec2_t* a, vec2_t* b) {
    float result = (a->x * b->y) - (a->y * b->x);
    return result;
}