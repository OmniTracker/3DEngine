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
    bool addScreen(QString key, std::shared_ptr<Screen> val);
    bool removeScreen(QString key);
    bool removeScreens(const QStringList keys);
    bool switchScreen(QString key);
    std::shared_ptr<Screen> currentScreen() const;
    void setCurrentScreen(std::shared_ptr<Screen> currentScreen);
    QMap<QString, std::shared_ptr<Screen> > screenMap() const;

    bool canUseScreen();


private:
    QMap <QString, std::shared_ptr<Screen>> m_screenMap;

    std::shared_ptr<Screen> m_currentScreen;

    std::shared_ptr<Camera> m_camera;

    glm::vec3 m_position;
};

#endif // APPLICATION_H
