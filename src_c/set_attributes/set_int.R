
dyn.load("set_int.so")

set <- function(vec) {

    .Call("set_int",vec)

}

bool <- c(T, F, T)

set(bool)
# [1] 1 0 1

num <- 2

set(num)
# [1] 0

