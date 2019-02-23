
dyn.load("return_length.so")

wrap_len <- function(vec) {

    .Call("return_length", vec)

}

wrap_len(1:6)
# [1] 6

wrap_len("Hello")
# [1] 1

wrap_len(NULL)
# [1] 0
