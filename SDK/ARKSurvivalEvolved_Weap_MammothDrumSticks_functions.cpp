// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Weap_MammothDrumSticks_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.ReceiveDestroyed
// ()

void AWeap_MammothDrumSticks_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.ReceiveDestroyed");

	AWeap_MammothDrumSticks_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.ClearDrumSticks
// ()

void AWeap_MammothDrumSticks_C::ClearDrumSticks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.ClearDrumSticks");

	AWeap_MammothDrumSticks_C_ClearDrumSticks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.BPStartEquippedNotify
// ()

void AWeap_MammothDrumSticks_C::BPStartEquippedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.BPStartEquippedNotify");

	AWeap_MammothDrumSticks_C_BPStartEquippedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.StartUnequipEvent
// ()

void AWeap_MammothDrumSticks_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.StartUnequipEvent");

	AWeap_MammothDrumSticks_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.UserConstructionScript
// ()

void AWeap_MammothDrumSticks_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.UserConstructionScript");

	AWeap_MammothDrumSticks_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.ExecuteUbergraph_Weap_MammothDrumSticks
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeap_MammothDrumSticks_C::ExecuteUbergraph_Weap_MammothDrumSticks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_MammothDrumSticks.Weap_MammothDrumSticks_C.ExecuteUbergraph_Weap_MammothDrumSticks");

	AWeap_MammothDrumSticks_C_ExecuteUbergraph_Weap_MammothDrumSticks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
