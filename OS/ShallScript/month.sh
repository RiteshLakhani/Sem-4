echo "Enter Month Number: "
read month

case "$month" in
1)
    month_name="January"
    days=31
    ;;
2)
    month_name="February"
    days=28
    ;;
3)
    month_name="March"
    days=31
    ;;
4)
    month_name="April"
    days=30
    ;;
5)
    month_name="May"
    days=31
    ;;
6)
    month_name="June"
    days=30
    ;;
7)
    month_name="July"
    days=31
    ;;
8)
    month_name="August"
    days=31
    ;;
9)
    month_name="September"
    days=30
    ;;
10)
    month_name="October"
    days=31
    ;;
11)
    month_name="November"
    days=30
    ;;
12)
    month_name="December"
    days=31
    ;;
*)
    echo "Enter Valid Month....."
    exit 1
    ;;
esac

echo "The month corresponding to $month is $month_name and it has $days days."
