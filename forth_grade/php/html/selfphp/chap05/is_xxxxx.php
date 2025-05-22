<pre>
<?php
var_dump(is_int(101));
var_dump(is_int('101'));
var_dump(is_numeric('101'));
var_dump(is_float(1.5E8));
var_dump(is_resource(fopen('access.log', 'r')));
var_dump(is_null(''));
