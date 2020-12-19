// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pillar_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pillar_Stone.Pillar_Stone_C.UserConstructionScript
// ()

void APillar_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pillar_Stone.Pillar_Stone_C.UserConstructionScript");

	APillar_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pillar_Stone.Pillar_Stone_C.ExecuteUbergraph_Pillar_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APillar_Stone_C::ExecuteUbergraph_Pillar_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pillar_Stone.Pillar_Stone_C.ExecuteUbergraph_Pillar_Stone");

	APillar_Stone_C_ExecuteUbergraph_Pillar_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
