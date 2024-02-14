### Тестовое задание в компанию "Топ-Системы"

- Установка пакетов GLUT на Ubuntu 22.04 
```
$ sudo apt-get install libglut3-dev
```

- Запуск в Linux:
```
$ g++ -std=c++17 -o bin/test tests/shape_test.cpp -I./include -lGL -lGLU -lglut
$ ./bin/test
``` 