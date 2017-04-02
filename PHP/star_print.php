<!DOCTYPE HTML>
<html>
<head>
  <title>PHP practice</title>
  <meta lang="en">
  <link href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous">
</head>
<body>
<?php
	$lineNumber = $_GET["line"];
	
	for($i=0; $i < $linenumber; $i++){
		for($j=0; $j <= $i; $j++){
			echo "*"
		}
		echo "\n";
	} 
?>
</body>
</html>
