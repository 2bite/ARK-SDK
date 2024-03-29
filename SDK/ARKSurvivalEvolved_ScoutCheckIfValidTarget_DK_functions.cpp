// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ScoutCheckIfValidTarget_DK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoutCheckIfValidTarget_DK.ScoutCheckIfValidTarget_DK_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UScoutCheckIfValidTarget_DK_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoutCheckIfValidTarget_DK.ScoutCheckIfValidTarget_DK_C.ReceiveConditionCheck");

	UScoutCheckIfValidTarget_DK_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoutCheckIfValidTarget_DK.ScoutCheckIfValidTarget_DK_C.ExecuteUbergraph_ScoutCheckIfValidTarget_DK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UScoutCheckIfValidTarget_DK_C::ExecuteUbergraph_ScoutCheckIfValidTarget_DK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoutCheckIfValidTarget_DK.ScoutCheckIfValidTarget_DK_C.ExecuteUbergraph_ScoutCheckIfValidTarget_DK");

	UScoutCheckIfValidTarget_DK_C_ExecuteUbergraph_ScoutCheckIfValidTarget_DK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
