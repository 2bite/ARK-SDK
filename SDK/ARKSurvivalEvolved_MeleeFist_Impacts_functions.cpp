// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MeleeFist_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MeleeFist_Impacts.MeleeFist_Impacts_C.UserConstructionScript
// ()

void AMeleeFist_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeFist_Impacts.MeleeFist_Impacts_C.UserConstructionScript");

	AMeleeFist_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeFist_Impacts.MeleeFist_Impacts_C.ExecuteUbergraph_MeleeFist_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMeleeFist_Impacts_C::ExecuteUbergraph_MeleeFist_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeFist_Impacts.MeleeFist_Impacts_C.ExecuteUbergraph_MeleeFist_Impacts");

	AMeleeFist_Impacts_C_ExecuteUbergraph_MeleeFist_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
