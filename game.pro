# This is the general project file,
# to be used to simply run the game.
#
# Other .pro files are used for specific tasks,
# such as codecov or profiling

# All files are in here, the rest are just settings
include(game.pri)
# include(game_view.pri)

# Use the C++ version that all team members can use
CONFIG += c++17
QMAKE_CXXFLAGS += -std=c++17

# High warning levels
QMAKE_CXXFLAGS += -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic

# Debug and release settings
CONFIG += debug_and_release
CONFIG(release, debug|release) {
  DEFINES += NDEBUG
}
CONFIG(debug, debug|release) {
    # A warning is an error, only in debug mode
    QMAKE_CXXFLAGS += -Werror
}

# Qt5
QT += core gui

# GNU/Linux
unix:!macx {

    # Cannot do code coverage on a local computer
    #
    # This line will be uncommented by GitHub Actions
    #
    # QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
    # LIBS += -lgcov
    LIBS += -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
}

macx {
  QMAKE_OSX_DEPLOYMENT_TARGET = 10.15


  INCLUDEPATH += /Users/oscargullberg/SFML/include
  INCLUDEPATH += /Users/meike.latz/SFML/include
  INCLUDEPATH += /Users/theo/SFML/include
  INCLUDEPATH += /Users/sawsimeon/SFML/include

  LIBS += -L/Users/oscargullberg/SFML/lib
  LIBS += -L/Users/meike.latz/SFML/lib
  LIBS += -L/Users/theo/SFML/lib
  LIBS += -L/Users/sawsimeon/SFML/lib
}

win32{
  INCLUDEPATH += C:/Qt/sfml/include
  INCLUDEPATH += D:/Qt/sfml/include
  LIBS += -LC:/Qt/sfml/lib
  LIBS += -LD:/Qt/sfml/lib
  CONFIG(debug, debug|release) {
    LIBS += -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system
  }
  CONFIG(release, debug|release) {
    LIBS += -lsfml-audio-d -lsfml-graphics-d -lsfml-window-d -lsfml-system-d
  }
  LIBS += -lopengl32
  LIBS += -lgdi32
  LIBS += -lwinmm
  # LIBS += -lgcov
}

# Cannot show game on GitHub Actions
#
# This line will be uncommented by GitHub Actions
#
# DEFINES += LOGIC_ONLY
