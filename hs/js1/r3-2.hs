{- cabal:
build-depends: base
-}

import System.Exit (die)
import System.IO (hFlush, stdout)
import Text.Read (readMaybe)

putStrFlush :: String -> IO ()
putStrFlush s = do
    putStr s
    hFlush stdout

getFloat :: IO Float
getFloat = do
    line <- getLine
    case readMaybe line of
        Just a -> return a
        Nothing -> do
            die "Not a number"

showAnswer :: Float -> Float -> Float -> String
showAnswer 0 b a2 = "x1 = " ++ show (-b / a2)
showAnswer d b a2
    | d < 0 = "Not a quadratic equation"
    | otherwise =
        let sqrt_d = sqrt d
            x1 = (-b + sqrt_d) / a2
            x2 = (-b - sqrt_d) / a2
         in "x1 = " ++ show x1 ++ "\nx2 = " ++ show x2

main :: IO ()
main = do
    putStrFlush "a = "
    a <- getFloat
    putStrFlush "b = "
    b <- getFloat
    putStrFlush "c = "
    c <- getFloat

    let d = b * b - 4 * a * c
        double_a = 2 * a
     in putStrLn $ showAnswer d b double_a
