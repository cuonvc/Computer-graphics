#include <errno.h>
#include <glut.h>
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
const int row = 117;	// Số Điểm Ảnh
const int col = 2;
static float alpha = 0;
static bool status = false; //false = stopped, true = move
float width = 500;
float height = 500;
float position = 0;
static bool direction = true;  //left = false, right = true
float shape[row][col] = {

	//chữ K
	{-0.4, 0.04},
	{-0.4, 0},
	
	{-0.4, 0.02},
	{-0.38, 0.04},
	
	{-0.4, 0.02},
	{-0.38, 0},
	
	//chữ i
	{-0.37, 0.04},
	{-0.37, 0},
	// {-0.37, 0.05}

	//chữ ê
	{-0.36, 0.04},
	{-0.36, 0},
	
	{-0.36, 0.04},
	{-0.34, 0.04},

	{-0.36, 0.02},
	{-0.34, 0.02},

	{-0.36, 0},
	{-0.34, 0},

	{-0.36, 0.05},
	{-0.35, 0.06},
	{-0.35, 0.06},
	{-0.34, 0.05},

	//dấu '
	{-0.33, 0.05},
	{-0.32, 0.06},

	//chữ N
	{-0.33, 0.05},
	{-0.33, 0},
	
	{-0.33, 0.04},
	{-0.31, 0},

	{-0.31, 0},
	{-0.31, 0.04},

	//chữ T
	{-0.28, 0.04},
	{-0.26, 0.04},

	{-0.27, 0.04},
	{-0.27, 0},

	//chữ R
	{-0.25, 0.04},
	{-0.25, 0},

	{-0.25, 0.04},
	{-0.24, 0.04},

	{-0.24, 0.04},
	{-0.23, 0.03},

	{-0.23, 0.03},
	{-0-.24, 0.02},

	{-0.24, 0.02},
	{-0.25, 0.02},

	{-0.25, 0.02},
	{-0.23, 0},

	//chữ U
	{-0.22, 0.04},
	{-0.22, 0},

	{-0.22, 0},
	{-0.2, 0},

	{-0.2, 0},
	{-0.2, 0.04},

	//chữ C
	{-0.17, 0.04},
	{-0.18, 0.04},

	{-0.18, 0.04},
	{-0.19, 0.03},

	{-0.19, 0.03},
	{-0.19, 0.01},

	{-0.19, 0.01},
	{-0.18, 0},

	{-0.18, 0},
	{-0.17, 0},

	//dấu '
	{-0.22, 0.05},
	{-0.20, 0.07},

	//chữ H
	{-0.14, 0.04},
	{-0.14, 0},

	{-0.14, 0.02},
	{-0.12, 0.02},

	{-0.12, 0.04},
	{-0.12, 0},

	//chữ À
	{-0.11, 0},
	{-0.11, 0.02},

	{-0.11, 0.02},
	{-0.1, 0.04},

	{-0.1, 0.04},
	{-0.09, 0.02},

	{-0.09, 0.02},
	{-0.09, 0},
	
	{-0.11, 0.02},
	{-0.09, 0.02},

	{-0.11, 0.06},
	{-0.09, 0.05},

	//chữ N
	{-0.06, 0},
	{-0.06, 0.04},

	{-0.06, 0.04},
	{-0.04, 0},

	{-0.04, 0},
	{-0.04, 0.04},

	//chữ Ộ
	{-0.03, 0.03},
	{-0.02, 0.04},

	{-0.02, 0.04},
	{-0.01, 0.03},

	{-0.01, 0.03},
	{-0.01, 0.01},

	{-0.01, 0.01},
	{-0.02, 0},

	{-0.02, 0},
	{-0.03, 0.01},

	{-0.03, 0.01},
	{-0.03, 0.03},

	{-0.03, 0.04},
	{-0.02, 0.05},

	{-0.02, 0.05},
	{-0.01, 0.04},

	// {-0.02, -0.01}

	{0, 0.04},
	{0, 0}
	
};

// bool checkDirection() {
// 	
// }

//main shape
void drawing() {
	// Gán màu (r, g, b)
	glColor3f(222, 138, 163);
	// Bắt đầu Vẽ
	glBegin(GL_LINES);
	
	for (int i = 0; i < row; i++) {
		
		glVertex2f(shape[i][0] + alpha, shape[i][1]);
		position = shape[i][0] + alpha;

		if (position > 1) {
			direction = false;
		}

		if (position < -1) {
			direction = true;
		}
	}

	std::cout<<"\nPosittttttt : " << position;
	
	glEnd(); // 
	// đẩy bộ nhớ vẽ ra
	glFlush();
}

//chua hoat dong
void stopping() {
	// Gán màu (r, g, b)
	glColor3f(222, 138, 163);
	// Bắt đầu Vẽ
	glBegin(GL_LINES);
	
	for (int i = 0; i < row; i++) {
		glVertex2f(shape[i][0] + alpha, shape[i][1]);
	}

	std::cout<<"\nPosittttttt : " << position;
	
	glEnd(); // 
	// đẩy bộ nhớ vẽ ra
	glFlush();
}

void display() {

	glClear(GL_COLOR_BUFFER_BIT);

	if (status == true) {
		drawing();
	} else {
		stopping();
	}
	
	glFlush();
}

void moving(int value) {
	if (direction == false) {
		alpha -= 0.01;
	} else {
		alpha += 0.01;
	}
	glutPostRedisplay();
	glutTimerFunc(10, moving, 0);
}

void processMouse(int button, int state, int x, int y) {
	
	//Cau1: auto move
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_UP) {
		if (status == false) {
			moving(0);
			status = true;
		} else {
			status = false;
		}
	}
}

int main(int argc, char** argv) {
	// khởi tạo cửa sổ
	glutInitWindowSize(width, height); // kích thước
	glutInitWindowPosition(50, 50); // vị trí trên destop
	glutCreateWindow("CUONVC"); // caption 
	//
	glutDisplayFunc(display); // đăng ký hàm callback hiển thị
	glutMouseFunc(processMouse);
	

	glutMainLoop(); // vòng lặp chính
	return 0;
}