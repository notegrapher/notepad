<?php
$numbers = array(1, 2, 3, 4);
foreach ($numbers as &$value){
	$value = $value * 2;
}

foreach($numbers as $key => $value){
	echo "{$key} => {$value} ";
	print_r($numbers);
}
?>
