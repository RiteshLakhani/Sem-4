echo "Enter Gender: "
read gen

case "$gen" in
    male)
        echo "male"
        ;;
    female)
        echo "female"
        ;;
    *)
        echo "Unknown gender"
        ;;
esac