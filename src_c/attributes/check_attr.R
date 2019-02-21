
dyn.load("check_attr.so")

ca <- function(vec) {

    .Call("check_attr", vec)

}

num <- 1:6

attr(num, "dim") <- c(2, 3)

ca(num)
# $dim
# [1] 2 3

