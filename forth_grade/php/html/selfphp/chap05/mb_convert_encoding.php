<?php
file_put_contents('result.txt',
mb_convert_encoding('こんにちは、赤ちゃん！', 'EUC-JP', 'UTF-8, SJIS, JIS'));
