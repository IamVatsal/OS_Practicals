isRunning=1
while [ $isRunning -eq 1 ]
do
    echo "Enter Number less Then 50: "
    read num
    while [ $num -ge 50 ]
    do
        echo "Please Enter Number less Then 50: "
        read num
    done
    square=`expr $num \* $num`
    echo "Square of $num is: $square"
    echo "Do you want to continue? (y,n): "
    read ch
    if [ $ch = "n" ] || [ $ch = "N" ]
    then
        isRunning=0
    fi
done
