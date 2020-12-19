// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SeaMine_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SeaMine.SeaMine_C.UserConstructionScript
// ()

void ASeaMine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeaMine.SeaMine_C.UserConstructionScript");

	ASeaMine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SeaMine.SeaMine_C.ExecuteUbergraph_SeaMine
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASeaMine_C::ExecuteUbergraph_SeaMine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeaMine.SeaMine_C.ExecuteUbergraph_SeaMine");

	ASeaMine_C_ExecuteUbergraph_SeaMine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
