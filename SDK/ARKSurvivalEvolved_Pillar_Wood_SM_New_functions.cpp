// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pillar_Wood_SM_New_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pillar_Wood_SM_New.Pillar_Wood_SM_New_C.UserConstructionScript
// ()

void APillar_Wood_SM_New_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pillar_Wood_SM_New.Pillar_Wood_SM_New_C.UserConstructionScript");

	APillar_Wood_SM_New_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pillar_Wood_SM_New.Pillar_Wood_SM_New_C.ExecuteUbergraph_Pillar_Wood_SM_New
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APillar_Wood_SM_New_C::ExecuteUbergraph_Pillar_Wood_SM_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pillar_Wood_SM_New.Pillar_Wood_SM_New_C.ExecuteUbergraph_Pillar_Wood_SM_New");

	APillar_Wood_SM_New_C_ExecuteUbergraph_Pillar_Wood_SM_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
