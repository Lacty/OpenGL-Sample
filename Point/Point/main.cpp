
#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>


struct Vec2i {
  int x, y;
  Vec2i(const int& x, const int& y) {
    this->x = x;
    this->y = y;
  }
};

static void Point(const Vec2i& pos, const float& size) {
  glPointSize(size);
  glBegin(GL_POINTS);
  glVertex2i(pos.x, pos.y);
  glEnd();
}

static void display() {
  glClearColor(0.4f, 0.4f, 0.4f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  
  // オレンジ色で点を描画
  glColor4f(1.0f, 0.6f, 0.0f, 1.0f);
  Point(Vec2i(0, 0), 10.f);
  
  glFlush();
}

int main(int argc, char * argv[]) {
  // 環境初期化
  glutInit(&argc, argv);
  // ウィンドウを開く
  glutCreateWindow("draw Point");
  // 描画関数の登録
  glutDisplayFunc(display);
  // ループ開始
  glutMainLoop();
  
  return 0;
}
