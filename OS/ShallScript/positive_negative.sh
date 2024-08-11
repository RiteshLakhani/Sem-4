printf "Enter Number:  "
read a;

if [ $a -gt 0 ]
then 
    echo "Number is Positive"
fi

if [ $a -lt 0 ]
then 
    echo "Number is Negative"
fi