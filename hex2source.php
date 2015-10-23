<?php
    $file = file_get_contents('/Users/Zheng/Desktop/groovecoaster/jp.co.taito.groovecoasterzero.plist.data');
    $hex = bin2hex($file);
    for ($i = 0; $i < strlen($hex); $i += 2) {
        echo '0x'.$hex[$i].$hex[$i + 1].', ';
        if ((($i + 2) % 16) == 0) {
            echo "\n";
        }
    }
?>