// ISO-Designer ISO 11783   Version 5.5.1.4367 Jetter AG
// Do not change!

#define WorkingSet_0_Offset                                     1
#define DataMask_Main_Offset                                   21
#define SoftKeyMask_Main_Offset                                83
#define SoftKey_5000_Offset                                   113
#define SoftKey_Q1_Offset                                     126
#define SoftKey_Q2_Offset                                     139
#define SoftKey_Q3_Offset                                     152
#define SoftKey_Q4_Offset                                     165
#define SoftKey_5005_Offset                                   178
#define SoftKey_5006_Offset                                   191
#define SoftKey_5007_Offset                                   204
#define OutputString_11000_Offset                             217
#define OutputString_11001_Offset                             242
#define Ellipse_Lampe_Offset                                  270
#define _80_20000_Offset                                      285
#define _64_20003_Offset                                     1102
#define _40_20004_Offset                                     1631
#define _32_20005_Offset                                     1848
#define CylinderOut_20501_Offset                             1993
#define CylinderIn_20502_Offset                              2810
#define _80_20506_Offset                                     3627
#define _64_20507_Offset                                     4444
#define _40_20508_Offset                                     4973
#define _32_20509_Offset                                     5190
#define CylinderOut64_20901_Offset                           5335
#define CylinderIn64_20902_Offset                            5864
#define _25_20903_Offset                                     6393
#define _80_20910_Offset                                     6510
#define _64_20911_Offset                                     7327
#define _40_20912_Offset                                     7856
#define _32_20913_Offset                                     8073
#define FontAttributes_23000_Offset                          8218
#define LineAttributes_24000_Offset                          8226
#define FillAttributes_25000_Offset                          8234
#define ObjectPointer_27000_Offset                           8242
#define ObjectPointer_NULL_Offset                            8247
#define ObjectPointer_27002_Offset                           8252
#define ObjectPointer_TasteEX_Offset                         8257
#define ObjectPointer_Ausgefahren_Offset                     8262
#define AuxFunction2_Q1_Offset                               8267
#define AuxFunction2_Q2_Offset                               8279
#define AuxFunction2_Q3_Offset                               8291
#define AuxFunction2_Q4_Offset                               8303
#define AuxFunction2_29005_Offset                            8315
#define AuxFunction2_29006_Offset                            8327
#define AuxFunction2_29007_Offset                            8339
#define AuxFunction2_29008_Offset                            8351
#define AuxFunction2_29009_Offset                            8363

#define ISO_OP_MEMORY_CLASS

#define ISO_OP_MyProject1_Size   8375
extern const unsigned char ISO_OP_MEMORY_CLASS isoOP_MyProject1[];

#define ISO_OP_MyProject1_ObjectNumber     48
extern const unsigned long ISO_OP_MEMORY_CLASS isoOP_MyProject1_Offset[];
extern const unsigned long ISO_OP_MEMORY_CLASS isoOP_MyProject1_Offset_Id[];
#define ISO_OP_MyProject1_Scale_Offset      1

#define ID_NULL  0xFFFF

#define TYPEID_WORKSET        0
#define TYPEID_DATAMASK       1
#define TYPEID_ALARMMASK      2
#define TYPEID_CONTAINER      3
#define TYPEID_SKEYMASK       4
#define TYPEID_SOFTKEY        5
#define TYPEID_BUTTON         6
#define TYPEID_INBOOL         7
#define TYPEID_INSTR          8
#define TYPEID_INNUM          9
#define TYPEID_INLIST        10
#define TYPEID_OUTSTR        11
#define TYPEID_OUTNUM        12
#define TYPEID_OUTLINE       13
#define TYPEID_OUTRECT       14
#define TYPEID_OUTELLIPSE    15
#define TYPEID_OUTPOLY       16
#define TYPEID_OUTMETER      17
#define TYPEID_OUTLINBAR     18
#define TYPEID_OUTARCBAR     19
#define TYPEID_OUTPICT       20
#define TYPEID_VARNUM        21
#define TYPEID_VARSTR        22
#define TYPEID_FONTATTR      23
#define TYPEID_LINEATTR      24
#define TYPEID_FILLATTR      25
#define TYPEID_INPATTR       26
#define TYPEID_OBJPTR        27
#define TYPEID_MACRO         28
#define TYPEID_AUXFUNC       29
#define TYPEID_AUXINP        30
#define TYPEID_AUXFUNC2      31
#define TYPEID_AUXINP2       32
#define TYPEID_AUXPTR        33
#define TYPEID_WINMASK       34
#define TYPEID_KEYGROUP      35
#define TYPEID_GRPHCTXT      36
#define TYPEID_OUTLIST       37
#define TYPEID_EXTINPATTR    38
#define TYPEID_COLMAP        39
#define TYPEID_OBJLBLREF     40
#define TYPEID_EXTOBJDEF     41
#define TYPEID_EXTREFNAME    42
#define TYPEID_EXTOBJPTR     43
#define TYPEID_ANIMATION     44
#define TYPEID_PNG           46

