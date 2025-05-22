<pre>
<?php
$data = 'リオとニンザブロウとナミとリンリン';
print_r(explode('と', $data));
print_r(explode('や', $data));
print_r(explode('と', $data, 2));
print_r(explode('と', $data, -2));
