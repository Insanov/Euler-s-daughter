const CORRECT_VALUE = 143472;
const options: number[] = [600, 608, 624, 688, 928];

function work(
    sum: number,
    result: number[][] = [],
    cert: number[] = []
): number[][] {
    if (sum === CORRECT_VALUE) return [cert];

    for (let option of options) {
        if (sum - option < CORRECT_VALUE) return;
        return result.concat(work(sum - option, result, cert.concat(option)));
    }
}
