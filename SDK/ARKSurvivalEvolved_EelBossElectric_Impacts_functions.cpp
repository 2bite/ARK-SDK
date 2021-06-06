// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EelBossElectric_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EelBossElectric_Impacts.EelBossElectric_Impacts_C.UserConstructionScript
// ()

void AEelBossElectric_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBossElectric_Impacts.EelBossElectric_Impacts_C.UserConstructionScript");

	AEelBossElectric_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBossElectric_Impacts.EelBossElectric_Impacts_C.ExecuteUbergraph_EelBossElectric_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEelBossElectric_Impacts_C::ExecuteUbergraph_EelBossElectric_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBossElectric_Impacts.EelBossElectric_Impacts_C.ExecuteUbergraph_EelBossElectric_Impacts");

	AEelBossElectric_Impacts_C_ExecuteUbergraph_EelBossElectric_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
