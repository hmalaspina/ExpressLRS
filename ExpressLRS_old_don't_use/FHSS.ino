byte FHSScounter = 0;

unsigned long FHSSfreqs915[32] = {
  918000000,
  918250000,
  918500000,
  918750000,

  919000000,
  919250000,
  919500000,
  919750000,

  920000000,
  920250000,
  920500000,
  920750000,

  921000000,
  921250000,
  921500000,
  921750000,

  922000000,
  922250000,
  922500000,
  922750000,

  923000000,
  923250000,
  923500000,
  923750000,

  924000000,
  924250000,
  924500000,
  924750000,

  925000000,
  925250000,
  925500000,
  925750000,
};


uint32_t FHSSfreqs433[32] = {
  433125000,
  433250000,
  433375000,
  433500000,

  433625000,
  433750000,
  433875000,
  434000000,
};



//Code to handle FHSS jumping

float getNextFreq915() {
  byte randnum;
  randnum = random(0, 7);
  float freq = FHSSfreqs915[randnum];
  return freq;
  //return 433920000;
}
