<?php
	$randomValue = array();
	
	for($i=0; $i < 10; $i++){
		$randomValue[$i] = rand(0, 10);	
	}
	$length = count($randomValue);

	for($i=0; $i < 10; $i++){
		echo $randomValue[$i] + "\n";
	}
?>
