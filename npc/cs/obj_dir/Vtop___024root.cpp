// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    SData/*15:0*/ __Vdly__ledr;
    // Body
    __Vdly__ledr = vlSelf->ledr;
    if (vlSelf->rst) {
        if (vlSelf->top__DOT__light_inst__DOT__en) {
            if ((0U == (IData)(vlSelf->ledr))) {
                __Vdly__ledr = (0xffffU & ((IData)(1U) 
                                           + (IData)(vlSelf->ledr)));
            } else if ((0xeU > (IData)(vlSelf->top__DOT__light_inst__DOT__cnt))) {
                __Vdly__ledr = (0xffffU & ((IData)(vlSelf->ledr) 
                                           << 1U));
                vlSelf->top__DOT__light_inst__DOT__cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__light_inst__DOT__cnt)));
            } else {
                __Vdly__ledr = 1U;
                vlSelf->top__DOT__light_inst__DOT__cnt = 0U;
            }
        } else {
            __Vdly__ledr = 0U;
            vlSelf->top__DOT__light_inst__DOT__cnt = 0U;
            vlSelf->top__DOT__light_inst__DOT__en = 1U;
        }
    } else {
        __Vdly__ledr = 0U;
        vlSelf->top__DOT__light_inst__DOT__cnt = 0U;
        vlSelf->top__DOT__light_inst__DOT__en = 0U;
    }
    vlSelf->ledr = __Vdly__ledr;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
