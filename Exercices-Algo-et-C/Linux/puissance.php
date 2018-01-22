<?php
	function Puissance(nbr,expo)
	{
		while($i<=$expo)
		{
			$p=$nbr*$p;
			$i=$i+1;
		}
		printf("%d",$p);
	}
?>