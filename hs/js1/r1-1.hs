{- cabal:
build-depends: base
-}

main :: IO ()
main = do
    a <- getLine
    putStrLn $ "a is " ++ a
