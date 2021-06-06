// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AllowWandering_Archa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AllowWandering_Archa.AllowWandering_Archa_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAllowWandering_Archa_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllowWandering_Archa.AllowWandering_Archa_C.ReceiveExecute");

	UAllowWandering_Archa_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllowWandering_Archa.AllowWandering_Archa_C.ExecuteUbergraph_AllowWandering_Archa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAllowWandering_Archa_C::ExecuteUbergraph_AllowWandering_Archa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllowWandering_Archa.AllowWandering_Archa_C.ExecuteUbergraph_AllowWandering_Archa");

	UAllowWandering_Archa_C_ExecuteUbergraph_AllowWandering_Archa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
