## プロジェクト作成方法
- Xcode にて新規プロジェクトを作成
- Build Phases -> Link Binary With Librariesより以下を追加
    - GLUT.framework
    - OpenGL.framework
- Build Setting -> Deployment -> OS X Deployment Targetを以下に変更
    - OS X 10.8

## インクルード
    #include <OpenGL/gl.h>
    #include <GLUT/glut.h>


## コード変更
- コードを以下のように変更(glutInit()でのエラー回避のため)     
`int main(int argc, char * argv[])`
