project('flashtap', 'cpp', default_options : ['cpp_std=c++17', 'warning_level=0', 'b_sanitize=address', 'b_sanitize=leak'])

files = [
    'src/Source.cpp',
    'src/player/Player.cpp',
    'src/player/Player.h',
    'src/network/ShooterClient.cpp',
    'src/network/ShooterClient.h',
    'src/network/ShooterServer.cpp',
    'src/network/ShooterServer.h',
    'src/weapon/Weapon.cpp',
    'src/weapon/Weapon.h',
    'src/weapon/Ak47.h',
    'src/weapon/Shotgun.h',
    'src/weapon/Gun.h',
    'src/weapon/Gold_Ak47.h',
    'src/weapon/Rifle.h',
    'src/player/PlayerController.cpp',
    'src/player/PlayerController.h',
    'src/Shooter.cpp',
    'src/Shooter.h',
    'src/ShooterConsts.h',
    'src/network/ShooterMsgType.h',
    'src/network/ShooterMsgType.cpp',
    'src/debug/imgui/imgui.cpp',
    'src/debug/imgui/imgui_demo.cpp',
    'src/debug/imgui/imgui_draw.cpp',
    'src/debug/imgui/imgui_tables.cpp',
    'src/debug/imgui/imgui_widgets.cpp',
    'src/debug/imgui/imgui-SFML.cpp',
    'src/debug/MenuInit.cpp',
    # 3d flashEngine:
    'src/flashEngine/Consts.h',
    'src/flashEngine/math/Vec4D.h',
    'src/flashEngine/math/Vec4D.cpp',
    'src/flashEngine/math/Vec3D.cpp',
    'src/flashEngine/math/Vec3D.h',
    'src/flashEngine/math/Vec2D.cpp',
    'src/flashEngine/math/Vec2D.h',
    'src/flashEngine/math/Matrix4x4.h',
    'src/flashEngine/math/Matrix4x4.cpp',
    'src/flashEngine/Triangle.h',
    'src/flashEngine/Triangle.cpp',
    'src/flashEngine/math/Plane.h',
    'src/flashEngine/math/Plane.cpp',
    'src/flashEngine/Mesh.h',
    'src/flashEngine/Mesh.cpp',
    'src/flashEngine/utils/Log.h',
    'src/flashEngine/utils/Log.cpp',
    'src/flashEngine/utils/Time.h',
    'src/flashEngine/utils/Time.cpp',
    'src/flashEngine/utils/Timer.cpp',
    'src/flashEngine/utils/Timer.h',
    'src/flashEngine/utils/ResourceManager.h',
    'src/flashEngine/utils/ResourceManager.cpp',
    'src/flashEngine/World.h',
    'src/flashEngine/World.cpp',
    'src/flashEngine/Camera.h',
    'src/flashEngine/Camera.cpp',
    'src/flashEngine/io/Screen.h',
    'src/flashEngine/io/Screen.cpp',
    'src/flashEngine/Engine.h',
    'src/flashEngine/Engine.cpp',
    'src/flashEngine/io/Keyboard.cpp',
    'src/flashEngine/io/Keyboard.h',
    'src/flashEngine/io/Mouse.cpp',
    'src/flashEngine/io/Mouse.h',
    'src/flashEngine/io/SoundController.cpp',
    'src/flashEngine/io/SoundController.h',
    'src/flashEngine/utils/ObjectController.cpp',
    'src/flashEngine/utils/ObjectController.h',
    'src/flashEngine/animation/Animation.h',
    'src/flashEngine/animation/Timeline.cpp',
    'src/flashEngine/animation/Timeline.h',
    'src/flashEngine/animation/Interpolation.h',
    'src/flashEngine/animation/Animation.cpp',
    'src/flashEngine/animation/ATranslate.h',
    'src/flashEngine/animation/AScale.h',
    'src/flashEngine/animation/ARotate.h',
    'src/flashEngine/animation/AWait.h',
    'src/flashEngine/animation/AFunction.h',
    'src/flashEngine/animation/AAttractToPoint.h',
    'src/flashEngine/animation/ARotateRelativePoint.h',
    'src/flashEngine/animation/ARotateLeft.h',
    'src/flashEngine/animation/Interpolation.cpp',
    'src/flashEngine/animation/Animations.h',
    'src/flashEngine/animation/AShowCreation.h',
    'src/flashEngine/animation/AShowUncreation.h',
    'src/flashEngine/animation/ARotateLeftUpLookAt.h',
    'src/flashEngine/animation/ADecompose.h',
    'src/flashEngine/physics/RigidBody.cpp',
    'src/flashEngine/physics/RigidBody.h',
    'src/flashEngine/physics/Simplex.h',
    'src/flashEngine/physics/HitBox.cpp',
    'src/flashEngine/physics/HitBox.h',
    'src/flashEngine/Object.cpp',
    'src/flashEngine/Object.h',
    'src/flashEngine/gui/Button.cpp',
    'src/flashEngine/gui/Button.h',
    'src/flashEngine/gui/Window.cpp',
    'src/flashEngine/gui/Window.h',
    'src/flashEngine/network/ClientUDP.cpp',
    'src/flashEngine/network/ClientUDP.h',
    'src/flashEngine/network/MsgType.cpp',
    'src/flashEngine/network/MsgType.h',
    'src/flashEngine/network/ReliableMsg.cpp',
    'src/flashEngine/network/ReliableMsg.h',
    'src/flashEngine/network/ServerUDP.cpp',
    'src/flashEngine/network/ServerUDP.h',
    'src/flashEngine/network/UDPConnection.cpp',
    'src/flashEngine/network/UDPConnection.h',
    'src/flashEngine/network/UDPSocket.cpp',
    'src/flashEngine/network/UDPSocket.h'
]

executable('flashtap', files,
    include_directories: 'src',
    dependencies : [
        dependency('sfml-all'),
        dependency('glew'),
        dependency('opengl'),
    ],

)