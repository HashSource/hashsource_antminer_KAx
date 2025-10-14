source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%hostent = type { i8*, i8**, i32, i32, i8** }
%sockaddr = type { i32, [14 x i8] }

@global_var_2200c = local_unnamed_addr global i32 67740
@global_var_22010 = local_unnamed_addr global i32 67740
@global_var_22014 = local_unnamed_addr global i32 67740
@global_var_22018 = local_unnamed_addr global i32 67740
@global_var_2201c = local_unnamed_addr global i32 67740
@global_var_22020 = local_unnamed_addr global i32 67740
@global_var_22024 = local_unnamed_addr global i32 67740
@global_var_22028 = local_unnamed_addr global i32 67740
@global_var_2202c = local_unnamed_addr global i32 67740
@global_var_22030 = local_unnamed_addr global i32 67740
@global_var_22034 = local_unnamed_addr global i32 67740
@global_var_22038 = local_unnamed_addr global i32 67740
@global_var_2203c = local_unnamed_addr global i32 67740
@global_var_22040 = local_unnamed_addr global i32 67740
@global_var_22044 = local_unnamed_addr global i32 67740
@global_var_22048 = local_unnamed_addr global i32 67740
@global_var_2204c = local_unnamed_addr global i32 67740
@global_var_22050 = local_unnamed_addr global i32 67740
@global_var_22054 = local_unnamed_addr global i32 67740
@global_var_22058 = local_unnamed_addr global i32 67740
@global_var_2205c = local_unnamed_addr global i32 67740
@global_var_22060 = local_unnamed_addr global i32 67740
@global_var_1119c = constant [7 x i8] c"--help\00"
@global_var_11188 = constant [8 x i8] c"summary\00"
@global_var_11190 = constant [10 x i8] c"127.0.0.1\00"
@global_var_22078 = local_unnamed_addr global i32 0
@global_var_111a4 = constant [38 x i8] c"usAge: %s [command [ip/host [port]]]\0A\00"
@global_var_10b98 = local_unnamed_addr constant i32 70772
@global_var_10b9c = local_unnamed_addr constant i32 100
@global_var_21f18 = global i32 1
@global_var_22000 = local_unnamed_addr global i32* @global_var_21f18
@global_var_22064 = local_unnamed_addr global i32 0
@global_var_110ac = constant [13 x i8] c"[%s%s] =>\0A(\0A\00"
@global_var_110cc = constant [15 x i8] c"   [%d] => %s\0A\00"
@global_var_110bc = constant [15 x i8] c"   [%s] => %s\0A\00"
@global_var_11154 = constant [15 x i8] c"Err: OOM (%d)\0A\00"
@global_var_110e0 = constant [29 x i8] c"Couldn't get hostname: '%s'\0A\00"
@global_var_11100 = constant [34 x i8] c"Socket initialisation failed: %s\0A\00"
@global_var_11124 = constant [27 x i8] c"Socket connect failed: %s\0A\00"
@global_var_11164 = constant [17 x i8] c"Recv failed: %s\0A\00"
@global_var_11140 = constant [17 x i8] c"Send failed: %s\0A\00"
@global_var_11178 = constant [16 x i8] c"Reply was '%s'\0A\00"
@global_var_11094 = local_unnamed_addr constant i32 69282
@global_var_11098 = local_unnamed_addr constant i32 69272
@global_var_21f10 = global i32 68617
@0 = external global i32
@global_var_22070 = local_unnamed_addr global %_IO_FILE* null
@global_var_10b74 = local_unnamed_addr constant void ()* inttoptr (i32 68024 to void ()*)
@global_var_10b78 = local_unnamed_addr constant void ()* inttoptr (i32 69729 to void ()*)
@global_var_110fc = external constant i8*
@1 = internal constant [2 x i8] c")\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@global_var_110dc = constant [2 x i8] c")\00"

declare i32 @unknown_240() local_unnamed_addr

