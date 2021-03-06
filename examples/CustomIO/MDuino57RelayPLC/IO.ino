void customIO() {
  // Input pin directions
  // B Zone inputs
  pinMode(I00, INPUT);
  pinMode(I01, INPUT);
  pinMode(I02, INPUT);
  pinMode(I03, INPUT);
  pinMode(I04, INPUT);
  pinMode(I05, INPUT);

  // C Zone inputs
  pinMode(I10, INPUT);
  pinMode(I11, INPUT);
  pinMode(I12, INPUT);
  pinMode(I13, INPUT);
  pinMode(I14, INPUT);
  pinMode(I15, INPUT);

  // D Zone inputs
  pinMode(I20, INPUT);
  pinMode(I21, INPUT);
  pinMode(I22, INPUT);
  pinMode(I23, INPUT);
  pinMode(I24, INPUT);
  pinMode(I25, INPUT);

  // Output pin directions
  // B Zone outputs
  pinMode(Q00, OUTPUT);
  pinMode(Q01, OUTPUT);
  pinMode(Q02, OUTPUT);
  
  // B Zone Relay Outputs
  pinMode(R01, OUTPUT);
  pinMode(R02, OUTPUT);
  pinMode(R03, OUTPUT);
  pinMode(R04, OUTPUT);
  pinMode(R05, OUTPUT);
  pinMode(R06, OUTPUT);
  pinMode(R07, OUTPUT);
  pinMode(R08, OUTPUT);
  
  // C Zone outputs
  pinMode(Q10, OUTPUT);
  pinMode(Q11, OUTPUT);
  pinMode(Q12, OUTPUT);

  // C Zone Relay Outputs
  pinMode(R11, OUTPUT);
  pinMode(R12, OUTPUT);
  pinMode(R13, OUTPUT);
  pinMode(R14, OUTPUT);
  pinMode(R15, OUTPUT);
  pinMode(R16, OUTPUT);
  pinMode(R17, OUTPUT);
  pinMode(R18, OUTPUT);

  // D Zone outputs
  pinMode(Q20, OUTPUT);
  pinMode(Q21, OUTPUT);
  // Q22 is not connected

  // D Zone Relay Outputs
  pinMode(R21, OUTPUT);
  pinMode(R22, OUTPUT);
  pinMode(R23, OUTPUT);
  pinMode(R24, OUTPUT);
  // R25 is not connected
  pinMode(R26, OUTPUT);
  pinMode(R27, OUTPUT);
  pinMode(R28, OUTPUT);
}

