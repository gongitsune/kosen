<?php
header('Content-Type: application/octet-stream');
header('Content-Disposition: attachment; filename = "flower.jpg"');
print file_get_contents('./doc/flower.jpg');