define i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10890:
  %0 = call i32 @function_10b7c(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @function_108b0(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_108b0:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @function_108bc(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_108bc:
  %0 = call i32 @strtol(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_108c8(i8* %format, ...) local_unnamed_addr {
dec_label_pc_108c8:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32* @function_108d4(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_108d4:
  %0 = call i32* @realloc(i32* %ptr, i32 %size), !insn.addr !5
  ret i32* %0, !insn.addr !5
}

define i32* @function_108e0(i32* %s, i32 %c) local_unnamed_addr {
dec_label_pc_108e0:
  %0 = call i32* @__rawmemchr(i32* %s, i32 %c), !insn.addr !6
  ret i32* %0, !insn.addr !6
}

define i32 @function_108ec(i8* %s) local_unnamed_addr {
dec_label_pc_108ec:
  %0 = call i32 @puts(i8* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32* @function_108f8(i32 %size) local_unnamed_addr {
dec_label_pc_108f8:
  %0 = call i32* @malloc(i32 %size), !insn.addr !8
  ret i32* %0, !insn.addr !8
}

define i32 @function_10904(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10904:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i8* @function_10910(i32 %errnum) local_unnamed_addr {
dec_label_pc_10910:
  %0 = call i8* @strerror(i32 %errnum), !insn.addr !10
  ret i8* %0, !insn.addr !10
}

define void @function_1091c() local_unnamed_addr {
dec_label_pc_1091c:
  call void @__gmon_start__(), !insn.addr !11
  ret void, !insn.addr !11
}

define i16** @function_10928() local_unnamed_addr {
dec_label_pc_10928:
  %0 = call i16** @__ctype_b_loc(), !insn.addr !12
  ret i16** %0, !insn.addr !12
}

define i32 @function_10934(i8* %s) local_unnamed_addr {
dec_label_pc_10934:
  %0 = call i32 @strlen(i8* %s), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i8* @function_10940(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_10940:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define i32 @function_1094c(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1094c:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stream, i8* %format), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32* @function_10958() local_unnamed_addr {
dec_label_pc_10958:
  %0 = call i32* @__errno_location(), !insn.addr !16
  ret i32* %0, !insn.addr !16
}

define i32 @function_10964(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_10964:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define %hostent* @function_10970(i8* %name) local_unnamed_addr {
dec_label_pc_10970:
  %0 = call %hostent* @gethostbyname(i8* %name), !insn.addr !18
  ret %hostent* %0, !insn.addr !18
}

define void @function_1097c() local_unnamed_addr {
dec_label_pc_1097c:
  call void @abort(), !insn.addr !19
  ret void, !insn.addr !19
}

define i32 @function_10988(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_10988:
  %0 = call i32 @recv(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_10994(i32 %fd) local_unnamed_addr {
dec_label_pc_10994:
  %0 = call i32 @close(i32 %fd), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_109a0(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_109a0:
  %0 = call i32 @send(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @function_109ac(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_109ac:
  %0 = call i32 @connect(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_109b8:
  %r7.1.reg2mem = alloca i32, !insn.addr !24
  %r5.3.reg2mem = alloca i32, !insn.addr !24
  %r2.0.reg2mem = alloca i32, !insn.addr !24
  %r5.0.reg2mem = alloca i32, !insn.addr !24
  %0 = icmp slt i32 %argc, 2, !insn.addr !25
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !25
  store i32 ptrtoint ([10 x i8]* @global_var_11190 to i32), i32* %r5.3.reg2mem, !insn.addr !25
  store i32 ptrtoint ([8 x i8]* @global_var_11188 to i32), i32* %r7.1.reg2mem, !insn.addr !25
  br i1 %0, label %dec_label_pc_10ae0, label %dec_label_pc_109c4, !insn.addr !25

dec_label_pc_109c4:                               ; preds = %dec_label_pc_109b8
  %1 = ptrtoint i8** %argv to i32
  %2 = add i32 %1, 4, !insn.addr !26
  %3 = inttoptr i32 %2 to i32*, !insn.addr !26
  %4 = load i32, i32* %3, align 4, !insn.addr !26
  %5 = inttoptr i32 %4 to i8*, !insn.addr !27
  %6 = load i8, i8* %5, align 1, !insn.addr !27
  %7 = icmp eq i8 %6, 45, !insn.addr !28
  br i1 %7, label %dec_label_pc_10a6c, label %dec_label_pc_109dc, !insn.addr !29

dec_label_pc_109dc:                               ; preds = %dec_label_pc_10af8, %dec_label_pc_109c4
  %8 = call i32 @strcmp(i8* %5, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_1119c, i32 0, i32 0)), !insn.addr !30
  %9 = icmp eq i32 %8, 0, !insn.addr !31
  store i32 1, i32* %r5.0.reg2mem, !insn.addr !32
  br i1 %9, label %dec_label_pc_10b04, label %dec_label_pc_109f8, !insn.addr !32

dec_label_pc_109f8:                               ; preds = %dec_label_pc_109dc, %dec_label_pc_10a9c, %dec_label_pc_10aa4, %dec_label_pc_10ab0
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %10 = mul i32 %r5.0.reload, 4, !insn.addr !33
  %11 = add i32 %10, %1, !insn.addr !33
  %12 = inttoptr i32 %11 to i32*, !insn.addr !33
  %13 = load i32, i32* %12, align 4, !insn.addr !33
  %14 = add nuw nsw i32 %r5.0.reload, 1, !insn.addr !34
  %15 = call i32 @function_10c0c(i32 %13), !insn.addr !35
  %16 = inttoptr i32 %15 to i8*, !insn.addr !36
  %17 = load i8, i8* %16, align 1, !insn.addr !36
  %18 = icmp eq i8 %17, 0, !insn.addr !37
  %spec.select = select i1 %18, i32 ptrtoint ([8 x i8]* @global_var_11188 to i32), i32 %15
  %19 = icmp slt i32 %14, %argc, !insn.addr !38
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !38
  store i32 ptrtoint ([10 x i8]* @global_var_11190 to i32), i32* %r5.3.reg2mem, !insn.addr !38
  store i32 %spec.select, i32* %r7.1.reg2mem, !insn.addr !38
  br i1 %19, label %dec_label_pc_10a24, label %dec_label_pc_10ae0, !insn.addr !38

dec_label_pc_10a24:                               ; preds = %dec_label_pc_109f8
  %20 = add nuw nsw i32 %r5.0.reload, 2, !insn.addr !39
  %21 = add i32 %11, 4, !insn.addr !40
  %22 = inttoptr i32 %21 to i32*, !insn.addr !40
  %23 = load i32, i32* %22, align 4, !insn.addr !40
  %24 = call i32 @function_10c0c(i32 %23), !insn.addr !41
  %25 = inttoptr i32 %24 to i8*, !insn.addr !42
  %26 = load i8, i8* %25, align 1, !insn.addr !42
  %27 = icmp eq i8 %26, 0, !insn.addr !43
  %spec.select1 = select i1 %27, i32 ptrtoint ([10 x i8]* @global_var_11190 to i32), i32 %24
  %28 = icmp slt i32 %20, %argc, !insn.addr !44
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !44
  store i32 %spec.select1, i32* %r5.3.reg2mem, !insn.addr !44
  store i32 %spec.select, i32* %r7.1.reg2mem, !insn.addr !44
  br i1 %28, label %dec_label_pc_10a50, label %dec_label_pc_10ae0, !insn.addr !44

dec_label_pc_10a50:                               ; preds = %dec_label_pc_10a24
  %29 = add i32 %11, 8, !insn.addr !45
  %30 = inttoptr i32 %29 to i32*, !insn.addr !45
  %31 = load i32, i32* %30, align 4, !insn.addr !45
  %32 = call i32 @function_10c0c(i32 %31), !insn.addr !46
  %33 = inttoptr i32 %32 to i8*, !insn.addr !47
  %34 = load i8, i8* %33, align 1, !insn.addr !47
  %35 = icmp eq i8 %34, 0, !insn.addr !48
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !49
  store i32 %spec.select1, i32* %r5.3.reg2mem, !insn.addr !49
  store i32 %spec.select, i32* %r7.1.reg2mem, !insn.addr !49
  br i1 %35, label %dec_label_pc_10ae0, label %dec_label_pc_10b28, !insn.addr !49

dec_label_pc_10a6c:                               ; preds = %dec_label_pc_109c4
  %36 = add i32 %4, 1, !insn.addr !50
  %37 = inttoptr i32 %36 to i8*, !insn.addr !50
  %38 = load i8, i8* %37, align 1, !insn.addr !50
  switch i8 %38, label %dec_label_pc_10a84 [
    i8 63, label %dec_label_pc_10a78
    i8 104, label %dec_label_pc_10af8
  ]

dec_label_pc_10a78:                               ; preds = %dec_label_pc_10a6c
  %39 = add i32 %4, 2, !insn.addr !51
  %40 = inttoptr i32 %39 to i8*, !insn.addr !51
  %41 = load i8, i8* %40, align 1, !insn.addr !51
  %42 = icmp eq i8 %41, 0, !insn.addr !52
  br i1 %42, label %dec_label_pc_10b04, label %dec_label_pc_10a84, !insn.addr !53

dec_label_pc_10a84:                               ; preds = %dec_label_pc_10a6c, %dec_label_pc_10a78
  %43 = call i32 @strcmp(i8* %5, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_1119c, i32 0, i32 0)), !insn.addr !54
  %44 = icmp eq i32 %43, 0, !insn.addr !55
  br i1 %44, label %dec_label_pc_10b04, label %dec_label_pc_10a9c, !insn.addr !56

dec_label_pc_10a9c:                               ; preds = %dec_label_pc_10a84
  %45 = icmp eq i8 %38, 111, !insn.addr !57
  store i32 1, i32* %r5.0.reg2mem, !insn.addr !58
  br i1 %45, label %dec_label_pc_10aa4, label %dec_label_pc_109f8, !insn.addr !58

dec_label_pc_10aa4:                               ; preds = %dec_label_pc_10a9c
  %46 = add i32 %4, 2, !insn.addr !59
  %47 = inttoptr i32 %46 to i8*, !insn.addr !59
  %48 = load i8, i8* %47, align 1, !insn.addr !59
  %49 = icmp eq i8 %48, 0, !insn.addr !60
  store i32 1, i32* %r5.0.reg2mem, !insn.addr !61
  br i1 %49, label %dec_label_pc_10ab0, label %dec_label_pc_109f8, !insn.addr !61

dec_label_pc_10ab0:                               ; preds = %dec_label_pc_10aa4
  %50 = icmp eq i32 %argc, 2, !insn.addr !62
  store i32 1, i32* @global_var_22078, align 4, !insn.addr !63
  store i32 2, i32* %r5.0.reg2mem, !insn.addr !64
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !64
  store i32 ptrtoint ([10 x i8]* @global_var_11190 to i32), i32* %r5.3.reg2mem, !insn.addr !64
  store i32 ptrtoint ([8 x i8]* @global_var_11188 to i32), i32* %r7.1.reg2mem, !insn.addr !64
  br i1 %50, label %dec_label_pc_10ae0, label %dec_label_pc_109f8, !insn.addr !64

dec_label_pc_10ae0:                               ; preds = %dec_label_pc_109f8, %dec_label_pc_109b8, %dec_label_pc_10ab0, %dec_label_pc_10a24, %dec_label_pc_10a50, %dec_label_pc_10b28
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %r5.3.reload = load i32, i32* %r5.3.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %51 = call i32 @callapi(i32 %r7.1.reload, i32 %r5.3.reload, i32 %r2.0.reload), !insn.addr !65
  ret i32 %51, !insn.addr !65

dec_label_pc_10af8:                               ; preds = %dec_label_pc_10a6c
  %52 = add i32 %4, 2, !insn.addr !66
  %53 = inttoptr i32 %52 to i8*, !insn.addr !66
  %54 = load i8, i8* %53, align 1, !insn.addr !66
  %55 = icmp eq i8 %54, 0, !insn.addr !67
  br i1 %55, label %dec_label_pc_10b04, label %dec_label_pc_109dc, !insn.addr !68

dec_label_pc_10b04:                               ; preds = %dec_label_pc_10af8, %dec_label_pc_10a84, %dec_label_pc_10a78, %dec_label_pc_109dc
  %56 = load %_IO_FILE*, %_IO_FILE** @global_var_22070, align 4, !insn.addr !69
  %57 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %56, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_111a4, i32 0, i32 0), i8* inttoptr (i32 4516 to i8*)), !insn.addr !70
  ret i32 1, !insn.addr !71

dec_label_pc_10b28:                               ; preds = %dec_label_pc_10a50
  %58 = call i32 @strtol(i8* %33, i8** null, i32 10), !insn.addr !72
  %59 = call i32 @__asm_sxth(i32 %58), !insn.addr !73
  store i32 %59, i32* %r2.0.reg2mem, !insn.addr !74
  store i32 %spec.select1, i32* %r5.3.reg2mem, !insn.addr !74
  store i32 %spec.select, i32* %r7.1.reg2mem, !insn.addr !74
  br label %dec_label_pc_10ae0, !insn.addr !74

; uselistorder directives
  uselistorder i8 %38, { 1, 0 }
  uselistorder i32 %spec.select1, { 2, 1, 0 }
  uselistorder i32 %spec.select, { 3, 2, 1, 0 }
  uselistorder i32 %11, { 1, 0, 2 }
  uselistorder i32 %r5.0.reload, { 1, 0, 2 }
  uselistorder i8* %5, { 1, 0, 2 }
  uselistorder i32* %r5.0.reg2mem, { 4, 3, 2, 0, 1 }
  uselistorder i32* %r2.0.reg2mem, { 6, 0, 3, 5, 4, 1, 2 }
  uselistorder i32* %r5.3.reg2mem, { 6, 0, 3, 5, 4, 1, 2 }
  uselistorder i32* %r7.1.reg2mem, { 6, 0, 3, 5, 4, 1, 2 }
  uselistorder i32 (i32)* @function_10c0c, { 2, 1, 0 }
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0, 2 }
  uselistorder i32 4, { 1, 0, 2 }
  uselistorder i32 ptrtoint ([8 x i8]* @global_var_11188 to i32), { 1, 2, 0 }
  uselistorder i32 ptrtoint ([10 x i8]* @global_var_11190 to i32), { 2, 3, 0, 1 }
  uselistorder i32 4028, { 2, 4, 3, 0, 1 }
  uselistorder i32 %argc, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_10ae0, { 5, 2, 4, 3, 0, 1 }
  uselistorder label %dec_label_pc_10a84, { 1, 0 }
  uselistorder label %dec_label_pc_109f8, { 3, 2, 1, 0 }
}

define i32 @_start(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10b4c:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !75
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !75
  %2 = call i32 @__libc_start_main(i32 68024, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 69729 to void ()*), void ()* inttoptr (i32 68024 to void ()*), void ()* %1), !insn.addr !75
  call void @abort(), !insn.addr !76
  unreachable, !insn.addr !76
}

define i32 @function_10b70(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10b70:
  ret i32 %arg1, !insn.addr !77
}

define i32 @function_10b7c() local_unnamed_addr {
dec_label_pc_10b7c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_22064, align 4, !insn.addr !78
  %3 = icmp eq i32 %2, 0, !insn.addr !79
  br i1 %3, label %4, label %dec_label_pc_10b94, !insn.addr !80

; <label>:4:                                      ; preds = %dec_label_pc_10b7c
  ret i32 %1, !insn.addr !80

dec_label_pc_10b94:                               ; preds = %dec_label_pc_10b7c
  call void @__gmon_start__(), !insn.addr !81
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !81
}

define i32 @function_10ba0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10ba0:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca double
  %cpsr_n.23.reg2mem = alloca i1, !insn.addr !82
  %spec.select4.reg2mem = alloca i32, !insn.addr !82
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = load i32, i32* %0
  %7 = load double, double* %2
  %8 = load double, double* %2
  br i1 %4, label %9, label %dec_label_pc_10bbc, !insn.addr !82

; <label>:9:                                      ; preds = %28, %25, %dec_label_pc_10ba0
  ret i32 %arg1, !insn.addr !82

dec_label_pc_10bbc:                               ; preds = %dec_label_pc_10ba0
  %10 = icmp eq i1 %5, %3, !insn.addr !83
  br i1 %10, label %dec_label_pc_10bd0, label %11, !insn.addr !83

; <label>:11:                                     ; preds = %dec_label_pc_10bbc
  call void @__asm_svclt(i32 18288), !insn.addr !83
  br label %dec_label_pc_10bd0, !insn.addr !83

dec_label_pc_10bd0:                               ; preds = %11, %dec_label_pc_10bbc
  %12 = mul i32 %6, 1048577, !insn.addr !84
  br i1 %3, label %.thread, label %13, !insn.addr !85

.thread:                                          ; preds = %dec_label_pc_10bd0
  %spec.select2 = select i1 %5, i32 %12, i32 0
  store i32 %spec.select2, i32* %spec.select4.reg2mem
  br label %dec_label_pc_10be8

; <label>:13:                                     ; preds = %dec_label_pc_10bd0
  %14 = mul i32 %6, 4194304, !insn.addr !85
  %15 = sub i32 0, %14
  %16 = sub i32 %15, 1
  %17 = and i32 %12, %16, !insn.addr !85
  %18 = icmp slt i32 %17, 0, !insn.addr !85
  %19 = icmp eq i32 %17, 0, !insn.addr !85
  %20 = icmp slt i32 %17, 1
  %spec.select = select i1 %20, i32 0, i32 %12
  store i32 %spec.select, i32* %spec.select4.reg2mem, !insn.addr !86
  store i1 %18, i1* %cpsr_n.23.reg2mem, !insn.addr !86
  br i1 %19, label %21, label %dec_label_pc_10be8, !insn.addr !86

; <label>:21:                                     ; preds = %13
  %22 = call i32 @unknown_240(), !insn.addr !86
  ret i32 %22, !insn.addr !86

dec_label_pc_10be8:                               ; preds = %.thread, %13
  %cpsr_n.23.reload = load i1, i1* %cpsr_n.23.reg2mem
  %spec.select4.reload = load i32, i32* %spec.select4.reg2mem
  %23 = icmp eq i1 %cpsr_n.23.reload, %3, !insn.addr !87
  br i1 %23, label %25, label %24, !insn.addr !87

; <label>:24:                                     ; preds = %dec_label_pc_10be8
  call void @__asm_svclt(i32 18288), !insn.addr !87
  br label %25, !insn.addr !87

; <label>:25:                                     ; preds = %dec_label_pc_10be8, %24
  %26 = call double @__asm_vqrshl.s8(double %8, double %7), !insn.addr !88
  %27 = call fp128 @__asm_vmvn.i32(i32 262144), !insn.addr !89
  br i1 %3, label %9, label %28, !insn.addr !90

; <label>:28:                                     ; preds = %25
  %29 = inttoptr i32 %arg4 to i32*, !insn.addr !90
  store i32 %spec.select4.reload, i32* %29, align 4, !insn.addr !90
  %30 = add i32 %arg4, -4, !insn.addr !90
  %31 = inttoptr i32 %30 to i32*, !insn.addr !90
  br label %9, !insn.addr !90

; uselistorder directives
  uselistorder i32 %12, { 1, 2, 0 }
  uselistorder i32 %6, { 1, 0 }
  uselistorder i1 %5, { 1, 0 }
  uselistorder i1 %3, { 1, 2, 3, 0 }
  uselistorder double* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder label %25, { 1, 0 }
  uselistorder label %dec_label_pc_10be8, { 1, 0 }
}

define i32 @function_10bfc(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_10bfc:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !91
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %arg4, 0, !insn.addr !91
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !91
  br i1 %2, label %dec_label_pc_10bfe, label %dec_label_pc_10c06, !insn.addr !91

dec_label_pc_10bfe:                               ; preds = %dec_label_pc_10bfc
  %3 = call i32 @function_10ba0(i32 %arg1, i32 %arg2, i32 %arg3, i32 0), !insn.addr !92
  %4 = inttoptr i32 %1 to i8*, !insn.addr !93
  store i8 1, i8* %4, align 1, !insn.addr !93
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !93
  br label %dec_label_pc_10c06, !insn.addr !93

dec_label_pc_10c06:                               ; preds = %dec_label_pc_10bfc, %dec_label_pc_10bfe
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !94

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_10c06, { 1, 0 }
}

define i32 @function_10c08() local_unnamed_addr {
dec_label_pc_10c08:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !95
}

define i32 @function_10c0c(i32 %arg1) local_unnamed_addr {
dec_label_pc_10c0c:
  %r0.11.reg2mem = alloca i32, !insn.addr !96
  %r0.0.reg2mem = alloca i32, !insn.addr !96
  %0 = call i16** @__ctype_b_loc(), !insn.addr !97
  %1 = load i16*, i16** %0, align 4, !insn.addr !98
  %2 = ptrtoint i16* %1 to i32, !insn.addr !98
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !99
  br label %dec_label_pc_10c24, !insn.addr !99

dec_label_pc_10c24:                               ; preds = %dec_label_pc_10c24, %dec_label_pc_10c0c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %3 = inttoptr i32 %r0.0.reload to i8*, !insn.addr !100
  %4 = load i8, i8* %3, align 1, !insn.addr !100
  %5 = zext i8 %4 to i32, !insn.addr !100
  %6 = add i32 %r0.0.reload, 1, !insn.addr !101
  %7 = mul i32 %5, 2, !insn.addr !102
  %8 = add i32 %7, %2, !insn.addr !103
  %9 = inttoptr i32 %8 to i16*, !insn.addr !103
  %10 = load i16, i16* %9, align 2, !insn.addr !103
  %11 = and i16 %10, 8192
  %12 = icmp eq i16 %11, 0, !insn.addr !104
  store i32 %6, i32* %r0.0.reg2mem, !insn.addr !105
  br i1 %12, label %dec_label_pc_10c40, label %dec_label_pc_10c24, !insn.addr !105

dec_label_pc_10c40:                               ; preds = %dec_label_pc_10c24
  %13 = inttoptr i32 %r0.0.reload to i32*, !insn.addr !106
  %14 = call i32* @__rawmemchr(i32* %13, i32 0), !insn.addr !106
  %15 = ptrtoint i32* %14 to i32, !insn.addr !106
  %16 = icmp ult i32 %r0.0.reload, %15, !insn.addr !107
  br i1 %16, label %dec_label_pc_10c54.lr.ph, label %dec_label_pc_10c74, !insn.addr !108

dec_label_pc_10c54.lr.ph:                         ; preds = %dec_label_pc_10c40
  store i32 %15, i32* %r0.11.reg2mem
  br label %dec_label_pc_10c54

dec_label_pc_10c54:                               ; preds = %dec_label_pc_10c54.lr.ph, %dec_label_pc_10c6c
  %r0.11.reload = load i32, i32* %r0.11.reg2mem
  %17 = add i32 %r0.11.reload, -1, !insn.addr !109
  %18 = inttoptr i32 %17 to i8*, !insn.addr !109
  %19 = load i8, i8* %18, align 1, !insn.addr !109
  %20 = zext i8 %19 to i32, !insn.addr !109
  %21 = load i16*, i16** %0, align 4
  %22 = ptrtoint i16* %21 to i32
  %23 = mul i32 %20, 2, !insn.addr !110
  %24 = add i32 %23, %22, !insn.addr !111
  %25 = inttoptr i32 %24 to i16*, !insn.addr !111
  %26 = load i16, i16* %25, align 2, !insn.addr !111
  %27 = and i16 %26, 8192
  %28 = icmp eq i16 %27, 0, !insn.addr !112
  br i1 %28, label %dec_label_pc_10c6c, label %29, !insn.addr !113

; <label>:29:                                     ; preds = %dec_label_pc_10c54
  store i8 0, i8* %18, align 1, !insn.addr !113
  br label %dec_label_pc_10c6c, !insn.addr !113

dec_label_pc_10c6c:                               ; preds = %dec_label_pc_10c54, %29
  %30 = icmp ult i32 %r0.0.reload, %17, !insn.addr !107
  store i32 %17, i32* %r0.11.reg2mem, !insn.addr !108
  br i1 %30, label %dec_label_pc_10c54, label %dec_label_pc_10c74, !insn.addr !108

dec_label_pc_10c74:                               ; preds = %dec_label_pc_10c6c, %dec_label_pc_10c40
  ret i32 %r0.0.reload, !insn.addr !114

; uselistorder directives
  uselistorder i32 %r0.0.reload, { 5, 4, 2, 3, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.11.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10c6c, { 1, 0 }
  uselistorder label %dec_label_pc_10c54, { 1, 0 }
}

define i32 @display(i32 %arg1) local_unnamed_addr {
dec_label_pc_10c7c:
  %r6.0.reg2mem = alloca i32, !insn.addr !115
  %r4.7.reg2mem = alloca i32, !insn.addr !115
  %r4.6.reg2mem = alloca i32, !insn.addr !115
  %.pre-phi.reg2mem = alloca i8*, !insn.addr !115
  %r5.2.reg2mem = alloca i32, !insn.addr !115
  %r7.1.reg2mem = alloca i32, !insn.addr !115
  %r0.1.reg2mem = alloca i32, !insn.addr !115
  %r4.2.reg2mem = alloca i32, !insn.addr !115
  %r0.0.reg2mem = alloca i32, !insn.addr !115
  %r4.0.reg2mem = alloca i32, !insn.addr !115
  %0 = icmp eq i32 %arg1, 0, !insn.addr !116
  store i32 %arg1, i32* %r4.0.reg2mem, !insn.addr !117
  store i32 0, i32* %r0.1.reg2mem, !insn.addr !117
  br i1 %0, label %dec_label_pc_10ce0, label %dec_label_pc_10ca8, !insn.addr !117

dec_label_pc_10ca8:                               ; preds = %dec_label_pc_10c7c, %dec_label_pc_10cd8
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %1 = inttoptr i32 %r4.0.reload to i8*, !insn.addr !118
  %2 = call i8* @strchr(i8* %1, i32 124), !insn.addr !118
  %3 = ptrtoint i8* %2 to i32, !insn.addr !118
  %4 = icmp eq i8* %2, null, !insn.addr !119
  br i1 %4, label %dec_label_pc_10ce8, label %dec_label_pc_10cbc, !insn.addr !120

dec_label_pc_10cbc:                               ; preds = %dec_label_pc_10ca8
  %5 = add i32 %3, 1, !insn.addr !121
  store i8 0, i8* %2, align 1, !insn.addr !122
  %6 = load i8, i8* %1, align 1, !insn.addr !123
  %7 = icmp eq i8 %6, 0, !insn.addr !124
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !125
  store i32 %5, i32* %r4.2.reg2mem, !insn.addr !125
  store i32 %5, i32* %r7.1.reg2mem, !insn.addr !125
  br i1 %7, label %dec_label_pc_10cd8, label %dec_label_pc_10cf8, !insn.addr !125

dec_label_pc_10cd8:                               ; preds = %dec_label_pc_10cbc, %dec_label_pc_10dc0
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %8 = icmp eq i32 %r4.2.reload, 0, !insn.addr !126
  store i32 %r4.2.reload, i32* %r4.0.reg2mem, !insn.addr !127
  store i32 %r0.0.reload, i32* %r0.1.reg2mem, !insn.addr !127
  br i1 %8, label %dec_label_pc_10ce0, label %dec_label_pc_10ca8, !insn.addr !127

dec_label_pc_10ce0:                               ; preds = %dec_label_pc_10cd8, %dec_label_pc_10ce8, %dec_label_pc_10c7c
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  ret i32 %r0.1.reload, !insn.addr !128

dec_label_pc_10ce8:                               ; preds = %dec_label_pc_10ca8
  %9 = load i8, i8* %1, align 1, !insn.addr !129
  %10 = icmp eq i8 %9, 0, !insn.addr !130
  store i32 %3, i32* %r0.1.reg2mem, !insn.addr !131
  store i32 %3, i32* %r7.1.reg2mem, !insn.addr !131
  br i1 %10, label %dec_label_pc_10ce0, label %dec_label_pc_10cf8, !insn.addr !131

dec_label_pc_10cf8:                               ; preds = %dec_label_pc_10ce8, %dec_label_pc_10cbc
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  store i32 %r4.0.reload, i32* %r4.7.reg2mem, !insn.addr !132
  store i32 0, i32* %r6.0.reg2mem, !insn.addr !132
  br label %dec_label_pc_10d9c, !insn.addr !132

dec_label_pc_10d00:                               ; preds = %dec_label_pc_10d9c
  %11 = add i32 %39, 1, !insn.addr !133
  store i8 0, i8* %38, align 1, !insn.addr !134
  %12 = load i8, i8* %37, align 1, !insn.addr !135
  %13 = icmp eq i8 %12, 0, !insn.addr !136
  store i32 %11, i32* %r5.2.reg2mem, !insn.addr !137
  store i32 %11, i32* %r4.6.reg2mem, !insn.addr !137
  br i1 %13, label %dec_label_pc_10d90, label %dec_label_pc_10d1c, !insn.addr !137

dec_label_pc_10d1c:                               ; preds = %dec_label_pc_10db0, %dec_label_pc_10d00
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  %14 = call i8* @strchr(i8* nonnull %37, i32 61), !insn.addr !138
  %15 = icmp eq i8* %14, null, !insn.addr !139
  %16 = icmp eq i32 %r6.0.reload, 0
  br i1 %15, label %dec_label_pc_10df4, label %dec_label_pc_10d30, !insn.addr !140

dec_label_pc_10d30:                               ; preds = %dec_label_pc_10d1c
  %17 = ptrtoint i8* %14 to i32, !insn.addr !138
  store i8 0, i8* %14, align 1, !insn.addr !141
  %18 = add i32 %17, 1, !insn.addr !142
  %19 = icmp eq i32 %18, 0
  br i1 %16, label %dec_label_pc_10d44, label %dec_label_pc_10dd4, !insn.addr !143

dec_label_pc_10d44:                               ; preds = %dec_label_pc_10d30
  br i1 %19, label %dec_label_pc_10dfc, label %dec_label_pc_10d4c, !insn.addr !144

dec_label_pc_10d4c:                               ; preds = %dec_label_pc_10d44
  %20 = call i16** @__ctype_b_loc(), !insn.addr !145
  %21 = inttoptr i32 %18 to i8*
  %22 = load i8, i8* %21, align 1, !insn.addr !146
  %23 = zext i8 %22 to i32, !insn.addr !146
  %24 = load i16*, i16** %20, align 4, !insn.addr !147
  %25 = ptrtoint i16* %24 to i32, !insn.addr !147
  %26 = mul i32 %23, 2, !insn.addr !148
  %27 = add i32 %26, %25, !insn.addr !149
  %28 = inttoptr i32 %27 to i16*, !insn.addr !149
  %29 = load i16, i16* %28, align 2, !insn.addr !149
  %30 = and i16 %29, 2048
  %31 = icmp eq i16 %30, 0, !insn.addr !150
  %32 = select i1 %31, i8* bitcast (i8** @global_var_110fc to i8*), i8* %21, !insn.addr !151
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_110ac, i32 0, i32 0), i8* nonnull %37, i8* %32), !insn.addr !151
  store i8* %21, i8** %.pre-phi.reg2mem, !insn.addr !151
  br label %dec_label_pc_10d78, !insn.addr !151

dec_label_pc_10d78:                               ; preds = %dec_label_pc_10dd4.dec_label_pc_10d78_crit_edge, %dec_label_pc_10d4c
  %.pre-phi.reload = load i8*, i8** %.pre-phi.reg2mem
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_110bc, i32 0, i32 0), i8* nonnull %37, i8* %.pre-phi.reload), !insn.addr !152
  store i32 %r5.2.reload, i32* %r4.6.reg2mem, !insn.addr !152
  br label %dec_label_pc_10d90, !insn.addr !152

dec_label_pc_10d90:                               ; preds = %dec_label_pc_10ddc, %dec_label_pc_10d78, %dec_label_pc_10d00
  %r4.6.reload = load i32, i32* %r4.6.reg2mem
  %35 = icmp eq i32 %r4.6.reload, 0, !insn.addr !153
  %36 = add i32 %r6.0.reload, 1, !insn.addr !154
  store i32 %r4.6.reload, i32* %r4.7.reg2mem, !insn.addr !155
  store i32 %36, i32* %r6.0.reg2mem, !insn.addr !155
  br i1 %35, label %dec_label_pc_10dc0, label %dec_label_pc_10d9c, !insn.addr !155

dec_label_pc_10d9c:                               ; preds = %dec_label_pc_10d90, %dec_label_pc_10cf8
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r4.7.reload = load i32, i32* %r4.7.reg2mem
  %37 = inttoptr i32 %r4.7.reload to i8*
  %38 = call i8* @strchr(i8* %37, i32 44), !insn.addr !156
  %39 = ptrtoint i8* %38 to i32, !insn.addr !156
  %40 = icmp eq i8* %38, null, !insn.addr !157
  br i1 %40, label %dec_label_pc_10db0, label %dec_label_pc_10d00, !insn.addr !158

dec_label_pc_10db0:                               ; preds = %dec_label_pc_10d9c
  %41 = load i8, i8* %37, align 1, !insn.addr !159
  %42 = icmp eq i8 %41, 0, !insn.addr !160
  store i32 %39, i32* %r5.2.reg2mem, !insn.addr !161
  br i1 %42, label %dec_label_pc_10dc0, label %dec_label_pc_10d1c, !insn.addr !161

dec_label_pc_10dc0:                               ; preds = %dec_label_pc_10db0, %dec_label_pc_10d90
  %43 = call i32 @puts(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_110dc, i32 0, i32 0)), !insn.addr !162
  store i32 %43, i32* %r0.0.reg2mem, !insn.addr !163
  store i32 %r7.1.reload, i32* %r4.2.reg2mem, !insn.addr !163
  br label %dec_label_pc_10cd8, !insn.addr !163

dec_label_pc_10dd4:                               ; preds = %dec_label_pc_10d30
  br i1 %19, label %dec_label_pc_10ddc, label %dec_label_pc_10dd4.dec_label_pc_10d78_crit_edge, !insn.addr !164

dec_label_pc_10dd4.dec_label_pc_10d78_crit_edge:  ; preds = %dec_label_pc_10dd4
  %.pre = inttoptr i32 %18 to i8*, !insn.addr !152
  store i8* %.pre, i8** %.pre-phi.reg2mem
  br label %dec_label_pc_10d78

dec_label_pc_10ddc:                               ; preds = %dec_label_pc_10df4, %dec_label_pc_10dd4, %dec_label_pc_10dfc
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_110cc, i32 0, i32 0), i32 %r6.0.reload, i8* nonnull %37), !insn.addr !165
  store i32 %r5.2.reload, i32* %r4.6.reg2mem, !insn.addr !166
  br label %dec_label_pc_10d90, !insn.addr !166

dec_label_pc_10df4:                               ; preds = %dec_label_pc_10d1c
  br i1 %16, label %dec_label_pc_10dfc, label %dec_label_pc_10ddc, !insn.addr !167

dec_label_pc_10dfc:                               ; preds = %dec_label_pc_10df4, %dec_label_pc_10d44
  %45 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_110ac, i32 0, i32 0), i8* nonnull %37, i8* bitcast (i8** @global_var_110fc to i8*)), !insn.addr !168
  br label %dec_label_pc_10ddc, !insn.addr !169

; uselistorder directives
  uselistorder i8* %38, { 1, 2, 0 }
  uselistorder i8* %37, { 1, 2, 6, 7, 5, 0, 3, 4 }
  uselistorder i32 %r6.0.reload, { 1, 0, 2 }
  uselistorder i1 %16, { 1, 0 }
  uselistorder i8* %14, { 0, 2, 1 }
  uselistorder i32 %r5.2.reload, { 1, 0 }
  uselistorder i32 %r4.2.reload, { 1, 0 }
  uselistorder i8* %1, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.1.reg2mem, { 2, 0, 1, 3 }
  uselistorder i32* %r5.2.reg2mem, { 2, 0, 1 }
  uselistorder i8** %.pre-phi.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.6.reg2mem, { 3, 0, 2, 1 }
  uselistorder i8* bitcast (i8** @global_var_110fc to i8*), { 1, 0 }
  uselistorder i16** ()* @__ctype_b_loc, { 1, 0, 2 }
  uselistorder i8* null, { 1, 0, 2 }
  uselistorder i8* (i8*, i32)* @strchr, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_10ddc, { 2, 0, 1 }
  uselistorder label %dec_label_pc_10ce0, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10cd8, { 1, 0 }
  uselistorder label %dec_label_pc_10ca8, { 1, 0 }
}

define i32 @callapi(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10e10:
  %0 = alloca i32
  %r5.2.reg2mem = alloca i32, !insn.addr !170
  %r5.1.reg2mem = alloca i32, !insn.addr !170
  %r4.0.reg2mem = alloca i32, !insn.addr !170
  %sb.0.ph.in.reg2mem = alloca i32*, !insn.addr !170
  %r7.1.ph.reg2mem = alloca i32, !insn.addr !170
  %r4.0.ph.reg2mem = alloca i32, !insn.addr !170
  %1 = load i32, i32* %0
  %stack_var_-48 = alloca i32, align 4
  %2 = inttoptr i32 %arg2 to i8*, !insn.addr !171
  %3 = call %hostent* @gethostbyname(i8* %2), !insn.addr !171
  %4 = icmp eq %hostent* %3, null, !insn.addr !172
  br i1 %4, label %dec_label_pc_10f38, label %dec_label_pc_10e34, !insn.addr !173

dec_label_pc_10e34:                               ; preds = %dec_label_pc_10e10
  %5 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !174
  %6 = icmp eq i32 %5, -1, !insn.addr !175
  br i1 %6, label %dec_label_pc_10f58, label %dec_label_pc_10e50, !insn.addr !176

dec_label_pc_10e50:                               ; preds = %dec_label_pc_10e34
  %7 = call i32 @__asm_rev16(i32 %arg3), !insn.addr !177
  store i32 2, i32* %stack_var_-48, align 4, !insn.addr !178
  %8 = bitcast i32* %stack_var_-48 to %sockaddr*, !insn.addr !179
  %9 = call i32 @connect(i32 %5, %sockaddr* nonnull %8, i32 16), !insn.addr !179
  %10 = icmp slt i32 %9, 0, !insn.addr !180
  br i1 %10, label %dec_label_pc_10f84, label %dec_label_pc_10e98, !insn.addr !180

dec_label_pc_10e98:                               ; preds = %dec_label_pc_10e50
  %11 = inttoptr i32 %arg1 to i8*, !insn.addr !181
  %12 = call i32 @strlen(i8* %11), !insn.addr !181
  %13 = inttoptr i32 %arg1 to i32*, !insn.addr !182
  %14 = call i32 @send(i32 %5, i32* %13, i32 %12, i32 0), !insn.addr !182
  %15 = icmp slt i32 %14, 0, !insn.addr !183
  br i1 %15, label %dec_label_pc_11008, label %dec_label_pc_10ebc, !insn.addr !184

dec_label_pc_10ebc:                               ; preds = %dec_label_pc_10e98
  %16 = call i32* @malloc(i32 65536), !insn.addr !185
  %17 = icmp eq i32* %16, null, !insn.addr !186
  %sl.0 = select i1 %17, i32 %1, i32 65535
  store i32 0, i32* %r4.0.ph.reg2mem, !insn.addr !187
  store i32 65535, i32* %r7.1.ph.reg2mem, !insn.addr !187
  store i32* %16, i32** %sb.0.ph.in.reg2mem, !insn.addr !187
  br i1 %17, label %dec_label_pc_11048, label %dec_label_pc_10ed4.outer, !insn.addr !187

dec_label_pc_10ed4.outer:                         ; preds = %dec_label_pc_10ebc, %dec_label_pc_10f04
  %sb.0.ph.in.reload = load i32*, i32** %sb.0.ph.in.reg2mem
  %r7.1.ph.reload = load i32, i32* %r7.1.ph.reg2mem
  %r4.0.ph.reload = load i32, i32* %r4.0.ph.reg2mem
  %sb.0.ph = ptrtoint i32* %sb.0.ph.in.reload to i32
  store i32 %r4.0.ph.reload, i32* %r4.0.reg2mem
  br label %dec_label_pc_10ed4

dec_label_pc_10ed4:                               ; preds = %dec_label_pc_10ed4.outer, %dec_label_pc_10efc
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %18 = add i32 %r4.0.reload, %sb.0.ph, !insn.addr !188
  %19 = sub i32 %r7.1.ph.reload, %r4.0.reload, !insn.addr !189
  %20 = inttoptr i32 %18 to i32*, !insn.addr !190
  %21 = call i32 @recv(i32 %5, i32* %20, i32 %19, i32 0), !insn.addr !190
  %22 = icmp slt i32 %21, 0, !insn.addr !191
  br i1 %22, label %dec_label_pc_10fb0, label %dec_label_pc_10ef8, !insn.addr !192

dec_label_pc_10ef8:                               ; preds = %dec_label_pc_10ed4
  %23 = icmp eq i32 %21, 0, !insn.addr !191
  store i32 0, i32* %r5.1.reg2mem, !insn.addr !193
  br i1 %23, label %dec_label_pc_10fd0, label %dec_label_pc_10efc, !insn.addr !193

dec_label_pc_10efc:                               ; preds = %dec_label_pc_10ef8
  %24 = add i32 %21, %r4.0.reload, !insn.addr !194
  %25 = icmp eq i32 %r7.1.ph.reload, %24, !insn.addr !195
  store i32 %24, i32* %r4.0.reg2mem, !insn.addr !196
  br i1 %25, label %dec_label_pc_10f04, label %dec_label_pc_10ed4, !insn.addr !196

dec_label_pc_10f04:                               ; preds = %dec_label_pc_10efc
  %26 = add i32 %r7.1.ph.reload, 65536, !insn.addr !197
  %27 = add i32 %r7.1.ph.reload, %sl.0, !insn.addr !198
  %28 = call i32* @realloc(i32* %sb.0.ph.in.reload, i32 %26), !insn.addr !199
  %29 = icmp eq i32* %28, null, !insn.addr !200
  store i32 %r7.1.ph.reload, i32* %r4.0.ph.reg2mem, !insn.addr !201
  store i32 %27, i32* %r7.1.ph.reg2mem, !insn.addr !201
  store i32* %28, i32** %sb.0.ph.in.reg2mem, !insn.addr !201
  br i1 %29, label %dec_label_pc_10f20, label %dec_label_pc_10ed4.outer, !insn.addr !201

dec_label_pc_10f20:                               ; preds = %dec_label_pc_10f04
  %30 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11154, i32 0, i32 0), i32 %26), !insn.addr !202
  br label %dec_label_pc_10f4c, !insn.addr !203

dec_label_pc_10f38:                               ; preds = %dec_label_pc_10e10
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_110e0, i32 0, i32 0), i8* %2), !insn.addr !204
  br label %dec_label_pc_10f4c, !insn.addr !204

