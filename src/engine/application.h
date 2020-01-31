#ifndef APPLICATION_H
#define APPLICATION_H

#include "engine/util/CommonIncludes.h"

#include "screen.h"

#include <QGLWidget>
#include <QTime>
#include <QTimer>
#include <memory>

class Graphics;
class Camera;

class Application
{
public:
    Application();

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
    bool addScreen(QString key, Screen * val);
    bool removeScreen(QString key);
    bool removeScreens(const QStringList keys);
    bool switchScreen(QString key);
    Screen *currentScreen() const;
    void setCurrentScreen(Screen *currentScreen);
    QMap<QString, Screen *> screenMap() const;
private:
    QMap <QString, Screen *> m_screenMap;
    Screen * m_currentScreen;

    glm::vec3 oie;

    bool canUseScreen();
};

#endif // APPLICATION_H
