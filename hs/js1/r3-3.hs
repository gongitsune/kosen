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
        Nothing -> die "Not a number"

main :: IO ()
main = do
    y <- readWithMsg "y = "
    if y `mod` 4 == 0 && y `mod` 100 /= 0 || y `mod` 400 == 0
        then putStrLn "Yes"
        else putStrLn "No"
