
dyn.load("init_msg.so")

init_c <- function() {
    RES <- .Call("init_msg")

    list(res = RES)
}

hoge <- init_c()

hoge$res
# [1] "This object is initialized in C."


