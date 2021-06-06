// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDefPlant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjDefPlant.ProjDefPlant_C.UserConstructionScript
// ()

void AProjDefPlant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDefPlant.ProjDefPlant_C.UserConstructionScript");

	AProjDefPlant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjDefPlant.ProjDefPlant_C.ExecuteUbergraph_ProjDefPlant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjDefPlant_C::ExecuteUbergraph_ProjDefPlant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjDefPlant.ProjDefPlant_C.ExecuteUbergraph_ProjDefPlant");

	AProjDefPlant_C_ExecuteUbergraph_ProjDefPlant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
