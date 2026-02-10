# TASK1

## Выбор типа данных
Выбор типа данных происходит при сборке:
### 1. Сборка DOUBLE
```
cmake -B build -DUSE_DOUBLE=ON -S .
cmake --build build
```
### 2. Сборка FLOAT
```
cmake -B build -DUSE_DOUBLE=OFF -S .
cmake --build build
```
### Запуск
```
./build/app
```
## Выводы программ
### Double
```
Type: DOUBLE
Sum: 6.27585e-10
```
### Float
```
Type: FLOAT
Sum: -0.0277862
```
