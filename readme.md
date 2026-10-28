# Libft

> Mi primera librería en C: funciones de la libc estándar, utilidades adicionales y listas enlazadas (todo obligatorio).

---

## 📋 Sobre el proyecto

**Libft** es el primer proyecto del cursus de 42. El objetivo es entender cómo funcionan por dentro las funciones más comunes de C reprogramándolas desde cero.

A través de este proyecto aprendemos sobre la gestión manual de memoria, la aritmética de punteros, la manipulación de cadenas de texto y la creación de una librería estática (`libft.a`). Todo el código respeta la Norma de 42, no tiene fugas de memoria (*memory leaks*) y compila con los flags `-Wall -Wextra -Werror`.

---

## 📚 Lista de funciones

### 1. Funciones de la biblioteca estándar (libc)

Reimplementación de las funciones nativas más comunes de C:

| Función | Descripción sencilla |
| :--- | :--- |
| `ft_isalpha` | Comprueba si un carácter es una letra (`a-z`, `A-Z`). |
| `ft_isdigit` | Comprueba si un carácter es un número (`0-9`). |
| `ft_isalnum` | Comprueba si un carácter es alfanumérico (letra o número). |
| `ft_isascii` | Comprueba si el valor pertenece a la tabla ASCII estándar (0 a 127). |
| `ft_isprint` | Comprueba si el carácter se puede imprimir en pantalla (incluyendo espacios). |
| `ft_strlen` | Cuenta y devuelve el número de caracteres de una cadena. |
| `ft_memset` | Llena un bloque de memoria con un byte específico. |
| `ft_bzero` | Pone a cero (`\0`) todos los bytes del bloque de memoria indicado. |
| `ft_memcpy` | Copia datos de un área de memoria a otra. |
| `ft_memmove` | Copia memoria de forma segura incluso si las dos zonas se solapan. |
| `ft_strlcpy` | Copia una cadena a otra con un tamaño máximo y asegura que termine en `\0`. |
| `ft_strlcat` | Concatena una cadena al final de otra con límite de tamaño y termina en `\0`. |
| `ft_toupper` | Convierte una letra minúscula a mayúscula. |
| `ft_tolower` | Convierte una letra mayúscula a minúscula. |
| `ft_strchr` | Busca la primera aparición de un carácter en una cadena. |
| `ft_strrchr` | Busca la última aparición de un carácter en una cadena. |
| `ft_strncmp` | Compara dos cadenas de texto hasta un máximo de `n` caracteres. |
| `ft_memchr` | Busca un byte concreto dentro de un bloque de memoria. |
| `ft_memcmp` | Compara dos bloques de memoria byte a byte. |
| `ft_strnstr` | Busca una subcadena dentro de una cadena más grande (hasta `len` caracteres). |
| `ft_atoi` | Convierte una cadena de texto con números en un número entero real (`int`). |
| `ft_calloc` | Reserva memoria con `malloc` para un conjunto de datos y pone todos sus bytes a cero. |
| `ft_strdup` | Hace una copia exacta de una cadena reservando memoria nueva. |

---

### 2. Funciones adicionales

Funciones útiles para manipular texto y mostrar información por salida de archivos:

| Función | Descripción sencilla |
| :--- | :--- |
| `ft_substr` | Corta y devuelve un trozo (subcadena) de una cadena original. |
| `ft_strjoin` | Une dos cadenas de texto en una cadena completamente nueva. |
| `ft_strtrim` | Quita los caracteres no deseados del principio y del final de una cadena. |
| `ft_split` | Separa una cadena en varias palabras usando un carácter como separador. |
| `ft_itoa` | Convierte un número entero en texto (cadena de caracteres). |
| `ft_strmapi` | Crea una nueva cadena aplicando una función a cada carácter de la original. |
| `ft_striteri` | Aplica una función a cada carácter de una cadena directamente en su sitio. |
| `ft_putchar_fd` | Escribe un único carácter en un descriptor de archivo (`fd`). |
| `ft_putstr_fd` | Escribe una cadena de texto en un descriptor de archivo (`fd`). |
| `ft_putendl_fd` | Escribe una cadena seguida de un salto de línea (`\n`) en un descriptor de archivo. |
| `ft_putnbr_fd` | Escribe un número en un descriptor de archivo (`fd`). |

---

### 3. Listas enlazadas

Estructura obligatoria del nodo:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Funciones para crear y gestionar listas:

| Función | Descripción sencilla |
| :--- | :--- |
| `ft_lstnew` | Crea un nuevo nodo con su contenido y pone el siguiente en `NULL`. |
| `ft_lstadd_front` | Añade un nodo al principio de la lista. |
| `ft_lstsize` | Cuenta el número total de nodos que tiene la lista. |
| `ft_lstlast` | Encuentra y devuelve el último nodo de la lista. |
| `ft_lstadd_back` | Añade un nodo al final de la lista. |
| `ft_lstdelone` | Borra el contenido de un nodo con una función de borrado y libera el nodo. |
| `ft_lstclear` | Borra y libera todos los nodos de la lista junto con su contenido. |
| `ft_lstiter` | Recorre la lista y aplica una función sobre el contenido de cada nodo. |
| `ft_lstmap` | Recorre la lista, aplica una función a cada elemento y genera una lista nueva. |

---

## ⚙️ Cómo compilar

Puedes usar los siguientes comandos del `Makefile` desde la terminal:

```bash
# Compilar todos los archivos y crear libft.a
make

# Eliminar los archivos temporales (.o)
make clean

# Eliminar los archivos objeto y la librería libft.a
make fclean

# Recompilar todo el proyecto desde cero
make re
```

---

## 💻 Cómo usarla

Para usar las funciones en cualquiera de tus programas en C:

1. Incluye el archivo de cabecera en tu archivo `.c`:
   ```c
   #include "libft.h"
   ```

2. Compila tu programa enlazando la librería estática:
   ```bash
   cc -Wall -Wextra -Werror main.c -L. -lft -o mi_programa
   ```