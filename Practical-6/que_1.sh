max_lvl=6
current_lvl=${1:-0}
echo "Current level: $current_lvl"
echo "Parent Process ID: $PPID"
echo "Process ID: $$"
echo "------------------------------"
if [ $current_lvl -lt $max_lvl ]; then
    sh "$0" $((current_lvl + 1))
fi
