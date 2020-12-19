// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fireplace_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Fireplace.Fireplace_C.UserConstructionScript
// ()

void AFireplace_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fireplace.Fireplace_C.UserConstructionScript");

	AFireplace_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fireplace.Fireplace_C.ExecuteUbergraph_Fireplace
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFireplace_C::ExecuteUbergraph_Fireplace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fireplace.Fireplace_C.ExecuteUbergraph_Fireplace");

	AFireplace_C_ExecuteUbergraph_Fireplace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
