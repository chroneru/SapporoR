
dyn.load("coerce.so")

coerce_chr <- function(chr) {

    RES <- .Call("coerce", chr)

    list(res = RES)
}

coerce_chr(1:5)

# $res
# [1] "1" "2" "3" "4" "5"

