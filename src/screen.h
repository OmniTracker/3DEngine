#ifndef SCREEN_H
#define SCREEN_H

#include <QGLWidget>
#include <QTime>
#include <QTimer>
#include <memory>

class Graphics;
class Camera;

class Screen
{
public:
    Screen();

    void tick(float seconds);
    void draw(Graphics *g);
    void resize(int w, int h);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void keyRepeatEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
};

#endif // SCREEN_H
