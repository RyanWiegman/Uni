-- ProjectEuler.net

count 100 = []
count n = n : count (n + 1)

------------------------------

fib 0 = 0
fib 1 = 1
fib n = fib(n - 1) + fib(n - 2)

------------------------------

fibList n = [fib x | x <- [1..n]]

------------------------------

fibList n = go n 1 1
    where
    go n f s
        |(f + s) > n = []
        | otherwise = (f + s) : go n s (f + s)

------------------------------  SEP 7.
----    REVIEW

sumOfReverse n = n + read(reverse(show(n)))

allDigitsOdd n = go(show(n))
    where
    go (x:xs)
        | even (charValue x) = False
        | null xs = True
        | otherwise = go xs

charValue c = fromEnum c - 48

lastdigitZero n = last(show n) == '0'

--howManyRevs n = length[x | x]

------------------------------
---- REVIEW

isDivisibleBy1ToN v n = go v [1..n]
    where
    go v (x:xs)
        | v `mod` x /= 0 = False
        | null xs = True
        | otherwise = go v xs

-------------------------------
---- START

isPrime n = ip n [2 .. ((isqrt(n-1)) + 1)]
    where
    ip _ [] = True
    ip n (x:xs)
        | n `mod` x == 0 = False
        | otherwise = ip n xs

isqrt :: Integral i => i -> i
isqrt = floor . sqrt . fromIntegral

primeFactors n = [ x | x <- [2..n], isPrime x,n `mod` x == 0]

largestPrimeFactor n = maximum (primeFactors n)

-------------------------------

 

