#!/usr/bin/php

<?php 
    $lines = file("murphy");
    $res = 0;

    foreach ($lines as $key => $value) {
        $len = strlen($value);
        if ($len <= 60) {
            $res = $res + 1;
        }
        
       
    }
    print_r($res);

?> 