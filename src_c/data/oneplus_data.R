
dyn.load("oneplus_data.so")

oneplus_data <- function(num) {
    .Call("oneplus_data", num)
}

oneplus_data(1:5)
# Not numeric, argument must be numericNULL

oneplus_data(c(1, 2, 3))
# [1] 2 3 4

oneplus_data("a")
# Not numeric, argument must be numericNULL
