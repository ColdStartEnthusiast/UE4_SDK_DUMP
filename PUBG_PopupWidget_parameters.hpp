#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PopupWidget.PopupWidget_C.OnGamepadButtonVisibilityPrepass
struct UPopupWidget_C_OnGamepadButtonVisibilityPrepass_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PopupWidget.PopupWidget_C.SetPopup
struct UPopupWidget_C_SetPopup_Params
{
	struct FText                                       Message;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FScriptDelegate                             PressedDelegate;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function PopupWidget.PopupWidget_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
struct UPopupWidget_C_BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PopupWidget.PopupWidget_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
struct UPopupWidget_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PopupWidget.PopupWidget_C.Construct
struct UPopupWidget_C_Construct_Params
{
};

// Function PopupWidget.PopupWidget_C.Custom Event_1
struct UPopupWidget_C_Custom_Event_1_Params
{
};

// Function PopupWidget.PopupWidget_C.Destruct
struct UPopupWidget_C_Destruct_Params
{
};

// Function PopupWidget.PopupWidget_C.XBoxOneOk
struct UPopupWidget_C_XBoxOneOk_Params
{
};

// Function PopupWidget.PopupWidget_C.Custom Event_2
struct UPopupWidget_C_Custom_Event_2_Params
{
};

// Function PopupWidget.PopupWidget_C.XBoxOneCancel
struct UPopupWidget_C_XBoxOneCancel_Params
{
};

// Function PopupWidget.PopupWidget_C.ExecuteUbergraph_PopupWidget
struct UPopupWidget_C_ExecuteUbergraph_PopupWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PopupWidget.PopupWidget_C.ButtonClickDispatcher__DelegateSignature
struct UPopupWidget_C_ButtonClickDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
