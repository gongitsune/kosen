{- cabal:
build-depends: base
-}

import System.Exit (die)
import System.IO (hFlush, stdout)
import Text.Read (readMaybe)

judge :: String -> String
judge line = case readMaybe line of
    Just a
        | a < 0 || a > 100 -> "Invalid"
        | a < 60 -> "F"
        | a < 70 -> "D"
        | a < 80 -> "C"
        | a < 90 -> "B"
        | otherwise -> "A"
    Nothing -> "Not a number"

main :: IO ()
main = do
    putStr "a = "
    hFlush stdout
    line <- getLine
    putStrLn $ judge line
