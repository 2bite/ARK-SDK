// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForceSuccess_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForceSuccess_TK.ForceSuccess_TK_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UForceSuccess_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceSuccess_TK.ForceSuccess_TK_C.ReceiveExecute");

	UForceSuccess_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForceSuccess_TK.ForceSuccess_TK_C.ExecuteUbergraph_ForceSuccess_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UForceSuccess_TK_C::ExecuteUbergraph_ForceSuccess_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceSuccess_TK.ForceSuccess_TK_C.ExecuteUbergraph_ForceSuccess_TK");

	UForceSuccess_TK_C_ExecuteUbergraph_ForceSuccess_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
