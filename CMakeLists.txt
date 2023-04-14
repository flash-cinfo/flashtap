cmake_minimum_required(VERSION 3.17)
project(shooter)

set(CMAKE_CXX_STANDARD 20)

add_executable(${CMAKE_PROJECT_NAME}
        # game:
        src/Source.cpp
        src/player/Player.cpp
        src/player/Player.h
        src/network/ShooterClient.cpp
        src/network/ShooterClient.h
        src/network/ShooterServer.cpp
        src/network/ShooterServer.h
        src/weapon/Weapon.cpp
        src/weapon/Weapon.h
        src/weapon/Ak47.h
        src/weapon/Shotgun.h
        src/weapon/Gun.h
        src/weapon/Gold_Ak47.h
        src/weapon/Rifle.h
        src/player/PlayerController.cpp
        src/player/PlayerController.h
        src/Shooter.cpp
        src/Shooter.h
        src/ShooterConsts.h
        src/network/ShooterMsgType.h
        src/network/ShooterMsgType.cpp
        # 3d engine:
        src/engine/Consts.h
        src/engine/math/Vec4D.h
        src/engine/math/Vec4D.cpp
        src/engine/math/Vec3D.cpp
        src/engine/math/Vec3D.h
        src/engine/math/Vec2D.cpp
        src/engine/math/Vec2D.h
        src/engine/math/Matrix4x4.h
        src/engine/math/Matrix4x4.cpp
        src/engine/Triangle.h
        src/engine/Triangle.cpp
        src/engine/math/Plane.h
        src/engine/math/Plane.cpp
        src/engine/Mesh.h
        src/engine/Mesh.cpp
        src/engine/utils/Log.h
        src/engine/utils/Log.cpp
        src/engine/utils/Time.h
        src/engine/utils/Time.cpp
        src/engine/utils/Timer.cpp
        src/engine/utils/Timer.h
        src/engine/utils/ResourceManager.h
        src/engine/utils/ResourceManager.cpp
        src/engine/World.h
        src/engine/World.cpp
        src/engine/Camera.h
        src/engine/Camera.cpp
        src/engine/io/Screen.h
        src/engine/io/Screen.cpp
        src/engine/Engine.h
        src/engine/Engine.cpp
        src/engine/io/Keyboard.cpp
        src/engine/io/Keyboard.h
        src/engine/io/Mouse.cpp
        src/engine/io/Mouse.h
        src/engine/io/SoundController.cpp
        src/engine/io/SoundController.h
        src/engine/utils/ObjectController.cpp
        src/engine/utils/ObjectController.h
        src/engine/animation/Animation.h
        src/engine/animation/Timeline.cpp
        src/engine/animation/Timeline.h
        src/engine/animation/Interpolation.h
        src/engine/animation/Animation.cpp
        src/engine/animation/ATranslate.h
        src/engine/animation/AScale.h
        src/engine/animation/ARotate.h
        src/engine/animation/AWait.h
        src/engine/animation/AFunction.h
        src/engine/animation/AAttractToPoint.h
        src/engine/animation/ARotateRelativePoint.h
        src/engine/animation/ARotateLeft.h
        src/engine/animation/Interpolation.cpp
        src/engine/animation/Animations.h
        src/engine/animation/AShowCreation.h
        src/engine/animation/AShowUncreation.h
        src/engine/animation/ARotateLeftUpLookAt.h
        src/engine/animation/ADecompose.h
        src/engine/physics/RigidBody.cpp
        src/engine/physics/RigidBody.h
        src/engine/physics/Simplex.h
        src/engine/physics/HitBox.cpp
        src/engine/physics/HitBox.h
        src/engine/Object.cpp
        src/engine/Object.h
        src/engine/gui/Button.cpp
        src/engine/gui/Button.h
        src/engine/gui/Window.cpp
        src/engine/gui/Window.h
        src/engine/network/ClientUDP.cpp
        src/engine/network/ClientUDP.h
        src/engine/network/MsgType.cpp
        src/engine/network/MsgType.h
        src/engine/network/ReliableMsg.cpp
        src/engine/network/ReliableMsg.h
        src/engine/network/ServerUDP.cpp
        src/engine/network/ServerUDP.h
        src/engine/network/UDPConnection.cpp
        src/engine/network/UDPConnection.h
        src/engine/network/UDPSocket.cpp
        src/engine/network/UDPSocket.h
        )

if(APPLE OR UNIX)
    include_directories(/usr/local/include)
else()
    set(SFML_DIR "C:/Libraries/SFML/lib/cmake/SFML")
    set(SFML_STATIC_LIBRARIES TRUE)
endif()

find_package(SFML 2.5.1 COMPONENTS graphics audio REQUIRED)

if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
endif()

target_link_libraries(${CMAKE_PROJECT_NAME} sfml-audio sfml-network sfml-graphics sfml-window sfml-system)

# OpenGL part
if (APPLE)
    set(GLEW_H /usr/local/Cellar/glew/2.1.0/include/GL)
    set(GLFW_H /usr/local/Cellar/glfw/3.2.1/include/GLFW)
    include_directories(${GLEW_H} ${GLFW_H})

    set(GLEW_LINK /usr/local/Cellar/glew/2.1.0/lib/libGLEW.2.1.dylib)
    set(GLFW_LINK /usr/local/Cellar/glfw/3.2.1/lib/libglfw.3.dylib)
    link_libraries(${OPENGL} ${GLEW_LINK} ${GLFW_LINK})

    target_link_libraries(${CMAKE_PROJECT_NAME} "-framework OpenGL")
    target_link_libraries(${CMAKE_PROJECT_NAME} "-framework GLUT")
elseif(UNIX)
    find_package(OpenGL REQUIRED)
    find_package(GLUT REQUIRED)

    target_link_libraries(${CMAKE_PROJECT_NAME} ${OPENGL_LIBRARIES})
    target_link_libraries(${CMAKE_PROJECT_NAME} ${GLUT_LIBRARY})
endif()
