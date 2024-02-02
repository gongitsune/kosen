{- cabal:
build-depends: base
-}

import Data.List (intercalate)

seq :: (Num t) => t -> (t -> t -> t) -> [t]
seq a op = f a 0 op
  where
    f a n op = a : f (op n a) (n + 1) op

showSeq num n x = "(" ++ show num ++ ") " ++ intercalate " " (map show $ take n x)

main :: IO ()
main = do
    putStrLn $ showSeq 1 10 $ Main.seq 1 (\_ a -> a + 2)
    putStrLn $ showSeq 2 10 $ Main.seq 0 (\n a -> a + 2 + n * 2)
    putStrLn $ showSeq 3 10 $ Main.seq 1 (\n a -> a + 3 + n * 0x2)
    putStrLn $ showSeq 4 10 $ Main.seq 1 (\n a -> a + 6 + n * 4)
