// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pillar_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pillar_Tek.Pillar_Tek_C.UserConstructionScript
// ()

void APillar_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pillar_Tek.Pillar_Tek_C.UserConstructionScript");

	APillar_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pillar_Tek.Pillar_Tek_C.ExecuteUbergraph_Pillar_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APillar_Tek_C::ExecuteUbergraph_Pillar_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pillar_Tek.Pillar_Tek_C.ExecuteUbergraph_Pillar_Tek");

	APillar_Tek_C_ExecuteUbergraph_Pillar_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
