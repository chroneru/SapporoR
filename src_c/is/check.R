
dyn.load("check.so")

check <- function(vec) {

    .Call("check", vec)
}

check(1:5)
# vec is not 1 element.
# NULL

check(1)
# [1] FALSE

check("a")
# [1] FALSE

check(T)
# [1] TRUE
