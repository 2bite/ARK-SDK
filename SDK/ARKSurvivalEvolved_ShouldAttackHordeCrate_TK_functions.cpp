// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ShouldAttackHordeCrate_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShouldAttackHordeCrate_TK.ShouldAttackHordeCrate_TK_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UShouldAttackHordeCrate_TK_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShouldAttackHordeCrate_TK.ShouldAttackHordeCrate_TK_C.ReceiveExecute");

	UShouldAttackHordeCrate_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShouldAttackHordeCrate_TK.ShouldAttackHordeCrate_TK_C.ExecuteUbergraph_ShouldAttackHordeCrate_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UShouldAttackHordeCrate_TK_C::ExecuteUbergraph_ShouldAttackHordeCrate_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShouldAttackHordeCrate_TK.ShouldAttackHordeCrate_TK_C.ExecuteUbergraph_ShouldAttackHordeCrate_TK");

	UShouldAttackHordeCrate_TK_C_ExecuteUbergraph_ShouldAttackHordeCrate_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
