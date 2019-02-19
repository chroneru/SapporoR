
dyn.load("check_value.so")

check_log <- function(vec) {

    .Call("check_value", vec)

}

check_log(T)
# [1] 1

check_log(F)
# [1] 0

check_log(1)
# [1] 1

check_log(0)
# [1] 0

check_log(4)
# [1] 1

check_log("a")
# [1] NA

check_log(c(T, F, T, F, F))
# [1] 1 1 1 1 1
