<?php

$tree = array(1, 4, 8, 9, 6, 2, 5, 4);
$length = count($tree);

function swap($max, $lg) {
    $temp = $max;
    $max = $lg;
    $lg = $temp;
}
function heap(array $tree, int $first, int $length)
{
    $left = 2 * $first + 1;
    $right = 2 * $first + 2;
    
    $max = $first;
    if ($left < $length && $tree[$left] > $tree[$max]) {
        $max = $left;
    }

    if ($right < $length && $tree[$right] > $tree[$max]) {
        $max = $right;
    }

    if ($max != $first) {
        swap($tree[$max], $tree[$first]);
        heap($tree, $max, $length);
        echo "max: ", $max;
    }
}

heap($tree, 0, 8);
echo "\n";
foreach ($tree as $key => $value) {
    echo $value;
}
