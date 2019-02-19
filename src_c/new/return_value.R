
dyn.load("return_value.so")

obj <- .Call("return_value")
cat(obj)

# Hello World