#define EV_REFRESH            0
#define EV_ACT                1
#define EV_DEACT              2
#define EV_SHOW               3
#define EV_HIDE               4
#define EV_ENABLE             5
#define EV_DISABLE            6
#define EV_CHGACTMASK         7
#define EV_CHGSKEYMASK        8
#define EV_CHGATTR            9
#define EV_CHGBKCOLOR        10
#define EV_CHGFONTATTR       11
#define EV_CHGLINEATTR       12
#define EV_CHGFILLATTR       13
#define EV_CHGCHILDLOC       14
#define EV_CHGSIZE           15
#define EV_CHGVAL            16
#define EV_CHGPRIOR          17
#define EV_CHGENDPNT         18
#define EV_SELINPUT          19
#define EV_DESELINPUT        20
#define EV_ESC               21
#define EV_ENTERVAL          22
#define EV_ENTERCHGVAL       23
#define EV_KEYPRESS          24
#define EV_KEYRELEASE        25
#define EV_CHGCHILDPOS       26

#define CMD_HIDE_SHOW               160
#define CMD_ENABLE_DISABLE          161
#define CMD_SELECT_INPUT_OBJECT     162
#define CMD_CONTROL_AUDIO_DEVICE    163
#define CMD_SET_AUDIO_VOLUME        164
#define CMD_CHANGE_CHILD_LOCATION   165
#define CMD_CHANGE_SIZE             166
#define CMD_CHANGE_BACKGROUND_COLOR 167
#define CMD_CHANGE_NUMERIC_VALUE    168
#define CMD_CHANGE_END_POINT        169
#define CMD_CHANGE_FONT_ATTRIBUTES  170
#define CMD_CHANGE_LINE_ATTRIBUTES  171
#define CMD_CHANGE_FILL_ATTRIBUTES  172
#define CMD_CHANGE_ACTIVE_MASK      173
#define CMD_CHANGE_SOFT_KEY_MASK    174
#define CMD_CHANGE_ATTRIBUTE        175
#define CMD_CHANGE_PRIORITY         176
#define CMD_CHANGE_LIST_ITEM        177
#define CMD_CHANGE_STRING_VALUE     179
#define CMD_CHANGE_CHILD_POSITION   180
#define CMD_SET_OBJECT_LABEL        181
#define CMD_CHANGE_POLYGON_POINT    182
#define CMD_CHANGE_POLYGON_SCALE    183
#define CMD_GRAPHICS_CONTEXT        184
#define CMD_GET_ATTRIBUTE           185
#define CMD_SELECT_COLOURMAP_OR_PALETTE 186
#define CMD_EXECUTE_EXTENDED_MACRO  188
#define CMD_LOCK_UNLOCK_MASK        189
#define CMD_EXECUTE_MACRO           190

#define COLOR_BLACK       0
#define COLOR_WHITE       1
#define COLOR_GREEN       2
#define COLOR_TEAL        3
#define COLOR_MAROON      4
#define COLOR_PURPLE      5
#define COLOR_OLIVE       6
#define COLOR_SILVER      7
#define COLOR_GREY        8
#define COLOR_BLUE        9
#define COLOR_LIME       10
#define COLOR_CYAN       11
#define COLOR_RED        12
#define COLOR_MAGENTA    13
#define COLOR_YELLOW     14
#define COLOR_NAVY       15

#define FLOAT_1      0x00, 0x00, 0x80, 0x3F
#define FLOAT_10     0x00, 0x00, 0x20, 0x41
#define FLOAT_100    0x00, 0x00, 0xC8, 0x42
#define FLOAT_1000   0x00, 0x00, 0x7A, 0x44
#define FLOAT_0_1    0xCD, 0xCC, 0xCC, 0x3D
#define FLOAT_0_01   0x0A, 0xD7, 0x23, 0x3C
#define FLOAT_0_001  0x6F, 0x12, 0x83, 0x3A
