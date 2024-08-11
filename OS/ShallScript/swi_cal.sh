echo "Enter 1st Number: "
read num1;

echo "Enter 2nd Number: "
read num2;

echo "Enter Operation (+, -, x, /):"
read operation;

case $operation in 
    +)
        result=$((num1 + num2))
        ;;
    -)
        result=$((num1 - num2))
        ;;
    x)
        result=$((num1 * num2))
        ;;
    /)
        result=$(awk "BEGIN {printf \"%.2f\", $num1 / $num2}")
        ;;
    *)
        echo "Invalid Operation"
        exit 1
        ;;
esac

echo "Result: $result"
