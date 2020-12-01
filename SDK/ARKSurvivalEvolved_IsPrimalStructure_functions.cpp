// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsPrimalStructure_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IsPrimalStructure.IsPrimalStructure_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsPrimalStructure_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsPrimalStructure.IsPrimalStructure_C.ReceiveConditionCheck");

	UIsPrimalStructure_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsPrimalStructure.IsPrimalStructure_C.ExecuteUbergraph_IsPrimalStructure
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsPrimalStructure_C::ExecuteUbergraph_IsPrimalStructure(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsPrimalStructure.IsPrimalStructure_C.ExecuteUbergraph_IsPrimalStructure");

	UIsPrimalStructure_C_ExecuteUbergraph_IsPrimalStructure_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
