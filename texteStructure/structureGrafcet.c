
IF (FIRST_CYCLE) THEN
  etape := 100;
ELSE

  SWITCH (etape) {
    case 100 :
      IF (dcy = TRUE) THEN etape := 110; END_IF;
    case 110 :
      IF (fcV) THEN etape := 120; END_IF;
    case 120 :
      IF (a0) THEN etape := 100; END_IF;
  }
  END_SWITCH;

END_IF
