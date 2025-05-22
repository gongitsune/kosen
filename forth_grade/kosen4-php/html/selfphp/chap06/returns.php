<?php
function max_min(float ...$args): array {
  return [max($args), min($args)];
}
