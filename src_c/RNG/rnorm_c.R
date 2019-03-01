
dyn.load("rnorm_c.so")

return_rnorm <- function(times) {
    RES <- .Call("rnorm_c", times)

    list(res = RES)
}

return_rnorm(1)$res
# [1] -0.5865062


return_rnorm(5)$res
# [1] -0.3854486  0.6042691 -0.2057999  0.8156022 -1.4987004

return_rnorm(5L)$res
# [1] -0.3844218 -0.3170639 -1.7558294  1.6429369  0.2188673

return_rnorm(c(1, 2))$res
# return_rnorm(c(1, 2)) でエラー: argument's length is not 1
# 実行が停止されました

return_rnorm("a")$res
# return_rnorm("a") でエラー: argument is not integer, or numeric
# 実行が停止されました

