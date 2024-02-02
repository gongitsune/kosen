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

gcm :: Int -> Int -> Int
gcm x y
    | r == 0 = y
    | otherwise = gcm y r
  where
    r = x `mod` y

main :: IO ()
main = do
    x <- readWithMsg "x = "
    y <- readWithMsg "y = "

    putStrLn $ "gcm = " ++ show (gcm x y)
