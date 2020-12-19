// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTransGPS_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTransGPS.WeapTransGPS_C.UserConstructionScript
// ()

void AWeapTransGPS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTransGPS.WeapTransGPS_C.UserConstructionScript");

	AWeapTransGPS_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTransGPS.WeapTransGPS_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_22
// ()

void AWeapTransGPS_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_22()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTransGPS.WeapTransGPS_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_22");

	AWeapTransGPS_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_22_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTransGPS.WeapTransGPS_C.ReceiveBeginPlay
// ()

void AWeapTransGPS_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTransGPS.WeapTransGPS_C.ReceiveBeginPlay");

	AWeapTransGPS_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTransGPS.WeapTransGPS_C.ExecuteUbergraph_WeapTransGPS
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTransGPS_C::ExecuteUbergraph_WeapTransGPS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTransGPS.WeapTransGPS_C.ExecuteUbergraph_WeapTransGPS");

	AWeapTransGPS_C_ExecuteUbergraph_WeapTransGPS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
