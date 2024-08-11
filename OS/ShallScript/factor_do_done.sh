echo "Enter Number to check its Factor: "
read a

for((i=1; i<=a/2; i++))
do
    if [ $(($a % $i)) -eq 0 ];then
        printf "$i, "
    fi
done
printf "$a."