dec_label_pc_10f4c:                               ; preds = %dec_label_pc_11048, %dec_label_pc_10f38, %dec_label_pc_10f20
  ret i32 1, !insn.addr !205

dec_label_pc_10f58:                               ; preds = %dec_label_pc_10e34
  %32 = call i32* @__errno_location(), !insn.addr !206
  %33 = load i32, i32* %32, align 4, !insn.addr !207
  %34 = call i8* @strerror(i32 %33), !insn.addr !208
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_11100, i32 0, i32 0), i8* %34), !insn.addr !209
  ret i32 1, !insn.addr !210

dec_label_pc_10f84:                               ; preds = %dec_label_pc_10e50
  %36 = call i32* @__errno_location(), !insn.addr !211
  %37 = load i32, i32* %36, align 4, !insn.addr !212
  %38 = call i8* @strerror(i32 %37), !insn.addr !213
  %39 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_11124, i32 0, i32 0), i8* %38), !insn.addr !214
  ret i32 1, !insn.addr !215

dec_label_pc_10fb0:                               ; preds = %dec_label_pc_10ed4
  %40 = call i32* @__errno_location(), !insn.addr !216
  %41 = load i32, i32* %40, align 4, !insn.addr !217
  %42 = call i8* @strerror(i32 %41), !insn.addr !218
  %43 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_11164, i32 0, i32 0), i8* %42), !insn.addr !219
  store i32 1, i32* %r5.1.reg2mem, !insn.addr !219
  br label %dec_label_pc_10fd0, !insn.addr !219

