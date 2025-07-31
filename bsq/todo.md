1. Abrir el archivo
2. Leer la información del mapa
3. Leer y guardar el mapa, así como el ancho y el alto del mapa
4. Cerrar el archivo
5. Procesar el mapa
	5.1. Buscar cuadrados desde la posición (0, 0) hasta la ('row', 'col')
		5.1.2 Como son cuadrados, podríamos recorrer tanto horizontal como verticalmente
				con una sola variable comprobando que no nos encontremos ningún obstáculo.
				Una vez nos encontremos un obstáculo, procesamos el interior del cuadrado
				buscando obstáculos. Si no los hay, guardamos en una estructura la posición de inicio y la longitud del lado del cuadrado.
				Este proceso se haría 'row' * 'col' veces.


- abrir archivo (hecha)
- cerrar archivo (hecha)
- leer archivo (Orlando) (hecho)
	- leer la información del archivo
	- leer la matriz
- comprobar que la matriz sea valida (Daniel)
	- comprobar longitud todas las lineas (iguales)
- crear la matriz (Orlando) (hecha)
- mostrar la matriz (Orlando) (hecha)
- modificar la matriz (Orlando)
- buscar el cuadrado más grande (Daniel) (hecho)
- guardar el cuadrado más grande (Daniel) (hecho)
	- coordenada inicio (x, y) + longitud del lado