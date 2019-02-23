
dyn.load("return_cr.so")

ncol_nrow <- function(vec) {

    .Call("return_cr", vec)

}

num <- 1:6

dim(num) <- c(2, 3)

ncol_nrow(num)
# [1] 2 3
