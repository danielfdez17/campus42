find . -type f -name "*.sh" -printf "%f\n" | sed 's/\.[^.]*$//'
# find . -type f -exec basename {} \; -iname "*.sh" | sed 's/\.sh$//1'