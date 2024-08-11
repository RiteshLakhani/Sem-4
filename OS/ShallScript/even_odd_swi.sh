echo "Enter a number: "
read number

case $((number % 2)) in
    0)
        echo "$number is an even number."
        ;;
    1)
        echo "$number is an odd number."
        ;;
    *)
        echo "Invalid input."
        ;;
esac
