#include <errno.h>
#include <glut.h>
#include <math.h>
const int row = 117;	// Số Điểm Ảnh
const int col = 2;
double shape[row][col] = {
	// 	//vẽ chữ N
	{-0.9, 0.7},
	{-0.9, 0.6},

	{-0.9, 0.7},
	{-0.87, 0.6},

	{-0.87, 0.6},
	{-0.87, 0.7},

	//vẽ chữ G
	{-0.82, 0.7},
	{-0.78, 0.7},

	{-0.82, 0.7},
	{-0.82, 0.6},

	{-0.82, 0.6},
	{-0.78, 0.6},

	{-0.78, 0.6},
	{-0.78, 0.65},

	{-0.78, 0.65},
	{-0.8, 0.65},

	//Vẽ chữ U
	{-0.73, 0.7},
	{-0.73, 0.6},

	{-0.73, 0.6},
	{-0.69, 0.6},

	{-0.69, 0.6},
	{-0.69, 0.7},

	//vã chữ Y
	{-0.64, 0.7},
	{-0.62, 0.65},

	{-0.62, 0.65},
	{-0.6, 0.7},

	{-0.62, 0.65},
	{-0.62, 0.6},

	//vẽ chữ Ê
	{-0.57, 0.67},
	{-0.57, 0.6},

	{-0.57, 0.67},
	{-0.54, 0.67},


	{-0.57, 0.64},
	{-0.54, 0.64},

	{-0.57, 0.6},
	{-0.54, 0.6},


	{-0.57, 0.685},
	{-0.55, 0.7},

	{-0.55, 0.7},
	{-0.54, 0.685},

	//vẽ chữ N
	{-0.5, 0.7},
	{-0.5, 0.6},

	{-0.5, 0.7},
	{-0.45, 0.6},

	{-0.45, 0.6},
	{-0.45, 0.7},

	//vẽ chữ V
	{-0.35, 0.7},
	{-0.325, 0.6},

	{-0.325, 0.6},
	{-0.3, 0.7},

	//vẽ chữ Ă
	{-0.3, 0.6},
	{-0.275, 0.67},

	{-0.275, 0.67},
	{-0.25, 0.6},

	{-0.285, 0.625},
	{-0.26, 0.625},

	{-0.28, 0.7},
	{-0.27, 0.685},

	{-0.27, 0.685},
	{-0.26, 0.7},

	//vẽ chữ N
	{-0.22, 0.7},
	{-0.22, 0.6},

	{-0.22, 0.7},
	{-0.18, 0.6},

	{-0.18, 0.7},
	{-0.18, 0.6},

	//vẽ chữ C
	{-0.1, 0.7},
	{-0.05, 0.7},

	{-0.1, 0.7},
	{-0.1, 0.6},

	{-0.1, 0.6},
	{-0.05, 0.6},

	//vẽ chữ Ư
	{0, 0.7},
	{0, 0.6},

	{0, 0.6},
	{0.05, 0.6},

	{0.05, 0.6},
	{0.05, 0.7},

	{0.05, 0.7},
	{0.07, 0.7},

	{0.07, 0.7},
	{0.07, 0.725},

	{0.07, 0.725},
	{0.05, 0.725},

	//vẽ chữ Ơ

	{0.12, 0.7},
	{0.12, 0.6},

	{0.12, 0.6},
	{0.17, 0.6},

	{0.17, 0.6},
	{0.17, 0.7},

	{0.17, 0.7},
	{0.12, 0.7},

	{0.17, 0.7},
	{0.19, 0.7},

	{0.19, 0.7},
	{0.19, 0.725},

	{0.19, 0.725},
	{0.17, 0.725},

	{0.17, 0.77},
	{0.19, 0.75},

	//vẽ chữ N
	{0.22, 0.7},
	{0.22, 0.6},


	{0.22, 0.7},
	{0.27, 0.6},


	{0.27, 0.6},
	{0.27, 0.7},

	//vẽ chữ G


	{0.3, 0.7},
	{0.35, 0.7},

	{0.3, 0.7},
	{0.3, 0.6},


	{0.3, 0.6},
	{0.35, 0.6},


	{0.35, 0.6},
	{0.35, 0.65},

	{0.35, 0.65},
	{0.33, 0.65}

};
void VD02() {
	// Gán màu (r, g, b)
	glColor3f(0.0, 0.0, 1.0);	// Blue
	// Bắt đầu Vẽ
	glBegin(GL_LINES);

	//cách default
	// Vẽ Tên Bằng Đường Thẳng theo TH2 float m[2*N][3]
	// for (int i = 0; i < row/2; i++) {
	// 	glVertex3f(shape[i*2][0], shape[i*2][1], 0);
	// 	glVertex3f(shape[i*2+1][0], shape[i*2+1][1], 0);
	// }
	
	// //Cách ?:
	// for (int i = 0; i < row; i++) {
	// 	for (int j = 0; j < col; j++) {
	// 		glVertex2f(shape[i][j], shape[i][j + 1]);
	// 		break;
	// 	}
	// }


	// //Cách ? + 1
	// for (int i = 0; i < row; i++) {
	// 	glVertex2f(shape[i][0], shape[i][1]);
	// }

	//convert về cách 3 (mảng 1 chiều)
	float newArray[row * col];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			newArray[i * col + j] = shape[i][j];
		}
	}

	for (int i = 0; i < row * col; i+=2) {
		glVertex2f(newArray[i], newArray[i + 1]);
	}

	
	glEnd(); // 
	// đẩy bộ nhớ vẽ ra
	glFlush();
}
int main(int argc, char** argv) {
	// khởi tạo cửa sổ
	glutInitWindowSize(500, 500); // kích thước
	glutInitWindowPosition(50, 50); // vị trí trên destop
	glutCreateWindow("CUONVC"); // caption 
	// 
	glutDisplayFunc(VD02); // đăng ký hàm callback hiển thị

	glutMainLoop(); // vòng lặp chính
	return 0;
}