#!/usr/bin/env raku
use Test;

sub insertion-sort(@arr) {
    for 1..^@arr -> $j {
        my $key = @arr[$j];
        my $i = $j - 1;
        while $i ≥ 0 and @arr[$i] cmp $key == More {
            @arr[$i+1] = @arr[$i];
            $i -= 1;
        }
        @arr[$i+1] = $key;
    }
}

sub MAIN {
    my @a0 = [];
    insertion-sort(@a0);
    is @a0, [], "empty list is sorted";

    my @a1 = 1;
    insertion-sort(@a1);
    is @a1, [1], "single item list is sorted";

    for ^10 {
        my @a = (-100..100).roll(10);
        my @sorted = @a.sort;
        insertion-sort(@a);
        is @a, @sorted, "sorted";
    }
}
