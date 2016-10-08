#include <algorithm>
#include "Draw.h"
#include "Circle.h"
#include "Lines.h"
#include "Arrow.h"
#include "Square.h"

void drawMyPainting()
{
	/* White background */
	std::fill_n(pixels, width*height * 3, 1.0f);

	Slash a(100, 650);
	a.draw();
	Slash aa(100, 320);
	aa.draw();

	Doughnut b(370, 685, 40);
	b.draw();
	Doughnut bb(370, 355, 40);
	bb.draw();

	Square c(615, 650, 720);
	c.draw();
	Square cc(615, 320, 390);
	cc.draw();

	Cross d(870, 650, 940, 720);
	d.draw();
	Cross dd(870, 320, 940, 390);
	dd.draw();

	DownArrow e(1150, 650, 720);
	e.draw();
	DownArrow ee(1150, 320, 390);
	ee.draw();

	RightArrow f(100, 530);
	f.draw();
	RightArrow ff(100, 190);
	ff.draw();

	A g(340, 500, 410, 570);
	g.draw();
	A gg(340, 150, 410, 220);
	gg.draw();

	Vertical h(650, 500, 570);
	h.draw();
	Vertical hh(650, 150, 220);
	hh.draw();

	LeftArrow i(870, 530);
	i.draw();
	LeftArrow ii(870, 190);
	ii.draw();

	UpArrow j(1150, 500, 570);
	j.draw();
	UpArrow jj(1150, 150, 220);
	jj.draw();

}

int main(void)
{
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(width, height, "2016112145", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	double xpos, ypos;

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		/* White background */
		std::fill_n(pixels, width*height * 3, 1.0f);

		glfwGetCursorPos(window, &xpos, &ypos);

		drawMyPainting();

		glDrawPixels(width, height, GL_RGB, GL_FLOAT, pixels);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	delete[] pixels;

	glfwTerminate();
	return 0;
}