# README - Laboratorio 5
Este proyecto genera un archivo JSON con datos personales utilizando la biblioteca cJSON. Implementa tres sistemas de construcción diferentes: Make, CMake y Meson.

Instalación de cJSON

Linux (Ubuntu/Debian):

sudo apt-get update
sudo apt-get install libcjson-dev

macOS:

brew install cjson

Windows (vía vcpkg):

vcpkg install cjson

# Instalación de herramientas de construcción

## Make (generalmente ya instalado)

## CMake
sudo apt-get install cmake

## Meson y Ninja
sudo apt-get install meson ninja-build

# Compilación del Proyecto

1. Usando Make

make
Ejecutable generado: build/ejercicio1

2. Usando CMake

mkdir build && cd build
cmake ..
make
Ejecutable generado: build/ejercicio1

3. Usando Meson

meson setup builddir
meson compile -C builddir
Ejecutable generado: builddir/ejercicio1

# Ejecución del Programa

# Para Make/CMake:
./build/ejercicio1

# Para Meson:
./builddir/ejercicio1
