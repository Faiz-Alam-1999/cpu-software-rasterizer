// THERE IS AN USER DEFINED DATATYPE:
// ---------------------------------
// 2D VECTOR 

// THERE ARE FUNCTIONS TO:
// ----------------------
// CREATE A NEW VECTOR
// AND RETURN AS 2D VECTOR AS OUTPUT
// 
// FIND ADDITION, SUBTRACTION, MULLTIPLICATION & DIVISION 
// OF TWO VECTORS 
// AND RETURN A 2D VECTOR AS OUTPUT
// 
// NORMALIZE A VECTOR
// AND RETURN VOID AS OUTPUT
// 
// FIND LENGTH OF A VECTOR
// AND RETURN A FLOAT AS OUTPUT
// 
// FIND DOT & CROSS PRODUCT OF TWO VECTORS
// AND RETURN A 2D VECTOR AS OUTPUT

#ifndef vec2_h
#define vec2_h

typedef struct  {
    float x;
    float y;
}   vec2_t;


vec2_t vec2_new(float x, float y);
vec2_t vec2_add(vec2_t* a, vec2_t* b);
vec2_t vec2_sub(vec2_t* a, vec2_t* b);
vec2_t vec2_mul(vec2_t* v, float factor);
vec2_t vec2_div(vec2_t* v, float factor);
void vec2_normalize(vec2_t* v);
float vec2_length(vec2_t* v);
float vec2_dot(vec2_t* a, vec2_t* b);
float vec2_cross(vec2_t* a, vec2_t* b);

#endif