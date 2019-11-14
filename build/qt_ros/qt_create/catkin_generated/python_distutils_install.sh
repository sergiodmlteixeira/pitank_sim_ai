#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/sergio/teste420/src/qt_ros/qt_create"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/sergio/teste420/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/sergio/teste420/install/lib/python2.7/dist-packages:/home/sergio/teste420/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/sergio/teste420/build" \
    "/usr/bin/python" \
    "/home/sergio/teste420/src/qt_ros/qt_create/setup.py" \
    build --build-base "/home/sergio/teste420/build/qt_ros/qt_create" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/sergio/teste420/install" --install-scripts="/home/sergio/teste420/install/bin"
