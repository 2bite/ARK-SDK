// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deco_FKWyvernCheckIfLandAndLeave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Deco_FKWyvernCheckIfLandAndLeave.Deco_FKWyvernCheckIfLandAndLeave_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_FKWyvernCheckIfLandAndLeave_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_FKWyvernCheckIfLandAndLeave.Deco_FKWyvernCheckIfLandAndLeave_C.ReceiveConditionCheck");

	UDeco_FKWyvernCheckIfLandAndLeave_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deco_FKWyvernCheckIfLandAndLeave.Deco_FKWyvernCheckIfLandAndLeave_C.ExecuteUbergraph_Deco_FKWyvernCheckIfLandAndLeave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDeco_FKWyvernCheckIfLandAndLeave_C::ExecuteUbergraph_Deco_FKWyvernCheckIfLandAndLeave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deco_FKWyvernCheckIfLandAndLeave.Deco_FKWyvernCheckIfLandAndLeave_C.ExecuteUbergraph_Deco_FKWyvernCheckIfLandAndLeave");

	UDeco_FKWyvernCheckIfLandAndLeave_C_ExecuteUbergraph_Deco_FKWyvernCheckIfLandAndLeave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
