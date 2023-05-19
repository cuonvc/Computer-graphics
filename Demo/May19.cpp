#include <errno.h>
#include <glut.h>
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
const int row = 117;	// Số Điểm Ảnh
const int col = 2;
const int N_COLORS = 7;
double colors[N_COLORS][3] = {
	{0.0, 0.0, 1.0},
	{0.0, 1.0, 0.0},
	{1.0, 0.0, 0.0},
	{ 1.0, 1.0, 0.0 },
	{ 1.0, 0.0, 1.0 },
	{ 0.0, 1.0, 1.0 },
	{ 1.0, 1.0, 1.0 }
};
static float alpha = 0;
static float beta = 0;
static float childAdd = 0.3;
bool isShowing = false;
int colorIndex = 0;
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

//main shape
void drawing() {
	// Gán màu (r, g, b)
	glColor3f(colors[colorIndex][0], colors[colorIndex][1], colors[colorIndex][2]);
	// Bắt đầu Vẽ
	glBegin(GL_LINES);


	// //Cách ? + 1
	for (int i = 0; i < row; i++) {
		glVertex2f(shape[i][0] + alpha, shape[i][1] + beta);
	}

	
	glEnd(); // 
	// đẩy bộ nhớ vẽ ra
	glFlush();
}

//empty shape
//replace with empty shape on the screen (main shape)
void hiddenShape() {
	glBegin(GL_LINES);
	glEnd();
	glFlush();
}

//a part of shape
void aPartOfShape() {
	glBegin(GL_LINES);

	// Gán màu (r, g, b)
	glColor3f(colors[colorIndex][0], colors[colorIndex][1], colors[colorIndex][2]);
	// Bắt đầu Vẽ
	glBegin(GL_LINES);

	for (int i = 0; i < 62; i++) {
		glVertex2f(shape[i][0], shape[i][1] + childAdd);
	}

	
	glEnd();
	glFlush();
}

void display() {

	glClear(GL_COLOR_BUFFER_BIT);

//	cau1: element
	drawing();

//	cau2: element
	// if (isShowing == false) {
	// 	drawing();
	// } else {
	// 	hiddenShape();	
	// }

//	cau3: element
	// if (isShowing == true) {
	// 	// drawing();
	// 	aPartOfShape();
	// } else {
	// 	drawing();
	// }

//cau4: element
	// if (isShowing == false) {
	// 	drawing();
	// } else {
	// 	drawing();
	// 	aPartOfShape();
	// }
	//
	
	glFlush();
}

void processKey(unsigned char key, int x, int y) {
	switch (key) {
	case 'w':
		beta += 0.1;
		break;
	case 'a':
		alpha -= 0.1;
		break;
	case 's':
		beta -= 0.1;
		break;
	case 'd':
		alpha += 0.1;
		break;
	}
	glutPostRedisplay();
}

void processMouse(int button, int state, int x, int y) {

//Cau1: thay doi mau
	 if (button == GLUT_LEFT_BUTTON && state == GLUT_UP) {
	 	colorIndex = (colorIndex + 1) % N_COLORS;
	 	glutPostRedisplay();
	 }

//Cau2: thay doi trang thai an hien
	// if (button == GLUT_LEFT_BUTTON && state == GLUT_UP) {
	// 	if (isShowing == true) {
	// 		isShowing = false;
	// 		glutPostRedisplay();
	// 	} else {
	// 		isShowing = true;
	// 		glutPostRedisplay();
	// 	}
	// }

//Cau3: An hien mot phan cua doi tuong
	// if (button == GLUT_LEFT_BUTTON && state == GLUT_UP) {
	// 	if (isShowing == true) {
	// 		isShowing = false;
	// 		glutPostRedisplay();
	// 	} else {
	// 		isShowing = true;
	// 		glutPostRedisplay();
	// 	}
	// }


//cau4: An hien doi tuong moi canh doi tuong goc
	// if (button == GLUT_LEFT_BUTTON && state == GLUT_UP) {
	// 	if (isShowing == true) {
	// 		isShowing = false;
	// 		glutPostRedisplay();
	// 	} else {
	// 		isShowing = true;
	// 		glutPostRedisplay();
	// 	}
	// }
	
}

int main(int argc, char** argv) {
	// khởi tạo cửa sổ
	glutInitWindowSize(500, 500); // kích thước
	glutInitWindowPosition(50, 50); // vị trí trên destop
	glutCreateWindow("CUONVC"); // caption 
	//
	glutDisplayFunc(display); // đăng ký hàm callback hiển thị
	glutKeyboardFunc(processKey);
	glutMouseFunc(processMouse);
	

	glutMainLoop(); // vòng lặp chính
	return 0;
}