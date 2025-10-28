void *__fastcall sph_groestl384_0(int a1, char *a2, size_t a3)
{
  int v3; // r6
  size_t v4; // r4
  int v5; // r8
  void *v6; // r0
  _BYTE *v7; // r0
  int *v8; // r12
  int v9; // r1
  int *v10; // r3
  int v11; // r6
  int v12; // t1
  int v13; // t1
  int v14; // r4
  int v15; // r2
  int v16; // r1
  int v17; // r12
  unsigned int v18; // r10
  unsigned int v19; // lr
  unsigned int v20; // r7
  int v21; // r9
  unsigned int v22; // r6
  int v23; // r4
  unsigned int v24; // r0
  int *v25; // r11
  _QWORD *v26; // r12
  _QWORD *v27; // r0
  _QWORD *v28; // r1
  _QWORD *v29; // r11
  int v30; // r3
  int v31; // r6
  int v32; // r2
  _QWORD *v33; // r12
  int v34; // r10
  int v35; // r5
  int v36; // r3
  _DWORD *v37; // r5
  int v38; // r8
  int v39; // r1
  int v40; // r3
  int v41; // r2
  int v42; // r12
  int v43; // r3
  int v44; // r6
  int v45; // r5
  int v46; // lr
  int v47; // r11
  _QWORD *v48; // r8
  _QWORD *v49; // r6
  int v50; // r12
  int v51; // r2
  int v52; // r3
  int v53; // lr
  int v54; // r0
  int v55; // r1
  int v56; // r0
  int v57; // r2
  int v58; // r3
  int v59; // r0
  int v60; // r12
  int v61; // r0
  __int64 v62; // r2
  int v63; // r1
  int v64; // r0
  int v65; // r12
  int v66; // r11
  int v67; // r4
  unsigned int v68; // r8
  unsigned int v69; // r10
  int v70; // r11
  _QWORD *v71; // r12
  _QWORD *v72; // r11
  int v73; // r6
  _QWORD *v74; // lr
  int v75; // r9
  int v76; // r5
  _QWORD *v77; // r4
  _QWORD *v78; // r12
  _QWORD *v79; // r0
  int v80; // r9
  int v81; // lr
  int v82; // r11
  int v83; // r12
  int v84; // r10
  int v85; // r1
  int v86; // r12
  int v87; // r4
  int v88; // r5
  int v89; // r4
  int v90; // r1
  int v91; // r6
  int v92; // r8
  int v93; // lr
  int v94; // r5
  int v95; // r4
  int v96; // r12
  int v97; // r6
  int v98; // r8
  __int64 v99; // r0
  int v100; // r9
  int v101; // r12
  int v102; // lr
  _QWORD *v103; // r12
  int v104; // r6
  int v105; // r5
  int v106; // r9
  int v107; // r6
  __int64 v108; // r2
  int v109; // r5
  int v110; // r12
  __int64 v111; // r2
  int v112; // r12
  int v113; // r5
  int v114; // r7
  int v115; // r6
  int v116; // r11
  int v117; // r9
  int v118; // r4
  int v119; // r2
  int v120; // r6
  int v121; // r8
  int v122; // lr
  int v123; // r10
  int v124; // r2
  int v125; // r11
  int v126; // r3
  unsigned int v127; // r1
  unsigned int v128; // r5
  unsigned int v129; // r0
  unsigned int v130; // lr
  unsigned int v131; // r12
  int v132; // r7
  unsigned int v133; // r2
  _QWORD *v134; // r5
  _QWORD *v135; // r1
  _QWORD *v136; // r0
  int v137; // r7
  int v138; // r5
  _QWORD *v139; // r1
  int v140; // r12
  int v141; // lr
  int v142; // r3
  int v143; // r3
  int v144; // r0
  int v145; // r10
  int v146; // r3
  _QWORD *v147; // r9
  int v148; // r0
  int v149; // r12
  int v150; // r7
  _QWORD *v151; // r0
  int v152; // r6
  unsigned int v153; // r2
  int v154; // r5
  unsigned int v155; // r12
  int v156; // r5
  _QWORD *v157; // lr
  int v158; // r9
  int v159; // r7
  int v160; // r1
  _QWORD *v161; // r8
  int v162; // r1
  unsigned int v163; // r2
  _QWORD *v164; // r9
  int v165; // r3
  int v166; // r2
  _QWORD *v167; // r6
  int v168; // r12
  int v169; // r4
  int v170; // r2
  _QWORD *v171; // r6
  int v172; // r3
  int v173; // r10
  _QWORD *v174; // r5
  int v175; // r1
  unsigned int v176; // r2
  int v177; // r6
  int v178; // r7
  unsigned int v179; // r2
  int v180; // lr
  int v181; // r3
  int v182; // lr
  int v183; // r0
  int v184; // r6
  unsigned int v185; // r0
  unsigned int v186; // r2
  __int64 v187; // r6
  _QWORD *v188; // r12
  _QWORD *v189; // r1
  int v190; // r3
  _QWORD *v191; // r0
  int v192; // r2
  int v193; // r3
  int v194; // r2
  int v195; // r9
  int v196; // r10
  int v197; // r2
  int v198; // r5
  int v199; // r12
  int v200; // r9
  int v201; // r3
  _QWORD *v202; // r0
  _QWORD *v203; // r2
  int v204; // r5
  int v205; // r12
  int v206; // lr
  int v207; // r3
  int v208; // r8
  __int64 v209; // r6
  int v210; // r1
  int v211; // r8
  int v212; // r1
  int v213; // r10
  int v214; // r1
  int v215; // r3
  int v216; // r10
  int v217; // r9
  int v218; // r5
  int v219; // r0
  int v220; // r0
  int v221; // r5
  int v222; // lr
  _QWORD *v223; // r2
  int v224; // r0
  int v225; // r3
  int v226; // r4
  int v227; // r1
  int v228; // r12
  int v229; // r3
  _QWORD *v230; // r8
  int v231; // r12
  int v232; // r1
  int v233; // r3
  int v234; // lr
  __int64 v235; // r2
  int v236; // r0
  int v237; // lr
  int v238; // r12
  int v239; // r1
  int v240; // r10
  _DWORD *v241; // r1
  int v242; // lr
  int v243; // r5
  int v244; // lr
  int v245; // r12
  int v246; // r1
  int v247; // r8
  int v248; // r5
  int v249; // r0
  int v250; // r10
  int v251; // r7
  int v252; // r4
  int v253; // r6
  int v254; // r5
  int *v255; // r0
  int *v256; // r1
  int v257; // r4
  int v258; // r3
  unsigned __int64 v259; // kr48_8
  int v260; // lr
  int v261; // r2
  int v262; // t1
  int v263; // r2
  void *result; // r0
  size_t v266; // r5
  int v267; // [sp+0h] [bp-354h]
  __int64 v268; // [sp+0h] [bp-354h]
  __int64 v269; // [sp+8h] [bp-34Ch]
  int v270; // [sp+8h] [bp-34Ch]
  unsigned int v271; // [sp+8h] [bp-34Ch]
  int v272; // [sp+8h] [bp-34Ch]
  unsigned int v273; // [sp+18h] [bp-33Ch]
  unsigned int v274; // [sp+18h] [bp-33Ch]
  int v275; // [sp+18h] [bp-33Ch]
  int v276; // [sp+18h] [bp-33Ch]
  int v277; // [sp+18h] [bp-33Ch]
  int v278; // [sp+1Ch] [bp-338h]
  unsigned int v279; // [sp+1Ch] [bp-338h]
  unsigned int v280; // [sp+1Ch] [bp-338h]
  int v281; // [sp+1Ch] [bp-338h]
  _QWORD *v282; // [sp+1Ch] [bp-338h]
  int v283; // [sp+1Ch] [bp-338h]
  unsigned int v284; // [sp+1Ch] [bp-338h]
  _QWORD *v285; // [sp+1Ch] [bp-338h]
  unsigned int v286; // [sp+1Ch] [bp-338h]
  int v287; // [sp+1Ch] [bp-338h]
  unsigned __int64 v288; // [sp+20h] [bp-334h]
  unsigned int v289; // [sp+20h] [bp-334h]
  _QWORD *v290; // [sp+20h] [bp-334h]
  unsigned int v291; // [sp+20h] [bp-334h]
  _QWORD *v292; // [sp+20h] [bp-334h]
  int v293; // [sp+20h] [bp-334h]
  int v294; // [sp+20h] [bp-334h]
  unsigned int v295; // [sp+24h] [bp-330h]
  unsigned int v296; // [sp+24h] [bp-330h]
  int v297; // [sp+24h] [bp-330h]
  int v298; // [sp+24h] [bp-330h]
  int v299; // [sp+28h] [bp-32Ch]
  unsigned int v300; // [sp+28h] [bp-32Ch]
  int v301; // [sp+28h] [bp-32Ch]
  unsigned int v302; // [sp+28h] [bp-32Ch]
  int v303; // [sp+28h] [bp-32Ch]
  int v304; // [sp+28h] [bp-32Ch]
  unsigned int v305; // [sp+28h] [bp-32Ch]
  int v306; // [sp+28h] [bp-32Ch]
  unsigned int v307; // [sp+2Ch] [bp-328h]
  int v308; // [sp+2Ch] [bp-328h]
  unsigned int v309; // [sp+2Ch] [bp-328h]
  int v310; // [sp+2Ch] [bp-328h]
  int v311; // [sp+2Ch] [bp-328h]
  int v312; // [sp+2Ch] [bp-328h]
  unsigned int v313; // [sp+2Ch] [bp-328h]
  unsigned int v314; // [sp+2Ch] [bp-328h]
  _QWORD *v315; // [sp+2Ch] [bp-328h]
  int v316; // [sp+2Ch] [bp-328h]
  __int64 v317; // [sp+30h] [bp-324h]
  unsigned int v318; // [sp+30h] [bp-324h]
  unsigned int v319; // [sp+30h] [bp-324h]
  int v320; // [sp+30h] [bp-324h]
  unsigned int v321; // [sp+34h] [bp-320h]
  unsigned int v322; // [sp+34h] [bp-320h]
  unsigned int v323; // [sp+38h] [bp-31Ch]
  unsigned int v324; // [sp+38h] [bp-31Ch]
  unsigned int v325; // [sp+38h] [bp-31Ch]
  unsigned int v326; // [sp+38h] [bp-31Ch]
  int v327; // [sp+38h] [bp-31Ch]
  unsigned int v328; // [sp+3Ch] [bp-318h]
  unsigned int v329; // [sp+3Ch] [bp-318h]
  int v330; // [sp+3Ch] [bp-318h]
  int v331; // [sp+3Ch] [bp-318h]
  unsigned int v332; // [sp+3Ch] [bp-318h]
  unsigned int v333; // [sp+3Ch] [bp-318h]
  _QWORD *v334; // [sp+3Ch] [bp-318h]
  _QWORD *v335; // [sp+3Ch] [bp-318h]
  int v336; // [sp+3Ch] [bp-318h]
  unsigned int v337; // [sp+40h] [bp-314h]
  unsigned int v338; // [sp+40h] [bp-314h]
  int v339; // [sp+40h] [bp-314h]
  int v340; // [sp+40h] [bp-314h]
  _QWORD *v341; // [sp+40h] [bp-314h]
  unsigned int v342; // [sp+40h] [bp-314h]
  int v343; // [sp+40h] [bp-314h]
  unsigned int v344; // [sp+40h] [bp-314h]
  _QWORD *v345; // [sp+40h] [bp-314h]
  int v346; // [sp+44h] [bp-310h]
  unsigned int v347; // [sp+44h] [bp-310h]
  unsigned int v348; // [sp+44h] [bp-310h]
  int v349; // [sp+44h] [bp-310h]
  unsigned int v350; // [sp+44h] [bp-310h]
  int v351; // [sp+44h] [bp-310h]
  int v352; // [sp+48h] [bp-30Ch]
  unsigned int v353; // [sp+48h] [bp-30Ch]
  unsigned int v354; // [sp+48h] [bp-30Ch]
  int v355; // [sp+48h] [bp-30Ch]
  int v356; // [sp+48h] [bp-30Ch]
  int v357; // [sp+48h] [bp-30Ch]
  unsigned int v358; // [sp+48h] [bp-30Ch]
  unsigned int v359; // [sp+48h] [bp-30Ch]
  int v360; // [sp+4Ch] [bp-308h]
  unsigned int v361; // [sp+4Ch] [bp-308h]
  unsigned int v362; // [sp+4Ch] [bp-308h]
  int v363; // [sp+4Ch] [bp-308h]
  unsigned int v364; // [sp+4Ch] [bp-308h]
  unsigned int v365; // [sp+4Ch] [bp-308h]
  int v366; // [sp+4Ch] [bp-308h]
  int v367; // [sp+50h] [bp-304h]
  unsigned int v368; // [sp+50h] [bp-304h]
  __int64 v369; // [sp+50h] [bp-304h]
  int v370; // [sp+50h] [bp-304h]
  unsigned int v371; // [sp+50h] [bp-304h]
  unsigned int v372; // [sp+50h] [bp-304h]
  int v373; // [sp+54h] [bp-300h]
  unsigned int v374; // [sp+54h] [bp-300h]
  int v375; // [sp+54h] [bp-300h]
  unsigned int v376; // [sp+54h] [bp-300h]
  unsigned int v377; // [sp+54h] [bp-300h]
  unsigned int v378; // [sp+58h] [bp-2FCh]
  unsigned int v379; // [sp+58h] [bp-2FCh]
  int v380; // [sp+58h] [bp-2FCh]
  int v381; // [sp+58h] [bp-2FCh]
  unsigned int v382; // [sp+58h] [bp-2FCh]
  unsigned int v383; // [sp+58h] [bp-2FCh]
  int v384; // [sp+5Ch] [bp-2F8h]
  unsigned int v385; // [sp+5Ch] [bp-2F8h]
  int v386; // [sp+5Ch] [bp-2F8h]
  int v387; // [sp+5Ch] [bp-2F8h]
  unsigned int v388; // [sp+5Ch] [bp-2F8h]
  int v389; // [sp+5Ch] [bp-2F8h]
  int v390; // [sp+5Ch] [bp-2F8h]
  int v391; // [sp+5Ch] [bp-2F8h]
  unsigned int v392; // [sp+5Ch] [bp-2F8h]
  unsigned int v393; // [sp+5Ch] [bp-2F8h]
  int v394; // [sp+60h] [bp-2F4h]
  unsigned int v395; // [sp+60h] [bp-2F4h]
  _QWORD *v396; // [sp+60h] [bp-2F4h]
  _QWORD *v397; // [sp+60h] [bp-2F4h]
  unsigned int v398; // [sp+60h] [bp-2F4h]
  _QWORD *v399; // [sp+60h] [bp-2F4h]
  int v400; // [sp+60h] [bp-2F4h]
  unsigned int v401; // [sp+60h] [bp-2F4h]
  unsigned int v402; // [sp+60h] [bp-2F4h]
  _QWORD *v403; // [sp+64h] [bp-2F0h]
  int v404; // [sp+64h] [bp-2F0h]
  unsigned int v405; // [sp+64h] [bp-2F0h]
  int v406; // [sp+64h] [bp-2F0h]
  int v407; // [sp+64h] [bp-2F0h]
  unsigned int v408; // [sp+64h] [bp-2F0h]
  unsigned int v409; // [sp+64h] [bp-2F0h]
  int v410; // [sp+68h] [bp-2ECh]
  unsigned int v411; // [sp+68h] [bp-2ECh]
  int v412; // [sp+68h] [bp-2ECh]
  int v413; // [sp+68h] [bp-2ECh]
  unsigned int v414; // [sp+68h] [bp-2ECh]
  int v415; // [sp+68h] [bp-2ECh]
  int v416; // [sp+68h] [bp-2ECh]
  int v417; // [sp+68h] [bp-2ECh]
  unsigned int v418; // [sp+68h] [bp-2ECh]
  int v419; // [sp+68h] [bp-2ECh]
  unsigned int v420; // [sp+68h] [bp-2ECh]
  unsigned int v421; // [sp+6Ch] [bp-2E8h]
  int v422; // [sp+6Ch] [bp-2E8h]
  unsigned int v423; // [sp+6Ch] [bp-2E8h]
  int v424; // [sp+6Ch] [bp-2E8h]
  int v425; // [sp+6Ch] [bp-2E8h]
  unsigned int v426; // [sp+6Ch] [bp-2E8h]
  _QWORD *v427; // [sp+6Ch] [bp-2E8h]
  unsigned int v428; // [sp+6Ch] [bp-2E8h]
  unsigned int v429; // [sp+70h] [bp-2E4h]
  _QWORD *v430; // [sp+70h] [bp-2E4h]
  unsigned int v431; // [sp+70h] [bp-2E4h]
  int v432; // [sp+70h] [bp-2E4h]
  int v433; // [sp+70h] [bp-2E4h]
  int v434; // [sp+70h] [bp-2E4h]
  unsigned int v435; // [sp+70h] [bp-2E4h]
  int v436; // [sp+70h] [bp-2E4h]
  unsigned int v437; // [sp+70h] [bp-2E4h]
  int v438; // [sp+74h] [bp-2E0h]
  unsigned int v439; // [sp+74h] [bp-2E0h]
  int v440; // [sp+74h] [bp-2E0h]
  _QWORD *v441; // [sp+74h] [bp-2E0h]
  unsigned int v442; // [sp+74h] [bp-2E0h]
  int v443; // [sp+74h] [bp-2E0h]
  int v444; // [sp+74h] [bp-2E0h]
  int v445; // [sp+74h] [bp-2E0h]
  unsigned int v446; // [sp+74h] [bp-2E0h]
  int v447; // [sp+78h] [bp-2DCh]
  int v448; // [sp+78h] [bp-2DCh]
  unsigned int v449; // [sp+78h] [bp-2DCh]
  int v450; // [sp+78h] [bp-2DCh]
  unsigned int v451; // [sp+78h] [bp-2DCh]
  int v452; // [sp+78h] [bp-2DCh]
  unsigned int v453; // [sp+78h] [bp-2DCh]
  int v454; // [sp+7Ch] [bp-2D8h]
  unsigned int v455; // [sp+7Ch] [bp-2D8h]
  int v456; // [sp+7Ch] [bp-2D8h]
  unsigned int v457; // [sp+7Ch] [bp-2D8h]
  int v458; // [sp+7Ch] [bp-2D8h]
  unsigned int v459; // [sp+7Ch] [bp-2D8h]
  unsigned int v460; // [sp+7Ch] [bp-2D8h]
  int v461; // [sp+80h] [bp-2D4h]
  unsigned int v462; // [sp+80h] [bp-2D4h]
  unsigned int v463; // [sp+80h] [bp-2D4h]
  int v464; // [sp+80h] [bp-2D4h]
  int v465; // [sp+80h] [bp-2D4h]
  unsigned int v466; // [sp+80h] [bp-2D4h]
  int v467; // [sp+84h] [bp-2D0h]
  unsigned int v468; // [sp+84h] [bp-2D0h]
  unsigned int v469; // [sp+84h] [bp-2D0h]
  int v470; // [sp+84h] [bp-2D0h]
  _QWORD *v471; // [sp+84h] [bp-2D0h]
  _QWORD *v472; // [sp+84h] [bp-2D0h]
  unsigned int v473; // [sp+84h] [bp-2D0h]
  __int64 v474; // [sp+88h] [bp-2CCh]
  int v475; // [sp+88h] [bp-2CCh]
  int v476; // [sp+88h] [bp-2CCh]
  unsigned int v477; // [sp+88h] [bp-2CCh]
  int v478; // [sp+88h] [bp-2CCh]
  unsigned int v479; // [sp+88h] [bp-2CCh]
  int v480; // [sp+88h] [bp-2CCh]
  unsigned int v481; // [sp+88h] [bp-2CCh]
  int v482; // [sp+8Ch] [bp-2C8h]
  unsigned int v483; // [sp+8Ch] [bp-2C8h]
  int v484; // [sp+8Ch] [bp-2C8h]
  __int16 v485; // [sp+8Ch] [bp-2C8h]
  _QWORD *v486; // [sp+8Ch] [bp-2C8h]
  int v487; // [sp+8Ch] [bp-2C8h]
  unsigned int v488; // [sp+8Ch] [bp-2C8h]
  int v489; // [sp+90h] [bp-2C4h]
  int v490; // [sp+90h] [bp-2C4h]
  int v491; // [sp+90h] [bp-2C4h]
  int v492; // [sp+90h] [bp-2C4h]
  __int64 v493; // [sp+90h] [bp-2C4h]
  int v494; // [sp+90h] [bp-2C4h]
  unsigned int v495; // [sp+90h] [bp-2C4h]
  int v496; // [sp+94h] [bp-2C0h]
  int v497; // [sp+94h] [bp-2C0h]
  int v498; // [sp+94h] [bp-2C0h]
  unsigned int v499; // [sp+94h] [bp-2C0h]
  int v500; // [sp+98h] [bp-2BCh]
  _DWORD *v501; // [sp+98h] [bp-2BCh]
  int v502; // [sp+98h] [bp-2BCh]
  unsigned int v503; // [sp+98h] [bp-2BCh]
  _QWORD *v504; // [sp+98h] [bp-2BCh]
  int v505; // [sp+98h] [bp-2BCh]
  int v506; // [sp+98h] [bp-2BCh]
  int v507; // [sp+9Ch] [bp-2B8h]
  int v508; // [sp+9Ch] [bp-2B8h]
  int v509; // [sp+9Ch] [bp-2B8h]
  int v510; // [sp+9Ch] [bp-2B8h]
  _QWORD *v511; // [sp+9Ch] [bp-2B8h]
  _QWORD *v512; // [sp+9Ch] [bp-2B8h]
  int v513; // [sp+A0h] [bp-2B4h]
  unsigned int v514; // [sp+A0h] [bp-2B4h]
  int v515; // [sp+A0h] [bp-2B4h]
  unsigned int v516; // [sp+A0h] [bp-2B4h]
  int v517; // [sp+A0h] [bp-2B4h]
  unsigned int v518; // [sp+A0h] [bp-2B4h]
  int v519; // [sp+A4h] [bp-2B0h]
  unsigned int v520; // [sp+A4h] [bp-2B0h]
  unsigned int v521; // [sp+A4h] [bp-2B0h]
  unsigned int v522; // [sp+A4h] [bp-2B0h]
  int v523; // [sp+A8h] [bp-2ACh]
  _QWORD *v524; // [sp+A8h] [bp-2ACh]
  _QWORD *v525; // [sp+A8h] [bp-2ACh]
  int v526; // [sp+A8h] [bp-2ACh]
  int v527; // [sp+A8h] [bp-2ACh]
  unsigned int v528; // [sp+A8h] [bp-2ACh]
  unsigned int v529; // [sp+A8h] [bp-2ACh]
  int v530; // [sp+A8h] [bp-2ACh]
  int v531; // [sp+ACh] [bp-2A8h]
  unsigned int v532; // [sp+ACh] [bp-2A8h]
  _QWORD *v533; // [sp+ACh] [bp-2A8h]
  int v534; // [sp+ACh] [bp-2A8h]
  unsigned int v535; // [sp+ACh] [bp-2A8h]
  int v536; // [sp+B0h] [bp-2A4h]
  _QWORD *v537; // [sp+B0h] [bp-2A4h]
  int v538; // [sp+B0h] [bp-2A4h]
  unsigned int v539; // [sp+B0h] [bp-2A4h]
  unsigned int v540; // [sp+B0h] [bp-2A4h]
  _QWORD *v541; // [sp+B4h] [bp-2A0h]
  int v542; // [sp+B4h] [bp-2A0h]
  int v543; // [sp+B4h] [bp-2A0h]
  _QWORD *v544; // [sp+B4h] [bp-2A0h]
  _QWORD *v545; // [sp+B4h] [bp-2A0h]
  int v546; // [sp+B4h] [bp-2A0h]
  unsigned int v547; // [sp+B8h] [bp-29Ch]
  int v548; // [sp+B8h] [bp-29Ch]
  unsigned int v549; // [sp+B8h] [bp-29Ch]
  int v550; // [sp+B8h] [bp-29Ch]
  int v551; // [sp+B8h] [bp-29Ch]
  _QWORD *v552; // [sp+B8h] [bp-29Ch]
  _QWORD *v553; // [sp+B8h] [bp-29Ch]
  int v554; // [sp+B8h] [bp-29Ch]
  unsigned int v555; // [sp+BCh] [bp-298h]
  unsigned int v556; // [sp+BCh] [bp-298h]
  int v557; // [sp+BCh] [bp-298h]
  _QWORD *v558; // [sp+BCh] [bp-298h]
  _QWORD *v559; // [sp+BCh] [bp-298h]
  _QWORD *v560; // [sp+BCh] [bp-298h]
  _QWORD *v561; // [sp+BCh] [bp-298h]
  int v562; // [sp+BCh] [bp-298h]
  _QWORD *v563; // [sp+C0h] [bp-294h]
  int v564; // [sp+C0h] [bp-294h]
  int v565; // [sp+C0h] [bp-294h]
  int v566; // [sp+C0h] [bp-294h]
  _QWORD *v567; // [sp+C0h] [bp-294h]
  _QWORD *v568; // [sp+C0h] [bp-294h]
  _QWORD *v569; // [sp+C0h] [bp-294h]
  int v570; // [sp+C0h] [bp-294h]
  _QWORD *v571; // [sp+C0h] [bp-294h]
  int v572; // [sp+C4h] [bp-290h]
  int v573; // [sp+C4h] [bp-290h]
  unsigned int v574; // [sp+C4h] [bp-290h]
  unsigned int v575; // [sp+C4h] [bp-290h]
  _QWORD *v576; // [sp+C4h] [bp-290h]
  _QWORD *v577; // [sp+C4h] [bp-290h]
  _QWORD *v578; // [sp+C4h] [bp-290h]
  _QWORD *v579; // [sp+C4h] [bp-290h]
  _QWORD *v580; // [sp+C8h] [bp-28Ch]
  int v581; // [sp+C8h] [bp-28Ch]
  _QWORD *v582; // [sp+C8h] [bp-28Ch]
  int v583; // [sp+C8h] [bp-28Ch]
  _QWORD *v584; // [sp+C8h] [bp-28Ch]
  _QWORD *v585; // [sp+C8h] [bp-28Ch]
  _QWORD *v586; // [sp+C8h] [bp-28Ch]
  unsigned __int64 v587; // [sp+CCh] [bp-288h]
  int v588; // [sp+CCh] [bp-288h]
  unsigned int v589; // [sp+CCh] [bp-288h]
  _QWORD *v590; // [sp+D0h] [bp-284h]
  _QWORD *v591; // [sp+D0h] [bp-284h]
  int v592; // [sp+D0h] [bp-284h]
  int v593; // [sp+D4h] [bp-280h]
  int v594; // [sp+D4h] [bp-280h]
  unsigned int v595; // [sp+D4h] [bp-280h]
  _QWORD *v596; // [sp+D4h] [bp-280h]
  int v597; // [sp+D4h] [bp-280h]
  _QWORD *v598; // [sp+D4h] [bp-280h]
  int v599; // [sp+D4h] [bp-280h]
  int v600; // [sp+D4h] [bp-280h]
  _QWORD *v601; // [sp+D4h] [bp-280h]
  _QWORD *v602; // [sp+D4h] [bp-280h]
  int v603; // [sp+D8h] [bp-27Ch]
  int v604; // [sp+D8h] [bp-27Ch]
  _QWORD *v605; // [sp+D8h] [bp-27Ch]
  _QWORD *v606; // [sp+D8h] [bp-27Ch]
  _DWORD *v607; // [sp+D8h] [bp-27Ch]
  size_t n; // [sp+DCh] [bp-278h]
  int v609; // [sp+E0h] [bp-274h]
  _QWORD *v610; // [sp+E0h] [bp-274h]
  _QWORD *v611; // [sp+E0h] [bp-274h]
  unsigned int v612; // [sp+E0h] [bp-274h]
  _QWORD *v613; // [sp+E0h] [bp-274h]
  _QWORD *v614; // [sp+E0h] [bp-274h]
  int v615; // [sp+E0h] [bp-274h]
  unsigned int v616; // [sp+E0h] [bp-274h]
  _QWORD *v617; // [sp+E0h] [bp-274h]
  _QWORD *v618; // [sp+E0h] [bp-274h]
  _QWORD *v619; // [sp+E0h] [bp-274h]
  int v620; // [sp+E4h] [bp-270h]
  _QWORD *v621; // [sp+E4h] [bp-270h]
  _QWORD *v622; // [sp+E4h] [bp-270h]
  _QWORD *v623; // [sp+E4h] [bp-270h]
  _QWORD *v624; // [sp+E4h] [bp-270h]
  _QWORD *v625; // [sp+E4h] [bp-270h]
  _QWORD *v626; // [sp+E4h] [bp-270h]
  _QWORD *v627; // [sp+E4h] [bp-270h]
  _QWORD *v628; // [sp+E8h] [bp-26Ch]
  _QWORD *v629; // [sp+E8h] [bp-26Ch]
  _QWORD *v630; // [sp+E8h] [bp-26Ch]
  _QWORD *v631; // [sp+E8h] [bp-26Ch]
  _QWORD *v632; // [sp+E8h] [bp-26Ch]
  _QWORD *v633; // [sp+E8h] [bp-26Ch]
  int v634; // [sp+ECh] [bp-268h]
  _QWORD *v635; // [sp+ECh] [bp-268h]
  _QWORD *v636; // [sp+ECh] [bp-268h]
  _QWORD *v637; // [sp+ECh] [bp-268h]
  int v638; // [sp+ECh] [bp-268h]
  _QWORD *v639; // [sp+ECh] [bp-268h]
  _QWORD *v640; // [sp+ECh] [bp-268h]
  int v641; // [sp+F0h] [bp-264h]
  _QWORD *v642; // [sp+F0h] [bp-264h]
  _DWORD *v643; // [sp+F0h] [bp-264h]
  int v644; // [sp+F0h] [bp-264h]
  _QWORD *v645; // [sp+F0h] [bp-264h]
  _QWORD *v646; // [sp+F0h] [bp-264h]
  _DWORD *v647; // [sp+F0h] [bp-264h]
  _QWORD *v648; // [sp+F0h] [bp-264h]
  int v649; // [sp+F0h] [bp-264h]
  _QWORD *v650; // [sp+F0h] [bp-264h]
  int v651; // [sp+F4h] [bp-260h]
  _QWORD *v652; // [sp+F4h] [bp-260h]
  int *v653; // [sp+F4h] [bp-260h]
  _QWORD *v654; // [sp+F4h] [bp-260h]
  _DWORD *v655; // [sp+F4h] [bp-260h]
  int v656; // [sp+F4h] [bp-260h]
  _QWORD *v657; // [sp+F4h] [bp-260h]
  int v658; // [sp+F4h] [bp-260h]
  _DWORD *v659; // [sp+F4h] [bp-260h]
  _QWORD *v660; // [sp+F8h] [bp-25Ch]
  _QWORD *v661; // [sp+F8h] [bp-25Ch]
  int v662; // [sp+F8h] [bp-25Ch]
  int v663; // [sp+F8h] [bp-25Ch]
  _QWORD *v664; // [sp+F8h] [bp-25Ch]
  unsigned int v665; // [sp+FCh] [bp-258h]
  _QWORD *v666; // [sp+FCh] [bp-258h]
  _QWORD *v667; // [sp+FCh] [bp-258h]
  int v668; // [sp+FCh] [bp-258h]
  int v669; // [sp+FCh] [bp-258h]
  int v670; // [sp+100h] [bp-254h]
  _QWORD *v671; // [sp+100h] [bp-254h]
  _QWORD *v672; // [sp+100h] [bp-254h]
  int v673; // [sp+100h] [bp-254h]
  int v674; // [sp+100h] [bp-254h]
  int v675; // [sp+100h] [bp-254h]
  int v676; // [sp+104h] [bp-250h]
  _DWORD *v677; // [sp+104h] [bp-250h]
  int v678; // [sp+104h] [bp-250h]
  _QWORD *v679; // [sp+104h] [bp-250h]
  _QWORD *v680; // [sp+104h] [bp-250h]
  int v681; // [sp+104h] [bp-250h]
  int v682; // [sp+104h] [bp-250h]
  int v683; // [sp+104h] [bp-250h]
  _QWORD *v684; // [sp+104h] [bp-250h]
  int v685; // [sp+104h] [bp-250h]
  int v686; // [sp+108h] [bp-24Ch]
  _DWORD *v687; // [sp+108h] [bp-24Ch]
  _QWORD *v688; // [sp+108h] [bp-24Ch]
  int v689; // [sp+108h] [bp-24Ch]
  _QWORD *v690; // [sp+108h] [bp-24Ch]
  int v691; // [sp+10Ch] [bp-248h]
  _QWORD *v692; // [sp+10Ch] [bp-248h]
  _QWORD *v693; // [sp+10Ch] [bp-248h]
  _QWORD *v694; // [sp+10Ch] [bp-248h]
  unsigned int v695; // [sp+10Ch] [bp-248h]
  int v696; // [sp+10Ch] [bp-248h]
  int v697; // [sp+10Ch] [bp-248h]
  _QWORD *v698; // [sp+10Ch] [bp-248h]
  int v699; // [sp+110h] [bp-244h]
  _QWORD *v700; // [sp+110h] [bp-244h]
  int v701; // [sp+110h] [bp-244h]
  _QWORD *v702; // [sp+110h] [bp-244h]
  _QWORD *v703; // [sp+110h] [bp-244h]
  _QWORD *v704; // [sp+110h] [bp-244h]
  int v705; // [sp+114h] [bp-240h]
  int v706; // [sp+114h] [bp-240h]
  _QWORD *v707; // [sp+114h] [bp-240h]
  _QWORD *v708; // [sp+114h] [bp-240h]
  int v709; // [sp+114h] [bp-240h]
  int v710; // [sp+114h] [bp-240h]
  _QWORD *v711; // [sp+114h] [bp-240h]
  _QWORD *v712; // [sp+118h] [bp-23Ch]
  _QWORD *v713; // [sp+118h] [bp-23Ch]
  int v714; // [sp+118h] [bp-23Ch]
  int v715; // [sp+118h] [bp-23Ch]
  _QWORD *v716; // [sp+118h] [bp-23Ch]
  int v717; // [sp+118h] [bp-23Ch]
  int v718; // [sp+118h] [bp-23Ch]
  unsigned int v719; // [sp+11Ch] [bp-238h]
  _QWORD *v720; // [sp+11Ch] [bp-238h]
  _QWORD *v721; // [sp+11Ch] [bp-238h]
  int v722; // [sp+11Ch] [bp-238h]
  int v723; // [sp+11Ch] [bp-238h]
  int v724; // [sp+11Ch] [bp-238h]
  _QWORD *v725; // [sp+11Ch] [bp-238h]
  _QWORD *v726; // [sp+11Ch] [bp-238h]
  int v727; // [sp+120h] [bp-234h]
  _QWORD *v728; // [sp+120h] [bp-234h]
  _QWORD *v729; // [sp+120h] [bp-234h]
  _QWORD *v730; // [sp+120h] [bp-234h]
  int v731; // [sp+120h] [bp-234h]
  int v732; // [sp+120h] [bp-234h]
  _QWORD *v733; // [sp+120h] [bp-234h]
  int v734; // [sp+124h] [bp-230h]
  int v735; // [sp+124h] [bp-230h]
  _QWORD *v736; // [sp+124h] [bp-230h]
  int v737; // [sp+124h] [bp-230h]
  _QWORD *v738; // [sp+124h] [bp-230h]
  _QWORD *v739; // [sp+124h] [bp-230h]
  _QWORD *v740; // [sp+128h] [bp-22Ch]
  int v741; // [sp+128h] [bp-22Ch]
  _QWORD *v742; // [sp+128h] [bp-22Ch]
  int v743; // [sp+128h] [bp-22Ch]
  int v744; // [sp+128h] [bp-22Ch]
  int v745; // [sp+128h] [bp-22Ch]
  int v746; // [sp+12Ch] [bp-228h]
  _QWORD *v747; // [sp+12Ch] [bp-228h]
  int v748; // [sp+12Ch] [bp-228h]
  int v749; // [sp+12Ch] [bp-228h]
  int v750; // [sp+12Ch] [bp-228h]
  _QWORD *v751; // [sp+12Ch] [bp-228h]
  _QWORD *v752; // [sp+130h] [bp-224h]
  int v753; // [sp+130h] [bp-224h]
  int v754; // [sp+130h] [bp-224h]
  int v755; // [sp+130h] [bp-224h]
  int v756; // [sp+130h] [bp-224h]
  int v757; // [sp+130h] [bp-224h]
  _QWORD *v758; // [sp+134h] [bp-220h]
  int v759; // [sp+134h] [bp-220h]
  int v760; // [sp+134h] [bp-220h]
  int v761; // [sp+134h] [bp-220h]
  int v762; // [sp+138h] [bp-21Ch]
  int v763; // [sp+138h] [bp-21Ch]
  int v764; // [sp+13Ch] [bp-218h]
  _QWORD *v765; // [sp+13Ch] [bp-218h]
  int v766; // [sp+13Ch] [bp-218h]
  int v767; // [sp+13Ch] [bp-218h]
  _QWORD *v768; // [sp+13Ch] [bp-218h]
  int v769; // [sp+13Ch] [bp-218h]
  int v770; // [sp+13Ch] [bp-218h]
  int v771; // [sp+140h] [bp-214h]
  _QWORD *v772; // [sp+140h] [bp-214h]
  int v773; // [sp+140h] [bp-214h]
  int v774; // [sp+140h] [bp-214h]
  int v775; // [sp+144h] [bp-210h]
  _QWORD *v776; // [sp+144h] [bp-210h]
  int v777; // [sp+144h] [bp-210h]
  int v778; // [sp+144h] [bp-210h]
  unsigned int v779; // [sp+144h] [bp-210h]
  int v780; // [sp+148h] [bp-20Ch]
  _DWORD *v781; // [sp+148h] [bp-20Ch]
  int v782; // [sp+148h] [bp-20Ch]
  unsigned int v783; // [sp+14Ch] [bp-208h]
  int v784; // [sp+14Ch] [bp-208h]
  unsigned int v785; // [sp+14Ch] [bp-208h]
  unsigned int v786; // [sp+14Ch] [bp-208h]
  int v787; // [sp+150h] [bp-204h]
  _QWORD *v788; // [sp+150h] [bp-204h]
  _DWORD *v789; // [sp+150h] [bp-204h]
  unsigned int v790; // [sp+150h] [bp-204h]
  int v791; // [sp+150h] [bp-204h]
  int v792; // [sp+154h] [bp-200h]
  _QWORD *v793; // [sp+154h] [bp-200h]
  int v794; // [sp+154h] [bp-200h]
  int v795; // [sp+154h] [bp-200h]
  unsigned int v796; // [sp+158h] [bp-1FCh]
  _QWORD *v797; // [sp+158h] [bp-1FCh]
  _DWORD *v798; // [sp+158h] [bp-1FCh]
  unsigned int v799; // [sp+158h] [bp-1FCh]
  int v800; // [sp+158h] [bp-1FCh]
  int v801; // [sp+15Ch] [bp-1F8h]
  _QWORD *v802; // [sp+15Ch] [bp-1F8h]
  int v803; // [sp+15Ch] [bp-1F8h]
  int v804; // [sp+15Ch] [bp-1F8h]
  unsigned int v805; // [sp+15Ch] [bp-1F8h]
  int v806; // [sp+160h] [bp-1F4h]
  _QWORD *v807; // [sp+160h] [bp-1F4h]
  int v808; // [sp+160h] [bp-1F4h]
  int v809; // [sp+160h] [bp-1F4h]
  _QWORD *v810; // [sp+164h] [bp-1F0h]
  _DWORD *v811; // [sp+164h] [bp-1F0h]
  unsigned int v812; // [sp+164h] [bp-1F0h]
  unsigned int v813; // [sp+164h] [bp-1F0h]
  _QWORD *v814; // [sp+168h] [bp-1ECh]
  _DWORD *v815; // [sp+168h] [bp-1ECh]
  int v816; // [sp+16Ch] [bp-1E8h]
  int v817; // [sp+16Ch] [bp-1E8h]
  int v818; // [sp+16Ch] [bp-1E8h]
  _QWORD *v819; // [sp+16Ch] [bp-1E8h]
  unsigned int v820; // [sp+170h] [bp-1E4h]
  int v821; // [sp+170h] [bp-1E4h]
  int v822; // [sp+174h] [bp-1E0h]
  _QWORD *v823; // [sp+174h] [bp-1E0h]
  int v824; // [sp+178h] [bp-1DCh]
  _QWORD *v825; // [sp+178h] [bp-1DCh]
  int v826; // [sp+17Ch] [bp-1D8h]
  _DWORD *v827; // [sp+17Ch] [bp-1D8h]
  int v828; // [sp+180h] [bp-1D4h]
  int v829; // [sp+180h] [bp-1D4h]
  _QWORD *v830; // [sp+180h] [bp-1D4h]
  int v831; // [sp+184h] [bp-1D0h]
  int v832; // [sp+184h] [bp-1D0h]
  int v833; // [sp+188h] [bp-1CCh]
  int v834; // [sp+18Ch] [bp-1C8h]
  int v835; // [sp+18Ch] [bp-1C8h]
  int v836; // [sp+190h] [bp-1C4h]
  int v837; // [sp+194h] [bp-1C0h]
  unsigned int v838; // [sp+198h] [bp-1BCh]
  char *src; // [sp+1C0h] [bp-194h]
  int v841; // [sp+1C8h] [bp-18Ch] BYREF
  void *v842; // [sp+1CCh] [bp-188h]
  _BYTE dest[128]; // [sp+1D0h] [bp-184h] BYREF
  unsigned __int64 v844; // [sp+250h] [bp-104h]
  int v845; // [sp+258h] [bp-FCh] BYREF
  int v846; // [sp+25Ch] [bp-F8h]
  int v847; // [sp+260h] [bp-F4h]
  int v848; // [sp+264h] [bp-F0h]
  int v849; // [sp+268h] [bp-ECh]
  int v850; // [sp+26Ch] [bp-E8h]
  __int64 v851; // [sp+270h] [bp-E4h]
  int v852; // [sp+278h] [bp-DCh]
  int v853; // [sp+27Ch] [bp-D8h]
  int v854; // [sp+280h] [bp-D4h]
  int v855; // [sp+284h] [bp-D0h]
  int v856; // [sp+288h] [bp-CCh]
  int v857; // [sp+28Ch] [bp-C8h]
  int v858; // [sp+290h] [bp-C4h]
  int v859; // [sp+294h] [bp-C0h]
  int v860; // [sp+298h] [bp-BCh]
  int v861; // [sp+29Ch] [bp-B8h]
  int v862; // [sp+2A0h] [bp-B4h]
  int v863; // [sp+2A4h] [bp-B0h]
  int v864; // [sp+2A8h] [bp-ACh]
  int v865; // [sp+2ACh] [bp-A8h]
  int v866; // [sp+2B0h] [bp-A4h]
  int v867; // [sp+2B4h] [bp-A0h]
  int v868; // [sp+2B8h] [bp-9Ch]
  int v869; // [sp+2BCh] [bp-98h]
  int v870; // [sp+2C0h] [bp-94h]
  int v871; // [sp+2C4h] [bp-90h]
  int v872; // [sp+2C8h] [bp-8Ch] BYREF
  int v873; // [sp+2CCh] [bp-88h]
  int v874; // [sp+2D0h] [bp-84h]
  int v875; // [sp+2D4h] [bp-80h]
  int v876; // [sp+2D8h] [bp-7Ch] BYREF
  int v877; // [sp+2DCh] [bp-78h]
  int v878; // [sp+2E0h] [bp-74h]
  int v879; // [sp+2E4h] [bp-70h]
  int v880; // [sp+2E8h] [bp-6Ch]
  int v881; // [sp+2ECh] [bp-68h]
  int v882; // [sp+2F0h] [bp-64h]
  int v883; // [sp+2F4h] [bp-60h]
  int v884; // [sp+2F8h] [bp-5Ch]
  int v885; // [sp+2FCh] [bp-58h]
  int v886; // [sp+300h] [bp-54h]
  int v887; // [sp+304h] [bp-50h]
  int v888; // [sp+308h] [bp-4Ch]
  int v889; // [sp+30Ch] [bp-48h]
  int v890; // [sp+310h] [bp-44h]
  int v891; // [sp+314h] [bp-40h]
  int v892; // [sp+318h] [bp-3Ch]
  int v893; // [sp+31Ch] [bp-38h]
  __int64 v894; // [sp+320h] [bp-34h]
  int v895; // [sp+328h] [bp-2Ch]
  int v896; // [sp+32Ch] [bp-28h]
  int v897; // [sp+330h] [bp-24h]
  int v898; // [sp+334h] [bp-20h]
  int v899; // [sp+338h] [bp-1Ch]
  int v900; // [sp+33Ch] [bp-18h]
  int v901; // [sp+340h] [bp-14h]
  int v902; // [sp+344h] [bp-10h]
  int v903; // [sp+348h] [bp-Ch] BYREF
  int v904; // [sp+34Ch] [bp-8h]

  v3 = *(_DWORD *)(a1 + 128);
  v4 = 128 - v3;
  n = a3;
  src = a2;
  if ( 128 - v3 > a3 )
  {
    v266 = v3 + a3;
    result = memcpy((void *)(a1 + v3), a2, a3);
    *(_DWORD *)(a1 + 128) = v266;
  }
  else
  {
    v842 = (void *)(a1 + 136);
    memcpy(dest, (const void *)(a1 + 136), sizeof(dest));
    if ( n )
    {
      v5 = 1419656;
      while ( 1 )
      {
        if ( n < v4 )
          v4 = n;
        v6 = (void *)(a1 + v3);
        v3 += v4;
        memcpy(v6, src, v4);
        n -= v4;
        src += v4;
        if ( v3 == 128 )
        {
          v7 = &dest[120];
          v841 = (int)&v841;
          v8 = &v841;
          v9 = a1 - 8;
          v10 = &v872;
          do
          {
            v12 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            v11 = v12;
            v13 = v8[2];
            v8 += 2;
            v14 = *(_DWORD *)(v9 + 4);
            v15 = v8[1];
            v10[2] = v11;
            v10 += 2;
            *((_DWORD *)v7 + 2) = v13 ^ v11;
            v7 += 8;
            v10[1] = v14;
            *((_DWORD *)v7 + 1) = v15 ^ v14;
          }
          while ( &v903 != v10 );
          v269 = 0;
          v496 = v845;
          v467 = v846;
          v500 = v847;
          v507 = v848;
          v593 = v849;
          v603 = v850;
          v474 = v851;
          v489 = v852;
          v513 = v853;
          v438 = v854;
          v447 = v855;
          v299 = v856;
          v360 = v857;
          v454 = v858;
          v519 = v859;
          v16 = v870;
          v17 = v872;
          v267 = v5;
          v346 = v860;
          v536 = v873;
          v523 = v861;
          v278 = v862;
          v394 = v863;
          v352 = v864;
          v367 = v865;
          v373 = v866;
          v384 = v867;
          v410 = v868;
          v461 = v869;
          v531 = v871;
          v587 = v844;
          do
          {
            v288 = v587 ^ v269;
            v378 = v467 ^ ((unsigned __int64)(v269 + 16) >> 32);
            v307 = v603 ^ ((unsigned __int64)(v269 + 48) >> 32);
            v317 = v474 ^ (v269 + 64);
            v273 = ((unsigned __int64)(v269 + 80) >> 32) ^ v513;
            v18 = v438 ^ (v269 + 96);
            v19 = ((unsigned __int64)(v269 + 96) >> 32) ^ v447;
            v323 = v299 ^ (v269 + 112);
            v328 = v360 ^ ((unsigned __int64)(v269 + 112) >> 32);
            v337 = v454 ^ (v269 + 128);
            v421 = v519 ^ ((unsigned __int64)(v269 + 128) >> 32);
            v429 = v346 ^ (v269 + 144);
            v439 = v278 ^ (v269 + 160);
            v353 = v352 ^ (v269 + 176);
            v20 = v367 ^ ((unsigned __int64)(v269 + 176) >> 32);
            v21 = v373;
            v374 = (v269 + 240) ^ v17;
            v361 = v21 ^ (v269 + 192);
            v22 = v384 ^ ((unsigned __int64)(v269 + 192) >> 32);
            v368 = v410 ^ (v269 + 208);
            v23 = v461;
            v462 = (v269 + 224) ^ v16;
            v455 = v23 ^ ((unsigned __int64)(v269 + 208) >> 32);
            v24 = v531 ^ ((unsigned __int64)(v269 + 224) >> 32);
            v468 = v536 ^ ((unsigned __int64)(v269 + 240) >> 32);
            v300 = v496 ^ (v269 + 16);
            v385 = v500 ^ (v269 + 32);
            v279 = v523 ^ ((unsigned __int64)(v269 + 144) >> 32);
            v665 = v22;
            v532 = HIBYTE(v328);
            v347 = v394 ^ ((unsigned __int64)(v269 + 160) >> 32);
            v719 = v24;
            HIDWORD(v474) = HIBYTE(v24);
            v520 = HIBYTE(v19);
            v411 = v18;
            v555 = HIBYTE(v421);
            v395 = v593 ^ (v269 + 48);
            v796 = (unsigned int)(HIDWORD(v587) ^ HIDWORD(v269)) >> 24;
            v771 = v507 ^ ((unsigned __int64)(v269 + 32) >> 32);
            v514 = HIBYTE(v273);
            v620 = 8 * HIBYTE(v323) + 1427840;
            v634 = 8 * HIBYTE(v337) + 1427840;
            v25 = &dword_15B188[2 * HIBYTE(v22)];
            v547 = 8 * ((v489 ^ (unsigned int)(v269 + 80)) >> 24) + 1427840;
            v588 = 8 * HIBYTE(v18) + 1427840;
            v746 = 8 * HIBYTE(v368) + 1427840;
            v762 = 8 * HIBYTE(v462) + 1427840;
            v676 = 8 * HIBYTE(v439) + 1427840;
            v780 = 8 * HIBYTE(v374) + 1427840;
            v705 = 8 * HIBYTE(v353) + 1427840;
            v734 = 8 * HIBYTE(v361) + 1427840;
            v783 = 8 * BYTE3(v288) + 1427840;
            v26 = &qword_15B990[BYTE1(v300)];
            v27 = &qword_15C190[BYTE2(v385)];
            v28 = &qword_15D190[BYTE4(v317)];
            v594 = *v25;
            v609 = v25[1];
            v29 = &qword_15D190[(unsigned __int8)v273];
            v563 = &qword_15D190[(unsigned __int8)(((unsigned __int64)(v269 + 96) >> 32) ^ v447)];
            v30 = *(_DWORD *)(v267 + 8 * (unsigned __int8)v288 + 4)
                ^ ((unsigned __int64)(v269 + 1) >> 32)
                ^ dword_15B188[2 * HIBYTE(v20) + 1]
                ^ *((_DWORD *)v26 - 1)
                ^ *((_DWORD *)v27 - 1);
            v31 = 8 * HIBYTE(v395) + 1427840;
            v32 = *(_DWORD *)(v267 + 8 * (unsigned __int8)v288)
                ^ (v269 + 1)
                ^ dword_15B188[2 * HIBYTE(v20)]
                ^ *((_DWORD *)v26 - 2);
            v604 = BYTE2(v273);
            v33 = &qword_15B990[BYTE1(v385)];
            v524 = &qword_15C190[BYTE2(v395)];
            v34 = (unsigned __int8)(v500 ^ (v269 + 32));
            v816 = 8 * HIBYTE(v385) + 1427840;
            v686 = BYTE1(v328);
            v590 = &qword_15D190[(unsigned __int8)v328];
            v386 = BYTE2(v421);
            v35 = (unsigned __int8)v421;
            v422 = BYTE1(v421);
            v628 = &qword_15D190[v35];
            v36 = v30 ^ HIDWORD(qword_15C988[HIBYTE(v395)]) ^ *((_DWORD *)v28 - 1);
            v699 = (unsigned __int8)v395;
            v396 = &qword_15B990[BYTE1(v395)];
            v37 = &dword_15E188[2 * BYTE2(v19)];
            v38 = v32
                ^ *((_DWORD *)v27 - 2)
                ^ *(_DWORD *)(v31 + 8)
                ^ *((_DWORD *)v28 - 2)
                ^ dword_15D988[2 * BYTE1(v273)]
                ^ *v37;
            v670 = dword_15E188[2 * BYTE2(v328) + 1];
            v641 = dword_15D988[2 * BYTE1(v19)];
            v39 = dword_15D988[2 * BYTE1(v273) + 1];
            v274 = v38;
            v651 = dword_15E188[2 * BYTE2(v328)];
            v329 = v36 ^ v39 ^ v37[1];
            v537 = &qword_15C190[BYTE2(v317)];
            v40 = *(_DWORD *)(v267 + 8 * (unsigned __int8)v300) ^ v594 ^ (v269 + 17) ^ *((_DWORD *)v33 - 2);
            v41 = *(_DWORD *)(v267 + 8 * (unsigned __int8)v300 + 4)
                ^ v609
                ^ ((unsigned __int64)(v269 + 17) >> 32)
                ^ *((_DWORD *)v33 - 1);
            v775 = (unsigned __int8)v317;
            v580 = &qword_15B990[BYTE1(v317)];
            v42 = *((_DWORD *)v524 - 1);
            v43 = v40 ^ *((_DWORD *)v524 - 2);
            v403 = &qword_15C190[(unsigned __int8)((v489 ^ (unsigned int)(v269 + 80)) >> 16)];
            v801 = (unsigned __int8)(v489 ^ (v269 + 80));
            v525 = &qword_15B990[(unsigned __int8)((unsigned __int16)(v489 ^ (v269 + 80)) >> 8)];
            v787 = BYTE1(v279);
            v610 = &qword_15C190[BYTE2(v411)];
            v792 = BYTE2(v347);
            v44 = dword_15D988[2 * BYTE1(v19) + 1]
                ^ *((_DWORD *)v29 - 1)
                ^ HIDWORD(qword_15C988[((unsigned int)v474 ^ ((_DWORD)v269 + 64)) >> 24])
                ^ v41
                ^ v42;
            v691 = dword_15E188[2 * v386 + 1];
            v572 = dword_15E188[2 * v386];
            v45 = *((_DWORD *)v563 - 2);
            v46 = *((_DWORD *)v563 - 1);
            v564 = *((_DWORD *)v590 - 2);
            LODWORD(v317) = v44 ^ v670;
            v727 = *((_DWORD *)v590 - 1);
            v820 = *((_DWORD *)v29 - 2)
                 ^ LODWORD(qword_15C988[((unsigned int)v474 ^ ((_DWORD)v269 + 64)) >> 24])
                 ^ v43
                 ^ v641
                 ^ v651;
            v764 = dword_15E188[2 * BYTE2(v279) + 1];
            v490 = dword_15E188[2 * BYTE2(v279)];
            v47 = *(_DWORD *)(v588 + 8);
            LODWORD(v474) = *(_DWORD *)(v588 + 12);
            v822 = (unsigned __int8)v411;
            v48 = &qword_15B990[BYTE1(v411)];
            v541 = &qword_15C190[BYTE2(v323)];
            v591 = &qword_15D190[(unsigned __int8)v279];
            v589 = HIBYTE(v279);
            v806 = BYTE1(v347);
            v831 = (unsigned __int8)v323;
            v642 = &qword_15B990[BYTE1(v323)];
            v652 = &qword_15C190[BYTE2(v337)];
            v49 = &qword_15D190[(unsigned __int8)v347];
            v595 = HIBYTE(v347);
            LOWORD(v23) = v665;
            v828 = BYTE2(v665);
            v387 = (unsigned __int8)v337;
            v666 = &qword_15B990[BYTE1(v337)];
            v324 = dword_15B188[2 * HIBYTE(v455) + 1]
                 ^ *(_DWORD *)(v267 + 8 * v34 + 4)
                 ^ ((unsigned __int64)(v269 + 33) >> 32)
                 ^ *((_DWORD *)v396 - 1)
                 ^ *((_DWORD *)v537 - 1)
                 ^ *(_DWORD *)(v547 + 12)
                 ^ v46
                 ^ dword_15D988[2 * v686 + 1]
                 ^ v691;
            v834 = BYTE2(v455);
            v712 = &qword_15D190[(unsigned __int8)v23];
            v692 = &qword_15B990[BYTE1(v429)];
            v280 = *(_DWORD *)(v267 + 8 * v34)
                 ^ dword_15B188[2 * HIBYTE(v455)]
                 ^ (v269 + 33)
                 ^ *((_DWORD *)v396 - 2)
                 ^ *((_DWORD *)v537 - 2)
                 ^ *(_DWORD *)(v547 + 8)
                 ^ v45
                 ^ dword_15D988[2 * v686]
                 ^ v572;
            v50 = dword_15B188[2 * HIDWORD(v474)]
                ^ *(_DWORD *)(v267 + 8 * v699)
                ^ (v269 + 49)
                ^ *((_DWORD *)v580 - 2)
                ^ *((_DWORD *)v403 - 2)
                ^ v47;
            v51 = dword_15B188[2 * HIDWORD(v474) + 1]
                ^ *(_DWORD *)(v267 + 8 * v699 + 4)
                ^ ((unsigned __int64)(v269 + 49) >> 32)
                ^ *((_DWORD *)v580 - 1)
                ^ *((_DWORD *)v403 - 1)
                ^ v474;
            v404 = BYTE1(v455);
            v700 = &qword_15C190[BYTE2(v439)];
            LOWORD(v34) = v719;
            v740 = &qword_15D190[(unsigned __int8)v455];
            v412 = BYTE2(v719);
            v338 = v50 ^ v564 ^ dword_15D988[2 * v422] ^ v490;
            v348 = v51 ^ v727 ^ dword_15D988[2 * v422 + 1] ^ v764;
            v456 = (unsigned __int8)v439;
            v720 = &qword_15B990[BYTE1(v439)];
            v728 = &qword_15C190[BYTE2(v353)];
            v752 = &qword_15D190[(unsigned __int8)v34];
            v52 = *((_DWORD *)v610 - 1);
            v440 = BYTE2(v468);
            v53 = *(_DWORD *)(v267 + 8 * v775)
                ^ dword_15B188[2 * HIBYTE(v468)]
                ^ (v269 + 65)
                ^ *((_DWORD *)v525 - 2)
                ^ *((_DWORD *)v610 - 2);
            v448 = BYTE6(v288);
            v491 = (unsigned __int8)v353;
            v611 = &qword_15B990[BYTE1(v353)];
            v54 = *(_DWORD *)(v620 + 12);
            v55 = *(_DWORD *)(v620 + 8);
            v621 = &qword_15C190[BYTE2(v361)];
            v475 = BYTE1(v468);
            v765 = &qword_15D190[(unsigned __int8)v468];
            v56 = *((_DWORD *)v628 - 1)
                ^ *((_DWORD *)v525 - 1)
                ^ dword_15B188[2 * HIBYTE(v468) + 1]
                ^ *(_DWORD *)(v267 + 8 * v775 + 4)
                ^ ((unsigned __int64)(v269 + 65) >> 32)
                ^ v52
                ^ v54
                ^ dword_15D988[2 * v787 + 1];
            v482 = BYTE5(v288);
            v397 = &qword_15D190[BYTE4(v288)];
            v469 = *((_DWORD *)v628 - 2) ^ v53 ^ v55 ^ dword_15D988[2 * v787] ^ dword_15E188[2 * v792];
            v526 = (unsigned __int8)(v21 ^ (v269 - 64));
            v629 = &qword_15B990[BYTE1(v361)];
            v758 = &qword_15C190[BYTE2(v368)];
            v497 = BYTE2(v378);
            HIDWORD(v288) = v56 ^ dword_15E188[2 * v792 + 1];
            v57 = dword_15B188[2 * v796 + 1] ^ ((unsigned __int64)(v269 + 81) >> 32);
            v538 = BYTE1(v378);
            v58 = dword_15B188[2 * v796] ^ (v269 + 81) ^ *(_DWORD *)(v267 + 8 * v801) ^ *((_DWORD *)v48 - 2);
            v797 = &qword_15D190[(unsigned __int8)v378];
            v59 = *((_DWORD *)v541 - 1);
            v60 = *((_DWORD *)v541 - 2);
            v542 = BYTE2(v771);
            v565 = BYTE1(v771);
            v810 = &qword_15D190[(unsigned __int8)(v507 ^ ((unsigned __int64)(v269 + 32) >> 32))];
            v573 = BYTE2(v307);
            v772 = &qword_15B990[BYTE1(v368)];
            v548 = (unsigned __int8)v368;
            v776 = &qword_15C190[BYTE2(v462)];
            v581 = (unsigned __int8)v462;
            v61 = dword_15D988[2 * v806 + 1]
                ^ v57
                ^ *(_DWORD *)(v267 + 8 * v801 + 4)
                ^ *((_DWORD *)v48 - 1)
                ^ v59
                ^ *(_DWORD *)(v634 + 12)
                ^ *((_DWORD *)v591 - 1);
            v788 = &qword_15B990[BYTE1(v462)];
            v793 = &qword_15C190[BYTE2(v374)];
            v802 = &qword_15C190[BYTE2(v288)];
            v814 = &qword_15B990[BYTE1(v288)];
            v354 = v61 ^ dword_15E188[2 * BYTE2(v20) + 1];
            LODWORD(v288) = v58
                          ^ v60
                          ^ *(_DWORD *)(v634 + 8)
                          ^ *((_DWORD *)v591 - 2)
                          ^ dword_15D988[2 * v806]
                          ^ dword_15E188[2 * BYTE2(v20)];
            v592 = (unsigned __int8)v374;
            v807 = &qword_15B990[BYTE1(v374)];
            v62 = *(v49 - 1);
            v463 = *(_DWORD *)(v267 + 8 * v822 + 4)
                 ^ dword_15B188[2 * HIBYTE(v378) + 1]
                 ^ ((unsigned __int64)(v269 + 97) >> 32)
                 ^ *((_DWORD *)v642 - 1)
                 ^ *((_DWORD *)v652 - 1)
                 ^ HIDWORD(qword_15C988[HIBYTE(v429)])
                 ^ HIDWORD(v62)
                 ^ dword_15D988[2 * BYTE1(v20) + 1]
                 ^ dword_15E188[2 * v828 + 1];
            v362 = *(_DWORD *)(v267 + 8 * v822)
                 ^ dword_15B188[2 * HIBYTE(v378)]
                 ^ (v269 + 97)
                 ^ *((_DWORD *)v642 - 2)
                 ^ *((_DWORD *)v652 - 2)
                 ^ LODWORD(qword_15C988[HIBYTE(v429)])
                 ^ v62
                 ^ dword_15D988[2 * BYTE1(v20)]
                 ^ dword_15E188[2 * v828];
            v63 = *(_DWORD *)(v267 + 8 * v387) ^ dword_15B188[2 * HIBYTE(v307)];
            v369 = *(_QWORD *)(v267 + 8 * v831)
                 ^ *(_QWORD *)&dword_15B188[2 * ((v507 ^ ((unsigned __int64)(v269 + 32) >> 32)) >> 24)]
                 ^ (v269 + 113)
                 ^ *(v666 - 1)
                 ^ qword_15C190[BYTE2(v429) - 1]
                 ^ *(_QWORD *)(v676 + 8)
                 ^ qword_15D190[(unsigned __int8)v20 - 1]
                 ^ *(_QWORD *)&dword_15D988[2 * BYTE1(v23)]
                 ^ *(_QWORD *)&dword_15E188[2 * v834];
            v829 = dword_15E188[2 * v440 + 1];
            v826 = dword_15E188[2 * v440];
            v501 = &dword_15E188[2 * BYTE2(v378)];
            v643 = &dword_15D988[2 * BYTE1(v378)];
            v677 = &dword_15E188[2 * BYTE2(v307)];
            v388 = dword_15E188[2 * v412 + 1]
                 ^ *((_DWORD *)v700 - 1)
                 ^ *((_DWORD *)v692 - 1)
                 ^ *(_DWORD *)(v267 + 8 * v387 + 4)
                 ^ dword_15B188[2 * HIBYTE(v307) + 1]
                 ^ (__CFADD__((_DWORD)v269, 129) + HIDWORD(v269))
                 ^ *(_DWORD *)(v705 + 12)
                 ^ *((_DWORD *)v712 - 1)
                 ^ dword_15D988[2 * v404 + 1];
            v379 = v63
                 ^ (v269 + 129)
                 ^ *((_DWORD *)v692 - 2)
                 ^ *((_DWORD *)v700 - 2)
                 ^ *(_DWORD *)(v705 + 8)
                 ^ *((_DWORD *)v712 - 2)
                 ^ dword_15D988[2 * v404]
                 ^ dword_15E188[2 * v412];
            v64 = dword_15B188[2 * v514 + 1];
            v706 = dword_15D988[2 * v475 + 1];
            v701 = *((_DWORD *)v728 - 1)
                 ^ dword_15B188[2 * HIBYTE(HIDWORD(v317)) + 1]
                 ^ *(_DWORD *)(v267 + 8 * (unsigned __int8)v429 + 4)
                 ^ ((unsigned __int64)(v269 + 145) >> 32)
                 ^ *((_DWORD *)v720 - 1)
                 ^ *(_DWORD *)(v734 + 12)
                 ^ *((_DWORD *)v740 - 1);
            HIDWORD(v62) = dword_15B188[2 * v514];
            v515 = dword_15D988[2 * v475];
            v65 = *(_DWORD *)(v267 + 8 * v456 + 4)
                ^ dword_15E188[2 * v448 + 1]
                ^ ((unsigned __int64)(v269 + 161) >> 32)
                ^ v64;
            v476 = dword_15B188[2 * HIBYTE(HIDWORD(v317))]
                 ^ *(_DWORD *)(v267 + 8 * (unsigned __int8)v429)
                 ^ (v269 + 145)
                 ^ *((_DWORD *)v720 - 2)
                 ^ *((_DWORD *)v728 - 2)
                 ^ *(_DWORD *)(v734 + 8)
                 ^ *((_DWORD *)v740 - 2)
                 ^ dword_15D988[2 * BYTE1(v34)];
            v430 = &qword_15C190[BYTE2(v300)];
            v413 = 8 * HIBYTE(v300) + 1427840;
            v301 = BYTE1(v307);
            v441 = &qword_15D190[(unsigned __int8)v307];
            v308 = BYTE6(v317);
            v735 = BYTE5(v317);
            v66 = *(_DWORD *)(v413 + 8);
            v67 = dword_15D988[2 * v301];
            v68 = *(_DWORD *)(v267 + 8 * v581 + 4)
                ^ *((_DWORD *)v802 - 1)
                ^ ((unsigned __int64)(v269 + 225) >> 32)
                ^ dword_15B188[2 * v589 + 1]
                ^ *((_DWORD *)v807 - 1)
                ^ *(_DWORD *)(v413 + 12)
                ^ *((_DWORD *)v810 - 1)
                ^ dword_15D988[2 * v301 + 1]
                ^ dword_15E188[2 * BYTE6(v317) + 1];
            LODWORD(v62) = *(_DWORD *)(v267 + 8 * v592 + 4)
                         ^ *((_DWORD *)v814 - 1)
                         ^ ((unsigned __int64)(v269 + 241) >> 32)
                         ^ dword_15B188[2 * v595 + 1]
                         ^ *((_DWORD *)v430 - 1)
                         ^ *(_DWORD *)(v816 + 12)
                         ^ *((_DWORD *)v441 - 1)
                         ^ dword_15D988[2 * BYTE5(v317) + 1];
            v302 = v476 ^ v826;
            HIDWORD(v317) = dword_15E188[2 * v448]
                          ^ *(_DWORD *)(v267 + 8 * v456)
                          ^ (v269 + 161)
                          ^ HIDWORD(v62)
                          ^ *((_DWORD *)v611 - 2)
                          ^ *((_DWORD *)v621 - 2)
                          ^ *(_DWORD *)(v746 + 8)
                          ^ *((_DWORD *)v752 - 2)
                          ^ v515;
            v414 = *(_DWORD *)(v267 + 8 * v491 + 4)
                 ^ dword_15D988[2 * v482 + 1]
                 ^ ((unsigned __int64)(v269 + 177) >> 32)
                 ^ dword_15B188[2 * v520 + 1]
                 ^ *((_DWORD *)v629 - 1)
                 ^ *((_DWORD *)v758 - 1)
                 ^ *(_DWORD *)(v762 + 12)
                 ^ *((_DWORD *)v765 - 1)
                 ^ v501[1];
            v405 = dword_15D988[2 * v482]
                 ^ *(_DWORD *)(v267 + 8 * v491)
                 ^ (v269 + 177)
                 ^ dword_15B188[2 * v520]
                 ^ *((_DWORD *)v629 - 2)
                 ^ *((_DWORD *)v758 - 2)
                 ^ *(_DWORD *)(v762 + 8)
                 ^ *((_DWORD *)v765 - 2)
                 ^ dword_15E188[2 * v497];
            v457 = *((_DWORD *)v814 - 2)
                 ^ *(_DWORD *)(v267 + 8 * v592)
                 ^ (v269 + 241)
                 ^ dword_15B188[2 * v595]
                 ^ *((_DWORD *)v430 - 2)
                 ^ *(_DWORD *)(v816 + 8)
                 ^ *((_DWORD *)v441 - 2)
                 ^ dword_15D988[2 * v735]
                 ^ dword_15E188[2 * v604];
            v431 = *(_DWORD *)(v267 + 8 * v526 + 4)
                 ^ *((_DWORD *)v397 - 1)
                 ^ (__CFADD__((_DWORD)v269, 193) + HIDWORD(v269))
                 ^ dword_15B188[2 * v532 + 1]
                 ^ *((_DWORD *)v772 - 1)
                 ^ *((_DWORD *)v776 - 1)
                 ^ *(_DWORD *)(v780 + 12)
                 ^ v643[1]
                 ^ dword_15E188[2 * v542 + 1];
            LODWORD(v62) = v62 ^ dword_15E188[2 * v604 + 1];
            v449 = *((_DWORD *)v802 - 2)
                 ^ *(_DWORD *)(v267 + 8 * v581)
                 ^ (v269 + 225)
                 ^ dword_15B188[2 * v589]
                 ^ *((_DWORD *)v807 - 2)
                 ^ v66
                 ^ *((_DWORD *)v810 - 2)
                 ^ v67
                 ^ dword_15E188[2 * v308];
            v423 = dword_15B188[2 * v532]
                 ^ *((_DWORD *)v397 - 2)
                 ^ *(_DWORD *)(v267 + 8 * v526)
                 ^ (v269 + 193)
                 ^ *((_DWORD *)v772 - 2)
                 ^ *((_DWORD *)v776 - 2)
                 ^ *(_DWORD *)(v780 + 8)
                 ^ dword_15D988[2 * v538]
                 ^ dword_15E188[2 * v542];
            v309 = v701 ^ dword_15D988[2 * BYTE1(v34) + 1] ^ v829;
            v442 = *(_DWORD *)(v267 + 8 * v548)
                 ^ *(_DWORD *)(v783 + 8)
                 ^ (v269 + 209)
                 ^ dword_15B188[2 * v555]
                 ^ *((_DWORD *)v788 - 2)
                 ^ *((_DWORD *)v793 - 2)
                 ^ *((_DWORD *)v797 - 2)
                 ^ dword_15D988[2 * v565]
                 ^ dword_15E188[2 * v573];
            v398 = v65
                 ^ *((_DWORD *)v611 - 1)
                 ^ *((_DWORD *)v621 - 1)
                 ^ *(_DWORD *)(v746 + 12)
                 ^ *((_DWORD *)v752 - 1)
                 ^ v706;
            v477 = *(_DWORD *)(v783 + 12)
                 ^ *(_DWORD *)(v267 + 8 * v548 + 4)
                 ^ ((unsigned __int64)(v269 + 209) >> 32)
                 ^ dword_15B188[2 * v555 + 1]
                 ^ *((_DWORD *)v788 - 1)
                 ^ *((_DWORD *)v793 - 1)
                 ^ *((_DWORD *)v797 - 1)
                 ^ dword_15D988[2 * v565 + 1]
                 ^ v677[1];
            v556 = HIBYTE(v463);
            v574 = HIBYTE(v388);
            v516 = BYTE3(v62);
            v492 = v62;
            v566 = HIBYTE(HIDWORD(v369));
            v483 = v68;
            v549 = HIBYTE(v354);
            v612 = 8 * BYTE3(v288) + 1427840;
            v653 = &dword_15B188[2 * HIBYTE(v68)];
            v687 = &dword_15B188[2 * BYTE3(v62)];
            v784 = 8 * HIBYTE(v442) + 1427840;
            v794 = 8 * HIBYTE(v449) + 1427840;
            v69 = v820;
            v803 = 8 * HIBYTE(v457) + 1427840;
            v838 = HIBYTE(v398);
            v741 = 8 * HIBYTE(v302) + 1427840;
            v753 = 8 * HIBYTE(HIDWORD(v317)) + 1427840;
            v763 = 8 * HIBYTE(v405) + 1427840;
            v777 = 8 * HIBYTE(v423) + 1427840;
            v798 = &dword_15B188[2 * HIBYTE(HIDWORD(v369))];
            v781 = &dword_15B188[2 * HIBYTE(v354)];
            v789 = &dword_15B188[2 * HIBYTE(v463)];
            v70 = BYTE1(v820);
            v811 = &dword_15B188[2 * HIBYTE(v388)];
            v815 = &dword_15B188[2 * HIBYTE(v309)];
            v827 = &dword_15B188[2 * HIBYTE(v398)];
            v821 = 8 * HIBYTE(v820) + 1427840;
            v832 = 8 * HIBYTE(v280) + 1427840;
            v71 = &qword_15D190[BYTE4(v288)];
            v72 = &qword_15B990[v70];
            v73 = BYTE2(v463);
            v74 = &qword_15C190[BYTE2(v280)];
            v75 = BYTE1(v463);
            v635 = &qword_15D190[(unsigned __int8)v463];
            v644 = *((_DWORD *)v71 - 2);
            v678 = *((_DWORD *)v71 - 1);
            v269 += 2;
            v830 = &qword_15C190[BYTE2(v69)];
            v464 = BYTE2(v354);
            v76 = BYTE6(v369);
            v77 = &qword_15D190[(unsigned __int8)v354];
            v78 = &qword_15B990[BYTE1(v280)];
            v79 = &qword_15C190[BYTE2(v338)];
            v596 = &qword_15B990[BYTE1(v338)];
            v766 = dword_15D988[2 * v75];
            LODWORD(v62) = dword_15D988[2 * BYTE1(v354) + 1]
                         ^ dword_15B188[2 * HIBYTE(v414) + 1]
                         ^ *(_DWORD *)(v267 + 8 * (unsigned __int8)v274 + 4)
                         ^ *((_DWORD *)v72 - 1)
                         ^ *((_DWORD *)v74 - 1);
            v817 = dword_15D988[2 * v75 + 1];
            HIDWORD(v62) = dword_15D988[2 * BYTE1(v354)]
                         ^ dword_15B188[2 * HIBYTE(v414)]
                         ^ *(_DWORD *)(v267 + 8 * (unsigned __int8)v274)
                         ^ *((_DWORD *)v72 - 2)
                         ^ *((_DWORD *)v74 - 2);
            v80 = BYTE4(v369);
            v630 = &qword_15C190[BYTE2(v469)];
            v81 = BYTE5(v369);
            HIDWORD(v369) = (unsigned __int8)v469;
            v671 = &qword_15D190[v80];
            v82 = BYTE2(v388);
            v660 = &qword_15B990[BYTE1(v469)];
            LODWORD(v587) = HIDWORD(v62) ^ LODWORD(qword_15C988[HIBYTE(v338)]) ^ v644 ^ dword_15E188[2 * v73];
            LODWORD(v62) = v62 ^ HIDWORD(qword_15C988[HIBYTE(v338)]) ^ v678;
            LOWORD(v80) = v388;
            HIDWORD(v62) = *((_DWORD *)v78 - 2);
            v389 = (unsigned __int8)v288;
            v645 = &qword_15C190[BYTE2(v288)];
            v679 = &qword_15B990[BYTE1(v288)];
            v83 = *((_DWORD *)v77 - 1)
                ^ *(_DWORD *)(v267 + 8 * (unsigned __int8)v69 + 4)
                ^ dword_15B188[2 * HIBYTE(v431) + 1]
                ^ *((_DWORD *)v78 - 1);
            HIDWORD(v62) ^= *(_DWORD *)(v267 + 8 * (unsigned __int8)v69)
                          ^ *((_DWORD *)v77 - 2)
                          ^ dword_15B188[2 * HIBYTE(v431)]
                          ^ *((_DWORD *)v79 - 2);
            v707 = &qword_15D190[(unsigned __int8)v80];
            v693 = &qword_15C190[BYTE2(v362)];
            v84 = BYTE2(v309);
            HIDWORD(v587) = v62 ^ dword_15E188[2 * v73 + 1];
            LODWORD(v288) = BYTE1(v309);
            v729 = &qword_15D190[(unsigned __int8)v309];
            v310 = BYTE2(v398);
            v496 = HIDWORD(v62) ^ LODWORD(qword_15C988[HIBYTE(v469)]) ^ v766 ^ dword_15E188[2 * v76];
            v467 = v83 ^ *((_DWORD *)v79 - 1) ^ HIDWORD(qword_15C988[HIBYTE(v469)]) ^ v817 ^ dword_15E188[2 * v76 + 1];
            v767 = *((_DWORD *)v635 - 1);
            v85 = *(_DWORD *)(v267 + 8 * (unsigned __int8)v280)
                ^ *(_DWORD *)(v612 + 8)
                ^ dword_15B188[2 * HIBYTE(v477)]
                ^ *((_DWORD *)v596 - 2);
            HIDWORD(v62) = *(_DWORD *)(v267 + 8 * (unsigned __int8)v280 + 4)
                         ^ *(_DWORD *)(v612 + 12)
                         ^ dword_15B188[2 * HIBYTE(v477) + 1]
                         ^ *((_DWORD *)v596 - 1);
            v597 = *(_DWORD *)(v267 + 8 * (unsigned __int8)v338);
            v86 = *v653;
            v87 = *((_DWORD *)v630 - 2) ^ v85 ^ *((_DWORD *)v635 - 2) ^ dword_15D988[2 * v81] ^ dword_15E188[2 * v82];
            v824 = (unsigned __int8)v362;
            v613 = &qword_15B990[BYTE1(v362)];
            v622 = &qword_15C190[BYTE2(v369)];
            v281 = BYTE1(v398);
            v636 = &qword_15D190[(unsigned __int8)v398];
            v833 = (unsigned __int8)v369;
            v399 = &qword_15B990[BYTE1(v369)];
            v507 = HIDWORD(v62) ^ *((_DWORD *)v630 - 1) ^ v767 ^ dword_15D988[2 * v81 + 1] ^ dword_15E188[2 * v82 + 1];
            v88 = qword_15C988[HIBYTE(v362)];
            v631 = &qword_15C190[BYTE2(v379)];
            v500 = v87;
            v89 = HIDWORD(qword_15C988[HIBYTE(v362)]);
            v90 = *((_DWORD *)v671 - 1);
            v91 = *((_DWORD *)v660 - 1);
            v92 = *((_DWORD *)v660 - 2);
            HIDWORD(v62) = *((_DWORD *)v645 - 2);
            v93 = *(_DWORD *)(v267 + 8 * (unsigned __int8)v338 + 4) ^ *((_DWORD *)v645 - 1) ^ v653[1];
            v339 = BYTE1(v414);
            v363 = (unsigned __int8)v379;
            v661 = &qword_15D190[(unsigned __int8)v414];
            v355 = BYTE2(v431);
            v646 = &qword_15B990[BYTE1(v379)];
            v654 = &qword_15C190[BYTE2(v302)];
            v835 = BYTE1(v431);
            v768 = &qword_15D190[(unsigned __int8)v431];
            v836 = BYTE2(v477);
            v837 = (unsigned __int8)v302;
            v667 = &qword_15B990[BYTE1(v302)];
            v593 = HIDWORD(v62)
                 ^ v597
                 ^ v86
                 ^ v92
                 ^ v88
                 ^ *((_DWORD *)v671 - 2)
                 ^ dword_15D988[2 * BYTE1(v80)]
                 ^ dword_15E188[2 * v84];
            v672 = &qword_15C190[BYTE6(v317)];
            v603 = v93 ^ v91 ^ v89 ^ v90 ^ dword_15D988[2 * BYTE1(v80) + 1] ^ dword_15E188[2 * v84 + 1];
            v94 = dword_15D988[2 * (_DWORD)v288];
            v95 = dword_15E188[2 * v310 + 1];
            HIDWORD(v62) = *((_DWORD *)v679 - 2)
                         ^ *(_DWORD *)(v267 + 8 * HIDWORD(v369))
                         ^ dword_15B188[2 * v516]
                         ^ *((_DWORD *)v693 - 2);
            v96 = dword_15E188[2 * v310];
            v97 = dword_15D988[2 * (_DWORD)v288 + 1]
                ^ *(_DWORD *)(v267 + 8 * HIDWORD(v369) + 4)
                ^ *((_DWORD *)v679 - 1)
                ^ v687[1]
                ^ *((_DWORD *)v693 - 1)
                ^ HIDWORD(qword_15C988[BYTE3(v369)])
                ^ *((_DWORD *)v707 - 1);
            v432 = dword_15D988[2 * v281 + 1];
            v98 = BYTE2(v414);
            v415 = dword_15D988[2 * v281];
            LODWORD(v288) = BYTE1(v477);
            v694 = &qword_15D190[(unsigned __int8)v477];
            v303 = BYTE2(v483);
            HIDWORD(v369) = BYTE4(v317);
            v680 = &qword_15B990[BYTE5(v317)];
            v688 = &qword_15C190[BYTE2(v405)];
            v311 = BYTE1(v483);
            v702 = &qword_15D190[(unsigned __int8)v483];
            HIDWORD(v317) = BYTE2(v492);
            LODWORD(v474) = HIDWORD(v62) ^ LODWORD(qword_15C988[BYTE3(v369)]) ^ *((_DWORD *)v707 - 2) ^ v94 ^ v96;
            LODWORD(v369) = BYTE2(v329);
            HIDWORD(v474) = v97 ^ v95;
            v99 = *(_QWORD *)(v267 + 8 * v389)
                ^ *(_QWORD *)&dword_15B188[2 * HIBYTE(v329)]
                ^ *(v613 - 1)
                ^ *(v622 - 1)
                ^ qword_15C988[HIBYTE(v379)]
                ^ *(v729 - 1);
            v100 = dword_15B188[2 * BYTE3(v317)] ^ *(_DWORD *)(v267 + 8 * v824);
            HIDWORD(v62) = dword_15D988[2 * v339];
            v818 = dword_15E188[2 * v355 + 1];
            v101 = dword_15E188[2 * v355];
            v356 = (unsigned __int8)v405;
            v614 = &qword_15B990[BYTE1(v405)];
            v527 = v101;
            v102 = dword_15D988[2 * v339 + 1];
            v533 = &qword_15C190[BYTE2(v423)];
            v340 = BYTE1(v492);
            v713 = &qword_15D190[(unsigned __int8)v492];
            v103 = &qword_15D190[(unsigned __int8)v329];
            v330 = BYTE1(v329);
            v282 = v103;
            v390 = (unsigned __int8)v423;
            v623 = &qword_15B990[BYTE1(v423)];
            v380 = BYTE2(v317);
            v708 = &qword_15C190[BYTE2(v442)];
            v513 = dword_15E188[2 * v98 + 1] ^ HIDWORD(v99) ^ v432;
            v489 = v99 ^ v415 ^ dword_15E188[2 * v98];
            v721 = &qword_15B990[BYTE1(v442)];
            v406 = (unsigned __int8)v442;
            v730 = &qword_15C190[BYTE2(v449)];
            v104 = dword_15B188[2 * BYTE3(v317) + 1]
                 ^ *(_DWORD *)(v267 + 8 * v824 + 4)
                 ^ *((_DWORD *)v399 - 1)
                 ^ *((_DWORD *)v631 - 1);
            v105 = (unsigned __int8)v317;
            LODWORD(v317) = BYTE1(v317);
            v747 = &qword_15D190[v105];
            v736 = &qword_15B990[BYTE1(v449)];
            v424 = (unsigned __int8)v449;
            v106 = v100 ^ *((_DWORD *)v399 - 2) ^ *((_DWORD *)v631 - 2) ^ *(_DWORD *)(v741 + 8) ^ *((_DWORD *)v636 - 2);
            v107 = v104 ^ *(_DWORD *)(v741 + 12) ^ *((_DWORD *)v636 - 1) ^ v102;
            v637 = &qword_15C190[BYTE2(v457)];
            v823 = &qword_15D190[(unsigned __int8)v324];
            v416 = BYTE2(v348);
            v825 = &qword_15B990[BYTE1(v274)];
            v742 = &qword_15C190[BYTE2(v274)];
            v447 = v107 ^ v818;
            v433 = (unsigned __int8)v457;
            v438 = HIDWORD(v62) ^ v106 ^ v527;
            v819 = &qword_15B990[BYTE1(v457)];
            v108 = *(_QWORD *)(v753 + 8);
            v109 = *((_DWORD *)v646 - 1)
                 ^ *(_DWORD *)(v267 + 8 * v833 + 4)
                 ^ dword_15B188[2 * HIBYTE(v324) + 1]
                 ^ *((_DWORD *)v654 - 1)
                 ^ HIDWORD(v108);
            v110 = *(_DWORD *)(v267 + 8 * v833)
                 ^ dword_15B188[2 * HIBYTE(v324)]
                 ^ *((_DWORD *)v646 - 2)
                 ^ *((_DWORD *)v654 - 2)
                 ^ v108;
            v111 = *(v661 - 1);
            v112 = v110 ^ v111;
            v113 = v109 ^ HIDWORD(v111) ^ dword_15D988[2 * v835 + 1];
            LODWORD(v111) = *(_DWORD *)(v267 + 8 * v363 + 4) ^ dword_15B188[2 * HIBYTE(v348) + 1];
            HIDWORD(v111) = dword_15B188[2 * HIBYTE(v348)] ^ *(_DWORD *)(v267 + 8 * v363);
            v114 = dword_15E188[2 * v303 + 1];
            v115 = dword_15E188[2 * v303];
            v360 = v113 ^ dword_15E188[2 * v836 + 1];
            v299 = v112 ^ dword_15D988[2 * v835] ^ dword_15E188[2 * v836];
            v647 = &dword_15D988[2 * BYTE1(v324)];
            v655 = &dword_15E188[2 * BYTE2(v348)];
            v454 = HIDWORD(v111)
                 ^ *((_DWORD *)v667 - 2)
                 ^ *((_DWORD *)v672 - 2)
                 ^ *(_DWORD *)(v763 + 8)
                 ^ *((_DWORD *)v768 - 2)
                 ^ dword_15D988[2 * (_DWORD)v288]
                 ^ v115;
            v519 = v111
                 ^ *((_DWORD *)v667 - 1)
                 ^ *((_DWORD *)v672 - 1)
                 ^ *(_DWORD *)(v763 + 12)
                 ^ *((_DWORD *)v768 - 1)
                 ^ dword_15D988[2 * (_DWORD)v288 + 1]
                 ^ v114;
            v116 = dword_15D988[2 * v311]
                 ^ dword_15B188[2 * HIBYTE(HIDWORD(v288))]
                 ^ *(_DWORD *)(v267 + 8 * v837)
                 ^ *((_DWORD *)v680 - 2)
                 ^ *((_DWORD *)v688 - 2)
                 ^ *(_DWORD *)(v777 + 8)
                 ^ *((_DWORD *)v694 - 2);
            LODWORD(v99) = dword_15B188[2 * HIBYTE(HIDWORD(v288)) + 1]
                         ^ *(_DWORD *)(v267 + 8 * v837 + 4)
                         ^ *((_DWORD *)v680 - 1)
                         ^ *((_DWORD *)v688 - 1)
                         ^ *(_DWORD *)(v777 + 12)
                         ^ *((_DWORD *)v694 - 1)
                         ^ dword_15D988[2 * v311 + 1];
            v117 = dword_15E188[2 * (_DWORD)v369] ^ *(_DWORD *)(v267 + 8 * HIDWORD(v369)) ^ dword_15B188[2 * v549];
            v681 = dword_15D988[2 * v340 + 1];
            v550 = dword_15D988[2 * v340];
            v523 = v99 ^ dword_15E188[2 * HIDWORD(v317) + 1];
            v341 = &qword_15D190[(unsigned __int8)v348];
            LODWORD(v111) = v614;
            v615 = BYTE1(v348);
            v346 = v116 ^ dword_15E188[2 * HIDWORD(v317)];
            v118 = *((_DWORD *)v282 - 1)
                 ^ *(_DWORD *)(v267 + 8 * v390 + 4)
                 ^ v798[1]
                 ^ *((_DWORD *)v721 - 1)
                 ^ *((_DWORD *)v730 - 1)
                 ^ *(_DWORD *)(v803 + 12)
                 ^ dword_15D988[2 * (_DWORD)v317 + 1];
            HIDWORD(v99) = *((_DWORD *)v282 - 2)
                         ^ *(_DWORD *)(v267 + 8 * v390)
                         ^ dword_15B188[2 * v566]
                         ^ *((_DWORD *)v721 - 2)
                         ^ *((_DWORD *)v730 - 2)
                         ^ *(_DWORD *)(v803 + 8)
                         ^ dword_15D988[2 * (_DWORD)v317]
                         ^ dword_15E188[2 * BYTE2(v324)];
            v394 = dword_15E188[2 * (_DWORD)v369 + 1]
                 ^ *(_DWORD *)(v267 + 8 * HIDWORD(v369) + 4)
                 ^ v781[1]
                 ^ *(_DWORD *)(v111 - 4)
                 ^ *((_DWORD *)v533 - 1)
                 ^ *(_DWORD *)(v784 + 12)
                 ^ *((_DWORD *)v702 - 1)
                 ^ v681;
            v278 = v117
                 ^ *(_DWORD *)(v111 - 8)
                 ^ *((_DWORD *)v533 - 2)
                 ^ *(_DWORD *)(v784 + 8)
                 ^ *((_DWORD *)v702 - 2)
                 ^ v550;
            v367 = dword_15D988[2 * v330 + 1]
                 ^ *(_DWORD *)(v267 + 8 * v356 + 4)
                 ^ v789[1]
                 ^ *((_DWORD *)v623 - 1)
                 ^ *((_DWORD *)v708 - 1)
                 ^ *(_DWORD *)(v794 + 12)
                 ^ *((_DWORD *)v713 - 1)
                 ^ dword_15E188[2 * v380 + 1];
            v352 = *(_DWORD *)(v267 + 8 * v356)
                 ^ dword_15D988[2 * v330]
                 ^ dword_15B188[2 * v556]
                 ^ *((_DWORD *)v623 - 2)
                 ^ *((_DWORD *)v708 - 2)
                 ^ *(_DWORD *)(v794 + 8)
                 ^ *((_DWORD *)v713 - 2)
                 ^ dword_15E188[2 * v380];
            v373 = HIDWORD(v99);
            v384 = v118 ^ dword_15E188[2 * BYTE2(v324) + 1];
            v119 = *(_DWORD *)(v832 + 12)
                 ^ v827[1]
                 ^ *(_DWORD *)(v267 + 8 * v433 + 4)
                 ^ *((_DWORD *)v825 - 1)
                 ^ dword_15E188[2 * v464 + 1]
                 ^ *((_DWORD *)v830 - 1)
                 ^ *((_DWORD *)v341 - 1);
            v17 = *((_DWORD *)v341 - 2)
                ^ *((_DWORD *)v830 - 2)
                ^ dword_15B188[2 * v838]
                ^ *(_DWORD *)(v267 + 8 * v433)
                ^ *((_DWORD *)v825 - 2)
                ^ dword_15E188[2 * v464]
                ^ *(_DWORD *)(v832 + 8)
                ^ dword_15D988[2 * BYTE5(v288)];
            v120 = dword_15D988[2 * BYTE5(v288) + 1];
            v16 = dword_15E188[2 * BYTE6(v288)]
                ^ *((_DWORD *)v823 - 2)
                ^ *((_DWORD *)v819 - 2)
                ^ *((_DWORD *)v742 - 2)
                ^ *(_DWORD *)(v267 + 8 * v424)
                ^ *v815
                ^ *(_DWORD *)(v821 + 8)
                ^ dword_15D988[2 * v615];
            v410 = *(_DWORD *)(v267 + 8 * v406)
                 ^ LODWORD(qword_15C988[HIBYTE(v274)])
                 ^ dword_15B188[2 * v574]
                 ^ *((_DWORD *)v736 - 2)
                 ^ *((_DWORD *)v637 - 2)
                 ^ *((_DWORD *)v747 - 2)
                 ^ *v647
                 ^ dword_15E188[2 * v416];
            v531 = *(_DWORD *)(v267 + 8 * v424 + 4)
                 ^ *((_DWORD *)v742 - 1)
                 ^ v815[1]
                 ^ *((_DWORD *)v819 - 1)
                 ^ *(_DWORD *)(v821 + 12)
                 ^ *((_DWORD *)v823 - 1)
                 ^ dword_15D988[2 * v615 + 1]
                 ^ dword_15E188[2 * BYTE6(v288) + 1];
            v536 = v119 ^ v120;
            v461 = v647[1]
                 ^ *(_DWORD *)(v267 + 8 * v406 + 4)
                 ^ HIDWORD(qword_15C988[HIBYTE(v274)])
                 ^ v811[1]
                 ^ *((_DWORD *)v736 - 1)
                 ^ *((_DWORD *)v637 - 1)
                 ^ *((_DWORD *)v747 - 1)
                 ^ v655[1];
          }
          while ( v269 != 14 );
          v121 = v267;
          v844 = v587;
          v268 = -1;
          v845 = v496;
          v846 = v467;
          v847 = v500;
          v848 = v507;
          v849 = v593;
          v850 = v603;
          v851 = v474;
          v852 = v489;
          v853 = v513;
          v854 = v438;
          v855 = v447;
          v856 = v299;
          v873 = v119 ^ v120;
          v870 = v16;
          v857 = v360;
          v872 = v17;
          v858 = v454;
          v859 = v519;
          v860 = v346;
          v861 = v523;
          v862 = v278;
          v863 = v394;
          v864 = v352;
          v865 = v367;
          v866 = v373;
          v867 = v384;
          v868 = v410;
          v869 = v461;
          v871 = v531;
          v357 = v874;
          v517 = v875;
          v370 = v876;
          v375 = v877;
          v381 = v878;
          v391 = v879;
          v400 = v880;
          v407 = v881;
          v417 = v882;
          v543 = v883;
          v425 = v884;
          v502 = v885;
          v434 = v886;
          v450 = v887;
          v443 = v888;
          v458 = v889;
          v470 = v890;
          v122 = v897;
          v478 = v891;
          v123 = v899;
          v124 = v903;
          v125 = v121;
          v465 = v892;
          v283 = v901;
          v484 = v893;
          v331 = v902;
          v493 = v894;
          v312 = v895;
          v508 = v896;
          v270 = v898;
          v275 = v900;
          v126 = v904;
          do
          {
            v318 = ~v381;
            v304 = v517 ^ HIDWORD(v268);
            v289 = ~v400;
            v342 = ~v434;
            v325 = ~v417;
            v127 = ~v370;
            v128 = ~v312;
            v129 = ~v425;
            v401 = ~v122;
            v130 = ~v443;
            v349 = ~v470;
            v426 = ~v283;
            v295 = ~v357;
            v444 = ~v124;
            v313 = v375 ^ HIDWORD(v268) ^ 0x10000000;
            v321 = v407 ^ HIDWORD(v268) ^ 0x30000000;
            v284 = v391 ^ HIDWORD(v268) ^ 0x20000000;
            v131 = v450 ^ HIDWORD(v268) ^ 0x60000000;
            v358 = v478 ^ (HIDWORD(v268) + 0x80000000);
            v371 = v484 ^ HIDWORD(v268) ^ 0x90000000;
            v382 = HIDWORD(v493) ^ HIDWORD(v268) ^ 0xA0000000;
            v392 = v508 ^ HIDWORD(v268) ^ 0xB0000000;
            v408 = v270 ^ HIDWORD(v268) ^ 0xC0000000;
            v418 = v275 ^ HIDWORD(v268) ^ 0xD0000000;
            HIDWORD(v493) = v458 ^ HIDWORD(v268) ^ 0x70000000;
            v435 = HIDWORD(v268) ^ 0xE0000000 ^ v331;
            v509 = ~v123;
            v451 = HIDWORD(v268) ^ 0xF0000000 ^ v126;
            v485 = v131;
            v459 = v129;
            v364 = ~v465;
            v376 = ~(_DWORD)v493;
            v132 = v502;
            v503 = v128;
            v332 = v132 ^ HIDWORD(v268) ^ 0x50000000;
            LOWORD(v493) = v130;
            v479 = v127;
            v785 = HIBYTE(v435);
            v790 = HIBYTE(v451);
            v799 = ((unsigned int)v517 ^ HIDWORD(v268)) >> 24;
            v812 = HIBYTE(v313);
            v518 = HIBYTE(v284);
            v668 = 8 * HIBYTE(v129) + 1427840;
            v616 = 8 * ((unsigned int)~v124 >> 24) + 1427840;
            v673 = 8 * HIBYTE(v342) + 1427840;
            v557 = 8 * HIBYTE(v128) + 1427840;
            v575 = 8 * ((unsigned int)~v123 >> 24) + 1427840;
            v689 = 8 * HIBYTE(v130) + 1427840;
            v662 = 8 * HIBYTE(v325) + 1427840;
            v638 = 8 * HIBYTE(v127) + 1427840;
            v521 = HIBYTE(v321);
            v656 = 8 * HIBYTE(v289) + 1427840;
            v133 = v543 ^ HIDWORD(v268) ^ 0x40000000;
            v528 = HIBYTE(v133);
            v134 = &qword_15D190[(unsigned __int8)v313];
            v539 = HIBYTE(v332);
            v135 = &qword_15C190[BYTE2(v342)];
            v695 = 8 * ((unsigned int)~v470 >> 24) + 1427840;
            v136 = &qword_15B990[BYTE1(v325)];
            v709 = dword_15B188[2 * HIBYTE(v131) + 1];
            v682 = dword_15B188[2 * HIBYTE(v131)];
            v714 = BYTE1(v284);
            v471 = &qword_15B990[BYTE1(v289)];
            v544 = &qword_15C190[BYTE2(v459)];
            v567 = &qword_15D190[(unsigned __int8)v304];
            v137 = *((_DWORD *)v134 - 2)
                 ^ ~*(_DWORD *)(v125 + 8 * (unsigned __int8)v318)
                 ^ dword_15B188[2 * HIBYTE(HIDWORD(v493))]
                 ^ *((_DWORD *)v136 - 2)
                 ^ *((_DWORD *)v135 - 2)
                 ^ LODWORD(qword_15C988[HIBYTE(v401)]);
            v276 = 0xFFFFFF - HIDWORD(v268);
            v582 = &qword_15D190[(unsigned __int8)v284];
            v534 = BYTE2(v284);
            v722 = (unsigned __int8)v289;
            v138 = *((_DWORD *)v134 - 1)
                 ^ *((_DWORD *)v135 - 1)
                 ^ *(_DWORD *)(v125 + 8 * (unsigned __int8)v318 + 4)
                 ^ ~((0xFFFFFF - HIDWORD(v268)) ^ 0x10000000)
                 ^ dword_15B188[2 * HIBYTE(HIDWORD(v493)) + 1]
                 ^ *((_DWORD *)v136 - 1)
                 ^ HIDWORD(qword_15C988[HIBYTE(v401)])
                 ^ dword_15D988[2 * BYTE1(v321) + 1];
            v703 = &qword_15C190[BYTE2(v289)];
            v754 = (unsigned __int8)v459;
            v285 = &qword_15B990[BYTE1(v459)];
            v139 = &qword_15C190[BYTE2(v130)];
            v624 = &qword_15D190[(unsigned __int8)v133];
            v743 = BYTE2(v131);
            v466 = v138 ^ dword_15E188[2 * BYTE2(v332) + 1];
            v551 = BYTE2(v321);
            v140 = dword_15D988[2 * v714];
            v605 = &qword_15D190[(unsigned __int8)v321];
            v460 = v137 ^ dword_15D988[2 * BYTE1(v321)] ^ dword_15E188[2 * BYTE2(v332)];
            v141 = dword_15D988[2 * v714 + 1];
            v142 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v479 + 4) ^ v709 ^ (HIDWORD(v268) - 0xFFFFFF);
            HIDWORD(v268) -= 0x1FFFFFF;
            v143 = v142 ^ *((_DWORD *)v471 - 1);
            v144 = *((_DWORD *)v471 - 2) ^ ~(*(_DWORD *)(v125 + 8 * (unsigned __int8)v479) ^ v682);
            v145 = (unsigned __int8)v325;
            v472 = &qword_15C190[BYTE2(v325)];
            v715 = (unsigned __int8)v342;
            v290 = &qword_15B990[BYTE1(v342)];
            v146 = v143 ^ *((_DWORD *)v544 - 1) ^ *(_DWORD *)(v557 + 12) ^ *((_DWORD *)v567 - 1) ^ v141;
            v147 = &qword_15C190[BYTE2(v349)];
            v148 = v144
                 ^ *((_DWORD *)v544 - 2)
                 ^ *(_DWORD *)(v557 + 8)
                 ^ *((_DWORD *)v567 - 2)
                 ^ v140
                 ^ dword_15E188[2 * BYTE2(v133)];
            v545 = &qword_15D190[(unsigned __int8)v332];
            v149 = *((_DWORD *)v582 - 2);
            v322 = v148;
            v150 = *((_DWORD *)v582 - 1);
            v326 = v146 ^ dword_15E188[2 * BYTE2(v133) + 1];
            v343 = BYTE1(v332);
            v583 = BYTE6(v493);
            v683 = HIBYTE(v485);
            v568 = &qword_15D190[(unsigned __int8)v485];
            v151 = &qword_15B990[BYTE1(v493)];
            v778 = (unsigned __int8)v349;
            v486 = &qword_15B990[BYTE1(v349)];
            v333 = *((_DWORD *)v139 - 1)
                 ^ *(_DWORD *)(v125 + 8 * v722 + 4)
                 ^ v276
                 ^ 0xDFFFFFFF
                 ^ dword_15B188[2 * HIBYTE(v358) + 1]
                 ^ *((_DWORD *)v285 - 1)
                 ^ *(_DWORD *)(v575 + 12)
                 ^ v150
                 ^ dword_15D988[2 * BYTE1(v133) + 1]
                 ^ dword_15E188[2 * v743 + 1];
            v286 = ~*(_DWORD *)(v125 + 8 * v722)
                 ^ dword_15B188[2 * HIBYTE(v358)]
                 ^ *((_DWORD *)v285 - 2)
                 ^ *((_DWORD *)v139 - 2)
                 ^ *(_DWORD *)(v575 + 8)
                 ^ v149
                 ^ dword_15D988[2 * BYTE1(v133)]
                 ^ dword_15E188[2 * v743];
            v723 = BYTE5(v493);
            v152 = *((_DWORD *)v605 - 2)
                 ^ *((_DWORD *)v147 - 2)
                 ^ dword_15B188[2 * HIBYTE(v371)]
                 ^ ~*(_DWORD *)(v125 + 8 * v145)
                 ^ *((_DWORD *)v290 - 2)
                 ^ LODWORD(qword_15C988[HIBYTE(v426)]);
            v598 = &qword_15D190[BYTE4(v493)];
            v153 = *((_DWORD *)v605 - 1)
                 ^ *((_DWORD *)v147 - 1)
                 ^ *((_DWORD *)v290 - 1)
                 ^ *(_DWORD *)(v125 + 8 * v145 + 4)
                 ^ v276
                 ^ 0xCFFFFFFF
                 ^ dword_15B188[2 * HIBYTE(v371) + 1]
                 ^ HIDWORD(qword_15C988[HIBYTE(v426)]);
            HIDWORD(v493) = &qword_15B990[BYTE1(v364)];
            v558 = &qword_15C190[BYTE2(v503)];
            v737 = BYTE1(v358);
            v606 = &qword_15D190[(unsigned __int8)v358];
            v291 = v153 ^ dword_15D988[2 * v343 + 1] ^ dword_15E188[2 * v583 + 1];
            v344 = v152 ^ dword_15D988[2 * v343] ^ dword_15E188[2 * v583];
            v154 = *((_DWORD *)v624 - 2);
            v576 = &qword_15B990[BYTE1(v376)];
            v155 = dword_15B188[2 * HIBYTE(v382) + 1]
                 ^ v276
                 ^ 0xBFFFFFFF
                 ^ *(_DWORD *)(v125 + 8 * v754 + 4)
                 ^ *((_DWORD *)v151 - 1)
                 ^ HIDWORD(qword_15C190[BYTE2(v364) - 1])
                 ^ *(_DWORD *)(v616 + 12)
                 ^ *((_DWORD *)v624 - 1);
            v625 = &qword_15D190[(unsigned __int8)v371];
            v744 = BYTE1(v371);
            v156 = v154
                 ^ *(_DWORD *)(v616 + 8)
                 ^ ~*(_DWORD *)(v125 + 8 * v754)
                 ^ dword_15B188[2 * HIBYTE(v382)]
                 ^ *((_DWORD *)v151 - 2)
                 ^ LODWORD(qword_15C190[BYTE2(v364) - 1])
                 ^ dword_15D988[2 * v683];
            v755 = (unsigned __int8)v364;
            v710 = 8 * HIBYTE(v364) + 1427840;
            v350 = v156 ^ dword_15E188[2 * BYTE2(v358)];
            v359 = dword_15D988[2 * v683 + 1] ^ v155 ^ dword_15E188[2 * BYTE2(v358) + 1];
            v157 = &qword_15C190[BYTE2(v376)];
            v158 = (unsigned __int8)v503;
            v504 = &qword_15B990[BYTE1(v503)];
            v795 = v158;
            v759 = BYTE1(v382);
            v632 = &qword_15D190[(unsigned __int8)v382];
            v159 = dword_15D988[2 * v723];
            v160 = dword_15D988[2 * v723 + 1];
            v724 = (unsigned __int8)v376;
            v365 = *((_DWORD *)v545 - 2)
                 ^ ~*(_DWORD *)(v125 + 8 * v715)
                 ^ dword_15B188[2 * HIBYTE(v392)]
                 ^ *((_DWORD *)v486 - 2)
                 ^ *((_DWORD *)v157 - 2)
                 ^ LODWORD(qword_15C988[HIBYTE(v295)])
                 ^ v159
                 ^ dword_15E188[2 * BYTE2(v371)];
            v808 = (unsigned __int8)v401;
            v731 = 8 * HIBYTE(v376) + 1427840;
            v372 = *((_DWORD *)v486 - 1)
                 ^ *(_DWORD *)(v125 + 8 * v715 + 4)
                 ^ v276
                 ^ 0xAFFFFFFF
                 ^ dword_15B188[2 * HIBYTE(v392) + 1]
                 ^ *((_DWORD *)v157 - 1)
                 ^ HIDWORD(qword_15C988[HIBYTE(v295)])
                 ^ *((_DWORD *)v545 - 1)
                 ^ v160
                 ^ dword_15E188[2 * BYTE2(v371) + 1];
            v617 = &qword_15B990[BYTE1(v401)];
            v161 = &qword_15C190[BYTE2(v426)];
            v162 = *((_DWORD *)v558 - 2);
            v769 = BYTE1(v392);
            v163 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v493 + 4)
                 ^ v276
                 ^ 0x9FFFFFFF
                 ^ dword_15B188[2 * HIBYTE(v408) + 1]
                 ^ *(_DWORD *)(HIDWORD(v493) - 4)
                 ^ *((_DWORD *)v558 - 1);
            v684 = &qword_15D190[(unsigned __int8)v392];
            v773 = BYTE2(v418);
            v487 = (unsigned __int8)v509;
            v559 = &qword_15B990[BYTE1(v509)];
            v164 = &qword_15C190[BYTE2(v444)];
            v165 = ~*(_DWORD *)(v125 + 8 * (unsigned __int8)v493)
                 ^ dword_15B188[2 * HIBYTE(v408)]
                 ^ *(_DWORD *)(HIDWORD(v493) - 8)
                 ^ v162
                 ^ *(_DWORD *)(v638 + 8)
                 ^ *((_DWORD *)v568 - 2)
                 ^ dword_15D988[2 * v737];
            v166 = v163 ^ *(_DWORD *)(v638 + 12) ^ *((_DWORD *)v568 - 1) ^ dword_15D988[2 * v737 + 1];
            v804 = BYTE1(v408);
            v639 = &qword_15D190[(unsigned __int8)v408];
            v377 = v165 ^ dword_15E188[2 * BYTE2(v382)];
            v383 = v166 ^ dword_15E188[2 * BYTE2(v382) + 1];
            v167 = &qword_15C190[BYTE2(v401)];
            v494 = (unsigned __int8)v426;
            v168 = BYTE2(v435);
            v427 = &qword_15B990[BYTE1(v426)];
            v169 = *((_DWORD *)v576 - 1)
                 ^ *(_DWORD *)(v125 + 8 * v778 + 4)
                 ^ ~(v276 ^ 0x70000000)
                 ^ dword_15B188[2 * HIBYTE(v418) + 1]
                 ^ *((_DWORD *)v167 - 1)
                 ^ HIDWORD(qword_15C988[HIBYTE(v318)])
                 ^ *((_DWORD *)v598 - 1);
            v170 = *((_DWORD *)v598 - 2)
                 ^ dword_15B188[2 * HIBYTE(v418)]
                 ^ ~*(_DWORD *)(v125 + 8 * v778)
                 ^ *((_DWORD *)v576 - 2)
                 ^ *((_DWORD *)v167 - 2)
                 ^ LODWORD(qword_15C988[HIBYTE(v318)]);
            v569 = &qword_15C190[BYTE2(v295)];
            v171 = &qword_15D190[(unsigned __int8)v418];
            v419 = BYTE1(v418);
            v648 = v171;
            v599 = BYTE2(v451);
            v172 = (unsigned __int8)v435;
            v436 = BYTE1(v435);
            v716 = &qword_15D190[v172];
            v173 = dword_15E188[2 * BYTE2(v392) + 1];
            v393 = v170 ^ dword_15D988[2 * v744] ^ dword_15E188[2 * BYTE2(v392)];
            v402 = dword_15D988[2 * v744 + 1] ^ v169 ^ v173;
            LOBYTE(v170) = v451;
            v452 = BYTE1(v451);
            v174 = &qword_15C190[BYTE2(v509)];
            v738 = &qword_15D190[(unsigned __int8)v170];
            v498 = BYTE2(v313);
            v546 = BYTE1(v313);
            v175 = *(_DWORD *)(v656 + 8)
                 ^ *((_DWORD *)v174 - 2)
                 ^ *((_DWORD *)v504 - 2)
                 ^ ~*(_DWORD *)(v125 + 8 * v755)
                 ^ dword_15B188[2 * v785];
            v176 = *(_DWORD *)(v656 + 12)
                 ^ ~(v276 ^ 0x80000000)
                 ^ *(_DWORD *)(v125 + 8 * v755 + 4)
                 ^ dword_15B188[2 * v785 + 1]
                 ^ *((_DWORD *)v504 - 1)
                 ^ *((_DWORD *)v174 - 1)
                 ^ *((_DWORD *)v606 - 1);
            v505 = (unsigned __int8)v444;
            v577 = &qword_15B990[BYTE1(v444)];
            v584 = &qword_15C190[BYTE2(v479)];
            v657 = &qword_15B990[BYTE1(v479)];
            v177 = dword_15E188[2 * BYTE2(v408)];
            v409 = v176 ^ dword_15D988[2 * v759 + 1] ^ dword_15E188[2 * BYTE2(v408) + 1];
            v314 = v175 ^ *((_DWORD *)v606 - 2) ^ dword_15D988[2 * v759] ^ v177;
            v178 = *((_DWORD *)v625 - 2);
            v445 = BYTE2(v304);
            v480 = BYTE1(v304);
            v179 = ~(v276 ^ 0x90000000)
                 ^ *(_DWORD *)(v125 + 8 * v724 + 4)
                 ^ dword_15B188[2 * v790 + 1]
                 ^ *((_DWORD *)v617 - 1);
            v180 = *((_DWORD *)v625 - 1);
            v181 = ~*(_DWORD *)(v125 + 8 * v724)
                 ^ dword_15B188[2 * v790]
                 ^ *((_DWORD *)v617 - 2)
                 ^ *((_DWORD *)v161 - 2);
            v510 = (unsigned __int8)v295;
            v618 = &qword_15B990[BYTE1(v295)];
            v626 = &qword_15C190[BYTE2(v318)];
            v725 = &qword_15B990[BYTE1(v318)];
            v296 = v181 ^ *(_DWORD *)(v662 + 8) ^ v178 ^ dword_15D988[2 * v769] ^ dword_15E188[2 * v773];
            v305 = *(_DWORD *)(v662 + 12)
                 ^ v179
                 ^ *((_DWORD *)v161 - 1)
                 ^ v180
                 ^ dword_15D988[2 * v769 + 1]
                 ^ dword_15E188[2 * v773 + 1];
            v748 = dword_15D988[2 * v419];
            v756 = dword_15D988[2 * v419 + 1];
            v420 = *(_DWORD *)(v125 + 8 * v795 + 4)
                 ^ ~(v276 ^ 0xA0000000)
                 ^ dword_15B188[2 * v799 + 1]
                 ^ *((_DWORD *)v559 - 1)
                 ^ *((_DWORD *)v164 - 1)
                 ^ *(_DWORD *)(v668 + 12)
                 ^ *((_DWORD *)v632 - 1)
                 ^ dword_15D988[2 * v804 + 1]
                 ^ dword_15E188[2 * v168 + 1];
            v319 = ~*(_DWORD *)(v125 + 8 * v795)
                 ^ dword_15B188[2 * v799]
                 ^ *((_DWORD *)v559 - 2)
                 ^ *((_DWORD *)v164 - 2)
                 ^ *(_DWORD *)(v668 + 8)
                 ^ *((_DWORD *)v632 - 2)
                 ^ dword_15D988[2 * v804]
                 ^ dword_15E188[2 * v168];
            v182 = *((_DWORD *)v427 - 1);
            v183 = *(_DWORD *)(v673 + 12);
            v428 = ~*(_DWORD *)(v125 + 8 * v808)
                 ^ dword_15B188[2 * v812]
                 ^ *((_DWORD *)v427 - 2)
                 ^ *((_DWORD *)v569 - 2)
                 ^ *(_DWORD *)(v673 + 8)
                 ^ *((_DWORD *)v684 - 2)
                 ^ v748
                 ^ dword_15E188[2 * v599];
            v674 = dword_15D988[2 * v436 + 1];
            v184 = dword_15D988[2 * v436];
            v749 = dword_15D988[2 * v452 + 1];
            v760 = dword_15E188[2 * v498 + 1];
            v437 = v183
                 ^ ~(v276 ^ 0xB0000000)
                 ^ *(_DWORD *)(v125 + 8 * v808 + 4)
                 ^ dword_15B188[2 * v812 + 1]
                 ^ v182
                 ^ *((_DWORD *)v569 - 1)
                 ^ *((_DWORD *)v684 - 1)
                 ^ v756
                 ^ dword_15E188[2 * v599 + 1];
            v600 = dword_15E188[2 * v445 + 1];
            v446 = *((_DWORD *)v639 - 2)
                 ^ *(_DWORD *)(v689 + 8)
                 ^ ~*(_DWORD *)(v125 + 8 * v487)
                 ^ dword_15B188[2 * v518]
                 ^ *((_DWORD *)v577 - 2)
                 ^ *((_DWORD *)v584 - 2)
                 ^ v184
                 ^ dword_15E188[2 * v445];
            v185 = ~(v276 ^ 0xC0000000) ^ *(_DWORD *)(v125 + 8 * v487 + 4);
            v570 = *((_DWORD *)v472 - 2);
            v186 = ~(v276 ^ 0xE0000000)
                 ^ *(_DWORD *)(v125 + 8 * v505 + 4)
                 ^ dword_15B188[2 * v528 + 1]
                 ^ *((_DWORD *)v657 - 1)
                 ^ *((_DWORD *)v703 - 1)
                 ^ *(_DWORD *)(v710 + 12)
                 ^ *((_DWORD *)v716 - 1)
                 ^ dword_15D988[2 * v480 + 1]
                 ^ dword_15E188[2 * v534 + 1];
            v271 = dword_15E188[2 * v551 + 1]
                 ^ ~(v276 ^ 0xF0000000)
                 ^ *(_DWORD *)(v125 + 8 * v510 + 4)
                 ^ dword_15B188[2 * v539 + 1]
                 ^ *((_DWORD *)v725 - 1)
                 ^ *((_DWORD *)v472 - 1)
                 ^ *(_DWORD *)(v731 + 12)
                 ^ *((_DWORD *)v738 - 1)
                 ^ dword_15D988[2 * v546 + 1];
            v473 = *(_DWORD *)(v695 + 8)
                 ^ dword_15B188[2 * v521]
                 ^ ~*(_DWORD *)(v125 + 8 * v494)
                 ^ *((_DWORD *)v618 - 2)
                 ^ *((_DWORD *)v626 - 2)
                 ^ *((_DWORD *)v648 - 2)
                 ^ dword_15D988[2 * v452]
                 ^ dword_15E188[2 * v498];
            v488 = dword_15E188[2 * v534]
                 ^ ~*(_DWORD *)(v125 + 8 * v505)
                 ^ dword_15B188[2 * v528]
                 ^ *((_DWORD *)v657 - 2)
                 ^ *((_DWORD *)v703 - 2)
                 ^ *(_DWORD *)(v710 + 8)
                 ^ *((_DWORD *)v716 - 2)
                 ^ dword_15D988[2 * v480];
            v499 = ~*(_DWORD *)(v125 + 8 * v510)
                 ^ dword_15B188[2 * v539]
                 ^ *((_DWORD *)v725 - 2)
                 ^ v570
                 ^ *(_DWORD *)(v731 + 8)
                 ^ *((_DWORD *)v738 - 2)
                 ^ dword_15D988[2 * v546]
                 ^ dword_15E188[2 * v551];
            v453 = v185
                 ^ dword_15B188[2 * v518 + 1]
                 ^ *((_DWORD *)v577 - 1)
                 ^ *((_DWORD *)v584 - 1)
                 ^ *(_DWORD *)(v689 + 12)
                 ^ *((_DWORD *)v639 - 1)
                 ^ v674
                 ^ v600;
            v535 = HIBYTE(v359);
            v540 = HIBYTE(v372);
            v481 = *(_DWORD *)(v125 + 8 * v494 + 4)
                 ^ ~(v276 ^ 0xD0000000)
                 ^ dword_15B188[2 * v521 + 1]
                 ^ *((_DWORD *)v618 - 1)
                 ^ *((_DWORD *)v626 - 1)
                 ^ *(_DWORD *)(v695 + 12)
                 ^ *((_DWORD *)v648 - 1)
                 ^ v749
                 ^ v760;
            v495 = v186;
            v779 = HIBYTE(v186);
            v786 = HIBYTE(v271);
            v805 = HIBYTE(v326);
            v813 = HIBYTE(v466);
            v522 = HIBYTE(v333);
            v529 = HIBYTE(v291);
            v675 = 8 * HIBYTE(v377) + 1427840;
            v669 = 8 * HIBYTE(v365) + 1427840;
            v685 = 8 * HIBYTE(v393) + 1427840;
            v277 = 8 * HIBYTE(v314) + 1427840;
            v649 = 8 * HIBYTE(v344) + 1427840;
            v658 = 8 * HIBYTE(v350) + 1427840;
            v187 = qword_15D190[(unsigned __int8)v326 - 1];
            v188 = &qword_15B990[BYTE1(v350)];
            v189 = &qword_15C190[BYTE2(v365)];
            v190 = dword_15B188[2 * HIBYTE(v383)]
                 ^ *(_DWORD *)(v125 + 8 * (unsigned __int8)v460)
                 ^ LODWORD(qword_15B990[BYTE1(v344) - 1])
                 ^ *((_DWORD *)v189 - 2);
            v191 = &qword_15C190[BYTE2(v377)];
            v192 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v460 + 4)
                 ^ dword_15B188[2 * HIBYTE(v383) + 1]
                 ^ HIDWORD(qword_15B990[BYTE1(v344) - 1])
                 ^ *((_DWORD *)v189 - 1)
                 ^ HIDWORD(qword_15C988[HIBYTE(v428)]);
            v696 = (unsigned __int8)v344;
            v711 = &qword_15C190[BYTE2(v344)];
            v717 = (unsigned __int8)v365;
            v345 = &qword_15B990[BYTE1(v365)];
            v193 = v190 ^ LODWORD(qword_15C988[HIBYTE(v428)]) ^ v187 ^ dword_15D988[2 * BYTE1(v333)];
            v194 = v192 ^ HIDWORD(v187) ^ dword_15D988[2 * BYTE1(v333) + 1];
            LODWORD(v187) = &qword_15D190[(unsigned __int8)v333];
            v366 = BYTE2(v333);
            v195 = dword_15E188[2 * BYTE2(v359) + 1];
            WORD2(v187) = v359;
            v357 = v193 ^ dword_15E188[2 * BYTE2(v359)];
            v196 = BYTE5(v187);
            v517 = v194 ^ v195;
            v552 = &qword_15D190[BYTE4(v187)];
            v197 = *((_DWORD *)v188 - 1);
            v198 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v286)
                 ^ dword_15B188[2 * HIBYTE(v402)]
                 ^ *((_DWORD *)v188 - 2);
            v199 = *((_DWORD *)v191 - 2);
            v200 = (unsigned __int8)v350;
            v739 = &qword_15C190[BYTE2(v350)];
            v732 = (unsigned __int8)v377;
            v201 = *(_DWORD *)(v125 + 8 * (unsigned __int8)v286 + 4)
                 ^ dword_15B188[2 * HIBYTE(v402) + 1]
                 ^ v197
                 ^ *((_DWORD *)v191 - 1)
                 ^ HIDWORD(qword_15C988[HIBYTE(v446)]);
            v202 = &qword_15B990[BYTE1(v377)];
            v203 = &qword_15C190[BYTE2(v314)];
            v204 = v198 ^ v199 ^ LODWORD(qword_15C988[HIBYTE(v446)]) ^ LODWORD(qword_15D190[(unsigned __int8)v466 - 1]);
            v334 = &qword_15D190[(unsigned __int8)v291];
            v205 = dword_15D988[2 * BYTE1(v291) + 1];
            v351 = BYTE2(v291);
            v663 = BYTE1(v372);
            v560 = &qword_15D190[(unsigned __int8)v372];
            v206 = dword_15E188[2 * BYTE2(v372) + 1];
            v750 = (unsigned __int8)v393;
            v370 = v204 ^ dword_15D988[2 * BYTE1(v291)] ^ dword_15E188[2 * BYTE2(v372)];
            v292 = &qword_15B990[BYTE1(v393)];
            v375 = v201 ^ HIDWORD(qword_15D190[(unsigned __int8)v466 - 1]) ^ v205 ^ v206;
            HIDWORD(v187) = &qword_15C190[BYTE2(v393)];
            v207 = *(_DWORD *)(v125 + 8 * v696 + 4)
                 ^ dword_15B188[2 * HIBYTE(v409) + 1]
                 ^ *((_DWORD *)v345 - 1)
                 ^ *(_DWORD *)(HIDWORD(v187) - 4);
            v208 = *(_DWORD *)(HIDWORD(v187) - 8)
                 ^ *(_DWORD *)(v125 + 8 * v696)
                 ^ dword_15B188[2 * HIBYTE(v409)]
                 ^ *((_DWORD *)v345 - 2);
            v506 = BYTE1(v383);
            v209 = *(_QWORD *)(v187 - 8);
            v571 = &qword_15D190[(unsigned __int8)v383];
            v210 = v208 ^ LODWORD(qword_15C988[HIBYTE(v473)]);
            v211 = BYTE2(v409);
            v761 = (unsigned __int8)v314;
            v315 = &qword_15B990[BYTE1(v314)];
            v212 = dword_15D988[2 * v196] ^ v210 ^ v209;
            HIDWORD(v209) ^= dword_15D988[2 * v196 + 1] ^ v207 ^ HIDWORD(qword_15C988[HIBYTE(v473)]);
            LODWORD(v209) = &qword_15C190[BYTE2(v319)];
            v697 = BYTE1(v402);
            v585 = &qword_15D190[(unsigned __int8)v402];
            v213 = dword_15E188[2 * BYTE2(v383) + 1];
            v381 = v212 ^ dword_15E188[2 * BYTE2(v383)];
            v214 = *(_DWORD *)(v125 + 8 * v200);
            v215 = *(_DWORD *)(v125 + 8 * v200 + 4);
            v391 = HIDWORD(v209) ^ v213;
            v511 = &qword_15B990[BYTE1(v296)];
            v216 = BYTE2(v420);
            HIDWORD(v209) = &qword_15C190[BYTE2(v428)];
            v217 = BYTE1(v409);
            v601 = &qword_15D190[(unsigned __int8)v409];
            v218 = HIDWORD(qword_15C988[HIBYTE(v488)])
                 ^ dword_15B188[2 * HIBYTE(v305) + 1]
                 ^ v215
                 ^ *((_DWORD *)v202 - 1)
                 ^ *((_DWORD *)v203 - 1)
                 ^ *((_DWORD *)v334 - 1);
            v219 = LODWORD(qword_15C988[HIBYTE(v488)])
                 ^ dword_15B188[2 * HIBYTE(v305)]
                 ^ v214
                 ^ *((_DWORD *)v202 - 2)
                 ^ *((_DWORD *)v203 - 2)
                 ^ *((_DWORD *)v334 - 2);
            v335 = &qword_15B990[BYTE1(v319)];
            v220 = v219 ^ dword_15D988[2 * v663];
            v221 = v218 ^ dword_15D988[2 * v663 + 1];
            v578 = &qword_15C190[BYTE2(v446)];
            v770 = BYTE1(v305);
            v664 = &qword_15D190[(unsigned __int8)v305];
            v222 = dword_15E188[2 * BYTE2(v402) + 1];
            v774 = BYTE2(v437);
            v400 = v220 ^ dword_15E188[2 * BYTE2(v402)];
            v407 = v221 ^ v222;
            v223 = &qword_15C190[BYTE2(v296)];
            v224 = dword_15B188[2 * HIBYTE(v420) + 1]
                 ^ *(_DWORD *)(v125 + 8 * v717 + 4)
                 ^ *((_DWORD *)v292 - 1)
                 ^ *((_DWORD *)v223 - 1);
            v225 = dword_15B188[2 * HIBYTE(v420)]
                 ^ *(_DWORD *)(v125 + 8 * v717)
                 ^ *((_DWORD *)v292 - 2)
                 ^ *((_DWORD *)v223 - 2);
            v293 = BYTE2(v453);
            v226 = (unsigned __int8)v296;
            v227 = HIDWORD(qword_15C988[HIBYTE(v499)]) ^ v224 ^ *((_DWORD *)v552 - 1);
            v228 = v225 ^ LODWORD(qword_15C988[HIBYTE(v499)]) ^ *((_DWORD *)v552 - 2);
            v718 = 8 * HIBYTE(v296) + 1427840;
            v800 = (unsigned __int8)v428;
            v553 = &qword_15B990[BYTE1(v428)];
            v229 = v228 ^ dword_15D988[2 * v506] ^ dword_15E188[2 * v211];
            v543 = v227 ^ dword_15D988[2 * v506 + 1] ^ dword_15E188[2 * v211 + 1];
            v230 = &qword_15C190[BYTE2(v473)];
            LOWORD(v224) = v420;
            v417 = v229;
            v782 = BYTE1(v224);
            v619 = &qword_15D190[(unsigned __int8)v224];
            v297 = (unsigned __int8)v319;
            v745 = 8 * HIBYTE(v319) + 1427840;
            v231 = *((_DWORD *)v560 - 2);
            v809 = (unsigned __int8)v446;
            v232 = *(_DWORD *)(v125 + 8 * v732 + 4)
                 ^ dword_15B188[2 * HIBYTE(v437) + 1]
                 ^ *((_DWORD *)v315 - 1)
                 ^ *(_DWORD *)(v209 - 4)
                 ^ HIDWORD(qword_15C988[HIBYTE(v322)])
                 ^ *((_DWORD *)v560 - 1);
            v561 = &qword_15B990[BYTE1(v446)];
            v791 = BYTE1(v437);
            v627 = &qword_15D190[(unsigned __int8)v437];
            v425 = v231
                 ^ *(_DWORD *)(v125 + 8 * v732)
                 ^ dword_15B188[2 * HIBYTE(v437)]
                 ^ *((_DWORD *)v315 - 2)
                 ^ *(_DWORD *)(v209 - 8)
                 ^ LODWORD(qword_15C988[HIBYTE(v322)])
                 ^ dword_15D988[2 * v697]
                 ^ dword_15E188[2 * BYTE2(v305)];
            v502 = v232 ^ dword_15D988[2 * v697 + 1] ^ dword_15E188[2 * BYTE2(v305) + 1];
            v306 = BYTE1(v453);
            v233 = *((_DWORD *)v511 - 2)
                 ^ *(_DWORD *)(v125 + 8 * v750)
                 ^ dword_15B188[2 * HIBYTE(v453)]
                 ^ *(_DWORD *)(HIDWORD(v209) - 8);
            v234 = *(_DWORD *)(v125 + 8 * v750 + 4)
                 ^ dword_15B188[2 * HIBYTE(v453) + 1]
                 ^ *((_DWORD *)v511 - 1)
                 ^ *(_DWORD *)(HIDWORD(v209) - 4);
            v690 = &qword_15D190[(unsigned __int8)v453];
            v316 = (unsigned __int8)v473;
            v512 = &qword_15B990[BYTE1(v473)];
            v757 = BYTE1(v481);
            v698 = &qword_15D190[(unsigned __int8)v481];
            v434 = *((_DWORD *)v571 - 2)
                 ^ v233
                 ^ LODWORD(qword_15C988[HIBYTE(v460)])
                 ^ dword_15D988[2 * v217]
                 ^ dword_15E188[2 * v216];
            v235 = *(v585 - 1);
            v450 = HIDWORD(qword_15C988[HIBYTE(v460)])
                 ^ v234
                 ^ *((_DWORD *)v571 - 1)
                 ^ dword_15D988[2 * v217 + 1]
                 ^ dword_15E188[2 * v216 + 1];
            v236 = dword_15B188[2 * HIBYTE(v481)] ^ *(_DWORD *)(v125 + 8 * v761) ^ *((_DWORD *)v335 - 2);
            v237 = dword_15B188[2 * HIBYTE(v481) + 1] ^ *(_DWORD *)(v125 + 8 * v761 + 4) ^ *((_DWORD *)v335 - 1);
            v238 = *((_DWORD *)v578 - 2);
            v239 = *((_DWORD *)v578 - 1);
            v336 = (unsigned __int8)v488;
            v579 = &qword_15B990[BYTE1(v488)];
            v586 = &qword_15C190[BYTE2(v322)];
            v240 = BYTE2(v271);
            v633 = &qword_15B990[BYTE1(v499)];
            HIDWORD(v235) ^= v237 ^ v239 ^ HIDWORD(qword_15C988[HIBYTE(v286)]) ^ dword_15D988[2 * v770 + 1];
            v640 = &qword_15C190[BYTE2(v460)];
            v704 = &qword_15B990[BYTE1(v460)];
            v241 = &dword_15E188[2 * v293];
            v443 = v235
                 ^ v236
                 ^ v238
                 ^ LODWORD(qword_15C988[HIBYTE(v286)])
                 ^ dword_15D988[2 * v770]
                 ^ dword_15E188[2 * v774];
            v320 = BYTE1(v495);
            v458 = HIDWORD(v235) ^ dword_15E188[2 * v774 + 1];
            v726 = &qword_15D190[(unsigned __int8)v495];
            v294 = BYTE2(v326);
            HIDWORD(v235) = *(_DWORD *)(v649 + 12);
            v327 = BYTE1(v326);
            v242 = dword_15B188[2 * v779]
                 ^ *(_DWORD *)(v125 + 8 * v226)
                 ^ *((_DWORD *)v553 - 2)
                 ^ *((_DWORD *)v230 - 2)
                 ^ *(_DWORD *)(v649 + 8);
            v650 = &qword_15B990[BYTE1(v322)];
            v243 = *(_DWORD *)(v125 + 8 * v226 + 4)
                 ^ dword_15B188[2 * v779 + 1]
                 ^ *((_DWORD *)v553 - 1)
                 ^ *((_DWORD *)v230 - 1)
                 ^ HIDWORD(v235)
                 ^ *((_DWORD *)v601 - 1);
            v244 = v242 ^ *((_DWORD *)v601 - 2);
            v602 = &qword_15C190[BYTE2(v286)];
            v733 = &qword_15B990[BYTE1(v286)];
            v470 = v244 ^ dword_15D988[2 * v782] ^ *v241;
            HIDWORD(v235) = (unsigned __int8)v271;
            v272 = BYTE1(v271);
            v751 = &qword_15D190[HIDWORD(v235)];
            LODWORD(v209) = dword_15E188[2 * BYTE2(v481)];
            v245 = dword_15E188[2 * BYTE2(v481) + 1];
            v478 = v243 ^ dword_15D988[2 * v782 + 1] ^ v241[1];
            HIDWORD(v235) = dword_15B188[2 * v786 + 1] ^ *(_DWORD *)(v125 + 8 * v297 + 4);
            v246 = *(_DWORD *)(v125 + 8 * v297) ^ dword_15B188[2 * v786];
            v287 = BYTE2(v466);
            v298 = BYTE1(v466);
            LODWORD(v235) = &qword_15C190[BYTE2(v488)];
            v484 = *(_DWORD *)(v658 + 12)
                 ^ HIDWORD(v235)
                 ^ *((_DWORD *)v561 - 1)
                 ^ *(_DWORD *)(v235 - 4)
                 ^ *((_DWORD *)v664 - 1)
                 ^ dword_15D988[2 * v791 + 1]
                 ^ v245;
            v465 = v246
                 ^ *((_DWORD *)v561 - 2)
                 ^ *(_DWORD *)(v235 - 8)
                 ^ *(_DWORD *)(v658 + 8)
                 ^ *((_DWORD *)v664 - 2)
                 ^ dword_15D988[2 * v791]
                 ^ v209;
            LODWORD(v209) = &dword_15D988[2 * BYTE1(v495)];
            v607 = (_DWORD *)(v125 + 8 * (unsigned __int8)v499);
            v493 = *(_QWORD *)&dword_15B188[2 * v805]
                 ^ *(_QWORD *)(v125 + 8 * v800)
                 ^ *(v512 - 1)
                 ^ qword_15C190[BYTE2(v499) - 1]
                 ^ *(_QWORD *)(v669 + 8)
                 ^ *(v619 - 1)
                 ^ *(_QWORD *)&dword_15D988[2 * v306]
                 ^ *(_QWORD *)&dword_15E188[2 * BYTE2(v495)];
            v659 = (_DWORD *)(v125 + 8 * (unsigned __int8)v322);
            v247 = *(_DWORD *)(v125 + 8 * v316 + 4) ^ dword_15B188[2 * v522 + 1];
            v248 = *(_DWORD *)(v125 + 8 * v316) ^ dword_15B188[2 * v522];
            v508 = dword_15B188[2 * v813 + 1]
                 ^ *(_DWORD *)(v125 + 8 * v809 + 4)
                 ^ *((_DWORD *)v579 - 1)
                 ^ *((_DWORD *)v586 - 1)
                 ^ *(_DWORD *)(v675 + 12)
                 ^ *((_DWORD *)v627 - 1)
                 ^ dword_15D988[2 * v757 + 1]
                 ^ dword_15E188[2 * v240 + 1];
            v312 = *(_DWORD *)(v125 + 8 * v809)
                 ^ dword_15B188[2 * v813]
                 ^ *((_DWORD *)v579 - 2)
                 ^ *((_DWORD *)v586 - 2)
                 ^ *(_DWORD *)(v675 + 8)
                 ^ *((_DWORD *)v627 - 2)
                 ^ dword_15D988[2 * v757]
                 ^ dword_15E188[2 * v240];
            HIDWORD(v209) = dword_15B188[2 * v529] ^ *(_DWORD *)(v125 + 8 * v336);
            v554 = dword_15D988[2 * v272 + 1];
            v249 = *(_DWORD *)(v125 + 8 * v336 + 4) ^ dword_15B188[2 * v529 + 1];
            v250 = v247
                 ^ *((_DWORD *)v633 - 1)
                 ^ *((_DWORD *)v640 - 1)
                 ^ *(_DWORD *)(v685 + 12)
                 ^ *((_DWORD *)v690 - 1)
                 ^ *(_DWORD *)(v209 + 4);
            v530 = dword_15D988[2 * v272];
            v251 = HIDWORD(v209)
                 ^ *((_DWORD *)v650 - 2)
                 ^ *((_DWORD *)v602 - 2)
                 ^ *(_DWORD *)(v277 + 8)
                 ^ *((_DWORD *)v698 - 2);
            v562 = dword_15E188[2 * v287];
            v252 = *v607
                 ^ dword_15B188[2 * v535]
                 ^ *((_DWORD *)v704 - 2)
                 ^ *((_DWORD *)v711 - 2)
                 ^ *(_DWORD *)(v718 + 8)
                 ^ *((_DWORD *)v726 - 2)
                 ^ dword_15D988[2 * v327];
            v253 = dword_15E188[2 * v366];
            v331 = v607[1]
                 ^ dword_15B188[2 * v535 + 1]
                 ^ *((_DWORD *)v704 - 1)
                 ^ *((_DWORD *)v711 - 1)
                 ^ *(_DWORD *)(v718 + 12)
                 ^ *((_DWORD *)v726 - 1)
                 ^ dword_15D988[2 * v327 + 1]
                 ^ dword_15E188[2 * v366 + 1];
            v124 = dword_15B188[2 * v540]
                 ^ *v659
                 ^ *((_DWORD *)v733 - 2)
                 ^ *((_DWORD *)v739 - 2)
                 ^ *(_DWORD *)(v745 + 8)
                 ^ *((_DWORD *)v751 - 2)
                 ^ dword_15D988[2 * v298]
                 ^ dword_15E188[2 * v351];
            v270 = v250 ^ dword_15E188[2 * v294 + 1];
            v126 = v659[1]
                 ^ dword_15B188[2 * v540 + 1]
                 ^ *((_DWORD *)v733 - 1)
                 ^ *((_DWORD *)v739 - 1)
                 ^ *(_DWORD *)(v745 + 12)
                 ^ *((_DWORD *)v751 - 1)
                 ^ dword_15D988[2 * v298 + 1]
                 ^ dword_15E188[2 * v351 + 1];
            v122 = *((_DWORD *)v640 - 2)
                 ^ v248
                 ^ *((_DWORD *)v633 - 2)
                 ^ *(_DWORD *)(v685 + 8)
                 ^ *((_DWORD *)v690 - 2)
                 ^ dword_15D988[2 * v320]
                 ^ dword_15E188[2 * v294];
            v275 = v249
                 ^ *((_DWORD *)v650 - 1)
                 ^ *((_DWORD *)v602 - 1)
                 ^ *(_DWORD *)(v277 + 12)
                 ^ *((_DWORD *)v698 - 1)
                 ^ v554
                 ^ dword_15E188[2 * v287 + 1];
            v283 = v252 ^ v253;
            v123 = v251 ^ v530 ^ v562;
          }
          while ( v268 != 0xF1FFFFFFFFFFFFFFLL );
          v5 = v125;
          v254 = v357;
          v255 = &v845;
          v876 = v370;
          v256 = &v876;
          v874 = v357;
          v877 = v375;
          v875 = v517;
          v878 = v381;
          v879 = v391;
          v880 = v400;
          v881 = v407;
          v882 = v417;
          v883 = v543;
          v884 = v425;
          v885 = v502;
          v886 = v434;
          v887 = v450;
          v888 = v443;
          v889 = v458;
          v897 = v122;
          v890 = v470;
          v898 = v270;
          v891 = v478;
          v900 = v275;
          v901 = v252 ^ v253;
          v257 = v517;
          v892 = v465;
          v903 = v124;
          v904 = v126;
          v893 = v484;
          v899 = v251 ^ v530 ^ v562;
          v902 = v331;
          v894 = v493;
          v258 = v841;
          v259 = v587;
          v895 = v312;
          v896 = v508;
          while ( 1 )
          {
            v262 = *(_DWORD *)(v258 + 8);
            v258 += 8;
            v263 = *(_DWORD *)(v258 + 4);
            *(_DWORD *)v258 = v262 ^ v259 ^ v254;
            *(_DWORD *)(v258 + 4) = v263 ^ v257 ^ HIDWORD(v259);
            if ( &dest[120] == (_BYTE *)v258 )
              break;
            v260 = *v255;
            v256 += 2;
            v261 = v255[1];
            v255 += 2;
            v254 = *(v256 - 2);
            v257 = *(v256 - 1);
            v259 = __PAIR64__(v261, v260);
          }
          v3 = 0;
          ++*(_QWORD *)(a1 + 264);
          if ( !n )
            break;
        }
        else if ( !n )
        {
          break;
        }
        v4 = 128 - v3;
      }
    }
    result = memcpy(v842, dest, 0x80u);
    *(_DWORD *)(a1 + 128) = v3;
  }
  return result;
}