dec_label_pc_10fd0:                               ; preds = %dec_label_pc_10ef8, %dec_label_pc_10fb0
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %44 = inttoptr i32 %18 to i8*, !insn.addr !220
  store i8 0, i8* %44, align 1, !insn.addr !220
  %45 = load i32, i32* @global_var_22078, align 4, !insn.addr !221
  %46 = icmp eq i32 %45, 0, !insn.addr !222
  br i1 %46, label %dec_label_pc_1102c, label %dec_label_pc_10fec, !insn.addr !223

dec_label_pc_10fec:                               ; preds = %dec_label_pc_10fd0
  %47 = bitcast i32* %sb.0.ph.in.reload to i8*
  %48 = call i32 @puts(i8* %47), !insn.addr !224
  store i32 %r5.1.reload, i32* %r5.2.reg2mem, !insn.addr !224
  br label %dec_label_pc_10ff4, !insn.addr !224

dec_label_pc_10ff4:                               ; preds = %dec_label_pc_1102c, %dec_label_pc_11008, %dec_label_pc_10fec
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  %49 = call i32 @close(i32 %5), !insn.addr !225
  ret i32 %r5.2.reload, !insn.addr !226

dec_label_pc_11008:                               ; preds = %dec_label_pc_10e98
  %50 = call i32* @__errno_location(), !insn.addr !227
  %51 = load i32, i32* %50, align 4, !insn.addr !228
  %52 = call i8* @strerror(i32 %51), !insn.addr !229
  %53 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_11140, i32 0, i32 0), i8* %52), !insn.addr !230
  store i32 1, i32* %r5.2.reg2mem, !insn.addr !231
  br label %dec_label_pc_10ff4, !insn.addr !231

