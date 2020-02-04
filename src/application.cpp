#include "application.h"

Application::Application() : m_currentScreen (nullptr)
{

}

bool Application::canUseScreen ()
{


    /*
    if (// m_currentScreen == nullptr)
        return false;

        */
    return true;

}

void Application::tick(float seconds)
{

    if (canUseScreen ()) {
        // // m_currentScreen->tick(seconds);
    }

}

void Application::draw(Graphics *g)
{
    if (canUseScreen ()) {
        // m_currentScreen->draw(g);
    }
}

void Application::resize(int w, int h)
{
    if (canUseScreen ()) {
        // m_currentScreen->resize(w,h);
    }
}

void Application::mousePressEvent(QMouseEvent *event)
{


    if (canUseScreen ()) {
        // m_currentScreen->mousePressEvent(event);
    }
}

void Application::mouseMoveEvent(QMouseEvent *event)
{
    if (canUseScreen ()) {
        // m_currentScreen->mouseMoveEvent(event);
    }

}

void Application::mouseReleaseEvent(QMouseEvent *event)
{
    if (canUseScreen ()) {
        // m_currentScreen->mouseReleaseEvent(event);
    }

}

void Application::wheelEvent(QWheelEvent *event)
{
    if (canUseScreen ()) {
        // m_currentScreen->wheelEvent(event);
    }
}

void Application::keyPressEvent(QKeyEvent *event)
{


            /*
    if(event->key() == Qt::Key_D)

        // m_camera->translate(-perp);
                */

}

void Application::keyRepeatEvent(QKeyEvent *event)
{
    if (canUseScreen ()) {
        // m_currentScreen->keyRepeatEvent(event);
    }

}

void Application::keyReleaseEvent(QKeyEvent *event)
{

}

bool Application::addScreen(QString key, std::shared_ptr<Screen> val)
{
    if ( ( ( m_screenMap.contains(key) ) == false ) && ( val != nullptr ) ){
        // m_screenMap.insert(key, val);
        return true;
    }
    return false;
}

bool Application::removeScreen(QString key)
{
    return m_screenMap.remove(key);
}

bool Application::removeScreens(const QStringList keys)
{
    for ( QString key : keys )
    {
        if (m_screenMap.remove(key) < 0)
        {
            return false;
        }
    }
    return true;
}

bool Application::switchScreen(QString key)
{

    // If the key exist and the key value doesn't equal the current screen.
    if ( screenMap().keys().contains(key) &&
         (screenMap().value(key) != currentScreen())) {

        // Set the current
        setCurrentScreen(screenMap().value(key));
        return true;
    }
    return false;
}

std::shared_ptr<Screen> Application::currentScreen() const
{
    return m_currentScreen;
}

void Application::setCurrentScreen(std::shared_ptr<Screen> currentScreen)
{
    m_currentScreen = currentScreen;
}

QMap<QString, std::shared_ptr<Screen> > Application::screenMap() const
{
    return m_screenMap;
}
