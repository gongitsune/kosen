{- cabal:
build-depends: base
-}

quickSort [] = []
quickSort [x] = [x]
quickSort (x : xs) = quickSort left ++ [x] ++ quickSort right
  where
    left = filter (< x) xs
    right = filter (> x) xs

main :: IO ()
main = print $ quickSort [1, 8, 7, 6, 2, 5, 9, 4, 0, 3]