dec_label_pc_1102c:                               ; preds = %dec_label_pc_10fd0
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11178, i32 0, i32 0), i32* %sb.0.ph.in.reload), !insn.addr !232
  %55 = call i32 @display(i32 %sb.0.ph), !insn.addr !233
  store i32 %r5.1.reload, i32* %r5.2.reg2mem, !insn.addr !234
  br label %dec_label_pc_10ff4, !insn.addr !234

dec_label_pc_11048:                               ; preds = %dec_label_pc_10ebc
  %56 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11154, i32 0, i32 0), i32 65536), !insn.addr !235
  br label %dec_label_pc_10f4c, !insn.addr !236

; uselistorder directives
  uselistorder i32 %r5.1.reload, { 1, 0 }
  uselistorder i32 %r4.0.reload, { 2, 0, 1 }
  uselistorder i32 %r7.1.ph.reload, { 4, 3, 1, 0, 2 }
  uselistorder i32* %sb.0.ph.in.reload, { 3, 2, 1, 0 }
  uselistorder i1 %17, { 1, 0 }
  uselistorder i32 %5, { 1, 0, 2, 3, 4 }
  uselistorder i32* %r4.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r7.1.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32** %sb.0.ph.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r5.2.reg2mem, { 2, 3, 0, 1 }
  uselistorder i32 (i8*)* @puts, { 1, 0, 2 }
  uselistorder i32* @global_var_22078, { 1, 0 }
  uselistorder i8 0, { 1, 4, 7, 3, 6, 2, 5, 8, 0, 9, 10, 11, 12, 13, 14 }
  uselistorder i8* (i32)* @strerror, { 3, 2, 1, 0, 4 }
  uselistorder i32* ()* @__errno_location, { 0, 3, 2, 1, 4 }
  uselistorder i32 (i8*, ...)* @printf, { 7, 6, 5, 4, 3, 2, 1, 0, 11, 10, 9, 8, 12 }
  uselistorder i32 65536, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_10fd0, { 1, 0 }
  uselistorder label %dec_label_pc_10ed4, { 1, 0 }
  uselistorder label %dec_label_pc_10ed4.outer, { 1, 0 }
}

