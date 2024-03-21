function main() {
  let a, b, c;
  [a, b, c] = readline().split(' ').map(Number);
  let arr = [a, b, c];
  arr.sort((x, y) => x - y);
  console.log(arr[0] + " " + arr[1] + " " + arr[2]);
  return 0;
}

