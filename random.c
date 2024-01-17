

char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int letterSize = sizeof(letters)/sizeof(letters[0]);
int randomIndex = rand() % arraySize;
return letters[randomIndex];
}

