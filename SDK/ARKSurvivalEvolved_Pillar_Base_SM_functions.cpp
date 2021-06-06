// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pillar_Base_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pillar_Base_SM.Pillar_Base_SM_C.UserConstructionScript
// ()

void APillar_Base_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pillar_Base_SM.Pillar_Base_SM_C.UserConstructionScript");

	APillar_Base_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pillar_Base_SM.Pillar_Base_SM_C.ExecuteUbergraph_Pillar_Base_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APillar_Base_SM_C::ExecuteUbergraph_Pillar_Base_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pillar_Base_SM.Pillar_Base_SM_C.ExecuteUbergraph_Pillar_Base_SM");

	APillar_Base_SM_C_ExecuteUbergraph_Pillar_Base_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
