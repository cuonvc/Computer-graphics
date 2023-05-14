// #include <glut.h>
// #include <math.h>
// void Display_ViDu1() {
// 	// Gán màu (r, g, b) => green
// 	glColor3f(222, 138, 163);
// 	// bắt đầu chế độ vẽ các đường thẳng
// 	glBegin(GL_LINES);
//
// 	//vẽ chữ N
// 	glVertex2f(-0.9, 0.7);
// 	glVertex2f(-0.9, 0.6);
//
// 	glVertex2f(-0.9, 0.7);
// 	glVertex2f(-0.87, 0.6);
//
// 	glVertex2f(-0.87, 0.6);
// 	glVertex2f(-0.87, 0.7);
//
// 	//vẽ chữ G
// 	glVertex2f(-0.82, 0.7);
// 	glVertex2f(-0.78, 0.7);
//
// 	glVertex2f(-0.82, 0.7);
// 	glVertex2f(-0.82, 0.6);
//
// 	glVertex2f(-0.82, 0.6);
// 	glVertex2f(-0.78, 0.6);
//
// 	glVertex2f(-0.78, 0.6);
// 	glVertex2f(-0.78, 0.65);
//
// 	glVertex2f(-0.78, 0.65);
// 	glVertex2f(-0.8, 0.65);
//
// 	//Vẽ chữ U
// 	glVertex2f(-0.73, 0.7);
// 	glVertex2f(-0.73, 0.6);
//
// 	glVertex2f(-0.73, 0.6);
// 	glVertex2f(-0.69, 0.6);
//
// 	glVertex2f(-0.69, 0.6);
// 	glVertex2f(-0.69, 0.7);
//
// 	//vã chữ Y
// 	glVertex2f(-0.64, 0.7);
// 	glVertex2f(-0.62, 0.65);
//
// 	glVertex2f(-0.62, 0.65);
// 	glVertex2f(-0.6, 0.7);
//
// 	glVertex2f(-0.62, 0.65);
// 	glVertex2f(-0.62, 0.6);
//
// 	//vẽ chữ Ê
// 	glVertex2f(-0.57, 0.67);
// 	glVertex2f(-0.57, 0.6);
//
// 	glVertex2f(-0.57, 0.67);
// 	glVertex2f(-0.54, 0.67);
//
//
// 	glVertex2f(-0.57, 0.64);
// 	glVertex2f(-0.54, 0.64);
//
// 	glVertex2f(-0.57, 0.6);
// 	glVertex2f(-0.54, 0.6);
//
//
// 	glVertex2f(-0.57, 0.685);
// 	glVertex2f(-0.55, 0.7);
//
// 	glVertex2f(-0.55, 0.7);
// 	glVertex2f(-0.54, 0.685);
//
// 	//vẽ chữ N
// 	glVertex2f(-0.5, 0.7);
// 	glVertex2f(-0.5, 0.6);
//
// 	glVertex2f(-0.5, 0.7);
// 	glVertex2f(-0.45, 0.6);
//
// 	glVertex2f(-0.45, 0.6);
// 	glVertex2f(-0.45, 0.7);
//
// 	//vẽ chữ V
// 	glVertex2f(-0.35, 0.7);
// 	glVertex2f(-0.325, 0.6);
//
// 	glVertex2f(-0.325, 0.6);
// 	glVertex2f(-0.3, 0.7);
//
// 	//vẽ chữ Ă
// 	glVertex2f(-0.3, 0.6);
// 	glVertex2f(-0.275, 0.67);
//
// 	glVertex2f(-0.275, 0.67);
// 	glVertex2f(-0.25, 0.6);
//
// 	glVertex2f(-0.285, 0.625);
// 	glVertex2f(-0.26, 0.625);
//
// 	glVertex2f(-0.28, 0.7);
// 	glVertex2f(-0.27, 0.685);
//
// 	glVertex2f(-0.27, 0.685);
// 	glVertex2f(-0.26, 0.7);
//
// 	//vẽ chữ N
// 	glVertex2f(-0.22, 0.7);
// 	glVertex2f(-0.22, 0.6);
//
// 	glVertex2f(-0.22, 0.7);
// 	glVertex2f(-0.18, 0.6);
//
// 	glVertex2f(-0.18, 0.7);
// 	glVertex2f(-0.18, 0.6);
//
// 	//vẽ chữ C
// 	glVertex2f(-0.1, 0.7);
// 	glVertex2f(-0.05, 0.7);
//
// 	glVertex2f(-0.1, 0.7);
// 	glVertex2f(-0.1, 0.6);
//
// 	glVertex2f(-0.1, 0.6);
// 	glVertex2f(-0.05, 0.6);
//
// 	//vẽ chữ Ư
// 	glVertex2f(0, 0.7);
// 	glVertex2f(0, 0.6);
//
// 	glVertex2f(0, 0.6);
// 	glVertex2f(0.05, 0.6);
//
// 	glVertex2f(0.05, 0.6);
// 	glVertex2f(0.05, 0.7);
//
// 	glVertex2f(0.05, 0.7);
// 	glVertex2f(0.07, 0.7);
//
// 	glVertex2f(0.07, 0.7);
// 	glVertex2f(0.07, 0.725);
//
// 	glVertex2f(0.07, 0.725);
// 	glVertex2f(0.05, 0.725);
//
// 	//vẽ chữ Ơ
//
// 	glVertex2f(0.12, 0.7);
// 	glVertex2f(0.12, 0.6);
//
// 	glVertex2f(0.12, 0.6);
// 	glVertex2f(0.17, 0.6);
//
// 	glVertex2f(0.17, 0.6);
// 	glVertex2f(0.17, 0.7);
//
// 	glVertex2f(0.17, 0.7);
// 	glVertex2f(0.12, 0.7);
//
// 	glVertex2f(0.17, 0.7);
// 	glVertex2f(0.19, 0.7);
//
// 	glVertex2f(0.19, 0.7);
// 	glVertex2f(0.19, 0.725);
//
// 	glVertex2f(0.19, 0.725);
// 	glVertex2f(0.17, 0.725);
//
// 	glVertex2f(0.17, 0.77);
// 	glVertex2f(0.19, 0.75);
//
// 	//vẽ chữ N
// 	glVertex2f(0.22, 0.7);
// 	glVertex2f(0.22, 0.6);
//
//
// 	glVertex2f(0.22, 0.7);
// 	glVertex2f(0.27, 0.6);
//
//
// 	glVertex2f(0.27, 0.6);
// 	glVertex2f(0.27, 0.7);
//
// 	//vẽ chữ G
//
//
// 	glVertex2f(0.3, 0.7);
// 	glVertex2f(0.35, 0.7);
//
// 	glVertex2f(0.3, 0.7);
// 	glVertex2f(0.3, 0.6);
//
//
// 	glVertex2f(0.3, 0.6);
// 	glVertex2f(0.35, 0.6);
//
//
// 	glVertex2f(0.35, 0.6);
// 	glVertex2f(0.35, 0.65);
//
// 	glVertex2f(0.35, 0.65);
// 	glVertex2f(0.33, 0.65);
//
//
// 	//^^
// 	glVertex2f(0.45, 0.64);
// 	glVertex2f(0.47, 0.7);
//
// 	glVertex2f(0.47, 0.7);
// 	glVertex2f(0.49, 0.64);
//
// 	glVertex2f(0.51, 0.64);
// 	glVertex2f(0.53, 0.7);
//
// 	glVertex2f(0.53, 0.7);
// 	glVertex2f(0.55, 0.64);
//
// 	//20CN2
// 	//_
// 	glVertex2f(-0.9, 0.2);
// 	glVertex2f(-0.6, 0.2);
//
// 	//2
// 	glVertex2f(-0.9, 0.425);
// 	glVertex2f(-0.9, 0.4);
//
// 	glVertex2f(-0.9, 0.425);
// 	glVertex2f(-0.87, 0.425);
//
// 	glVertex2f(-0.87, 0.425);
// 	glVertex2f(-0.87, 0.36);
//
// 	glVertex2f(-0.87, 0.36);
// 	glVertex2f(-0.9, 0.36);
//
// 	glVertex2f(-0.9, 0.36);
// 	glVertex2f(-0.9, 0.315);
//
// 	glVertex2f(-0.9, 0.315);
// 	glVertex2f(-0.87, 0.315);
//
// 	//0
// 	glVertex2f(-0.84, 0.425);
// 	glVertex2f(-0.81, 0.425);
//
// 	glVertex2f(-0.81, 0.425);
// 	glVertex2f(-0.81, 0.315);
//
// 	glVertex2f(-0.81, 0.315);
// 	glVertex2f(-0.84, 0.315);
//
// 	glVertex2f(-0.84, 0.425);
// 	glVertex2f(-0.84, 0.315);
//
// 	//C
// 	glVertex2f(-0.77, 0.425);
// 	glVertex2f(-0.74, 0.425);
//
// 	glVertex2f(-0.77, 0.425);
// 	glVertex2f(-0.77, 0.325);
//
// 	glVertex2f(-0.77, 0.325);
// 	glVertex2f(-0.74, 0.325);
//
// 	//N
// 	glVertex2f(-0.71, 0.425);
// 	glVertex2f(-0.71, 0.325);
//
// 	glVertex2f(-0.71, 0.425);
// 	glVertex2f(-0.68, 0.325);
//
// 	glVertex2f(-0.68, 0.325);
// 	glVertex2f(-0.68, 0.425);
//
// 	//2
// 	glVertex2f(-0.65, 0.425);
// 	glVertex2f(-0.65, 0.4);
//
// 	glVertex2f(-0.65, 0.425);
// 	glVertex2f(-0.62, 0.425);
//
// 	glVertex2f(-0.62, 0.425);
// 	glVertex2f(-0.62, 0.36);
//
// 	glVertex2f(-0.62, 0.36);
// 	glVertex2f(-0.65, 0.36);
//
// 	glVertex2f(-0.65, 0.36);
// 	glVertex2f(-0.65, 0.315);
//
// 	glVertex2f(-0.65, 0.315);
// 	glVertex2f(-0.62, 0.315);
//
//
//
//
// 	glEnd(); // 
// 	// đẩy bộ nhớ vẽ ra
// 	glFlush();
// }
// int main(int argc, char** argv) {
// 	// khởi tạo cửa sổ
// 	glutInitWindowSize(900, 500); // kích thước
// 	glutInitWindowPosition(100,100); // vị trí trên destop
// 	glutCreateWindow("2055010026 - Nguyen Van Cuong - 20CN2"); // caption
// 	// 
// 	glutDisplayFunc(Display_ViDu1); // đăng ký hàm callback hiển thịS
//
// 	glutMainLoop(); // vòng lặp chính
// 	return 0;
// }