{- cabal:
build-depends: base
-}

import System.Exit (die)
import System.IO (hFlush, stdout)
import Text.Read (readMaybe)

readWithMsg :: (Read t) => String -> IO t
readWithMsg msg = do
    putStr msg
    hFlush stdout
    line <- getLine
    case readMaybe line of
        Just a -> return a
        Nothing -> die "Not parseable"

isPrime :: Int -> Maybe Int
isPrime n
    | n < 2 = Nothing
    | otherwise = try n 2
  where
    try :: Int -> Int -> Maybe Int
    try n i
        | i * i > n = Nothing
        | n `mod` i == 0 = Just i
        | otherwise = try n (i + 1)

main :: IO ()
main = do
    n <- readWithMsg "n = "
    putStrLn $ case isPrime n of
        Nothing -> "Prime"
        Just a -> "Not prime: " ++ show a
