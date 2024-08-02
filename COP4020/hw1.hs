sumNum x y = (x * 2) + (y * 3)

countMe = [x | x <- [3..13], odd x]

compareUs x y
    | x > y = "Larger"
    | otherwise = "Smaller or equal"