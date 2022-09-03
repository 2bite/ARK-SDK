// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTorch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTorch.WeapTorch_C.UserConstructionScript
// ()

void AWeapTorch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTorch.WeapTorch_C.UserConstructionScript");

	AWeapTorch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTorch.WeapTorch_C.ExecuteUbergraph_WeapTorch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTorch_C::ExecuteUbergraph_WeapTorch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTorch.WeapTorch_C.ExecuteUbergraph_WeapTorch");

	AWeapTorch_C_ExecuteUbergraph_WeapTorch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
