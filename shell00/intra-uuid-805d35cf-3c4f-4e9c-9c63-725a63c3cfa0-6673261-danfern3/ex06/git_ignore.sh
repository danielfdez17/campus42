# Se guarda la raíz del directorio en una variable
ROOT=$(git rev-parse --show-toplevel)
# Se muestran todos los archivos ignorados actualmente
git -C "$ROOT" ls-files --others --ignored --exclude-standard