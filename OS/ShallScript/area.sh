echo "Enter choice (circle/square/rectangle):"
read ch

case $ch in
    circle)
        echo "Enter Radius of Circle:"
        read r
        echo $r | awk '{ area = 3.14 * $1 * $1; printf "Area of Circle: %.2f\n", area }'
        ;;
    square)
        echo "Enter Length of Square:"
        read l
        echo $l | awk '{ area = $1 * $1; printf "Area of Square: %.2f\n", area }'
        ;;
    rectangle)
        echo "Enter Length of Rectangle:"
        read len
        echo "Enter Breadth of Rectangle:"
        read b
        echo $len $b | awk '{ area = $1 * $2; printf "Area of Rectangle: %.2f\n", area }'
        ;;
    *)
        echo "Invalid choice!"
        ;;
esac
