// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deco_IsTooFarFromSpawnLoc_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Deco_IsTooFarFromSpawnLoc.Deco_IsTooFarFromSpawnLoc_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_IsTooFarFromSpawnLoc_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_IsTooFarFromSpawnLoc.Deco_IsTooFarFromSpawnLoc_C.ReceiveConditionCheck");

	UDeco_IsTooFarFromSpawnLoc_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deco_IsTooFarFromSpawnLoc.Deco_IsTooFarFromSpawnLoc_C.ExecuteUbergraph_Deco_IsTooFarFromSpawnLoc
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_IsTooFarFromSpawnLoc_C::ExecuteUbergraph_Deco_IsTooFarFromSpawnLoc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_IsTooFarFromSpawnLoc.Deco_IsTooFarFromSpawnLoc_C.ExecuteUbergraph_Deco_IsTooFarFromSpawnLoc");

	UDeco_IsTooFarFromSpawnLoc_C_ExecuteUbergraph_Deco_IsTooFarFromSpawnLoc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
