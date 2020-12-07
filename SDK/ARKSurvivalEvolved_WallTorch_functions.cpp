// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WallTorch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WallTorch.WallTorch_C.UserConstructionScript
// ()

void AWallTorch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WallTorch.WallTorch_C.UserConstructionScript");

	AWallTorch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WallTorch.WallTorch_C.ExecuteUbergraph_WallTorch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWallTorch_C::ExecuteUbergraph_WallTorch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WallTorch.WallTorch_C.ExecuteUbergraph_WallTorch");

	AWallTorch_C_ExecuteUbergraph_WallTorch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
