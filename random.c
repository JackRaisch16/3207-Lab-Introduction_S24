
int randchar(){
  char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int letterSize = sizeof(letters)/sizeof(letters[0]);
  int randomIndex = rand() % letterSize;
  return letters[randomIndex];
}

