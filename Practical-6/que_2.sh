parent_pross_name=$(ps -p $PPID -o comm=)
# echo "Current Process Name: $0"
# echo "Parent Process Name: $parent_pross_name"
# sh "$0" "$@"
# echo "Parent Process Name: $parent_pross_name"

if [ "$parent_pross_name" = "sh" ]; then
    sorted_args=$(echo "$@" | tr ' ' '\n' | sort -r | tr '\n' ' ')
    echo "Child Process:"
    echo "Reversely Sorted Coins are: $sorted_args\n"
else
    sorted_args=$(echo "$@" | tr ' ' '\n' | sort | tr '\n' ' ')
    echo "Parent Process:"
    echo "Sorted Coins are: $sorted_args\n"
    sh "$0" "$@"
fi
