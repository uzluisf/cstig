#!usr/bin/env raku
use Test;

sub binary-search(@arr, $needle --> Int:D) {
    my Int $lo = 0;
    my Int $hi = @arr.end;

    while ($lo ≤ $hi) {
        my Int $m = ($lo + $hi) div 2;
        if    (@arr[$m] cmp $needle) == More { $hi = $m - 1 }
        elsif (@arr[$m] cmp $needle) == Less { $lo = $m + 1 }
        else                                 { return $m }
    }

    return -1;
}

sub MAIN() {
    is binary-search([1, 2, 3, 4], 2),  1, "integer needle found";
    is binary-search([1, 2, 3, 4], 9), -1, "integer needle not found";

    is binary-search(<ha he ho hu>, 'hu'),  3, "string needle found";
    is binary-search(<ha he ho hu>, 'hi'), -1, "string needle not found";
}
