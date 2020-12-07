// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CheckAttackBlockade_SRV_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CheckAttackBlockade_SRV.CheckAttackBlockade_SRV_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UCheckAttackBlockade_SRV_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckAttackBlockade_SRV.CheckAttackBlockade_SRV_C.ReceiveActivation");

	UCheckAttackBlockade_SRV_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckAttackBlockade_SRV.CheckAttackBlockade_SRV_C.ExecuteUbergraph_CheckAttackBlockade_SRV
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCheckAttackBlockade_SRV_C::ExecuteUbergraph_CheckAttackBlockade_SRV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckAttackBlockade_SRV.CheckAttackBlockade_SRV_C.ExecuteUbergraph_CheckAttackBlockade_SRV");

	UCheckAttackBlockade_SRV_C_ExecuteUbergraph_CheckAttackBlockade_SRV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
