// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_KingKaijuStasisRange_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_KingKaijuStasisRange.Buff_KingKaijuStasisRange_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_KingKaijuStasisRange_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KingKaijuStasisRange.Buff_KingKaijuStasisRange_C.BPDeactivated");

	ABuff_KingKaijuStasisRange_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_KingKaijuStasisRange.Buff_KingKaijuStasisRange_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_KingKaijuStasisRange_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KingKaijuStasisRange.Buff_KingKaijuStasisRange_C.BPActivated");

	ABuff_KingKaijuStasisRange_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_KingKaijuStasisRange.Buff_KingKaijuStasisRange_C.UserConstructionScript
// ()

void ABuff_KingKaijuStasisRange_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KingKaijuStasisRange.Buff_KingKaijuStasisRange_C.UserConstructionScript");

	ABuff_KingKaijuStasisRange_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_KingKaijuStasisRange.Buff_KingKaijuStasisRange_C.ExecuteUbergraph_Buff_KingKaijuStasisRange
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_KingKaijuStasisRange_C::ExecuteUbergraph_Buff_KingKaijuStasisRange(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KingKaijuStasisRange.Buff_KingKaijuStasisRange_C.ExecuteUbergraph_Buff_KingKaijuStasisRange");

	ABuff_KingKaijuStasisRange_C_ExecuteUbergraph_Buff_KingKaijuStasisRange_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
