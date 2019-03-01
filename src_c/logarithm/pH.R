
dyn.load("pH.so")

return_pH <- function(vec) {

    .Call("pH", vec)

}

conc <- c(10^-4, 10^-5, 10^-6)

conc_int <- as.integer(conc)

return_pH(conc)
# [1] 4 5 6


return_pH(conc_int)
# return_pH(conc_int) でエラー: argument is not numeric
# 実行が停止されました

return_pH(letters[1:3])
# return_pH(letters[1:3]) でエラー: argument is not numeric, or integer
# 実行が停止されました