define i32 @__libc_csu_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_11060:
  %0 = call i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !237
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 139026, i32 ptrtoint (i32* @global_var_21f10 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !238

; uselistorder directives
  uselistorder i32 0, { 15, 26, 27, 22, 23, 40, 24, 25, 20, 21, 18, 19, 16, 17, 28, 29, 0, 53, 54, 41, 1, 55, 13, 42, 43, 32, 33, 5, 6, 50, 30, 31, 11, 12, 14, 49, 2, 51, 3, 52, 8, 9, 46, 10, 47, 48, 4, 7, 58, 34, 35, 56, 57, 36, 37, 38, 39, 44, 45 }
  uselistorder i32 2, { 4, 5, 7, 1, 2, 3, 8, 0, 9, 10, 11, 12, 6 }
}

define i32 @__libc_csu_fini() local_unnamed_addr {
dec_label_pc_1109c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !239

; uselistorder directives
  uselistorder i32 1, { 5, 8, 10, 40, 39, 41, 44, 47, 15, 14, 13, 12, 11, 9, 4, 49, 50, 51, 52, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 53, 27, 26, 3, 28, 2, 43, 38, 30, 29, 7, 6, 1, 0, 48, 42, 45, 36, 35, 54, 55, 34, 37, 33, 32, 31, 46 }
}

