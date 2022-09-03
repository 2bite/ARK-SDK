// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ShouldFindGround_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShouldFindGround.ShouldFindGround_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UShouldFindGround_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShouldFindGround.ShouldFindGround_C.ReceiveConditionCheck");

	UShouldFindGround_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShouldFindGround.ShouldFindGround_C.ExecuteUbergraph_ShouldFindGround
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UShouldFindGround_C::ExecuteUbergraph_ShouldFindGround(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShouldFindGround.ShouldFindGround_C.ExecuteUbergraph_ShouldFindGround");

	UShouldFindGround_C_ExecuteUbergraph_ShouldFindGround_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
