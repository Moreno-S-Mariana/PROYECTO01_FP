

struct _complex{
	float real;
	float img;
};

typedef struct _complex complex;

struct _complex c1, c2;
complex c3, c4;

void prueba(){
	c1.real = 1.2f;
	c1.img = 0.3f;

	c2.real = 7.8f;
	c2.img = -4.5f;
	complex c5, c6;

	c5.real = 1.2f;
	c5.img = -7.6f;
}
