; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: opt < %s -instcombine -S | FileCheck %s

; Tests for Integer BitWidth <= 64 && BitWidth % 8 != 0.

;; Flip sign bit then add INT_MIN -> nop.
define i1 @test1(i1 %x) {
; CHECK-LABEL: @test1(
; CHECK-NEXT:    ret i1 %x
;
  %tmp.2 = xor i1 %x, 1
  %tmp.4 = add i1 %tmp.2, 1
  ret i1 %tmp.4
}

;; Flip sign bit then add INT_MIN -> nop.
define i47 @test2(i47 %x) {
; CHECK-LABEL: @test2(
; CHECK-NEXT:    ret i47 %x
;
  %tmp.2 = xor i47 %x, 70368744177664
  %tmp.4 = add i47 %tmp.2, 70368744177664
  ret i47 %tmp.4
}

;; Flip sign bit then add INT_MIN -> nop.
define i15 @test3(i15 %x) {
; CHECK-LABEL: @test3(
; CHECK-NEXT:    ret i15 %x
;
  %tmp.2 = xor i15 %x, 16384
  %tmp.4 = add i15 %tmp.2, 16384
  ret i15 %tmp.4
}

; X + signbit --> X ^ signbit
define <2 x i5> @test3vec(<2 x i5> %x) {
; CHECK-LABEL: @test3vec(
; CHECK-NEXT:    [[Y:%.*]] = xor <2 x i5> %x, <i5 -16, i5 -16>
; CHECK-NEXT:    ret <2 x i5> [[Y]]
;
  %y = add <2 x i5> %x, <i5 16, i5 16>
  ret <2 x i5> %y
}

;; (x & 0b1111..0) + 1 -> x | 1
define i49 @test4(i49 %x) {
; CHECK-LABEL: @test4(
; CHECK-NEXT:    [[TMP_4:%.*]] = or i49 %x, 1
; CHECK-NEXT:    ret i49 [[TMP_4]]
;
  %tmp.2 = and i49 %x, 562949953421310
  %tmp.4 = add i49 %tmp.2, 1
  ret i49 %tmp.4
}

; Tests for Integer BitWidth > 64 && BitWidth <= 1024.

;; Flip sign bit then add INT_MIN -> nop.
define i111 @test5(i111 %x) {
; CHECK-LABEL: @test5(
; CHECK-NEXT:    ret i111 %x
;
  %tmp.2 = shl i111 1, 110
  %tmp.4 = xor i111 %x, %tmp.2
  %tmp.6 = add i111 %tmp.4, %tmp.2
  ret i111 %tmp.6
}

;; Flip sign bit then add INT_MIN -> nop.
define i65 @test6(i65 %x) {
; CHECK-LABEL: @test6(
; CHECK-NEXT:    ret i65 %x
;
  %tmp.0 = shl i65 1, 64
  %tmp.2 = xor i65 %x, %tmp.0
  %tmp.4 = add i65 %tmp.2, %tmp.0
  ret i65 %tmp.4
}

;; Flip sign bit then add INT_MIN -> nop.
define i1024 @test7(i1024 %x) {
; CHECK-LABEL: @test7(
; CHECK-NEXT:    ret i1024 %x
;
  %tmp.0 = shl i1024 1, 1023
  %tmp.2 = xor i1024 %x, %tmp.0
  %tmp.4 = add i1024 %tmp.2, %tmp.0
  ret i1024 %tmp.4
}

;; If we have add(xor(X, 0xF..F80..), 0x80..), it's an xor.
define i128 @test8(i128 %x) {
; CHECK-LABEL: @test8(
; CHECK-NEXT:    [[TMP_4:%.*]] = xor i128 %x, 170141183460469231731687303715884105600
; CHECK-NEXT:    ret i128 [[TMP_4]]
;
  %tmp.5 = shl i128 1, 127
  %tmp.1 = ashr i128 %tmp.5, 120
  %tmp.2 = xor i128 %x, %tmp.1
  %tmp.4 = add i128 %tmp.2, %tmp.5
  ret i128 %tmp.4
}

;; (x & 254)+1 -> (x & 254)|1
define i77 @test9(i77 %x) {
; CHECK-LABEL: @test9(
; CHECK-NEXT:    [[TMP_2:%.*]] = and i77 %x, 562949953421310
; CHECK-NEXT:    [[TMP_4:%.*]] = or i77 [[TMP_2]], 1
; CHECK-NEXT:    ret i77 [[TMP_4]]
;
  %tmp.2 = and i77 %x, 562949953421310
  %tmp.4 = add i77 %tmp.2, 1
  ret i77 %tmp.4
}
