
dyn.load("oneplus.so")

oneplus <- function(num) {
    .Call("oneplus", num)
}

oneplus(1:5)
# Not numeric, argument must be numericNULL

oneplus(c(1, 2, 3))
# [1] 2 3 4

oneplus("a")
# Not numeric, argument must be numericNULL
