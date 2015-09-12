
#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>


static void display() {
  glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
  glFlush();
}

int main(int argc, char * argv[]) {
  // OpenGL/GLUT 環境の初期化
  glutInit(&argc, argv);
  // ウィンドウを開く
  glutCreateWindow("Hello OpenGL/GLUT world.");
  // ウィンドウへの描画関数の登録
  glutDisplayFunc(display);
  // メインループ開始
  glutMainLoop();
  return 0;
}
