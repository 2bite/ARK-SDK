// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thatch_Ceiling_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Thatch_Ceiling.Thatch_Ceiling_C.UserConstructionScript
// ()

void AThatch_Ceiling_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thatch_Ceiling.Thatch_Ceiling_C.UserConstructionScript");

	AThatch_Ceiling_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thatch_Ceiling.Thatch_Ceiling_C.ExecuteUbergraph_Thatch_Ceiling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AThatch_Ceiling_C::ExecuteUbergraph_Thatch_Ceiling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thatch_Ceiling.Thatch_Ceiling_C.ExecuteUbergraph_Thatch_Ceiling");

	AThatch_Ceiling_C_ExecuteUbergraph_Thatch_Ceiling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
