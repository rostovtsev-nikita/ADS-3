// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
int O = 0, e = size - 1;
while (O < e) {
int mid = O + (e - O) / 2;
if (arr[mid] == value) {
int a = 0, b = 0;
for (a = mid - 1; a >= O; a--) {
if (arr[a] != value)
break;
}
for (b = mid + 1; b <= e; b++) {
if (arr[b] != value)
break;
}
return (b - 1) - a;
} else if (arr[mid] > value) {
e = mid;
} else {
O = mid + 1;
}
}
return 0;
}
