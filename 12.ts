const divisorsDict: { [key: number]: { value: number; used: number[] } } = {
    2: { value: 1, used: [2] },
    3: { value: 1, used: [3] },
    4: { value: 2, used: [2, 4] },
};

function triangularNumber(): number {
    const getNextTriangularNumber = getTriangularNumberFunction();
    let amountOfDivisors = 0;
    let currNumber = 1;

    while (true) {
        if (amountOfDivisors >= 3) return currNumber;

        currNumber = getNextTriangularNumber();
        amountOfDivisors = getAmountOfDivisors(currNumber) + 2;
    }
}

function getAmountOfDivisors(
    number: number,
    foundDivisors: number[] = []
): number {
    let amountOfDivisors = 0;

    if (number === 1) return 0; // если число равно единице, мы не прибавляем ничего, т.к. единицу мы не учитываем
    if (divisorsDict[number]) {
        foundDivisors[number] = 1;

        return divisorsDict[number];
    }

    for (let i = Math.floor(Math.sqrt(number)); i >= 2; i--) {
        if (isDivisible(number, i)) {
            if (!foundDivisors[i])
                amountOfDivisors += getAmountOfDivisors(i, foundDivisors);
            if (!foundDivisors[number / i])
                amountOfDivisors += getAmountOfDivisors(
                    number / i,
                    foundDivisors
                );
        }
    }

    foundDivisors[number] = 1;

    return amountOfDivisors;
}

function isDivisible(dividend: number, divisor: number) {
    return !(dividend % divisor);
}

function getTriangularNumberFunction(): () => number {
    let lastAddition = 1;

    return () => {
        return lastAddition++ + lastAddition;
    };
}

console.log(getAmountOfDivisors(8) + 2);
// console.log(triangularNumber());
