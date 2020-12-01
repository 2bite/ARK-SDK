// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SetShouldGlide_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SetShouldGlide.SetShouldGlide_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void USetShouldGlide_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetShouldGlide.SetShouldGlide_C.ReceiveExecute");

	USetShouldGlide_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SetShouldGlide.SetShouldGlide_C.ExecuteUbergraph_SetShouldGlide
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USetShouldGlide_C::ExecuteUbergraph_SetShouldGlide(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetShouldGlide.SetShouldGlide_C.ExecuteUbergraph_SetShouldGlide");

	USetShouldGlide_C_ExecuteUbergraph_SetShouldGlide_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
