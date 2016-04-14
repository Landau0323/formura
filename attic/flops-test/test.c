#define N 100
#define ix 50
#define iy 50
#define iz 50
typedef double (*ar)[N][N];

void f(ar Rsc0, ar Rsc1, ar Rsc3, ar U, ar V){
  {
    double a = Rsc1[ix + (-44)][iy + (-25)][iz + (-9)] /*True */ ;
    double a_0 = Rsc1[ix + (-43)][iy + (-26)][iz + (-9)] /*True */ ;
    double a_1 = Rsc1[ix + (-43)][iy + (-25)][iz + (-10)] /*True */ ;
    double a_2 = Rsc1[ix + (-43)][iy + (-25)][iz + (-9)] /*True */ ;
    double a_3 = Rsc1[ix + (-43)][iy + (-25)][iz + (-8)] /*True */ ;
    double a_4 = Rsc1[ix + (-43)][iy + (-24)][iz + (-9)] /*True */ ;
    double a_5 = Rsc1[ix + (-42)][iy + (-26)][iz + (-9)] /*False */ ;
    double a_6 = Rsc1[ix + (-42)][iy + (-25)][iz + (-10)] /*False */ ;
    double a_7 = Rsc1[ix + (-42)][iy + (-25)][iz + (-9)] /*True */ ;
    double a_8 = Rsc1[ix + (-42)][iy + (-25)][iz + (-8)] /*False */ ;
    double a_9 = Rsc1[ix + (-42)][iy + (-24)][iz + (-9)] /*False */ ;
    double a_10 = Rsc1[ix + (-41)][iy + (-25)][iz + (-9)] /*False */ ;
    double a_11 = Rsc0[ix + (-43)][iy + (-25)][iz + (-9)] /*True */ ;
    double a_12 = Rsc0[ix + (-42)][iy + (-25)][iz + (-9)] /*False */ ;
    double a_13 = (1.0 / 86400.0) /*True */ ;
    double a_14 = (1.0 / 86400.0) /*False */ ;
    double a_15 = (1.0 / 900.0) /*True */ ;
    double a_16 = (1.0 / 900.0) /*False */ ;
    double a_17 = (0.1 * 2.3e-9) /*True */ ;
    double a_18 = (0.1 * 2.3e-9) /*False */ ;
    double a_19 = (a_15 * a_2) /*True */ ;
    double a_20 = (a_16 * a_7) /*False */ ;
    double a_21 = (a_19 * a_11) /*True */ ;
    double a_22 = (a_20 * a_12) /*False */ ;
    double a_23 = (a_21 * a_11) /*True */ ;
    double a_24 = (a_22 * a_12) /*False */ ;
    double a_25 = (-a_23) /*True */ ;
    double a_26 = (-a_24) /*False */ ;
    double a_27 = (1.0 - a_2) /*True */ ;
    double a_28 = (1.0 - a_7) /*False */ ;
    double a_29 = (a_13 * a_27) /*True */ ;
    double a_30 = (a_14 * a_28) /*False */ ;
    double a_31 = (a_25 + a_29) /*True */ ;
    double a_32 = (a_26 + a_30) /*False */ ;
    double a_33 = (1.0e-3 * 1.0e-3) /*True */ ;
    double a_34 = (1.0e-3 * 1.0e-3) /*False */ ;
    double a_35 = (a_17 / a_33) /*True */ ;
    double a_36 = (a_18 / a_34) /*False */ ;
    double a_37 = (a_2 - a) /*True */ ;
    double a_38 = (a_7 - a_2) /*True */ ;
    double a_39 = (a_10 - a_7) /*False */ ;
    double a_40 = (a_38 - a_37) /*True */ ;
    double a_41 = (a_39 - a_38) /*False */ ;
    double a_42 = (a_2 - a_0) /*True */ ;
    double a_43 = (a_4 - a_2) /*True */ ;
    double a_44 = (a_7 - a_5) /*False */ ;
    double a_45 = (a_9 - a_7) /*False */ ;
    double a_46 = (a_43 - a_42) /*True */ ;
    double a_47 = (a_45 - a_44) /*False */ ;
    double a_48 = (a_40 + a_46) /*True */ ;
    double a_49 = (a_41 + a_47) /*False */ ;
    double a_50 = (a_2 - a_1) /*True */ ;
    double a_51 = (a_3 - a_2) /*True */ ;
    double a_52 = (a_7 - a_6) /*False */ ;
    double a_53 = (a_8 - a_7) /*False */ ;
    double a_54 = (a_51 - a_50) /*True */ ;
    double a_55 = (a_53 - a_52) /*False */ ;
    double a_56 = (a_48 + a_54) /*True */ ;
    double a_57 = (a_49 + a_55) /*False */ ;
    double a_58 = (a_35 * a_56) /*True */ ;
    double a_59 = (a_36 * a_57) /*False */ ;
    double a_60 = (a_31 + a_58) /*True */ ;
    double a_61 = (a_32 + a_59) /*False */ ;
    double a_62 = (200.0 * a_60) /*True */ ;
    double a_63 = (200.0 * a_61) /*False */ ;
    double a_64 = (a_2 + a_62) /*True */ ;
    double a_65 = (a_7 + a_63) /*False */ ;

    U[ix + (-8) + (1)][iy + (-8) + (0)][iz + (-8) + (0)] = a_65;
    U[ix + (-8) + (0)][iy + (-8) + (0)][iz + (-8) + (0)] = a_64;
  }
  {
    double a = Rsc1[ix + (-43)][iy + (-25)][iz + (-9)] /*True */ ;
    double a_0 = Rsc1[ix + (-42)][iy + (-25)][iz + (-9)] /*False */ ;
    double a_1 = Rsc0[ix + (-44)][iy + (-25)][iz + (-9)] /*True */ ;
    double a_2 = Rsc0[ix + (-43)][iy + (-26)][iz + (-9)] /*True */ ;
    double a_3 = Rsc0[ix + (-43)][iy + (-25)][iz + (-10)] /*True */ ;
    double a_4 = Rsc0[ix + (-43)][iy + (-25)][iz + (-9)] /*True */ ;
    double a_5 = Rsc0[ix + (-43)][iy + (-25)][iz + (-8)] /*True */ ;
    double a_6 = Rsc0[ix + (-43)][iy + (-24)][iz + (-9)] /*True */ ;
    double a_7 = Rsc0[ix + (-42)][iy + (-26)][iz + (-9)] /*False */ ;
    double a_8 = Rsc0[ix + (-42)][iy + (-25)][iz + (-10)] /*False */ ;
    double a_9 = Rsc0[ix + (-42)][iy + (-25)][iz + (-9)] /*True */ ;
    double a_10 = Rsc0[ix + (-42)][iy + (-25)][iz + (-8)] /*False */ ;
    double a_11 = Rsc0[ix + (-42)][iy + (-24)][iz + (-9)] /*False */ ;
    double a_12 = Rsc0[ix + (-41)][iy + (-25)][iz + (-9)] /*False */ ;
    double a_13 = (6.0 / 86400.0) /*True */ ;
    double a_14 = (6.0 / 86400.0) /*False */ ;
    double a_15 = (1.0 / 900.0) /*True */ ;
    double a_16 = (1.0 / 900.0) /*False */ ;
    double a_17 = (a_15 * a) /*True */ ;
    double a_18 = (a_16 * a_0) /*False */ ;
    double a_19 = (a_17 * a_4) /*True */ ;
    double a_20 = (a_18 * a_9) /*False */ ;
    double a_21 = (a_19 * a_4) /*True */ ;
    double a_22 = (a_20 * a_9) /*False */ ;
    double a_23 = (a_13 * a_4) /*True */ ;
    double a_24 = (a_14 * a_9) /*False */ ;
    double a_25 = (a_21 - a_23) /*True */ ;
    double a_26 = (a_22 - a_24) /*False */ ;
    double a_27 = (1.0e-3 * 1.0e-3) /*True */ ;
    double a_28 = (1.0e-3 * 1.0e-3) /*False */ ;
    double a_29 = (6.1e-11 / a_27) /*True */ ;
    double a_30 = (6.1e-11 / a_28) /*False */ ;
    double a_31 = (a_4 - a_1) /*True */ ;
    double a_32 = (a_9 - a_4) /*True */ ;
    double a_33 = (a_12 - a_9) /*False */ ;
    double a_34 = (a_32 - a_31) /*True */ ;
    double a_35 = (a_33 - a_32) /*False */ ;
    double a_36 = (a_4 - a_2) /*True */ ;
    double a_37 = (a_6 - a_4) /*True */ ;
    double a_38 = (a_9 - a_7) /*False */ ;
    double a_39 = (a_11 - a_9) /*False */ ;
    double a_40 = (a_37 - a_36) /*True */ ;
    double a_41 = (a_39 - a_38) /*False */ ;
    double a_42 = (a_34 + a_40) /*True */ ;
    double a_43 = (a_35 + a_41) /*False */ ;
    double a_44 = (a_4 - a_3) /*True */ ;
    double a_45 = (a_5 - a_4) /*True */ ;
    double a_46 = (a_9 - a_8) /*False */ ;
    double a_47 = (a_10 - a_9) /*False */ ;
    double a_48 = (a_45 - a_44) /*True */ ;
    double a_49 = (a_47 - a_46) /*False */ ;
    double a_50 = (a_42 + a_48) /*True */ ;
    double a_51 = (a_43 + a_49) /*False */ ;
    double a_52 = (a_29 * a_50) /*True */ ;
    double a_53 = (a_30 * a_51) /*False */ ;
    double a_54 = (a_25 + a_52) /*True */ ;
    double a_55 = (a_26 + a_53) /*False */ ;
    double a_56 = (200.0 * a_54) /*True */ ;
    double a_57 = (200.0 * a_55) /*False */ ;
    double a_58 = (a_4 + a_56) /*True */ ;
    double a_59 = (a_9 + a_57) /*False */ ;

    V[ix + (-8) + (1)][iy + (-8) + (0)][iz + (-8) + (0)] = a_59;
    V[ix + (-8) + (0)][iy + (-8) + (0)][iz + (-8) + (0)] = a_58;
  }
}