define i32 @_fini(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_110a0:
  ret i32 %arg1, !insn.addr !240
}

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @strtol(i8*, i8**, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32* @realloc(i32*, i32) local_unnamed_addr

declare i32* @__rawmemchr(i32*, i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i8* @strerror(i32) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i16** @__ctype_b_loc() local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare i32 @fprintf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare %hostent* @gethostbyname(i8*) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @recv(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @send(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @connect(i32, %sockaddr*, i32) local_unnamed_addr

declare i32 @__asm_sxth(i32) local_unnamed_addr

declare i32 @__asm_rev16(i32) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare double @__asm_vqrshl.s8(double, double) local_unnamed_addr

declare fp128 @__asm_vmvn.i32(i32) local_unnamed_addr

!0 = !{i64 67732}
!1 = !{i64 67736}
!2 = !{i64 67768}
!3 = !{i64 67780}
!4 = !{i64 67792}
!5 = !{i64 67804}
!6 = !{i64 67816}
!7 = !{i64 67828}
!8 = !{i64 67840}
!9 = !{i64 67852}
!10 = !{i64 67864}
!11 = !{i64 67876}
!12 = !{i64 67888}
!13 = !{i64 67900}
!14 = !{i64 67912}
!15 = !{i64 67924}
!16 = !{i64 67936}
!17 = !{i64 67948}
!18 = !{i64 67960}
!19 = !{i64 67972}
!20 = !{i64 67984}
!21 = !{i64 67996}
!22 = !{i64 68008}
!23 = !{i64 68020}
!24 = !{i64 68024}
!25 = !{i64 68032}
!26 = !{i64 68036}
!27 = !{i64 68048}
!28 = !{i64 68052}
!29 = !{i64 68056}
!30 = !{i64 68072}
!31 = !{i64 68076}
!32 = !{i64 68080}
!33 = !{i64 68088}
!34 = !{i64 68092}
!35 = !{i64 68096}
!36 = !{i64 68100}
!37 = !{i64 68116}
!38 = !{i64 68128}
!39 = !{i64 68136}
!40 = !{i64 68140}
!41 = !{i64 68148}
!42 = !{i64 68152}
!43 = !{i64 68160}
!44 = !{i64 68172}
!45 = !{i64 68176}
!46 = !{i64 68180}
!47 = !{i64 68184}
!48 = !{i64 68188}
!49 = !{i64 68192}
!50 = !{i64 68204}
!51 = !{i64 68216}
!52 = !{i64 68220}
!53 = !{i64 68224}
!54 = !{i64 68240}
!55 = !{i64 68244}
!56 = !{i64 68248}
!57 = !{i64 68252}
!58 = !{i64 68256}
!59 = !{i64 68260}
!60 = !{i64 68264}
!61 = !{i64 68268}
!62 = !{i64 68272}
!63 = !{i64 68288}
!64 = !{i64 68296}
!65 = !{i64 68332}
!66 = !{i64 68344}
!67 = !{i64 68348}
!68 = !{i64 68352}
!69 = !{i64 68372}
!70 = !{i64 68380}
!71 = !{i64 68388}
!72 = !{i64 68400}
!73 = !{i64 68404}
!74 = !{i64 68408}
!75 = !{i64 68456}
!76 = !{i64 68460}
!77 = !{i64 68466}
!78 = !{i64 68488}
!79 = !{i64 68492}
!80 = !{i64 68496}
!81 = !{i64 68500}
!82 = !{i64 68512}
!83 = !{i64 68544}
!84 = !{i64 68564}
!85 = !{i64 68568}
!86 = !{i64 68576}
!87 = !{i64 68588}
!88 = !{i64 68592}
!89 = !{i64 68596}
!90 = !{i64 68600}
!91 = !{i64 68604}
!92 = !{i64 68606}
!93 = !{i64 68612}
!94 = !{i64 68614}
!95 = !{i64 68616}
!96 = !{i64 68620}
!97 = !{i64 68628}
!98 = !{i64 68636}
!99 = !{i64 68640}
!100 = !{i64 68644}
!101 = !{i64 68652}
!102 = !{i64 68656}
!103 = !{i64 68660}
!104 = !{i64 68664}
!105 = !{i64 68668}
!106 = !{i64 68680}
!107 = !{i64 68716}
!108 = !{i64 68720}
!109 = !{i64 68692}
!110 = !{i64 68700}
!111 = !{i64 68704}
!112 = !{i64 68708}
!113 = !{i64 68712}
!114 = !{i64 68728}
!115 = !{i64 68732}
!116 = !{i64 68736}
!117 = !{i64 68744}
!118 = !{i64 68784}
!119 = !{i64 68788}
!120 = !{i64 68792}
!121 = !{i64 68800}
!122 = !{i64 68804}
!123 = !{i64 68808}
!124 = !{i64 68812}
!125 = !{i64 68820}
!126 = !{i64 68824}
!127 = !{i64 68828}
!128 = !{i64 68836}
!129 = !{i64 68840}
!130 = !{i64 68844}
!131 = !{i64 68848}
!132 = !{i64 68860}
!133 = !{i64 68868}
!134 = !{i64 68872}
!135 = !{i64 68876}
!136 = !{i64 68880}
!137 = !{i64 68888}
!138 = !{i64 68900}
!139 = !{i64 68904}
!140 = !{i64 68908}
!141 = !{i64 68920}
!142 = !{i64 68924}
!143 = !{i64 68928}
!144 = !{i64 68936}
!145 = !{i64 68940}
!146 = !{i64 68944}
!147 = !{i64 68952}
!148 = !{i64 68960}
!149 = !{i64 68964}
!150 = !{i64 68968}
!151 = !{i64 68980}
!152 = !{i64 69004}
!153 = !{i64 69008}
!154 = !{i64 69012}
!155 = !{i64 69016}
!156 = !{i64 69028}
!157 = !{i64 69032}
!158 = !{i64 69036}
!159 = !{i64 69040}
!160 = !{i64 69044}
!161 = !{i64 69052}
!162 = !{i64 69068}
!163 = !{i64 69072}
!164 = !{i64 69080}
!165 = !{i64 69100}
!166 = !{i64 69104}
!167 = !{i64 69112}
!168 = !{i64 69128}
!169 = !{i64 69132}
!170 = !{i64 69136}
!171 = !{i64 69160}
!172 = !{i64 69164}
!173 = !{i64 69168}
!174 = !{i64 69184}
!175 = !{i64 69188}
!176 = !{i64 69196}
!177 = !{i64 69212}
!178 = !{i64 69236}
!179 = !{i64 69260}
!180 = !{i64 69268}
!181 = !{i64 69276}
!182 = !{i64 69296}
!183 = !{i64 69300}
!184 = !{i64 69304}
!185 = !{i64 69312}
!186 = !{i64 69316}
!187 = !{i64 69328}
!188 = !{i64 69332}
!189 = !{i64 69336}
!190 = !{i64 69352}
!191 = !{i64 69356}
!192 = !{i64 69364}
!193 = !{i64 69368}
!194 = !{i64 69360}
!195 = !{i64 69372}
!196 = !{i64 69376}
!197 = !{i64 69380}
!198 = !{i64 69392}
!199 = !{i64 69396}
!200 = !{i64 69400}
!201 = !{i64 69404}
!202 = !{i64 69424}
!203 = !{i64 69428}
!204 = !{i64 69448}
!205 = !{i64 69460}
!206 = !{i64 69464}
!207 = !{i64 69468}
!208 = !{i64 69476}
!209 = !{i64 69492}
!210 = !{i64 69504}
!211 = !{i64 69508}
!212 = !{i64 69512}
!213 = !{i64 69520}
!214 = !{i64 69536}
!215 = !{i64 69548}
!216 = !{i64 69552}
!217 = !{i64 69556}
!218 = !{i64 69564}
!219 = !{i64 69580}
!220 = !{i64 69596}
!221 = !{i64 69600}
!222 = !{i64 69604}
!223 = !{i64 69608}
!224 = !{i64 69616}
!225 = !{i64 69624}
!226 = !{i64 69636}
!227 = !{i64 69640}
!228 = !{i64 69644}
!229 = !{i64 69652}
!230 = !{i64 69668}
!231 = !{i64 69672}
!232 = !{i64 69688}
!233 = !{i64 69696}
!234 = !{i64 69700}
!235 = !{i64 69720}
!236 = !{i64 69724}
!237 = !{i64 69744}
!238 = !{i64 69776}
!239 = !{i64 69788}
!240 = !{i64 69796}
