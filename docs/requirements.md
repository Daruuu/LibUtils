El objetivo es terminar una primera versión en **1-2 horas**, pero que tenga una estructura profesional y te permita practicar C++, STL y CMake.

# Requisitos funcionales

## RF-001 - Conversión de texto

Implementar:

* `to_upper()`
* `to_lower()`
* `capitalize()`

---

## RF-002 - Manipulación de texto

Implementar:

* `reverse()`
* `trim()`
* `remove_spaces()`

---

## RF-003 - Búsqueda

Implementar:

* `contains()`
* `starts_with()`
* `ends_with()`

---

## RF-004 - División y unión

Implementar:

* `split()`
* `join()`

---

## RF-005 - Conteo

Implementar:

* `count_words()`
* `count_char()`

---

## RF-006 - Utilidades

Implementar:

* `is_empty()`
* `repeat()`

---

# Requisitos no funcionales

## RNF-001

La librería deberá compilar como una **librería estática** (`libutils.a`).

---

## RNF-002

El proyecto deberá utilizar **C++17**.

---

## RNF-003

Todo el código público deberá pertenecer al namespace:

```cpp
namespace utils
{

}
```

---

## RNF-004

No se permitirá el uso de:

* `new`
* `delete`

Deberá utilizarse la STL.

---

## RNF-005

Todo el código deberá compilar sin warnings usando:

```text
-Wall
-Wextra
-Wpedantic
```

---

## RNF-006

Separar interfaz e implementación:

```text
include/
src/
```

---

## RNF-007

La librería deberá poder utilizarse desde otro proyecto mediante:

```cpp
#include <utils/text.hpp>
```

---

## RNF-008

La compilación se realizará mediante **CMake**.

---

## RNF-009

La librería deberá contener al menos un ejemplo funcional.

```
examples/main.cpp
```

---

## RNF-010

Cada función deberá tener al menos una prueba unitaria con Google Test.

---

# Requisitos de arquitectura

```
libutils
│
├── include/
│
├── src/
│
├── tests/
│
├── examples/
│
├── docs/
│
├── CMakeLists.txt
│
└── README.md
```

---

# STL obligatoria

Durante el desarrollo deberás utilizar al menos:

* `std::string`
* `std::vector`
* `std::stringstream`
* `std::ostringstream`
* `std::transform`
* `std::reverse`
* `std::count`
* `std::find_if`
* `std::algorithm`
* Iteradores
* Lambdas

---

# Calidad del código

Cada función deberá cumplir:

* Una única responsabilidad.
* Complejidad baja.
* Const-correctness (`const` donde corresponda).
* Evitar duplicación de código.
* Nombres claros y descriptivos.

---

# Criterios de aceptación

* El proyecto genera `libutils.a`.
* Existe un programa de ejemplo que utiliza la librería.
* Todos los tests pasan correctamente.
* La librería puede enlazarse desde un proyecto externo.
* El código compila sin warnings.
* El proyecto puede clonarse y compilarse únicamente con `cmake` y `make`.

---

## Roadmap recomendado

No implementes todo en una sola sesión. Te propongo estas versiones:

### **v0.1.0 — Base (1-2 horas)**

* Configuración de CMake.
* Generación de `libutils.a`.
* `to_upper()`
* `to_lower()`
* `reverse()`
* `contains()`
* `starts_with()`
* `ends_with()`
* Ejemplo funcional (`examples/main.cpp`).

### **v0.2.0 — Manipulación de texto**

* `trim()`
* `remove_spaces()`
* `split()`
* `join()`

### **v0.3.0 — Utilidades**

* `count_words()`
* `count_char()`
* `repeat()`
* `is_empty()`

### **v1.0.0 — Proyecto completo**

* Google Test.
* Documentación con Doxygen.
* Instalación mediante CMake (`install()` y exportación de la librería).
* Integración continua con GitHub Actions (compilación y tests automáticos).

De esta forma tendrás un proyecto que irá creciendo de forma incremental y que reflejará un flujo de trabajo muy parecido al de un proyecto profesional.
