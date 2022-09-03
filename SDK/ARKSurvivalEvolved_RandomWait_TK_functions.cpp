// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RandomWait_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RandomWait_TK.RandomWait_TK_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void URandomWait_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RandomWait_TK.RandomWait_TK_C.ReceiveExecute");

	URandomWait_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RandomWait_TK.RandomWait_TK_C.ExecuteUbergraph_RandomWait_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URandomWait_TK_C::ExecuteUbergraph_RandomWait_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RandomWait_TK.RandomWait_TK_C.ExecuteUbergraph_RandomWait_TK");

	URandomWait_TK_C_ExecuteUbergraph_RandomWait_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
