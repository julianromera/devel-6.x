<?php

/**
 *
 *
 * @file DICTIONARY.inc
 */
  

function generate_dictionary() {


  // how many sufixeds should i create per each root. 
  // e.g: root_elephant1, root_elephant2 <-- 2
  $LIMIT_PER_ROOT = 100;


  // add sample words here
  $ROOT_LIST = array(
	"elephant", 
	"test", 
	"word", 
	"car", 
	"plain", 
	"mouse", 
	"beer", 
	"house",
   );
  
  
  
  $DICT = array ();
  foreach ($ROOT_LIST as $root) { 
    for ($i=1; $i<=$LIMIT_PER_ROOT; $i++)  {      
      $DICT[] = $root . $i;
      // watchdog("wd", "<pre>".print_r($DICT, TRUE)."</pre>");
    } 
  }
  return $DICT;
}

